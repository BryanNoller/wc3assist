#include "stdafx.h"

DWORD TlsIndex;
DWORD TlsValue;
DWORD CurrentGameState = -1;
DWORD OldGameState = -1;

DWORD GetW3TlsForIndex(DWORD index)
{
	DWORD pid = GetCurrentProcessId();
	THREADENTRY32 te32;
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, pid);
	te32.dwSize = sizeof(THREADENTRY32);

	if (Thread32First(hSnap, &te32))
	{
		do
		{
			if (te32.th32OwnerProcessID == pid)
			{
				HANDLE hThread = OpenThread(THREAD_ALL_ACCESS, false, te32.th32ThreadID);
				CONTEXT ctx = { CONTEXT_SEGMENTS };
				LDT_ENTRY ldt;
				GetThreadContext(hThread, &ctx);
				GetThreadSelectorEntry(hThread, ctx.SegFs, &ldt);
				DWORD dwThreadBase = ldt.BaseLow | (ldt.HighWord.Bytes.BaseMid <<
					16) | (ldt.HighWord.Bytes.BaseHi << 24);
				CloseHandle(hThread);
				if (dwThreadBase == NULL)
					continue;
				// KERNELBASE.TlsGetValue+1B - 8B 84 81 100E0000     - mov eax,[ecx+eax*4+00000E10]
				DWORD* dwTLS = *(DWORD**)(dwThreadBase + 0xE10 + 4 * index);
				if (dwTLS == NULL)
					continue;
				Log("Found => Thread: %X , TLS for index %X : %X\n", te32.th32ThreadID, index, (DWORD)dwTLS);
				return (DWORD)dwTLS;
			}
		} while (Thread32Next(hSnap, &te32));
	}

	return NULL;
}

void GetTlsValue()
{
	TlsIndex =  *(DWORD*)(_W3XTlsIndex);
	LPVOID tls = (LPVOID)GetW3TlsForIndex(TlsIndex);
	TlsSetValue(TlsIndex, tls);
	TlsValue = (DWORD)tls;
}

DWORD GetGameStateValue()
{
	// 1.26a  0x53f090
	// 1.28.2 0x335c40
	DWORD rt;

	if (!ReadProcessMemory(GetCurrentProcess(), (LPVOID)(TlsValue + 4 * 0x0D), (LPVOID)&rt, 4, NULL))
		return -1;
	if (!ReadProcessMemory(GetCurrentProcess(), (LPVOID)(rt + 0x10), (LPVOID)&rt, 4, NULL))
		return -1;
	if (!ReadProcessMemory(GetCurrentProcess(), (LPVOID)(rt + 0x8), (LPVOID)&rt, 4, NULL))
		return -1;
	if (!ReadProcessMemory(GetCurrentProcess(), (LPVOID)(rt + 0x338), (LPVOID)&rt, 4, NULL))
		return -1;

	return rt;
}

DWORD GetUnitArray(DWORD& Sz)
{
	__asm
	{
		ADDR(_W3XGlobalClass, eax)
		mov eax, DWORD PTR DS : [eax + 0x3BC]
		push 0 // if 0 here it will just return the pointer if 1 it will update the array
		mov ecx, eax
		call _GetUnitArrayPtr
		mov ecx, DWORD PTR DS : [eax + 4]
		mov EDX, DWORD PTR DS : [Sz]
		mov DWORD PTR DS : [EDX], ecx
		mov eax, DWORD PTR DS : [eax + 8]
	}
}

VOID __stdcall SelectUnit(Unit* unit)
{
	__asm
	{
		mov eax, dword ptr ds : [_W3XGlobalClass]
		mov eax, dword ptr ds : [eax]
		mov ESI, DWORD PTR DS : [eax + 0x24C];
		push 0;
		push 0;
		push 0;
		push unit;
		mov ecx, ESI;
		call _SelectUnit;
	}
}

void SelectUnits(Unit** units, int count)
{
	SelectMultiple select;
	select.count1 = select.count2 = count;
	select.units = units;
	select.zero = 0;
	__asm
	{
		ADDR(_W3XGlobalClass, eax)
		mov ESI, DWORD PTR DS : [eax + 0x24C]
		push 0
		push 0
		push 0
		push 1
		push 0
		lea eax, select
		push eax
		mov ecx, ESI
		call _SelectUnits
	}
}

void SendMoveAttackCommand(Unit* unit, DWORD cmdId, float X, float Y, Unit* target)
{
	/*
	Unit* unt = GetSelectedUnit();
	if (unit && unit != unt)
		SelectUnit(unit);
		*/
	if (!target)
	{
		__asm
		{
			push 0
			push 6
			push 0
			ADDR(_W3XGlobalClass, ecx)
			mov ecx, DWORD PTR DS : [ecx + 0x1B4];
			push Y
            push X
            push 0
            push cmdId
            call _MoveAttackCmd
		}
	}
	else
	{
		__asm
		{
			push 0
			push 4
			push target
			push 0
			push cmdId
			ADDR(_W3XGlobalClass, ecx)
			mov ecx, DWORD PTR DS : [ecx + 0x1B4];
			call _MoveTargetCmd
		}
	}
	/*
	if (unit && unit != unt)
		SelectUnit(unt);
	*/
}

void cstr2jstr(LPCSTR szString, JassString* String)
{
	__asm
	{
		push szString;
		mov ecx, String;
		call _cstr2jstr;
	}
}

LPCSTR jstr2cstr(DWORD JSID)
{
	LPCSTR cRet = nullptr;

	__asm
	{
		push JSID;
		mov ecx, 1;
		call _GetCurrentJassEnvironment;
		mov ecx, eax;
		call _jstr2cstr;
		mov ecx, dword ptr ds : [eax + 0x08];
		mov eax, dword ptr ds : [ecx + 0x1C];
		mov cRet, eax;
	}

	if (cRet == nullptr)
		cRet = "(null)";

	return cRet;
}

bool IsValidUnitPtr(DWORD ptr)
{
	DWORD test;
	if (!ptr)
		return false;
	if (!ReadProcessMemory(GetCurrentProcess(), (LPVOID)ptr, &test, sizeof(test), NULL))
		return false;
	if (test != _UnitClass)
		return false;
	return true;
}
