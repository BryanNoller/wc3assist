#pragma once

#define ADDPTR(NAME,VALUE) static DWORD _##NAME = GetGameBase() + VALUE;

DWORD GetGameBase();
extern DWORD GameBase;

ADDPTR(W3XTlsIndex, 0x00d047a8)
ADDPTR(W3XPlayerData, 0x00d305e0)
ADDPTR(W3XGlobalClass, 0x00d326f0)
ADDPTR(UnitClass, 0x00b68914)
ADDPTR(GetCurrentJassEnvironment, 0x008bed60)
ADDPTR(GetUnitFromHandle, 0x002217a0)
ADDPTR(maphack, 0x00210341)
ADDPTR(maphack2, 0x003c2373)
ADDPTR(GetPlayerColorByNumber, 0x00377dc0)
ADDPTR(IsUnitVisible, 0x006a2f40)
ADDPTR(SelectUnit, 0x003cae00)
ADDPTR(SelectUnits, 0x003ca9c0)
ADDPTR(cstr2jstr, 0x00098130)
ADDPTR(jstr2cstr, 0x008cc410)
ADDPTR(GetHPlayerByNumber, 0x00213720)
ADDPTR(MoveAttackCmd, 0x003ffe80) // 0x003fff10
ADDPTR(MoveTargetCmd, 0x00400030) // 0x004000a0
ADDPTR(BaseGet, 0x006b2920)
ADDPTR(BaseConst, 0x0096eb10)
ADDPTR(GetHpPer, 0x003ea820)
ADDPTR(IsUnitHero, 0x00410930)
ADDPTR(GetUnitArrayPtr, 0x003b62e0)
ADDPTR(QueueUnitByClassId, 0x003c7740)
