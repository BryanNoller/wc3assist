#pragma once

#define ADDPTR(NAME,VALUE) static DWORD _##NAME = GetGameBase() + VALUE;

DWORD GetGameBase();
extern DWORD GameBase;

ADDPTR(GetPlayerColorByNumber, 0x34dd20)
ADDPTR(IsUnitVisible, 0x678ee0)
ADDPTR(SelectUnit, 0x3a0d70)
ADDPTR(SelectUnits, 0x3a0930)

ADDPTR(GetUnitFromHandle, 0x1f78e0)
ADDPTR(GetCurrentJassEnvironment, 0x914640)
ADDPTR(cstr2jstr, 0x6ef90)
ADDPTR(jstr2cstr, 0x921cf0)

ADDPTR(W3XTlsIndex, 0xd4c310)
ADDPTR(W3XGlobalClass, 0xd7a258)
ADDPTR(W3XPlayerData, 0xd78148)
ADDPTR(GetHPlayerByNumber, 0x1e9920)
ADDPTR(MoveAttackCmd, 0x3d5de0)
ADDPTR(MoveTargetCmd, 0x3d5f90)
ADDPTR(BaseGet, 0x6888c0)
ADDPTR(BaseConst, 0x9c43e0)
ADDPTR(UnitClass, 0xb845b4)
ADDPTR(GetHpPer, 0x3c0780)
ADDPTR(IsUnitHero, 0x3e6880)
ADDPTR(GetUnitArrayPtr, 0x38c250)
ADDPTR(QueueUnitByClassId, 0x39d6b0)
