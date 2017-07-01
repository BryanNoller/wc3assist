import traceback
import ctypes
import struct
import Queue
import math
import time
import jass
import wc3

VK_0 = ord('0') # 0x30
VK_9 = ord('9')
VK_A = ord('A') # 0x41
VK_Z = ord('Z')
VK_F1 = 0x70
VK_F5 = 0x74
VK_F6 = 0x75
VK_F7 = 0x76
VK_F8 = 0x77

MOVE   = 0xD0003
ATTACK = 0xD000F
PATROL = 0xD0016
HOLD   = 0xD0019
STOP   = 0xD0004

############################################################

def itoa(value):
    return struct.pack('I', value)

def atoi(value):
    return struct.unpack('I', value)[0]

def color_text(text, argb):
    return "|c%0.8x%s|r" % (argb, text)

def read_float(addr):
    dword = wc3.read_dword(addr)
    return struct.unpack('f', struct.pack('I', dword))[0]

def write_float(addr, data):
    return wc3.write_dword(addr, struct.unpack('I', struct.pack('f', data))[0])

def midpoint(p1, p2):
    if type(p1) == tuple:
        x1, y1 = p1[0], p1[1]
        x2, y2 = p2[0], p2[1]
    else:
        x1, y1 = p1.x, p1.y
        x2, y2 = p2.x, p2.y
    x, y = (x1+x2)/2, (y1+y2)/2
    return x, y

def distance(unit1, unit2):
    if type(unit1) == tuple:
        x, y = (unit1[0] - unit2[0]), (unit1[1] - unit2[1])
    else:
        x, y = (unit1.x - unit2.x), (unit1.y - unit2.y)
    return math.sqrt(x * x + y * y)

def closest_units(unit, units=[]):
    q = Queue.PriorityQueue()
    for player_unit in units:
        if player_unit.x and player_unit.y:
            q.put((distance(player_unit, unit), player_unit))
    units = []
    while not q.empty():
        dist, player_unit = q.get()
        if player_unit.addr == unit.addr:
            continue
        units.append(player_unit)
    return units

def attack_unit(units, target, **kwd):
    groups = kwd['groups'] if 'groups' in kwd else 30
    sent_units = set()
    all_units = units
    while len(all_units) and groups:
        groups -= 1
        units = all_units[:12]
        all_units = all_units[len(units):]
        select_units = [unit.addr for unit in units]
        for addr in select_units:
            sent_units.add(addr)
        wc3.select_units(select_units)
        wc3.attack_unit(target.addr)
    return sent_units

def command(units, cmd, target, **kwd):
    groups = kwd['groups'] if 'groups' in kwd else 30
    multiple = kwd['multiple'] if 'multiple' in kwd else True
    multiple = multiple if 'single' not in kwd else False
    sent_units = set()
    all_units = units
    while len(all_units) and groups:
        if multiple:
            groups -= 1
            units = all_units[:12]
            all_units = all_units[len(units):]
            select_units = [unit.addr for unit in units]
            for addr in select_units:
                sent_units.add(addr)
            wc3.select_units(select_units)
        else:
            unit = all_units[:1][0]
            all_units = all_units[1:]
            sent_units.add(unit.addr)
            wc3.select_unit(unit.addr)
        if type(target) == tuple:
            x, y = target
            wc3.send_move_attack_command(0, cmd, x, y, 0)
        else:
            wc3.send_move_attack_command(0, cmd, 0, 0, target.addr)
    return sent_units

############################################################

class Game():
    def __init__(self):
        self.last = {}
        self._units = {}

        self.players = []
        for i in range(0,jass.GetPlayers()):
            self.players.append(Player(jass.Player(i)))
        self.player = self.players[jass.GetPlayerId(jass.GetLocalPlayer())]

    def display_text(self, text, delay=15.0):
        arg_x = wc3.get_temp_dword(0)
        arg_y = wc3.get_temp_dword(1)
        arg_d = wc3.get_temp_dword(2)

        write_float(arg_x, 0.0)
        write_float(arg_y, 0.0)
        write_float(arg_d, delay)

        jass.DisplayTimedTextToPlayer(g.player.handle, arg_x, arg_y, arg_d, wc3.cs2js(text))

    @property
    def enemies(self):
        return [player for player in self.players if player.handle != self.player.handle and jass.IsPlayerEnemy(player.handle, self.player.handle)]
    @property
    def allies(self):
        return [player for player in self.players if player.handle != self.player.handle and jass.IsPlayerAlly(player.handle, self.player.handle)]

    def unit(self, addr):
        if addr not in self._units:
            unit = Unit(addr)
            if not unit.valid:
                return None
            self._units[addr] = unit
        return self._units[addr]

    def tick(self):
        tick = int(time.time()*1000)

        # assign units to players
        for player in self.players:
            player.units = []
            player.hero = None
        units = wc3.get_units()
        for addr in units:
            if not addr:
                continue
            unit = self.unit(addr)
            if unit.valid and unit.alive:
                if unit.slot < len(self.players):
                    self.players[unit.slot].units.append(unit)
                    if unit.hero:
                        self.players[unit.slot].hero = unit

        # hotkeys
        for hotkey, func in HOTKEYS:
            if ctypes.windll.user32.GetKeyState(hotkey) < 0:
                if hotkey not in self.last:
                    self.last[hotkey] = 0
                if self.last[hotkey] < tick - 400:
                    self.last[hotkey] = tick
                    func()

        # timed function calls
        for delay, func in TIMED_FUNCTIONS:
            if func not in self.last:
                self.last[func] = 0
            if self.last[func] < tick - delay:
                self.last[func] = tick
                func()

class Player():
    def __init__(self, handle):
        self.handle = handle
        self.units = []
        self.hero = None

    @property
    def color(self):
        return wc3.get_color_by_number(self.slot)
    @property
    def slot(self):
        return jass.GetPlayerId(self.handle)
    @property
    def gold(self):
        return jass.GetPlayerState(player.handle, 1)
    @property
    def mainbase(self):
        return g.unit(wc3.get_base(self.slot))
    @property
    def addr(self):
        return wc3.get_player_by_number(self.slot)
    @property
    def selected_count(self):
        a = wc3.read_dword(self.addr + 0x34)
        b = wc3.read_dword(a + 0x1d4)
        return b

    @property
    def selected(self):
        a = wc3.read_dword(self.addr + 0x34)
        b = wc3.read_dword(a + 0x1e0)
        return g.unit(b)

    @property
    def gold(self):
        return jass.GetPlayerState(self.handle, 1) # current gold

    @property
    def food(self):
        return jass.GetPlayerState(self.handle, 5) # food used

    @property
    def tgold(self):
        return jass.GetPlayerState(self.handle, 15) # total gold

class Unit():
    def __init__(self, addr):
        self.addr = addr
        self.handle = 0 # FIX: would be nice to have handles

    @property
    def valid(self):
        if self.addr:
            return wc3.is_valid_unit(self.addr)
        return False

    @property
    def classid(self):
        return itoa(wc3.read_dword(self.addr + 0x30))
    @property
    def hero(self):
        return wc3.is_hero(self.addr)
    @property
    def dead(self):
        flag = wc3.read_dword(self.addr + 0x5c)
        return bool(flag & 0x00000100)
    @property
    def alive(self):
        return not self.dead
    @property
    def invis(self):
        flag = wc3.read_dword(self.addr + 0x5c)
        return bool(flag & 0x01000000)
    @property
    def illusion(self):
        flag = wc3.read_dword(self.addr + 0x5c)
        return bool(flag & 0x40000000)
    @property
    def slot(self):
        return wc3.read_dword(self.addr + 0x58)
    @property
    def action(self):
        return wc3.read_dword(self.addr + 0x194)

    @property
    def x(self):
        return read_float(self.addr + 0x284)
    @property
    def y(self):
        return read_float(self.addr + 0x284 + 4)
    @property
    def z(self):
        return read_float(self.addr + 0x284 + 4 + 4)

    @property
    def hp(self):
        return wc3.get_hp_per(self.addr)

    @property
    def ability(self):
        rt = [
            wc3.read_dword(self.addr + 0x1e8), # Attack
            wc3.read_dword(self.addr + 0x1ec), # Move
            wc3.read_dword(self.addr + 0x1f0), # Hero
            wc3.read_dword(self.addr + 0x1f4), # Build
            wc3.read_dword(self.addr + 0x1f8), # Inventory
        ]
        return rt

class AbilityAttack():
    def __init__(self, addr):
        self.addr = addr
    @property
    def range(self):
        return [read_float(self.addr + 0x258), read_float(self.addr + 0x260)]
    @property
    def flag(self):
        return wc3.read_dword(self.addr + 0x20)

############################################################

def print_stats():
    # yes this is ugly but using MultiBoard caused desync in multiplayer
    g.display_text("[ Stats ]")
    for player in g.players:
        g.display_text("%s %8dg %6d %4dk" % (color_text(jass.GetPlayerName(player.handle), player.color), player.gold, player.food, player.tgold / 1000.0))

def move_hurt_units():
    pass

def main():
    g.tick() # assigns units to players, calls hotkeys and timed functions

HOTKEYS = [
    ( VK_F1, print_stats ),
]
TIMED_FUNCTIONS = [
    # ( milliseconds, function )
    ( 1000, move_hurt_units ),
]

g = Game()
