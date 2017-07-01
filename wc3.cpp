#include "stdafx.h"

PyObject* get_gamebase(PyObject *self, PyObject *args)
{
	return Py_BuildValue("I", GetGameBase());
}

PyObject* get_units(PyObject *self, PyObject *args)
{

	DWORD unitcount = 0;
	DWORD ptr = GetUnitArray(unitcount) - 4;
	PyObject* list = PyList_New(unitcount);
	int j = 0;
	for (DWORD i = 0; i < unitcount; i++)
	{
		ptr += 4;
		DWORD pt = *(DWORD*)(ptr);
		if (!IsValidUnitPtr(pt))
			continue;
		PyList_SetItem(list, i, Py_BuildValue("I", pt));
	}
	return list;
}

PyObject* get_unit_from_handle(PyObject *self, PyObject *args)
{
	DWORD rt = 0;
	DWORD handle;
	if (!PyArg_ParseTuple(args, "I", &handle))
		Py_RETURN_NONE;
	__asm {
		mov ecx, handle
		call _GetUnitFromHandle;
		mov rt, eax;
	}
	return Py_BuildValue("I", rt);
}

PyObject* get_player_by_number(PyObject *self, PyObject *args)
{
	DWORD rt = 0;
	DWORD slot = 0;
	if (!PyArg_ParseTuple(args, "I", &slot))
		Py_RETURN_NONE;
	__asm
	{
		ADDR(_W3XPlayerData, ecx)
		push slot;
		call _GetHPlayerByNumber;
		mov rt, eax;
	}
	if (rt)
		return Py_BuildValue("I", rt);
	else
		Py_RETURN_NONE;
}

PyObject* get_color_by_number(PyObject *self, PyObject *args)
{
	DWORD rt = 0;
	DWORD slot = 0;
	if (!PyArg_ParseTuple(args, "I", &slot))
		Py_RETURN_NONE;
	__asm {
		mov ecx, slot
		call [_GetPlayerColorByNumber]
		mov eax, [eax]
		mov rt, eax
	}
	return Py_BuildValue("I", rt);
}

PyObject* get_base(PyObject *self, PyObject *args)
{
	DWORD rt = 0;
	DWORD slot = 0;
	if (!PyArg_ParseTuple(args, "I", &slot))
		Py_RETURN_NONE;
	__asm SUB ESP, 0x30;
	__asm
	{
		push 0x1F;
		push 3;
		push slot;
		push 0x18;
		lea eax, DWORD PTR SS : [ESP + 0x18];
		push eax;
		push _BaseConst;
		call _BaseGet;
		mov eax, DWORD PTR DS : [ESP + 0x20];
		mov rt, eax;
		add ESP, 0x18;
	}
	if (IsValidUnitPtr(rt))
		return Py_BuildValue("I", rt);
	else
		Py_RETURN_NONE;
}

PyObject* get_hp_per(PyObject *self, PyObject *args)
{
	float rt;
	DWORD unit_addr;
	if (!PyArg_ParseTuple(args, "I", &unit_addr))
		Py_RETURN_NONE;
	__asm
	{
		lea eax, rt;
		push eax;
		mov ecx, unit_addr;
		call _GetHpPer;
	}
	if (rt)
		return Py_BuildValue("f", rt);
	else
		Py_RETURN_NONE;
}

DWORD TempDword[20];
PyObject* get_temp_dword(PyObject *self, PyObject *args)
{
	DWORD index = 0;
	if (!PyArg_ParseTuple(args, "I", &index))
		Py_RETURN_NONE;
	return Py_BuildValue("I", &TempDword[index]);
}

PyObject* is_valid_unit(PyObject *self, PyObject *args)
{
	DWORD unit_addr;
	if (!PyArg_ParseTuple(args, "I", &unit_addr))
		Py_RETURN_NONE;
	return Py_BuildValue("b", IsValidUnitPtr(unit_addr));
}

PyObject* is_unit_visible(PyObject *self, PyObject *args)
{
	bool vis = FALSE;
	DWORD unit;
	if (!PyArg_ParseTuple(args, "I", &unit))
		Py_RETURN_NONE;
	DWORD me = Jass_GetPlayerId(Jass_GetLocalPlayer());
	__asm {
		push 0x4
		push 0x0
		push me
		mov ecx, unit
		call [_IsUnitVisible]
		mov vis, al
	}
	return Py_BuildValue("b", vis);
}

PyObject* is_hero(PyObject *self, PyObject *args)
{
    bool hero;
	DWORD unit_addr;
	if (!PyArg_ParseTuple(args, "I", &unit_addr))
		Py_RETURN_NONE;
	__asm
	{
		mov ecx, unit_addr
		call [_IsUnitHero]
        mov hero, al
	}
	return Py_BuildValue("b", hero);
}

PyObject* use_ability(PyObject *self, PyObject *args)
{
	DWORD rt = 0;
	DWORD arg1 = 0;
	DWORD arg2 = 0;
	DWORD arg3 = 0;
	DWORD arg4 = 0;
	DWORD arg5 = 0;
	if (!PyArg_ParseTuple(args, "IIIII", &arg1, &arg2, &arg3, &arg4, &arg5))
	{
		Py_RETURN_NONE;
	}
	__asm
	{
		ADDR(_W3XGlobalClass, eax)
		mov ecx, DWORD PTR DS : [eax + 0x1B4];
		mov eax, arg5
		push eax
		mov eax, arg4
		push eax
		mov eax, arg3
		push eax
		mov eax, arg2
		push eax
		mov eax, arg1
		push eax
		call _QueueUnitByClassId;
		mov rt, eax;
	}
	return Py_BuildValue("I", rt);
}

PyObject* select_unit(PyObject *self, PyObject *args)
{
	DWORD unit_addr;

	if (!PyArg_ParseTuple(args, "I", &unit_addr))
		Py_RETURN_NONE;

	SelectUnit((Unit*)unit_addr);

	Py_RETURN_NONE;
}

Unit** SelectedUnits = new Unit*[12];
PyObject* select_units(PyObject *self, PyObject *args)
{
	PyObject *pList;
	PyObject *pItem;
	DWORD unit_addr;
	Py_ssize_t n;
	int i;

	if (!PyArg_ParseTuple(args, "O!", &PyList_Type, &pList))
		Py_RETURN_NONE;

	n = PyList_Size(pList);
	for (i = 0; i<n && i<12; i++) {
		pItem = PyList_GetItem(pList, i);
		if (!PyArg_Parse(pItem, "I", &unit_addr))
			Py_RETURN_NONE;
		SelectedUnits[i] = (Unit*)unit_addr;
	}
	SelectUnits(SelectedUnits, i);
	Py_RETURN_NONE;
}

PyObject* attack_unit(PyObject *self, PyObject *args)
{
	DWORD unit;
	if (!PyArg_ParseTuple(args, "I", &unit))
		Py_RETURN_NONE;
	DWORD Y = (DWORD)((Unit*)unit)->Y;
	DWORD X = (DWORD)((Unit*)unit)->X;
	__asm
	{
		push 0 // push 0x18 // 0x18 when multiple units selected
		push 6 // push 0x00028006
		push unit
		ADDR(_W3XGlobalClass, ecx)
		mov ecx, DWORD PTR DS : [ecx + 0x1B4]
		push Y
		push X
		push 0
		push 0x000D000F
		call _MoveAttackCmd
	}
	Py_RETURN_NONE;
}

PyObject* send_move_attack_command(PyObject *self, PyObject *args)
{
	DWORD unit = 0;
	DWORD cmdId = 0;
	float X = 0;
	float Y = 0;
	DWORD target = 0;
	if (!PyArg_ParseTuple(args, "IIffI", &unit, &cmdId, &X, &Y, &target))
	{
		Py_RETURN_NONE;
	}
    SendMoveAttackCommand((Unit*)unit, cmdId, (float)X, (float)Y, (Unit*)target);
	Py_RETURN_NONE;
}

PyObject* cs2js(PyObject *self, PyObject *args)
{
	const char *str;
	if (!PyArg_ParseTuple(args, "s", &str))
		Py_RETURN_NONE;
	JassString *tempstring = new JassString();
	cstr2jstr(str, tempstring);
	return Py_BuildValue("I", tempstring);
}

PyObject* js2cs(PyObject *self, PyObject *args)
{
	DWORD addr;
	if (!PyArg_ParseTuple(args, "I", &addr))
		Py_RETURN_NONE;
	return Py_BuildValue("s", jstr2cstr(addr));
}

PyObject* read_dword(PyObject *self, PyObject *args)
{
	DWORD rt = 0;
	DWORD addr = 0;
	if (!PyArg_ParseTuple(args, "I", &addr))
		Py_RETURN_NONE;
	if (!ReadProcessMemory(GetCurrentProcess(), (LPVOID)(addr), (LPVOID)&rt, 4, NULL))
		Py_RETURN_NONE;
	return Py_BuildValue("I", rt);
}

PyObject* write_dword(PyObject *self, PyObject *args)
{
	DWORD addr = 0;
	DWORD data = 0;
	if (!PyArg_ParseTuple(args, "II", &addr, &data))
		Py_RETURN_NONE;
    write_mem(addr, &data, 4);
    Py_RETURN_NONE;
}

PyMethodDef wc3Methods[] = {
	{ "get_gamebase", get_gamebase, METH_NOARGS, "get base address of Game.dll"},
	{ "get_units", get_units, METH_NOARGS, "get list of all unit addresses"},
	{ "get_unit_from_handle", get_unit_from_handle, METH_VARARGS, NULL},
	{ "get_player_by_number", get_player_by_number, METH_VARARGS, NULL},
	{ "get_color_by_number", get_color_by_number, METH_VARARGS, NULL},
	{ "get_base", get_base, METH_VARARGS, "get main base building of player"},
	{ "get_hp_per", get_hp_per, METH_VARARGS, NULL},
	{ "get_temp_dword", get_temp_dword, METH_VARARGS, "20 addresses of dwords available"},
	{ "is_valid_unit", is_valid_unit, METH_VARARGS, "is address a unit struct"},
	{ "is_unit_visible", is_unit_visible, METH_VARARGS, "is unit visible to our player"},
	{ "is_hero", is_hero, METH_VARARGS, "is unit a hero"},
	{ "use_ability", use_ability, METH_VARARGS, NULL},
	{ "select_unit", select_unit, METH_VARARGS, NULL},
	{ "select_units", select_units, METH_VARARGS, NULL},
	{ "attack_unit", attack_unit, METH_VARARGS, NULL},
	{ "send_move_attack_command", send_move_attack_command, METH_VARARGS, NULL},
	{ "cs2js", cs2js, METH_VARARGS, "\"C string\" to \"Jass string\""},
	{ "js2cs", js2cs, METH_VARARGS, "\"Jass string\" to \"C string\""},
	{ "read_dword", read_dword, METH_VARARGS, NULL},
	{ "write_dword", write_dword, METH_VARARGS, NULL},
	{ NULL, NULL, 0, NULL }
};
