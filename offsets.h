#pragma once

#define ADDPTR(NAME,VALUE) static DWORD _##NAME = GetGameBase() + VALUE;

DWORD GetGameBase();
extern DWORD GameBase;

ADDPTR(maphack, 0x2101b1)
ADDPTR(maphack2, 0x3c21d3)

ADDPTR(GetPlayerColorByNumber, 0x377c10)
ADDPTR(IsUnitVisible, 0x6a2de0)
ADDPTR(SelectUnit, 0x3cac60)
ADDPTR(SelectUnits, 0x3ca820)

ADDPTR(GetUnitFromHandle, 0x221610)
ADDPTR(GetCurrentJassEnvironment, 0x8bea30)
ADDPTR(cstr2jstr, 0x980f0)
ADDPTR(jstr2cstr, 0x8cc0e0)

ADDPTR(W3XTlsIndex, 0xd033a8)
ADDPTR(W3XGlobalClass, 0xd312f0)
ADDPTR(W3XPlayerData, 0xd2f1e0)
ADDPTR(GetHPlayerByNumber, 0x213590)
ADDPTR(MoveAttackCmd, 0x3ffce0) // or 0x3ffd70 ?
ADDPTR(MoveTargetCmd, 0x3ffe90) // or 0x3fff00 ?
ADDPTR(BaseGet, 0x6b27c0)
ADDPTR(BaseConst, 0x96e7f0)
ADDPTR(UnitClass, 0xb678e4)
ADDPTR(GetHpPer, 0x3ea670)
ADDPTR(IsUnitHero, 0x410780)
ADDPTR(GetUnitArrayPtr, 0x3b6140)
ADDPTR(QueueUnitByClassId, 0x3c75a0)
