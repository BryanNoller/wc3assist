#pragma once

extern DWORD TlsIndex;
extern DWORD TlsValue;
extern DWORD CurrentGameState;
extern DWORD OldGameState;

struct Unit
{
	DWORD dwDummy[3];
	DWORD dwID1;
	DWORD dwID2;
	BYTE _1[0x1C];
	DWORD dwClassId; // 30
	BYTE _2[0x1C];
	DWORD HealthBar; // 50
	DWORD UNK;
	DWORD dwOwnerSlot; // 58
	BYTE _3[0x138];
	DWORD Action; // 194
	BYTE _4[0x1c];
	DWORD Action2; // 1b4
	BYTE _5[0x30];
	DWORD AbilityAttack; // 1e8
	DWORD AbilityMove; // 1ec
	DWORD AbilityHero; // 1f0
	DWORD AbilityBuild; // 1f4
	DWORD AbilityInventory; // 1f8
	BYTE _6[0x88];
    float X; // 284
    float Y;
    float Z;
};

struct SelectMultiple
{
	int count1;
	int count2;
	Unit** units;
	int zero;
};

struct UnitListNode
{
	UnitListNode* nPrev;
	UnitListNode* nNext;
	Unit* unit;
};

struct RCString
{
	DWORD	VTable;
	DWORD	refCount;
	DWORD	Field_0008;
	DWORD	Field_000C;
	DWORD	Field_0010;
	DWORD	Field_0014;
	DWORD	Field_0018;
	LPSTR	String;
};

struct JassString
{
	DWORD		VTable;
	DWORD		Field_0004;
	RCString*	Value;
	DWORD		Field_000C;
};

DWORD GetW3TlsForIndex(DWORD index);
void GetTlsValue();
DWORD GetGameStateValue();
DWORD GetUnitArray(DWORD& Sz);
VOID __stdcall SelectUnit(Unit* unit);
void SelectUnits(Unit** units, int count);
void SendMoveAttackCommand(Unit* unit, DWORD cmdId, float X, float Y, Unit* target);
void cstr2jstr(LPCSTR szString, JassString* String);
LPCSTR jstr2cstr(DWORD JSID);
bool IsValidUnitPtr(DWORD ptr);
