#include "stdafx.h"

DWORD GameBase = 0;

DWORD GetGameBase()
{
	if (!GameBase)
		return (GameBase = (DWORD)GetModuleHandleA("Game.dll"));
	return GameBase;
}
