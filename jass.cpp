#include "stdafx.h"

// Deg2Rad 0022f5b0 (R)R
DWORD Jass_Deg2Rad(DWORD arg_0_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_R
       push eax
       call [_Jass_Deg2Rad]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* Deg2Rad(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_R))
       Py_RETURN_NONE;
   rt = Jass_Deg2Rad(arg_0_R);
   return Py_BuildValue("I", rt);
}

// Rad2Deg 00242b00 (R)R
DWORD Jass_Rad2Deg(DWORD arg_0_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_R
       push eax
       call [_Jass_Rad2Deg]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* Rad2Deg(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_R))
       Py_RETURN_NONE;
   rt = Jass_Rad2Deg(arg_0_R);
   return Py_BuildValue("I", rt);
}

// Sin 00248380 (R)R
DWORD Jass_Sin(DWORD arg_0_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_R
       push eax
       call [_Jass_Sin]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* Sin(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_R))
       Py_RETURN_NONE;
   rt = Jass_Sin(arg_0_R);
   return Py_BuildValue("I", rt);
}

// Cos 0022bd90 (R)R
DWORD Jass_Cos(DWORD arg_0_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_R
       push eax
       call [_Jass_Cos]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* Cos(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_R))
       Py_RETURN_NONE;
   rt = Jass_Cos(arg_0_R);
   return Py_BuildValue("I", rt);
}

// Tan 00248dd0 (R)R
DWORD Jass_Tan(DWORD arg_0_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_R
       push eax
       call [_Jass_Tan]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* Tan(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_R))
       Py_RETURN_NONE;
   rt = Jass_Tan(arg_0_R);
   return Py_BuildValue("I", rt);
}

// Asin 0022aa60 (R)R
DWORD Jass_Asin(DWORD arg_0_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_R
       push eax
       call [_Jass_Asin]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* Asin(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_R))
       Py_RETURN_NONE;
   rt = Jass_Asin(arg_0_R);
   return Py_BuildValue("I", rt);
}

// Acos 00229de0 (R)R
DWORD Jass_Acos(DWORD arg_0_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_R
       push eax
       call [_Jass_Acos]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* Acos(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_R))
       Py_RETURN_NONE;
   rt = Jass_Acos(arg_0_R);
   return Py_BuildValue("I", rt);
}

// Atan 0022ab20 (R)R
DWORD Jass_Atan(DWORD arg_0_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_R
       push eax
       call [_Jass_Atan]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* Atan(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_R))
       Py_RETURN_NONE;
   rt = Jass_Atan(arg_0_R);
   return Py_BuildValue("I", rt);
}

// Atan2 0022aaa0 (RR)R
DWORD Jass_Atan2(DWORD arg_0_R, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_Atan2]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* Atan2(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_R, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_Atan2(arg_0_R, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SquareRoot 002483b0 (R)R
DWORD Jass_SquareRoot(DWORD arg_0_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_R
       push eax
       call [_Jass_SquareRoot]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SquareRoot(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_R))
       Py_RETURN_NONE;
   rt = Jass_SquareRoot(arg_0_R);
   return Py_BuildValue("I", rt);
}

// Pow 00242180 (RR)R
DWORD Jass_Pow(DWORD arg_0_R, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_Pow]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* Pow(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_R, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_Pow(arg_0_R, arg_4_R);
   return Py_BuildValue("I", rt);
}

// I2R 00237460 (I)R
DWORD Jass_I2R(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_I2R]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* I2R(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_I2R(arg_0_I);
   return Py_BuildValue("I", rt);
}

// R2I 00242a20 (R)I
DWORD Jass_R2I(DWORD arg_0_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_R
       push eax
       call [_Jass_R2I]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* R2I(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_R))
       Py_RETURN_NONE;
   rt = Jass_R2I(arg_0_R);
   return Py_BuildValue("I", rt);
}

// I2S 00237480 (I)S
DWORD Jass_I2S(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_I2S]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* I2S(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_I2S(arg_0_I);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// R2S 00242a30 (R)S
DWORD Jass_R2S(DWORD arg_0_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_R
       push eax
       call [_Jass_R2S]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* R2S(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_R))
       Py_RETURN_NONE;
   rt = Jass_R2S(arg_0_R);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// R2SW 00242a70 (RII)S
DWORD Jass_R2SW(DWORD arg_0_R, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_R2SW]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* R2SW(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_R, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_R2SW(arg_0_R, arg_4_I, arg_8_I);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// S2I 002436d0 (S)I
DWORD Jass_S2I(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_S2I]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* S2I(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_S2I(arg_0_S);
   return Py_BuildValue("I", rt);
}

// S2R 00243700 (S)R
DWORD Jass_S2R(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_S2R]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* S2R(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_S2R(arg_0_S);
   return Py_BuildValue("I", rt);
}

// GetHandleId 002329d0 (Hhandle;)I
DWORD Jass_GetHandleId(DWORD arg_0_Hhandle)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hhandle
       push eax
       call [_Jass_GetHandleId]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetHandleId(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhandle = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hhandle))
       Py_RETURN_NONE;
   rt = Jass_GetHandleId(arg_0_Hhandle);
   return Py_BuildValue("I", rt);
}

// SubString 00248a80 (SII)S
DWORD Jass_SubString(DWORD arg_0_S, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_SubString]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SubString(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_S, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_SubString(arg_0_S, arg_4_I, arg_8_I);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// StringLength 002487a0 (S)I
DWORD Jass_StringLength(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_StringLength]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* StringLength(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_StringLength(arg_0_S);
   return Py_BuildValue("I", rt);
}

// StringCase 002486f0 (SB)S
DWORD Jass_StringCase(DWORD arg_0_S, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_StringCase]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* StringCase(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_S, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_StringCase(arg_0_S, arg_4_B);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// StringHash 00248780 (S)I
DWORD Jass_StringHash(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_StringHash]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* StringHash(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_StringHash(arg_0_S);
   return Py_BuildValue("I", rt);
}

// GetLocalizedString 00233400 (S)S
DWORD Jass_GetLocalizedString(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_GetLocalizedString]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetLocalizedString(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_GetLocalizedString(arg_0_S);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// GetLocalizedHotkey 002333d0 (S)I
DWORD Jass_GetLocalizedHotkey(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_GetLocalizedHotkey]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetLocalizedHotkey(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_GetLocalizedHotkey(arg_0_S);
   return Py_BuildValue("I", rt);
}

// ConvertRace 0022bb10 (I)Hrace;
DWORD Jass_ConvertRace(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertRace]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertRace(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertRace(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertAllianceType 0022b930 (I)Halliancetype;
DWORD Jass_ConvertAllianceType(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertAllianceType]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertAllianceType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertAllianceType(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertRacePref 0022bb20 (I)Hracepreference;
DWORD Jass_ConvertRacePref(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertRacePref]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertRacePref(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertRacePref(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertIGameState 0022ba00 (I)Higamestate;
DWORD Jass_ConvertIGameState(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertIGameState]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertIGameState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertIGameState(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertFGameState 0022b9a0 (I)Hfgamestate;
DWORD Jass_ConvertFGameState(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertFGameState]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertFGameState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertFGameState(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertPlayerState 0022baf0 (I)Hplayerstate;
DWORD Jass_ConvertPlayerState(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertPlayerState]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertPlayerState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertPlayerState(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertPlayerScore 0022bad0 (I)Hplayerscore;
DWORD Jass_ConvertPlayerScore(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertPlayerScore]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertPlayerScore(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertPlayerScore(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertStartLocPrio 0022bb60 (I)Hstartlocprio;
DWORD Jass_ConvertStartLocPrio(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertStartLocPrio]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertStartLocPrio(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertStartLocPrio(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertPlayerGameResult 0022bac0 (I)Hplayergameresult;
DWORD Jass_ConvertPlayerGameResult(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertPlayerGameResult]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertPlayerGameResult(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertPlayerGameResult(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertUnitState 0022bbe0 (I)Hunitstate;
DWORD Jass_ConvertUnitState(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertUnitState]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertUnitState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertUnitState(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertAIDifficulty 0022b920 (I)Haidifficulty;
DWORD Jass_ConvertAIDifficulty(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertAIDifficulty]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertAIDifficulty(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertAIDifficulty(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertGameEvent 0022b9d0 (I)Hgameevent;
DWORD Jass_ConvertGameEvent(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertGameEvent]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertGameEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertGameEvent(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertPlayerEvent 0022bab0 (I)Hplayerevent;
DWORD Jass_ConvertPlayerEvent(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertPlayerEvent]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertPlayerEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertPlayerEvent(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertPlayerUnitEvent 0022bb00 (I)Hplayerunitevent;
DWORD Jass_ConvertPlayerUnitEvent(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertPlayerUnitEvent]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertPlayerUnitEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertPlayerUnitEvent(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertUnitEvent 0022bbd0 (I)Hunitevent;
DWORD Jass_ConvertUnitEvent(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertUnitEvent]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertUnitEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertUnitEvent(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertWidgetEvent 0022bc30 (I)Hwidgetevent;
DWORD Jass_ConvertWidgetEvent(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertWidgetEvent]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertWidgetEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertWidgetEvent(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertDialogEvent 0022b980 (I)Hdialogevent;
DWORD Jass_ConvertDialogEvent(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertDialogEvent]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertDialogEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertDialogEvent(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertLimitOp 0022ba20 (I)Hlimitop;
DWORD Jass_ConvertLimitOp(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertLimitOp]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertLimitOp(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertLimitOp(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertUnitType 0022bbf0 (I)Hunittype;
DWORD Jass_ConvertUnitType(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertUnitType]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertUnitType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertUnitType(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertGameSpeed 0022b9e0 (I)Hgamespeed;
DWORD Jass_ConvertGameSpeed(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertGameSpeed]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertGameSpeed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertGameSpeed(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertPlacement 0022ba90 (I)Hplacement;
DWORD Jass_ConvertPlacement(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertPlacement]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertPlacement(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertPlacement(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertGameDifficulty 0022b9c0 (I)Hgamedifficulty;
DWORD Jass_ConvertGameDifficulty(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertGameDifficulty]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertGameDifficulty(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertGameDifficulty(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertGameType 0022b9f0 (I)Hgametype;
DWORD Jass_ConvertGameType(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertGameType]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertGameType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertGameType(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertMapFlag 0022ba50 (I)Hmapflag;
DWORD Jass_ConvertMapFlag(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertMapFlag]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertMapFlag(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertMapFlag(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertMapVisibility 0022ba70 (I)Hmapvisibility;
DWORD Jass_ConvertMapVisibility(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertMapVisibility]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertMapVisibility(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertMapVisibility(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertMapSetting 0022ba60 (I)Hmapsetting;
DWORD Jass_ConvertMapSetting(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertMapSetting]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertMapSetting(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertMapSetting(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertMapDensity 0022ba40 (I)Hmapdensity;
DWORD Jass_ConvertMapDensity(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertMapDensity]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertMapDensity(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertMapDensity(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertMapControl 0022ba30 (I)Hmapcontrol;
DWORD Jass_ConvertMapControl(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertMapControl]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertMapControl(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertMapControl(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertPlayerColor 0022baa0 (I)Hplayercolor;
DWORD Jass_ConvertPlayerColor(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertPlayerColor]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertPlayerColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertPlayerColor(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertPlayerSlotState 0022bae0 (I)Hplayerslotstate;
DWORD Jass_ConvertPlayerSlotState(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertPlayerSlotState]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertPlayerSlotState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertPlayerSlotState(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertVolumeGroup 0022bc10 (I)Hvolumegroup;
DWORD Jass_ConvertVolumeGroup(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertVolumeGroup]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertVolumeGroup(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertVolumeGroup(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertCameraField 0022b960 (I)Hcamerafield;
DWORD Jass_ConvertCameraField(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertCameraField]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertCameraField(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertCameraField(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertBlendMode 0022b950 (I)Hblendmode;
DWORD Jass_ConvertBlendMode(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertBlendMode]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertBlendMode(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertBlendMode(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertRarityControl 0022bb40 (I)Hraritycontrol;
DWORD Jass_ConvertRarityControl(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertRarityControl]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertRarityControl(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertRarityControl(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertTexMapFlags 0022bb70 (I)Htexmapflags;
DWORD Jass_ConvertTexMapFlags(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertTexMapFlags]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertTexMapFlags(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertTexMapFlags(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertFogState 0022b9b0 (I)Hfogstate;
DWORD Jass_ConvertFogState(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertFogState]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertFogState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertFogState(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertEffectType 0022b990 (I)Heffecttype;
DWORD Jass_ConvertEffectType(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertEffectType]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertEffectType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertEffectType(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertVersion 0022bc00 (I)Hversion;
DWORD Jass_ConvertVersion(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertVersion]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertVersion(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertVersion(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertItemType 0022ba10 (I)Hitemtype;
DWORD Jass_ConvertItemType(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertItemType]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertItemType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertItemType(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertAttackType 0022b940 (I)Hattacktype;
DWORD Jass_ConvertAttackType(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertAttackType]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertAttackType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertAttackType(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertDamageType 0022b970 (I)Hdamagetype;
DWORD Jass_ConvertDamageType(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertDamageType]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertDamageType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertDamageType(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertWeaponType 0022bc20 (I)Hweapontype;
DWORD Jass_ConvertWeaponType(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertWeaponType]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertWeaponType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertWeaponType(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertSoundType 0022bb50 (I)Hsoundtype;
DWORD Jass_ConvertSoundType(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertSoundType]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertSoundType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertSoundType(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ConvertPathingType 0022ba80 (I)Hpathingtype;
DWORD Jass_ConvertPathingType(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertPathingType]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertPathingType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertPathingType(arg_0_I);
   return Py_BuildValue("I", rt);
}

// SetMapName 00246230 (S)V
DWORD Jass_SetMapName(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_SetMapName]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetMapName(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_SetMapName(arg_0_S);
   return Py_BuildValue("I", rt);
}

// SetMapDescription 002461a0 (S)V
DWORD Jass_SetMapDescription(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_SetMapDescription]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetMapDescription(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_SetMapDescription(arg_0_S);
   return Py_BuildValue("I", rt);
}

// SetTeams 00246e80 (I)V
DWORD Jass_SetTeams(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_SetTeams]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTeams(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_SetTeams(arg_0_I);
   return Py_BuildValue("I", rt);
}

// SetPlayers 002467b0 (I)V
DWORD Jass_SetPlayers(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_SetPlayers]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPlayers(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_SetPlayers(arg_0_I);
   return Py_BuildValue("I", rt);
}

// SetGameTypeSupported 002459f0 (Hgametype;B)V
DWORD Jass_SetGameTypeSupported(DWORD arg_0_Hgametype, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hgametype
       push eax
       call [_Jass_SetGameTypeSupported]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetGameTypeSupported(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgametype = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hgametype, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetGameTypeSupported(arg_0_Hgametype, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetMapFlag 002461d0 (Hmapflag;B)V
DWORD Jass_SetMapFlag(DWORD arg_0_Hmapflag, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hmapflag
       push eax
       call [_Jass_SetMapFlag]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetMapFlag(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmapflag = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hmapflag, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetMapFlag(arg_0_Hmapflag, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetGameSpeed 002459d0 (Hgamespeed;)V
DWORD Jass_SetGameSpeed(DWORD arg_0_Hgamespeed)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hgamespeed
       push eax
       call [_Jass_SetGameSpeed]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetGameSpeed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamespeed = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hgamespeed))
       Py_RETURN_NONE;
   rt = Jass_SetGameSpeed(arg_0_Hgamespeed);
   return Py_BuildValue("I", rt);
}

// SetGamePlacement 002459b0 (Hplacement;)V
DWORD Jass_SetGamePlacement(DWORD arg_0_Hplacement)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplacement
       push eax
       call [_Jass_SetGamePlacement]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetGamePlacement(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplacement = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplacement))
       Py_RETURN_NONE;
   rt = Jass_SetGamePlacement(arg_0_Hplacement);
   return Py_BuildValue("I", rt);
}

// SetGameDifficulty 00245990 (Hgamedifficulty;)V
DWORD Jass_SetGameDifficulty(DWORD arg_0_Hgamedifficulty)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hgamedifficulty
       push eax
       call [_Jass_SetGameDifficulty]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetGameDifficulty(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamedifficulty = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hgamedifficulty))
       Py_RETURN_NONE;
   rt = Jass_SetGameDifficulty(arg_0_Hgamedifficulty);
   return Py_BuildValue("I", rt);
}

// SetResourceDensity 00246940 (Hmapdensity;)V
DWORD Jass_SetResourceDensity(DWORD arg_0_Hmapdensity)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hmapdensity
       push eax
       call [_Jass_SetResourceDensity]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetResourceDensity(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmapdensity = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hmapdensity))
       Py_RETURN_NONE;
   rt = Jass_SetResourceDensity(arg_0_Hmapdensity);
   return Py_BuildValue("I", rt);
}

// SetCreatureDensity 00244bd0 (Hmapdensity;)V
DWORD Jass_SetCreatureDensity(DWORD arg_0_Hmapdensity)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hmapdensity
       push eax
       call [_Jass_SetCreatureDensity]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCreatureDensity(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmapdensity = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hmapdensity))
       Py_RETURN_NONE;
   rt = Jass_SetCreatureDensity(arg_0_Hmapdensity);
   return Py_BuildValue("I", rt);
}

// DefineStartLocation 0022f550 (IRR)V
DWORD Jass_DefineStartLocation(DWORD arg_0_I, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_DefineStartLocation]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* DefineStartLocation(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_I, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_DefineStartLocation(arg_0_I, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// DefineStartLocationLoc 0022f570 (IHlocation;)V
DWORD Jass_DefineStartLocationLoc(DWORD arg_0_I, DWORD arg_4_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hlocation
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_DefineStartLocationLoc]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* DefineStartLocationLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_DefineStartLocationLoc(arg_0_I, arg_4_Hlocation);
   return Py_BuildValue("I", rt);
}

// SetStartLocPrioCount 00246e50 (II)V
DWORD Jass_SetStartLocPrioCount(DWORD arg_0_I, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_SetStartLocPrioCount]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetStartLocPrioCount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetStartLocPrioCount(arg_0_I, arg_4_I);
   return Py_BuildValue("I", rt);
}

// SetStartLocPrio 00246e10 (IIIHstartlocprio;)V
DWORD Jass_SetStartLocPrio(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hstartlocprio)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hstartlocprio
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_SetStartLocPrio]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetStartLocPrio(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hstartlocprio = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_I, &arg_4_I, &arg_8_I, &arg_C_Hstartlocprio))
       Py_RETURN_NONE;
   rt = Jass_SetStartLocPrio(arg_0_I, arg_4_I, arg_8_I, arg_C_Hstartlocprio);
   return Py_BuildValue("I", rt);
}

// GetStartLocPrioSlot 00235800 (II)I
DWORD Jass_GetStartLocPrioSlot(DWORD arg_0_I, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_GetStartLocPrioSlot]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetStartLocPrioSlot(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_GetStartLocPrioSlot(arg_0_I, arg_4_I);
   return Py_BuildValue("I", rt);
}

// GetStartLocPrio 002357d0 (II)Hstartlocprio;
DWORD Jass_GetStartLocPrio(DWORD arg_0_I, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_GetStartLocPrio]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetStartLocPrio(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_GetStartLocPrio(arg_0_I, arg_4_I);
   return Py_BuildValue("I", rt);
}

// GetTeams 00235b40 ()I
DWORD Jass_GetTeams()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetTeams]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTeams(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetTeams();
   return Py_BuildValue("I", rt);
}

// GetPlayers 00234580 ()I
DWORD Jass_GetPlayers()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetPlayers]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayers(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetPlayers();
   return Py_BuildValue("I", rt);
}

// IsGameTypeSupported 00237cc0 (Hgametype;)B
DWORD Jass_IsGameTypeSupported(DWORD arg_0_Hgametype)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hgametype
       push eax
       call [_Jass_IsGameTypeSupported]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsGameTypeSupported(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgametype = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hgametype))
       Py_RETURN_NONE;
   rt = Jass_IsGameTypeSupported(arg_0_Hgametype);
   return Py_BuildValue("I", rt);
}

// IsMapFlagSet 00238070 (Hmapflag;)B
DWORD Jass_IsMapFlagSet(DWORD arg_0_Hmapflag)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hmapflag
       push eax
       call [_Jass_IsMapFlagSet]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsMapFlagSet(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmapflag = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hmapflag))
       Py_RETURN_NONE;
   rt = Jass_IsMapFlagSet(arg_0_Hmapflag);
   return Py_BuildValue("I", rt);
}

// GetGameTypeSelected 002329c0 ()Hgametype;
DWORD Jass_GetGameTypeSelected()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetGameTypeSelected]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetGameTypeSelected(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetGameTypeSelected();
   return Py_BuildValue("I", rt);
}

// GetGamePlacement 002329a0 ()Hplacement;
DWORD Jass_GetGamePlacement()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetGamePlacement]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetGamePlacement(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetGamePlacement();
   return Py_BuildValue("I", rt);
}

// GetGameSpeed 002329b0 ()Hgamespeed;
DWORD Jass_GetGameSpeed()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetGameSpeed]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetGameSpeed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetGameSpeed();
   return Py_BuildValue("I", rt);
}

// GetGameDifficulty 00232990 ()Hgamedifficulty;
DWORD Jass_GetGameDifficulty()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetGameDifficulty]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetGameDifficulty(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetGameDifficulty();
   return Py_BuildValue("I", rt);
}

// GetResourceDensity 00234a30 ()Hmapdensity;
DWORD Jass_GetResourceDensity()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetResourceDensity]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetResourceDensity(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetResourceDensity();
   return Py_BuildValue("I", rt);
}

// GetCreatureDensity 002320b0 ()Hmapdensity;
DWORD Jass_GetCreatureDensity()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetCreatureDensity]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCreatureDensity(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetCreatureDensity();
   return Py_BuildValue("I", rt);
}

// GetStartLocationX 00235880 (I)R
DWORD Jass_GetStartLocationX(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_GetStartLocationX]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetStartLocationX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_GetStartLocationX(arg_0_I);
   return Py_BuildValue("I", rt);
}

// GetStartLocationY 002358a0 (I)R
DWORD Jass_GetStartLocationY(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_GetStartLocationY]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetStartLocationY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_GetStartLocationY(arg_0_I);
   return Py_BuildValue("I", rt);
}

// GetStartLocationLoc 00235830 (I)Hlocation;
DWORD Jass_GetStartLocationLoc(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_GetStartLocationLoc]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetStartLocationLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_GetStartLocationLoc(arg_0_I);
   return Py_BuildValue("I", rt);
}

// SetPlayerTeam 002466f0 (Hplayer;I)V
DWORD Jass_SetPlayerTeam(DWORD arg_0_Hplayer, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetPlayerTeam]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPlayerTeam(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetPlayerTeam(arg_0_Hplayer, arg_4_I);
   return Py_BuildValue("I", rt);
}

// SetPlayerStartLocation 00246610 (Hplayer;I)V
DWORD Jass_SetPlayerStartLocation(DWORD arg_0_Hplayer, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetPlayerStartLocation]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPlayerStartLocation(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetPlayerStartLocation(arg_0_Hplayer, arg_4_I);
   return Py_BuildValue("I", rt);
}

// ForcePlayerStartLocation 00231040 (Hplayer;I)V
DWORD Jass_ForcePlayerStartLocation(DWORD arg_0_Hplayer, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_ForcePlayerStartLocation]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* ForcePlayerStartLocation(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_ForcePlayerStartLocation(arg_0_Hplayer, arg_4_I);
   return Py_BuildValue("I", rt);
}

// SetPlayerAlliance 00246340 (Hplayer;Hplayer;Halliancetype;B)V
DWORD Jass_SetPlayerAlliance(DWORD arg_0_Hplayer, DWORD arg_4_Hplayer, DWORD arg_8_Halliancetype, DWORD arg_C_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_Halliancetype
       push eax
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetPlayerAlliance]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPlayerAlliance(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hplayer = 0;
   DWORD arg_8_Halliancetype = 0;
   DWORD arg_C_B = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hplayer, &arg_4_Hplayer, &arg_8_Halliancetype, &arg_C_B))
       Py_RETURN_NONE;
   rt = Jass_SetPlayerAlliance(arg_0_Hplayer, arg_4_Hplayer, arg_8_Halliancetype, arg_C_B);
   return Py_BuildValue("I", rt);
}

// SetPlayerTaxRate 00246690 (Hplayer;Hplayer;Hplayerstate;I)V
DWORD Jass_SetPlayerTaxRate(DWORD arg_0_Hplayer, DWORD arg_4_Hplayer, DWORD arg_8_Hplayerstate, DWORD arg_C_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_Hplayerstate
       push eax
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetPlayerTaxRate]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPlayerTaxRate(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hplayer = 0;
   DWORD arg_8_Hplayerstate = 0;
   DWORD arg_C_I = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hplayer, &arg_4_Hplayer, &arg_8_Hplayerstate, &arg_C_I))
       Py_RETURN_NONE;
   rt = Jass_SetPlayerTaxRate(arg_0_Hplayer, arg_4_Hplayer, arg_8_Hplayerstate, arg_C_I);
   return Py_BuildValue("I", rt);
}

// SetPlayerRacePreference 002465b0 (Hplayer;Hracepreference;)V
DWORD Jass_SetPlayerRacePreference(DWORD arg_0_Hplayer, DWORD arg_4_Hracepreference)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hracepreference
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetPlayerRacePreference]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPlayerRacePreference(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hracepreference = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_Hracepreference))
       Py_RETURN_NONE;
   rt = Jass_SetPlayerRacePreference(arg_0_Hplayer, arg_4_Hracepreference);
   return Py_BuildValue("I", rt);
}

// SetPlayerRaceSelectable 002465e0 (Hplayer;B)V
DWORD Jass_SetPlayerRaceSelectable(DWORD arg_0_Hplayer, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetPlayerRaceSelectable]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPlayerRaceSelectable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetPlayerRaceSelectable(arg_0_Hplayer, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetPlayerController 00246400 (Hplayer;Hmapcontrol;)V
DWORD Jass_SetPlayerController(DWORD arg_0_Hplayer, DWORD arg_4_Hmapcontrol)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hmapcontrol
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetPlayerController]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPlayerController(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hmapcontrol = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_Hmapcontrol))
       Py_RETURN_NONE;
   rt = Jass_SetPlayerController(arg_0_Hplayer, arg_4_Hmapcontrol);
   return Py_BuildValue("I", rt);
}

// SetPlayerColor 002463e0 (Hplayer;Hplayercolor;)V
DWORD Jass_SetPlayerColor(DWORD arg_0_Hplayer, DWORD arg_4_Hplayercolor)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayercolor
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetPlayerColor]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPlayerColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hplayercolor = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_Hplayercolor))
       Py_RETURN_NONE;
   rt = Jass_SetPlayerColor(arg_0_Hplayer, arg_4_Hplayercolor);
   return Py_BuildValue("I", rt);
}

// SetPlayerOnScoreScreen 00246590 (Hplayer;B)V
DWORD Jass_SetPlayerOnScoreScreen(DWORD arg_0_Hplayer, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetPlayerOnScoreScreen]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPlayerOnScoreScreen(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetPlayerOnScoreScreen(arg_0_Hplayer, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetPlayerName 00246550 (Hplayer;S)V
DWORD Jass_SetPlayerName(DWORD arg_0_Hplayer, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetPlayerName]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPlayerName(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_SetPlayerName(arg_0_Hplayer, arg_4_S);
   return Py_BuildValue("I", rt);
}

// GetPlayerTeam 00234390 (Hplayer;)I
DWORD Jass_GetPlayerTeam(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerTeam]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerTeam(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerTeam(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// GetPlayerName 00233f70 (Hplayer;)S
DWORD Jass_GetPlayerName(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerName]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerName(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerName(arg_0_Hplayer);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// GetPlayerStartLocation 00234230 (Hplayer;)I
DWORD Jass_GetPlayerStartLocation(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerStartLocation]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerStartLocation(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerStartLocation(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// GetPlayerStartLocationX 00234250 (Hplayer;)R
DWORD Jass_GetPlayerStartLocationX(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerStartLocationX]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerStartLocationX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerStartLocationX(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// GetPlayerStartLocationY 00234280 (Hplayer;)R
DWORD Jass_GetPlayerStartLocationY(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerStartLocationY]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerStartLocationY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerStartLocationY(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// GetPlayerColor 00233ed0 (Hplayer;)Hplayercolor;
DWORD Jass_GetPlayerColor(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerColor]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerColor(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// GetPlayerSelectable 002341f0 (Hplayer;)B
DWORD Jass_GetPlayerSelectable(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerSelectable]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerSelectable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerSelectable(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// GetPlayerController 00233ef0 (Hplayer;)Hmapcontrol;
DWORD Jass_GetPlayerController(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerController]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerController(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerController(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// GetPlayerSlotState 00234210 (Hplayer;)Hplayerslotstate;
DWORD Jass_GetPlayerSlotState(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerSlotState]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerSlotState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerSlotState(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// GetPlayerTaxRate 00234340 (Hplayer;Hplayer;Hplayerstate;)I
DWORD Jass_GetPlayerTaxRate(DWORD arg_0_Hplayer, DWORD arg_4_Hplayer, DWORD arg_8_Hplayerstate)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hplayerstate
       push eax
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerTaxRate]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerTaxRate(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hplayer = 0;
   DWORD arg_8_Hplayerstate = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hplayer, &arg_4_Hplayer, &arg_8_Hplayerstate))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerTaxRate(arg_0_Hplayer, arg_4_Hplayer, arg_8_Hplayerstate);
   return Py_BuildValue("I", rt);
}

// IsPlayerRacePrefSet 002383b0 (Hplayer;Hracepreference;)B
DWORD Jass_IsPlayerRacePrefSet(DWORD arg_0_Hplayer, DWORD arg_4_Hracepreference)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hracepreference
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_IsPlayerRacePrefSet]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsPlayerRacePrefSet(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hracepreference = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_Hracepreference))
       Py_RETURN_NONE;
   rt = Jass_IsPlayerRacePrefSet(arg_0_Hplayer, arg_4_Hracepreference);
   return Py_BuildValue("I", rt);
}

// Location 00240e20 (RR)Hlocation;
DWORD Jass_Location(DWORD arg_0_R, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_Location]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* Location(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_R, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_Location(arg_0_R, arg_4_R);
   return Py_BuildValue("I", rt);
}

// RemoveLocation 00243090 (Hlocation;)V
DWORD Jass_RemoveLocation(DWORD arg_0_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hlocation
       push eax
       call [_Jass_RemoveLocation]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveLocation(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_RemoveLocation(arg_0_Hlocation);
   return Py_BuildValue("I", rt);
}

// MoveLocation 002410d0 (Hlocation;RR)V
DWORD Jass_MoveLocation(DWORD arg_0_Hlocation, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hlocation
       push eax
       call [_Jass_MoveLocation]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* MoveLocation(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hlocation = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hlocation, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_MoveLocation(arg_0_Hlocation, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// GetLocationX 00233470 (Hlocation;)R
DWORD Jass_GetLocationX(DWORD arg_0_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hlocation
       push eax
       call [_Jass_GetLocationX]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetLocationX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_GetLocationX(arg_0_Hlocation);
   return Py_BuildValue("I", rt);
}

// GetLocationY 00233490 (Hlocation;)R
DWORD Jass_GetLocationY(DWORD arg_0_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hlocation
       push eax
       call [_Jass_GetLocationY]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetLocationY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_GetLocationY(arg_0_Hlocation);
   return Py_BuildValue("I", rt);
}

// GetLocationZ 002334b0 (Hlocation;)R
DWORD Jass_GetLocationZ(DWORD arg_0_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hlocation
       push eax
       call [_Jass_GetLocationZ]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetLocationZ(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_GetLocationZ(arg_0_Hlocation);
   return Py_BuildValue("I", rt);
}

// CreateTimer 0022ed00 ()Htimer;
DWORD Jass_CreateTimer()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CreateTimer]
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateTimer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CreateTimer();
   return Py_BuildValue("I", rt);
}

// DestroyTimer 0022f9e0 (Htimer;)V
DWORD Jass_DestroyTimer(DWORD arg_0_Htimer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htimer
       push eax
       call [_Jass_DestroyTimer]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyTimer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htimer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htimer))
       Py_RETURN_NONE;
   rt = Jass_DestroyTimer(arg_0_Htimer);
   return Py_BuildValue("I", rt);
}

// TimerStart 002492f0 (Htimer;RBC)V
DWORD Jass_TimerStart(DWORD arg_0_Htimer, DWORD arg_4_R, DWORD arg_8_B, DWORD arg_C_C)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_C
       push eax
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Htimer
       push eax
       call [_Jass_TimerStart]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* TimerStart(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htimer = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_B = 0;
   DWORD arg_C_C = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Htimer, &arg_4_R, &arg_8_B, &arg_C_C))
       Py_RETURN_NONE;
   rt = Jass_TimerStart(arg_0_Htimer, arg_4_R, arg_8_B, arg_C_C);
   return Py_BuildValue("I", rt);
}

// TimerGetTimeout 002492c0 (Htimer;)R
DWORD Jass_TimerGetTimeout(DWORD arg_0_Htimer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htimer
       push eax
       call [_Jass_TimerGetTimeout]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* TimerGetTimeout(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htimer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htimer))
       Py_RETURN_NONE;
   rt = Jass_TimerGetTimeout(arg_0_Htimer);
   return Py_BuildValue("I", rt);
}

// TimerGetElapsed 00249260 (Htimer;)R
DWORD Jass_TimerGetElapsed(DWORD arg_0_Htimer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htimer
       push eax
       call [_Jass_TimerGetElapsed]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* TimerGetElapsed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htimer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htimer))
       Py_RETURN_NONE;
   rt = Jass_TimerGetElapsed(arg_0_Htimer);
   return Py_BuildValue("I", rt);
}

// TimerGetRemaining 00249290 (Htimer;)R
DWORD Jass_TimerGetRemaining(DWORD arg_0_Htimer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htimer
       push eax
       call [_Jass_TimerGetRemaining]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* TimerGetRemaining(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htimer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htimer))
       Py_RETURN_NONE;
   rt = Jass_TimerGetRemaining(arg_0_Htimer);
   return Py_BuildValue("I", rt);
}

// PauseTimer 00241d10 (Htimer;)V
DWORD Jass_PauseTimer(DWORD arg_0_Htimer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htimer
       push eax
       call [_Jass_PauseTimer]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* PauseTimer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htimer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htimer))
       Py_RETURN_NONE;
   rt = Jass_PauseTimer(arg_0_Htimer);
   return Py_BuildValue("I", rt);
}

// ResumeTimer 002435f0 (Htimer;)V
DWORD Jass_ResumeTimer(DWORD arg_0_Htimer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htimer
       push eax
       call [_Jass_ResumeTimer]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ResumeTimer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htimer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htimer))
       Py_RETURN_NONE;
   rt = Jass_ResumeTimer(arg_0_Htimer);
   return Py_BuildValue("I", rt);
}

// GetExpiredTimer 00232660 ()Htimer;
DWORD Jass_GetExpiredTimer()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetExpiredTimer]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetExpiredTimer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetExpiredTimer();
   return Py_BuildValue("I", rt);
}

// Condition 0022b810 (C)Hconditionfunc;
DWORD Jass_Condition(DWORD arg_0_C)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_C
       push eax
       call [_Jass_Condition]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* Condition(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_C = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_C))
       Py_RETURN_NONE;
   rt = Jass_Condition(arg_0_C);
   return Py_BuildValue("I", rt);
}

// DestroyCondition 0022f780 (Hconditionfunc;)V
DWORD Jass_DestroyCondition(DWORD arg_0_Hconditionfunc)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hconditionfunc
       push eax
       call [_Jass_DestroyCondition]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyCondition(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hconditionfunc = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hconditionfunc))
       Py_RETURN_NONE;
   rt = Jass_DestroyCondition(arg_0_Hconditionfunc);
   return Py_BuildValue("I", rt);
}

// Filter 00230970 (C)Hfilterfunc;
DWORD Jass_Filter(DWORD arg_0_C)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_C
       push eax
       call [_Jass_Filter]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* Filter(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_C = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_C))
       Py_RETURN_NONE;
   rt = Jass_Filter(arg_0_C);
   return Py_BuildValue("I", rt);
}

// DestroyFilter 0022f820 (Hfilterfunc;)V
DWORD Jass_DestroyFilter(DWORD arg_0_Hfilterfunc)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hfilterfunc
       push eax
       call [_Jass_DestroyFilter]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyFilter(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hfilterfunc = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hfilterfunc))
       Py_RETURN_NONE;
   rt = Jass_DestroyFilter(arg_0_Hfilterfunc);
   return Py_BuildValue("I", rt);
}

// DestroyBoolExpr 0022f760 (Hboolexpr;)V
DWORD Jass_DestroyBoolExpr(DWORD arg_0_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hboolexpr
       push eax
       call [_Jass_DestroyBoolExpr]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyBoolExpr(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_DestroyBoolExpr(arg_0_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// And 0022a950 (Hboolexpr;Hboolexpr;)Hboolexpr;
DWORD Jass_And(DWORD arg_0_Hboolexpr, DWORD arg_4_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hboolexpr
       push eax
       mov eax, arg_0_Hboolexpr
       push eax
       call [_Jass_And]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* And(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hboolexpr = 0;
   DWORD arg_4_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hboolexpr, &arg_4_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_And(arg_0_Hboolexpr, arg_4_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// Or 002419b0 (Hboolexpr;Hboolexpr;)Hboolexpr;
DWORD Jass_Or(DWORD arg_0_Hboolexpr, DWORD arg_4_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hboolexpr
       push eax
       mov eax, arg_0_Hboolexpr
       push eax
       call [_Jass_Or]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* Or(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hboolexpr = 0;
   DWORD arg_4_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hboolexpr, &arg_4_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_Or(arg_0_Hboolexpr, arg_4_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// Not 00241810 (Hboolexpr;)Hboolexpr;
DWORD Jass_Not(DWORD arg_0_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hboolexpr
       push eax
       call [_Jass_Not]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* Not(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_Not(arg_0_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// CreateRegion 0022e8b0 ()Hregion;
DWORD Jass_CreateRegion()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CreateRegion]
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateRegion(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CreateRegion();
   return Py_BuildValue("I", rt);
}

// RemoveRegion 00243100 (Hregion;)V
DWORD Jass_RemoveRegion(DWORD arg_0_Hregion)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hregion
       push eax
       call [_Jass_RemoveRegion]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveRegion(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hregion = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hregion))
       Py_RETURN_NONE;
   rt = Jass_RemoveRegion(arg_0_Hregion);
   return Py_BuildValue("I", rt);
}

// RegionAddRect 00242d10 (Hregion;Hrect;)V
DWORD Jass_RegionAddRect(DWORD arg_0_Hregion, DWORD arg_4_Hrect)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hrect
       push eax
       mov eax, arg_0_Hregion
       push eax
       call [_Jass_RegionAddRect]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* RegionAddRect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hregion = 0;
   DWORD arg_4_Hrect = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hregion, &arg_4_Hrect))
       Py_RETURN_NONE;
   rt = Jass_RegionAddRect(arg_0_Hregion, arg_4_Hrect);
   return Py_BuildValue("I", rt);
}

// RegionClearRect 00242dc0 (Hregion;Hrect;)V
DWORD Jass_RegionClearRect(DWORD arg_0_Hregion, DWORD arg_4_Hrect)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hrect
       push eax
       mov eax, arg_0_Hregion
       push eax
       call [_Jass_RegionClearRect]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* RegionClearRect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hregion = 0;
   DWORD arg_4_Hrect = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hregion, &arg_4_Hrect))
       Py_RETURN_NONE;
   rt = Jass_RegionClearRect(arg_0_Hregion, arg_4_Hrect);
   return Py_BuildValue("I", rt);
}

// RegionAddCell 00242cb0 (Hregion;RR)V
DWORD Jass_RegionAddCell(DWORD arg_0_Hregion, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hregion
       push eax
       call [_Jass_RegionAddCell]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* RegionAddCell(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hregion = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hregion, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_RegionAddCell(arg_0_Hregion, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// RegionAddCellAtLoc 00242cd0 (Hregion;Hlocation;)V
DWORD Jass_RegionAddCellAtLoc(DWORD arg_0_Hregion, DWORD arg_4_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hlocation
       push eax
       mov eax, arg_0_Hregion
       push eax
       call [_Jass_RegionAddCellAtLoc]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* RegionAddCellAtLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hregion = 0;
   DWORD arg_4_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hregion, &arg_4_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_RegionAddCellAtLoc(arg_0_Hregion, arg_4_Hlocation);
   return Py_BuildValue("I", rt);
}

// RegionClearCell 00242d60 (Hregion;RR)V
DWORD Jass_RegionClearCell(DWORD arg_0_Hregion, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hregion
       push eax
       call [_Jass_RegionClearCell]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* RegionClearCell(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hregion = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hregion, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_RegionClearCell(arg_0_Hregion, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// RegionClearCellAtLoc 00242d80 (Hregion;Hlocation;)V
DWORD Jass_RegionClearCellAtLoc(DWORD arg_0_Hregion, DWORD arg_4_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hlocation
       push eax
       mov eax, arg_0_Hregion
       push eax
       call [_Jass_RegionClearCellAtLoc]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* RegionClearCellAtLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hregion = 0;
   DWORD arg_4_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hregion, &arg_4_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_RegionClearCellAtLoc(arg_0_Hregion, arg_4_Hlocation);
   return Py_BuildValue("I", rt);
}

// IsUnitInRegion 00238c50 (Hregion;Hunit;)B
DWORD Jass_IsUnitInRegion(DWORD arg_0_Hregion, DWORD arg_4_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hunit
       push eax
       mov eax, arg_0_Hregion
       push eax
       call [_Jass_IsUnitInRegion]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitInRegion(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hregion = 0;
   DWORD arg_4_Hunit = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hregion, &arg_4_Hunit))
       Py_RETURN_NONE;
   rt = Jass_IsUnitInRegion(arg_0_Hregion, arg_4_Hunit);
   return Py_BuildValue("I", rt);
}

// IsPointInRegion 00238490 (Hregion;RR)B
DWORD Jass_IsPointInRegion(DWORD arg_0_Hregion, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hregion
       push eax
       call [_Jass_IsPointInRegion]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* IsPointInRegion(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hregion = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hregion, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_IsPointInRegion(arg_0_Hregion, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// IsLocationInRegion 00237f80 (Hregion;Hlocation;)B
DWORD Jass_IsLocationInRegion(DWORD arg_0_Hregion, DWORD arg_4_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hlocation
       push eax
       mov eax, arg_0_Hregion
       push eax
       call [_Jass_IsLocationInRegion]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsLocationInRegion(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hregion = 0;
   DWORD arg_4_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hregion, &arg_4_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_IsLocationInRegion(arg_0_Hregion, arg_4_Hlocation);
   return Py_BuildValue("I", rt);
}

// Rect 0023f7c0 (RRRR)Hrect;
DWORD Jass_Rect(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_Rect]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* Rect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_R, &arg_4_R, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_Rect(arg_0_R, arg_4_R, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// RectFromLoc 00242b30 (Hlocation;Hlocation;)Hrect;
DWORD Jass_RectFromLoc(DWORD arg_0_Hlocation, DWORD arg_4_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hlocation
       push eax
       mov eax, arg_0_Hlocation
       push eax
       call [_Jass_RectFromLoc]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* RectFromLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hlocation = 0;
   DWORD arg_4_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hlocation, &arg_4_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_RectFromLoc(arg_0_Hlocation, arg_4_Hlocation);
   return Py_BuildValue("I", rt);
}

// RemoveRect 002430e0 (Hrect;)V
DWORD Jass_RemoveRect(DWORD arg_0_Hrect)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hrect
       push eax
       call [_Jass_RemoveRect]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveRect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hrect = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hrect))
       Py_RETURN_NONE;
   rt = Jass_RemoveRect(arg_0_Hrect);
   return Py_BuildValue("I", rt);
}

// SetRect 0023f980 (Hrect;RRRR)V
DWORD Jass_SetRect(DWORD arg_0_Hrect, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hrect
       push eax
       call [_Jass_SetRect]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* SetRect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hrect = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hrect, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_R))
       Py_RETURN_NONE;
   rt = Jass_SetRect(arg_0_Hrect, arg_4_R, arg_8_R, arg_C_R, arg_10_R);
   return Py_BuildValue("I", rt);
}

// SetRectFromLoc 002467f0 (Hrect;Hlocation;Hlocation;)V
DWORD Jass_SetRectFromLoc(DWORD arg_0_Hrect, DWORD arg_4_Hlocation, DWORD arg_8_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hlocation
       push eax
       mov eax, arg_4_Hlocation
       push eax
       mov eax, arg_0_Hrect
       push eax
       call [_Jass_SetRectFromLoc]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetRectFromLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hrect = 0;
   DWORD arg_4_Hlocation = 0;
   DWORD arg_8_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hrect, &arg_4_Hlocation, &arg_8_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_SetRectFromLoc(arg_0_Hrect, arg_4_Hlocation, arg_8_Hlocation);
   return Py_BuildValue("I", rt);
}

// GetRectCenterX 00234700 (Hrect;)R
DWORD Jass_GetRectCenterX(DWORD arg_0_Hrect)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hrect
       push eax
       call [_Jass_GetRectCenterX]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetRectCenterX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hrect = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hrect))
       Py_RETURN_NONE;
   rt = Jass_GetRectCenterX(arg_0_Hrect);
   return Py_BuildValue("I", rt);
}

// GetRectCenterY 00234760 (Hrect;)R
DWORD Jass_GetRectCenterY(DWORD arg_0_Hrect)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hrect
       push eax
       call [_Jass_GetRectCenterY]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetRectCenterY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hrect = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hrect))
       Py_RETURN_NONE;
   rt = Jass_GetRectCenterY(arg_0_Hrect);
   return Py_BuildValue("I", rt);
}

// MoveRectTo 00241100 (Hrect;RR)V
DWORD Jass_MoveRectTo(DWORD arg_0_Hrect, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hrect
       push eax
       call [_Jass_MoveRectTo]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* MoveRectTo(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hrect = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hrect, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_MoveRectTo(arg_0_Hrect, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// MoveRectToLoc 00241130 (Hrect;Hlocation;)V
DWORD Jass_MoveRectToLoc(DWORD arg_0_Hrect, DWORD arg_4_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hlocation
       push eax
       mov eax, arg_0_Hrect
       push eax
       call [_Jass_MoveRectToLoc]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* MoveRectToLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hrect = 0;
   DWORD arg_4_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hrect, &arg_4_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_MoveRectToLoc(arg_0_Hrect, arg_4_Hlocation);
   return Py_BuildValue("I", rt);
}

// GetRectMinX 00234800 (Hrect;)R
DWORD Jass_GetRectMinX(DWORD arg_0_Hrect)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hrect
       push eax
       call [_Jass_GetRectMinX]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetRectMinX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hrect = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hrect))
       Py_RETURN_NONE;
   rt = Jass_GetRectMinX(arg_0_Hrect);
   return Py_BuildValue("I", rt);
}

// GetRectMinY 00234820 (Hrect;)R
DWORD Jass_GetRectMinY(DWORD arg_0_Hrect)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hrect
       push eax
       call [_Jass_GetRectMinY]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetRectMinY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hrect = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hrect))
       Py_RETURN_NONE;
   rt = Jass_GetRectMinY(arg_0_Hrect);
   return Py_BuildValue("I", rt);
}

// GetRectMaxX 002347c0 (Hrect;)R
DWORD Jass_GetRectMaxX(DWORD arg_0_Hrect)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hrect
       push eax
       call [_Jass_GetRectMaxX]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetRectMaxX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hrect = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hrect))
       Py_RETURN_NONE;
   rt = Jass_GetRectMaxX(arg_0_Hrect);
   return Py_BuildValue("I", rt);
}

// GetRectMaxY 002347e0 (Hrect;)R
DWORD Jass_GetRectMaxY(DWORD arg_0_Hrect)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hrect
       push eax
       call [_Jass_GetRectMaxY]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetRectMaxY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hrect = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hrect))
       Py_RETURN_NONE;
   rt = Jass_GetRectMaxY(arg_0_Hrect);
   return Py_BuildValue("I", rt);
}

// GetWorldBounds 00236a40 ()Hrect;
DWORD Jass_GetWorldBounds()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetWorldBounds]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetWorldBounds(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetWorldBounds();
   return Py_BuildValue("I", rt);
}

// SetFogStateRect 002458b0 (Hplayer;Hfogstate;Hrect;B)V
DWORD Jass_SetFogStateRect(DWORD arg_0_Hplayer, DWORD arg_4_Hfogstate, DWORD arg_8_Hrect, DWORD arg_C_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_Hrect
       push eax
       mov eax, arg_4_Hfogstate
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetFogStateRect]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetFogStateRect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hfogstate = 0;
   DWORD arg_8_Hrect = 0;
   DWORD arg_C_B = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hplayer, &arg_4_Hfogstate, &arg_8_Hrect, &arg_C_B))
       Py_RETURN_NONE;
   rt = Jass_SetFogStateRect(arg_0_Hplayer, arg_4_Hfogstate, arg_8_Hrect, arg_C_B);
   return Py_BuildValue("I", rt);
}

// SetFogStateRadius 002457e0 (Hplayer;Hfogstate;RRRB)V
DWORD Jass_SetFogStateRadius(DWORD arg_0_Hplayer, DWORD arg_4_Hfogstate, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_14_B
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_Hfogstate
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetFogStateRadius]
       add esp, 0x18
       mov rt, eax
   }
   return rt;
}
static PyObject* SetFogStateRadius(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hfogstate = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_B = 0;
   if (!PyArg_ParseTuple(args, "IIIIII", &arg_0_Hplayer, &arg_4_Hfogstate, &arg_8_R, &arg_C_R, &arg_10_R, &arg_14_B))
       Py_RETURN_NONE;
   rt = Jass_SetFogStateRadius(arg_0_Hplayer, arg_4_Hfogstate, arg_8_R, arg_C_R, arg_10_R, arg_14_B);
   return Py_BuildValue("I", rt);
}

// SetFogStateRadiusLoc 00245840 (Hplayer;Hfogstate;Hlocation;RB)V
DWORD Jass_SetFogStateRadiusLoc(DWORD arg_0_Hplayer, DWORD arg_4_Hfogstate, DWORD arg_8_Hlocation, DWORD arg_C_R, DWORD arg_10_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_B
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_Hlocation
       push eax
       mov eax, arg_4_Hfogstate
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetFogStateRadiusLoc]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* SetFogStateRadiusLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hfogstate = 0;
   DWORD arg_8_Hlocation = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_B = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hplayer, &arg_4_Hfogstate, &arg_8_Hlocation, &arg_C_R, &arg_10_B))
       Py_RETURN_NONE;
   rt = Jass_SetFogStateRadiusLoc(arg_0_Hplayer, arg_4_Hfogstate, arg_8_Hlocation, arg_C_R, arg_10_B);
   return Py_BuildValue("I", rt);
}

// FogMaskEnable 00230df0 (B)V
DWORD Jass_FogMaskEnable(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_FogMaskEnable]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* FogMaskEnable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_FogMaskEnable(arg_0_B);
   return Py_BuildValue("I", rt);
}

// IsFogMaskEnabled 00237b90 ()B
DWORD Jass_IsFogMaskEnabled()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_IsFogMaskEnabled]
       mov rt, eax
   }
   return rt;
}
static PyObject* IsFogMaskEnabled(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_IsFogMaskEnabled();
   return Py_BuildValue("I", rt);
}

// FogEnable 00230dc0 (B)V
DWORD Jass_FogEnable(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_FogEnable]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* FogEnable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_FogEnable(arg_0_B);
   return Py_BuildValue("I", rt);
}

// IsFogEnabled 00237b80 ()B
DWORD Jass_IsFogEnabled()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_IsFogEnabled]
       mov rt, eax
   }
   return rt;
}
static PyObject* IsFogEnabled(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_IsFogEnabled();
   return Py_BuildValue("I", rt);
}

// CreateFogModifierRect 0022e100 (Hplayer;Hfogstate;Hrect;BB)Hfogmodifier;
DWORD Jass_CreateFogModifierRect(DWORD arg_0_Hplayer, DWORD arg_4_Hfogstate, DWORD arg_8_Hrect, DWORD arg_C_B, DWORD arg_10_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_B
       push eax
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_Hrect
       push eax
       mov eax, arg_4_Hfogstate
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_CreateFogModifierRect]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateFogModifierRect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hfogstate = 0;
   DWORD arg_8_Hrect = 0;
   DWORD arg_C_B = 0;
   DWORD arg_10_B = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hplayer, &arg_4_Hfogstate, &arg_8_Hrect, &arg_C_B, &arg_10_B))
       Py_RETURN_NONE;
   rt = Jass_CreateFogModifierRect(arg_0_Hplayer, arg_4_Hfogstate, arg_8_Hrect, arg_C_B, arg_10_B);
   return Py_BuildValue("I", rt);
}

// CreateFogModifierRadius 0022df40 (Hplayer;Hfogstate;RRRBB)Hfogmodifier;
DWORD Jass_CreateFogModifierRadius(DWORD arg_0_Hplayer, DWORD arg_4_Hfogstate, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_B, DWORD arg_18_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_18_B
       push eax
       mov eax, arg_14_B
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_Hfogstate
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_CreateFogModifierRadius]
       add esp, 0x1c
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateFogModifierRadius(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hfogstate = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_B = 0;
   DWORD arg_18_B = 0;
   if (!PyArg_ParseTuple(args, "IIIIIII", &arg_0_Hplayer, &arg_4_Hfogstate, &arg_8_R, &arg_C_R, &arg_10_R, &arg_14_B, &arg_18_B))
       Py_RETURN_NONE;
   rt = Jass_CreateFogModifierRadius(arg_0_Hplayer, arg_4_Hfogstate, arg_8_R, arg_C_R, arg_10_R, arg_14_B, arg_18_B);
   return Py_BuildValue("I", rt);
}

// CreateFogModifierRadiusLoc 0022e020 (Hplayer;Hfogstate;Hlocation;RBB)Hfogmodifier;
DWORD Jass_CreateFogModifierRadiusLoc(DWORD arg_0_Hplayer, DWORD arg_4_Hfogstate, DWORD arg_8_Hlocation, DWORD arg_C_R, DWORD arg_10_B, DWORD arg_14_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_14_B
       push eax
       mov eax, arg_10_B
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_Hlocation
       push eax
       mov eax, arg_4_Hfogstate
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_CreateFogModifierRadiusLoc]
       add esp, 0x18
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateFogModifierRadiusLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hfogstate = 0;
   DWORD arg_8_Hlocation = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_B = 0;
   DWORD arg_14_B = 0;
   if (!PyArg_ParseTuple(args, "IIIIII", &arg_0_Hplayer, &arg_4_Hfogstate, &arg_8_Hlocation, &arg_C_R, &arg_10_B, &arg_14_B))
       Py_RETURN_NONE;
   rt = Jass_CreateFogModifierRadiusLoc(arg_0_Hplayer, arg_4_Hfogstate, arg_8_Hlocation, arg_C_R, arg_10_B, arg_14_B);
   return Py_BuildValue("I", rt);
}

// DestroyFogModifier 0022f850 (Hfogmodifier;)V
DWORD Jass_DestroyFogModifier(DWORD arg_0_Hfogmodifier)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hfogmodifier
       push eax
       call [_Jass_DestroyFogModifier]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyFogModifier(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hfogmodifier = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hfogmodifier))
       Py_RETURN_NONE;
   rt = Jass_DestroyFogModifier(arg_0_Hfogmodifier);
   return Py_BuildValue("I", rt);
}

// FogModifierStart 00230e10 (Hfogmodifier;)V
DWORD Jass_FogModifierStart(DWORD arg_0_Hfogmodifier)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hfogmodifier
       push eax
       call [_Jass_FogModifierStart]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* FogModifierStart(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hfogmodifier = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hfogmodifier))
       Py_RETURN_NONE;
   rt = Jass_FogModifierStart(arg_0_Hfogmodifier);
   return Py_BuildValue("I", rt);
}

// FogModifierStop 00230e30 (Hfogmodifier;)V
DWORD Jass_FogModifierStop(DWORD arg_0_Hfogmodifier)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hfogmodifier
       push eax
       call [_Jass_FogModifierStop]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* FogModifierStop(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hfogmodifier = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hfogmodifier))
       Py_RETURN_NONE;
   rt = Jass_FogModifierStop(arg_0_Hfogmodifier);
   return Py_BuildValue("I", rt);
}

// CreateTrigger 0022eff0 ()Htrigger;
DWORD Jass_CreateTrigger()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CreateTrigger]
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateTrigger(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CreateTrigger();
   return Py_BuildValue("I", rt);
}

// DestroyTrigger 0022fa20 (Htrigger;)V
DWORD Jass_DestroyTrigger(DWORD arg_0_Htrigger)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_DestroyTrigger]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyTrigger(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htrigger))
       Py_RETURN_NONE;
   rt = Jass_DestroyTrigger(arg_0_Htrigger);
   return Py_BuildValue("I", rt);
}

// ResetTrigger 00243450 (Htrigger;)V
DWORD Jass_ResetTrigger(DWORD arg_0_Htrigger)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_ResetTrigger]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ResetTrigger(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htrigger))
       Py_RETURN_NONE;
   rt = Jass_ResetTrigger(arg_0_Htrigger);
   return Py_BuildValue("I", rt);
}

// EnableTrigger 00230260 (Htrigger;)V
DWORD Jass_EnableTrigger(DWORD arg_0_Htrigger)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_EnableTrigger]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* EnableTrigger(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htrigger))
       Py_RETURN_NONE;
   rt = Jass_EnableTrigger(arg_0_Htrigger);
   return Py_BuildValue("I", rt);
}

// DisableTrigger 0022fea0 (Htrigger;)V
DWORD Jass_DisableTrigger(DWORD arg_0_Htrigger)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_DisableTrigger]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DisableTrigger(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htrigger))
       Py_RETURN_NONE;
   rt = Jass_DisableTrigger(arg_0_Htrigger);
   return Py_BuildValue("I", rt);
}

// IsTriggerEnabled 002386d0 (Htrigger;)B
DWORD Jass_IsTriggerEnabled(DWORD arg_0_Htrigger)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_IsTriggerEnabled]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsTriggerEnabled(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htrigger))
       Py_RETURN_NONE;
   rt = Jass_IsTriggerEnabled(arg_0_Htrigger);
   return Py_BuildValue("I", rt);
}

// TriggerWaitOnSleeps 0024a800 (Htrigger;B)V
DWORD Jass_TriggerWaitOnSleeps(DWORD arg_0_Htrigger, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerWaitOnSleeps]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerWaitOnSleeps(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htrigger, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_TriggerWaitOnSleeps(arg_0_Htrigger, arg_4_B);
   return Py_BuildValue("I", rt);
}

// IsTriggerWaitOnSleeps 002386f0 (Htrigger;)B
DWORD Jass_IsTriggerWaitOnSleeps(DWORD arg_0_Htrigger)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_IsTriggerWaitOnSleeps]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsTriggerWaitOnSleeps(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htrigger))
       Py_RETURN_NONE;
   rt = Jass_IsTriggerWaitOnSleeps(arg_0_Htrigger);
   return Py_BuildValue("I", rt);
}

// TriggerRegisterVariableEvent 0024a660 (Htrigger;SHlimitop;R)Hevent;
DWORD Jass_TriggerRegisterVariableEvent(DWORD arg_0_Htrigger, DWORD arg_4_S, DWORD arg_8_Hlimitop, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_Hlimitop
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterVariableEvent]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterVariableEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_Hlimitop = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Htrigger, &arg_4_S, &arg_8_Hlimitop, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterVariableEvent(arg_0_Htrigger, arg_4_S, arg_8_Hlimitop, arg_C_R);
   return Py_BuildValue("I", rt);
}

// TriggerRegisterTimerEvent 0024a070 (Htrigger;RB)Hevent;
DWORD Jass_TriggerRegisterTimerEvent(DWORD arg_0_Htrigger, DWORD arg_4_R, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterTimerEvent]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterTimerEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Htrigger, &arg_4_R, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterTimerEvent(arg_0_Htrigger, arg_4_R, arg_8_B);
   return Py_BuildValue("I", rt);
}

// TriggerRegisterTimerExpireEvent 0024a130 (Htrigger;Htimer;)Hevent;
DWORD Jass_TriggerRegisterTimerExpireEvent(DWORD arg_0_Htrigger, DWORD arg_4_Htimer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Htimer
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterTimerExpireEvent]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterTimerExpireEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Htimer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htrigger, &arg_4_Htimer))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterTimerExpireEvent(arg_0_Htrigger, arg_4_Htimer);
   return Py_BuildValue("I", rt);
}

// TriggerRegisterGameStateEvent 00249960 (Htrigger;Hgamestate;Hlimitop;R)Hevent;
DWORD Jass_TriggerRegisterGameStateEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hgamestate, DWORD arg_8_Hlimitop, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_Hlimitop
       push eax
       mov eax, arg_4_Hgamestate
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterGameStateEvent]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterGameStateEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Hgamestate = 0;
   DWORD arg_8_Hlimitop = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Htrigger, &arg_4_Hgamestate, &arg_8_Hlimitop, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterGameStateEvent(arg_0_Htrigger, arg_4_Hgamestate, arg_8_Hlimitop, arg_C_R);
   return Py_BuildValue("I", rt);
}

// GetEventGameState 00232500 ()Hgamestate;
DWORD Jass_GetEventGameState()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetEventGameState]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetEventGameState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetEventGameState();
   return Py_BuildValue("I", rt);
}

// TriggerRegisterDialogEvent 002495e0 (Htrigger;Hdialog;)Hevent;
DWORD Jass_TriggerRegisterDialogEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hdialog)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hdialog
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterDialogEvent]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterDialogEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Hdialog = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htrigger, &arg_4_Hdialog))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterDialogEvent(arg_0_Htrigger, arg_4_Hdialog);
   return Py_BuildValue("I", rt);
}

// TriggerRegisterDialogButtonEvent 00249520 (Htrigger;Hbutton;)Hevent;
DWORD Jass_TriggerRegisterDialogButtonEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hbutton)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hbutton
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterDialogButtonEvent]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterDialogButtonEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Hbutton = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htrigger, &arg_4_Hbutton))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterDialogButtonEvent(arg_0_Htrigger, arg_4_Hbutton);
   return Py_BuildValue("I", rt);
}

// GetClickedButton 00231f20 ()Hbutton;
DWORD Jass_GetClickedButton()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetClickedButton]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetClickedButton(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetClickedButton();
   return Py_BuildValue("I", rt);
}

// GetClickedDialog 00231f70 ()Hdialog;
DWORD Jass_GetClickedDialog()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetClickedDialog]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetClickedDialog(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetClickedDialog();
   return Py_BuildValue("I", rt);
}

// GetTournamentFinishSoonTimeRemaining 00235d40 ()R;
DWORD Jass_GetTournamentFinishSoonTimeRemaining()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetTournamentFinishSoonTimeRemaining]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTournamentFinishSoonTimeRemaining(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetTournamentFinishSoonTimeRemaining();
   return Py_BuildValue("I", rt);
}

// GetTournamentFinishNowRule 00235d10 ()I;
DWORD Jass_GetTournamentFinishNowRule()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetTournamentFinishNowRule]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTournamentFinishNowRule(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetTournamentFinishNowRule();
   return Py_BuildValue("I", rt);
}

// GetTournamentFinishNowPlayer 00235cb0 ()Hplayer;
DWORD Jass_GetTournamentFinishNowPlayer()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetTournamentFinishNowPlayer]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTournamentFinishNowPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetTournamentFinishNowPlayer();
   return Py_BuildValue("I", rt);
}

// GetTournamentScore 00235d70 (Hplayer;)I
DWORD Jass_GetTournamentScore(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetTournamentScore]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTournamentScore(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_GetTournamentScore(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// GetSaveBasicFilename 00234b50 ()S
DWORD Jass_GetSaveBasicFilename()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetSaveBasicFilename]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSaveBasicFilename(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetSaveBasicFilename();
   return Py_BuildValue("s", jstr2cstr(rt));
}

// TriggerRegisterGameEvent 00249880 (Htrigger;Hgameevent;)Hevent;
DWORD Jass_TriggerRegisterGameEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hgameevent)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hgameevent
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterGameEvent]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterGameEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Hgameevent = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htrigger, &arg_4_Hgameevent))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterGameEvent(arg_0_Htrigger, arg_4_Hgameevent);
   return Py_BuildValue("I", rt);
}

// GetWinningPlayer 00236a10 ()Hplayer;
DWORD Jass_GetWinningPlayer()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetWinningPlayer]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetWinningPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetWinningPlayer();
   return Py_BuildValue("I", rt);
}

// TriggerRegisterPlayerStateEvent 00249e50 (Htrigger;Hplayer;Hplayerstate;Hlimitop;R)Hevent;
DWORD Jass_TriggerRegisterPlayerStateEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hplayer, DWORD arg_8_Hplayerstate, DWORD arg_C_Hlimitop, DWORD arg_10_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_Hlimitop
       push eax
       mov eax, arg_8_Hplayerstate
       push eax
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterPlayerStateEvent]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterPlayerStateEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Hplayer = 0;
   DWORD arg_8_Hplayerstate = 0;
   DWORD arg_C_Hlimitop = 0;
   DWORD arg_10_R = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Htrigger, &arg_4_Hplayer, &arg_8_Hplayerstate, &arg_C_Hlimitop, &arg_10_R))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterPlayerStateEvent(arg_0_Htrigger, arg_4_Hplayer, arg_8_Hplayerstate, arg_C_Hlimitop, arg_10_R);
   return Py_BuildValue("I", rt);
}

// GetEventPlayerState 002325a0 ()Hplayerstate;
DWORD Jass_GetEventPlayerState()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetEventPlayerState]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetEventPlayerState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetEventPlayerState();
   return Py_BuildValue("I", rt);
}

// TriggerRegisterPlayerEvent 00249d30 (Htrigger;Hplayer;Hplayerevent;)Hevent;
DWORD Jass_TriggerRegisterPlayerEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hplayer, DWORD arg_8_Hplayerevent)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hplayerevent
       push eax
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterPlayerEvent]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterPlayerEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Hplayer = 0;
   DWORD arg_8_Hplayerevent = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Htrigger, &arg_4_Hplayer, &arg_8_Hplayerevent))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterPlayerEvent(arg_0_Htrigger, arg_4_Hplayer, arg_8_Hplayerevent);
   return Py_BuildValue("I", rt);
}

// TriggerRegisterPlayerUnitEvent 00249f70 (Htrigger;Hplayer;Hplayerunitevent;Hboolexpr;)Hevent;
DWORD Jass_TriggerRegisterPlayerUnitEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hplayer, DWORD arg_8_Hplayerunitevent, DWORD arg_C_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hboolexpr
       push eax
       mov eax, arg_8_Hplayerunitevent
       push eax
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterPlayerUnitEvent]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterPlayerUnitEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Hplayer = 0;
   DWORD arg_8_Hplayerunitevent = 0;
   DWORD arg_C_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Htrigger, &arg_4_Hplayer, &arg_8_Hplayerunitevent, &arg_C_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterPlayerUnitEvent(arg_0_Htrigger, arg_4_Hplayer, arg_8_Hplayerunitevent, arg_C_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// GetAttacker 00231900 ()Hunit;
DWORD Jass_GetAttacker()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetAttacker]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetAttacker(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetAttacker();
   return Py_BuildValue("I", rt);
}

// GetRescuer 00234860 ()Hunit;
DWORD Jass_GetRescuer()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetRescuer]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetRescuer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetRescuer();
   return Py_BuildValue("I", rt);
}

// GetDyingUnit 00232360 ()Hunit;
DWORD Jass_GetDyingUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetDyingUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetDyingUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetDyingUnit();
   return Py_BuildValue("I", rt);
}

// GetKillingUnit 00232ff0 ()Hunit;
DWORD Jass_GetKillingUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetKillingUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetKillingUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetKillingUnit();
   return Py_BuildValue("I", rt);
}

// GetDecayingUnit 00232120 ()Hunit;
DWORD Jass_GetDecayingUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetDecayingUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetDecayingUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetDecayingUnit();
   return Py_BuildValue("I", rt);
}

// GetConstructingStructure 00232000 ()Hunit;
DWORD Jass_GetConstructingStructure()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetConstructingStructure]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetConstructingStructure(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetConstructingStructure();
   return Py_BuildValue("I", rt);
}

// GetCancelledStructure 00231df0 ()Hunit;
DWORD Jass_GetCancelledStructure()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetCancelledStructure]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCancelledStructure(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetCancelledStructure();
   return Py_BuildValue("I", rt);
}

// GetConstructedStructure 00231fe0 ()Hunit;
DWORD Jass_GetConstructedStructure()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetConstructedStructure]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetConstructedStructure(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetConstructedStructure();
   return Py_BuildValue("I", rt);
}

// GetTrainedUnitType 00235e20 ()I
DWORD Jass_GetTrainedUnitType()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetTrainedUnitType]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTrainedUnitType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetTrainedUnitType();
   return Py_BuildValue("I", rt);
}

// GetResearchingUnit 00234980 ()Hunit;
DWORD Jass_GetResearchingUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetResearchingUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetResearchingUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetResearchingUnit();
   return Py_BuildValue("I", rt);
}

// GetResearched 002348e0 ()I
DWORD Jass_GetResearched()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetResearched]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetResearched(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetResearched();
   return Py_BuildValue("I", rt);
}

// GetTrainedUnit 00235da0 ()Hunit;
DWORD Jass_GetTrainedUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetTrainedUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTrainedUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetTrainedUnit();
   return Py_BuildValue("I", rt);
}

// GetSellingUnit 00234be0 ()Hunit;
DWORD Jass_GetSellingUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetSellingUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSellingUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetSellingUnit();
   return Py_BuildValue("I", rt);
}

// GetSoldUnit 00234d90 ()Hunit;
DWORD Jass_GetSoldUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetSoldUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSoldUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetSoldUnit();
   return Py_BuildValue("I", rt);
}

// GetBuyingUnit 00231980 ()Hunit;
DWORD Jass_GetBuyingUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetBuyingUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetBuyingUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetBuyingUnit();
   return Py_BuildValue("I", rt);
}

// GetSoldItem 00234d00 ()Hitem;
DWORD Jass_GetSoldItem()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetSoldItem]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSoldItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetSoldItem();
   return Py_BuildValue("I", rt);
}

// GetChangingUnit 00231e10 ()Hunit;
DWORD Jass_GetChangingUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetChangingUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetChangingUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetChangingUnit();
   return Py_BuildValue("I", rt);
}

// GetChangingUnitPrevOwner 00231e90 ()Hplayer;
DWORD Jass_GetChangingUnitPrevOwner()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetChangingUnitPrevOwner]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetChangingUnitPrevOwner(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetChangingUnitPrevOwner();
   return Py_BuildValue("I", rt);
}

// GetDetectedUnit 00232320 ()Hunit;
DWORD Jass_GetDetectedUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetDetectedUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetDetectedUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetDetectedUnit();
   return Py_BuildValue("I", rt);
}

// GetOrderedUnit 00233d50 ()Hunit;
DWORD Jass_GetOrderedUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetOrderedUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetOrderedUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetOrderedUnit();
   return Py_BuildValue("I", rt);
}

// OrderId 00241ae0 (S)I
DWORD Jass_OrderId(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_OrderId]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* OrderId(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_OrderId(arg_0_S);
   return Py_BuildValue("I", rt);
}

// OrderId2String 00241ab0 (I)S
DWORD Jass_OrderId2String(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_OrderId2String]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* OrderId2String(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_OrderId2String(arg_0_I);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// AbilityId 00229db0 (S)I
DWORD Jass_AbilityId(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_AbilityId]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* AbilityId(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_AbilityId(arg_0_S);
   return Py_BuildValue("I", rt);
}

// AbilityId2String 00229d80 (I)S
DWORD Jass_AbilityId2String(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_AbilityId2String]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* AbilityId2String(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_AbilityId2String(arg_0_I);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// UnitId 0024b120 (S)I
DWORD Jass_UnitId(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_UnitId]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitId(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_UnitId(arg_0_S);
   return Py_BuildValue("I", rt);
}

// UnitId2String 0024b0f0 (I)S
DWORD Jass_UnitId2String(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_UnitId2String]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitId2String(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_UnitId2String(arg_0_I);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// GetObjectName 002336d0 (I)S
DWORD Jass_GetObjectName(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_GetObjectName]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetObjectName(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_GetObjectName(arg_0_I);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// GetIssuedOrderId 00232d90 ()I
DWORD Jass_GetIssuedOrderId()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetIssuedOrderId]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetIssuedOrderId(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetIssuedOrderId();
   return Py_BuildValue("I", rt);
}

// GetOrderPointX 002337f0 ()R
DWORD Jass_GetOrderPointX()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetOrderPointX]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetOrderPointX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetOrderPointX();
   return Py_BuildValue("I", rt);
}

// GetOrderPointY 00233840 ()R
DWORD Jass_GetOrderPointY()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetOrderPointY]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetOrderPointY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetOrderPointY();
   return Py_BuildValue("I", rt);
}

// GetOrderPointLoc 00233750 ()Hlocation;
DWORD Jass_GetOrderPointLoc()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetOrderPointLoc]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetOrderPointLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetOrderPointLoc();
   return Py_BuildValue("I", rt);
}

// GetOrderTarget 00233890 ()Hwidget;
DWORD Jass_GetOrderTarget()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetOrderTarget]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetOrderTarget(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetOrderTarget();
   return Py_BuildValue("I", rt);
}

// GetOrderTargetDestructable 002339f0 ()Hdestructable;
DWORD Jass_GetOrderTargetDestructable()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetOrderTargetDestructable]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetOrderTargetDestructable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetOrderTargetDestructable();
   return Py_BuildValue("I", rt);
}

// GetOrderTargetItem 00233b10 ()Hitem;
DWORD Jass_GetOrderTargetItem()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetOrderTargetItem]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetOrderTargetItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetOrderTargetItem();
   return Py_BuildValue("I", rt);
}

// GetOrderTargetUnit 00233c30 ()Hunit;
DWORD Jass_GetOrderTargetUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetOrderTargetUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetOrderTargetUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetOrderTargetUnit();
   return Py_BuildValue("I", rt);
}

// GetSpellAbilityUnit 00235070 ()Hunit;
DWORD Jass_GetSpellAbilityUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetSpellAbilityUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSpellAbilityUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetSpellAbilityUnit();
   return Py_BuildValue("I", rt);
}

// GetSpellAbilityId 00235000 ()I
DWORD Jass_GetSpellAbilityId()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetSpellAbilityId]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSpellAbilityId(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetSpellAbilityId();
   return Py_BuildValue("I", rt);
}

// GetSpellAbility 00234eb0 ()Hability;
DWORD Jass_GetSpellAbility()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetSpellAbility]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSpellAbility(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetSpellAbility();
   return Py_BuildValue("I", rt);
}

// GetSpellTargetLoc 002353f0 ()Hlocation;
DWORD Jass_GetSpellTargetLoc()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetSpellTargetLoc]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSpellTargetLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetSpellTargetLoc();
   return Py_BuildValue("I", rt);
}

// GetSpellTargetX 00235610 ()R
DWORD Jass_GetSpellTargetX()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetSpellTargetX]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSpellTargetX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetSpellTargetX();
   return Py_BuildValue("I", rt);
}

// GetSpellTargetY 002356f0 ()R
DWORD Jass_GetSpellTargetY()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetSpellTargetY]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSpellTargetY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetSpellTargetY();
   return Py_BuildValue("I", rt);
}

// GetSpellTargetDestructable 00235190 ()Hdestructable;
DWORD Jass_GetSpellTargetDestructable()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetSpellTargetDestructable]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSpellTargetDestructable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetSpellTargetDestructable();
   return Py_BuildValue("I", rt);
}

// GetSpellTargetItem 002352c0 ()Hitem;
DWORD Jass_GetSpellTargetItem()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetSpellTargetItem]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSpellTargetItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetSpellTargetItem();
   return Py_BuildValue("I", rt);
}

// GetSpellTargetUnit 002354e0 ()Hunit;
DWORD Jass_GetSpellTargetUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetSpellTargetUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSpellTargetUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetSpellTargetUnit();
   return Py_BuildValue("I", rt);
}

// GetLevelingUnit 00233180 ()Hunit;
DWORD Jass_GetLevelingUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetLevelingUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetLevelingUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetLevelingUnit();
   return Py_BuildValue("I", rt);
}

// GetLearningUnit 002330e0 ()Hunit;
DWORD Jass_GetLearningUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetLearningUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetLearningUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetLearningUnit();
   return Py_BuildValue("I", rt);
}

// GetLearnedSkill 00233060 ()I
DWORD Jass_GetLearnedSkill()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetLearnedSkill]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetLearnedSkill(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetLearnedSkill();
   return Py_BuildValue("I", rt);
}

// GetLearnedSkillLevel 002330a0 ()I
DWORD Jass_GetLearnedSkillLevel()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetLearnedSkillLevel]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetLearnedSkillLevel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetLearnedSkillLevel();
   return Py_BuildValue("I", rt);
}

// GetRevivableUnit 00234a40 ()Hunit;
DWORD Jass_GetRevivableUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetRevivableUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetRevivableUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetRevivableUnit();
   return Py_BuildValue("I", rt);
}

// GetRevivingUnit 00234aa0 ()Hunit;
DWORD Jass_GetRevivingUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetRevivingUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetRevivingUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetRevivingUnit();
   return Py_BuildValue("I", rt);
}

// GetSummoningUnit 00235ad0 ()Hunit;
DWORD Jass_GetSummoningUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetSummoningUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSummoningUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetSummoningUnit();
   return Py_BuildValue("I", rt);
}

// GetSummonedUnit 00235a50 ()Hunit;
DWORD Jass_GetSummonedUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetSummonedUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSummonedUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetSummonedUnit();
   return Py_BuildValue("I", rt);
}

// GetTransportUnit 00235ee0 ()Hunit;
DWORD Jass_GetTransportUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetTransportUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTransportUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetTransportUnit();
   return Py_BuildValue("I", rt);
}

// GetLoadedUnit 00233320 ()Hunit;
DWORD Jass_GetLoadedUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetLoadedUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetLoadedUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetLoadedUnit();
   return Py_BuildValue("I", rt);
}

// GetManipulatingUnit 002335b0 ()Hunit;
DWORD Jass_GetManipulatingUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetManipulatingUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetManipulatingUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetManipulatingUnit();
   return Py_BuildValue("I", rt);
}

// GetManipulatedItem 00233510 ()Hitem;
DWORD Jass_GetManipulatedItem()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetManipulatedItem]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetManipulatedItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetManipulatedItem();
   return Py_BuildValue("I", rt);
}

// TriggerRegisterPlayerAllianceChange 00249b90 (Htrigger;Hplayer;Halliancetype;)Hevent;
DWORD Jass_TriggerRegisterPlayerAllianceChange(DWORD arg_0_Htrigger, DWORD arg_4_Hplayer, DWORD arg_8_Halliancetype)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Halliancetype
       push eax
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterPlayerAllianceChange]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterPlayerAllianceChange(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Hplayer = 0;
   DWORD arg_8_Halliancetype = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Htrigger, &arg_4_Hplayer, &arg_8_Halliancetype))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterPlayerAllianceChange(arg_0_Htrigger, arg_4_Hplayer, arg_8_Halliancetype);
   return Py_BuildValue("I", rt);
}

// TriggerRegisterPlayerChatEvent 00249c60 (Htrigger;Hplayer;SB)Hevent;
DWORD Jass_TriggerRegisterPlayerChatEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hplayer, DWORD arg_8_S, DWORD arg_C_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterPlayerChatEvent]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterPlayerChatEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Hplayer = 0;
   DWORD arg_8_S = 0;
   DWORD arg_C_B = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Htrigger, &arg_4_Hplayer, &arg_8_S, &arg_C_B))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterPlayerChatEvent(arg_0_Htrigger, arg_4_Hplayer, arg_8_S, arg_C_B);
   return Py_BuildValue("I", rt);
}

// GetEventPlayerChatString 00232530 ()S
DWORD Jass_GetEventPlayerChatString()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetEventPlayerChatString]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetEventPlayerChatString(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetEventPlayerChatString();
   return Py_BuildValue("s", jstr2cstr(rt));
}

// GetEventPlayerChatStringMatched 00232570 ()S
DWORD Jass_GetEventPlayerChatStringMatched()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetEventPlayerChatStringMatched]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetEventPlayerChatStringMatched(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetEventPlayerChatStringMatched();
   return Py_BuildValue("s", jstr2cstr(rt));
}

// TriggerRegisterUnitStateEvent 0024a570 (Htrigger;Hunit;Hunitstate;Hlimitop;R)Hevent;
DWORD Jass_TriggerRegisterUnitStateEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hunit, DWORD arg_8_Hunitstate, DWORD arg_C_Hlimitop, DWORD arg_10_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_Hlimitop
       push eax
       mov eax, arg_8_Hunitstate
       push eax
       mov eax, arg_4_Hunit
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterUnitStateEvent]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterUnitStateEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Hunit = 0;
   DWORD arg_8_Hunitstate = 0;
   DWORD arg_C_Hlimitop = 0;
   DWORD arg_10_R = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Htrigger, &arg_4_Hunit, &arg_8_Hunitstate, &arg_C_Hlimitop, &arg_10_R))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterUnitStateEvent(arg_0_Htrigger, arg_4_Hunit, arg_8_Hunitstate, arg_C_Hlimitop, arg_10_R);
   return Py_BuildValue("I", rt);
}

// GetEventUnitState 00232620 ()Hunitstate;
DWORD Jass_GetEventUnitState()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetEventUnitState]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetEventUnitState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetEventUnitState();
   return Py_BuildValue("I", rt);
}

// TriggerRegisterDeathEvent 00249450 (Htrigger;Hwidget;)Hevent;
DWORD Jass_TriggerRegisterDeathEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hwidget)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hwidget
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterDeathEvent]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterDeathEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Hwidget = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htrigger, &arg_4_Hwidget))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterDeathEvent(arg_0_Htrigger, arg_4_Hwidget);
   return Py_BuildValue("I", rt);
}

// TriggerRegisterUnitEvent 0024a370 (Htrigger;Hunit;Hunitevent;)Hevent;
DWORD Jass_TriggerRegisterUnitEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hunit, DWORD arg_8_Hunitevent)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hunitevent
       push eax
       mov eax, arg_4_Hunit
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterUnitEvent]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterUnitEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Hunit = 0;
   DWORD arg_8_Hunitevent = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Htrigger, &arg_4_Hunit, &arg_8_Hunitevent))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterUnitEvent(arg_0_Htrigger, arg_4_Hunit, arg_8_Hunitevent);
   return Py_BuildValue("I", rt);
}

// GetEventDamage 00232420 ()R
DWORD Jass_GetEventDamage()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetEventDamage]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetEventDamage(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetEventDamage();
   return Py_BuildValue("I", rt);
}

// GetEventDamageSource 00232440 ()Hunit;
DWORD Jass_GetEventDamageSource()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetEventDamageSource]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetEventDamageSource(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetEventDamageSource();
   return Py_BuildValue("I", rt);
}

// GetEventDetectingPlayer 002324b0 ()Hplayer;
DWORD Jass_GetEventDetectingPlayer()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetEventDetectingPlayer]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetEventDetectingPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetEventDetectingPlayer();
   return Py_BuildValue("I", rt);
}

// GetEventTargetUnit 002325d0 ()Hunit;
DWORD Jass_GetEventTargetUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetEventTargetUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetEventTargetUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetEventTargetUnit();
   return Py_BuildValue("I", rt);
}

// TriggerRegisterFilterUnitEvent 00249780 (Htrigger;Hunit;Hunitevent;Hboolexpr;)Hevent;
DWORD Jass_TriggerRegisterFilterUnitEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hunit, DWORD arg_8_Hunitevent, DWORD arg_C_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hboolexpr
       push eax
       mov eax, arg_8_Hunitevent
       push eax
       mov eax, arg_4_Hunit
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterFilterUnitEvent]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterFilterUnitEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Hunit = 0;
   DWORD arg_8_Hunitevent = 0;
   DWORD arg_C_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Htrigger, &arg_4_Hunit, &arg_8_Hunitevent, &arg_C_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterFilterUnitEvent(arg_0_Htrigger, arg_4_Hunit, arg_8_Hunitevent, arg_C_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// TriggerRegisterUnitInRange 0024a480 (Htrigger;Hunit;RHboolexpr;)Hevent;
DWORD Jass_TriggerRegisterUnitInRange(DWORD arg_0_Htrigger, DWORD arg_4_Hunit, DWORD arg_8_R, DWORD arg_C_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hboolexpr
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_Hunit
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterUnitInRange]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterUnitInRange(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Hunit = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Htrigger, &arg_4_Hunit, &arg_8_R, &arg_C_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterUnitInRange(arg_0_Htrigger, arg_4_Hunit, arg_8_R, arg_C_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// TriggerRegisterEnterRegion 002496a0 (Htrigger;Hregion;Hboolexpr;)Hevent;
DWORD Jass_TriggerRegisterEnterRegion(DWORD arg_0_Htrigger, DWORD arg_4_Hregion, DWORD arg_8_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hboolexpr
       push eax
       mov eax, arg_4_Hregion
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterEnterRegion]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterEnterRegion(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Hregion = 0;
   DWORD arg_8_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Htrigger, &arg_4_Hregion, &arg_8_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterEnterRegion(arg_0_Htrigger, arg_4_Hregion, arg_8_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// TriggerRegisterLeaveRegion 00249ab0 (Htrigger;Hregion;Hboolexpr;)Hevent;
DWORD Jass_TriggerRegisterLeaveRegion(DWORD arg_0_Htrigger, DWORD arg_4_Hregion, DWORD arg_8_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hboolexpr
       push eax
       mov eax, arg_4_Hregion
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterLeaveRegion]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterLeaveRegion(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Hregion = 0;
   DWORD arg_8_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Htrigger, &arg_4_Hregion, &arg_8_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterLeaveRegion(arg_0_Htrigger, arg_4_Hregion, arg_8_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// GetTriggeringRegion 00236080 ()Hregion;
DWORD Jass_GetTriggeringRegion()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetTriggeringRegion]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTriggeringRegion(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetTriggeringRegion();
   return Py_BuildValue("I", rt);
}

// GetEnteringUnit 00232380 ()Hunit;
DWORD Jass_GetEnteringUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetEnteringUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetEnteringUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetEnteringUnit();
   return Py_BuildValue("I", rt);
}

// GetLeavingUnit 00233140 ()Hunit;
DWORD Jass_GetLeavingUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetLeavingUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetLeavingUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetLeavingUnit();
   return Py_BuildValue("I", rt);
}

// TriggerAddCondition 00249360 (Htrigger;Hboolexpr;)Htriggercondition;
DWORD Jass_TriggerAddCondition(DWORD arg_0_Htrigger, DWORD arg_4_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hboolexpr
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerAddCondition]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerAddCondition(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htrigger, &arg_4_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_TriggerAddCondition(arg_0_Htrigger, arg_4_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// TriggerRemoveCondition 0024a760 (Htrigger;Htriggercondition;)V
DWORD Jass_TriggerRemoveCondition(DWORD arg_0_Htrigger, DWORD arg_4_Htriggercondition)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Htriggercondition
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRemoveCondition]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRemoveCondition(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Htriggercondition = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htrigger, &arg_4_Htriggercondition))
       Py_RETURN_NONE;
   rt = Jass_TriggerRemoveCondition(arg_0_Htrigger, arg_4_Htriggercondition);
   return Py_BuildValue("I", rt);
}

// TriggerClearConditions 002493d0 (Htrigger;)V
DWORD Jass_TriggerClearConditions(DWORD arg_0_Htrigger)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerClearConditions]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerClearConditions(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htrigger))
       Py_RETURN_NONE;
   rt = Jass_TriggerClearConditions(arg_0_Htrigger);
   return Py_BuildValue("I", rt);
}

// TriggerAddAction 00249320 (Htrigger;C)Htriggeraction;
DWORD Jass_TriggerAddAction(DWORD arg_0_Htrigger, DWORD arg_4_C)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_C
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerAddAction]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerAddAction(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_C = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htrigger, &arg_4_C))
       Py_RETURN_NONE;
   rt = Jass_TriggerAddAction(arg_0_Htrigger, arg_4_C);
   return Py_BuildValue("I", rt);
}

// TriggerRemoveAction 0024a730 (Htrigger;Htriggeraction;)V
DWORD Jass_TriggerRemoveAction(DWORD arg_0_Htrigger, DWORD arg_4_Htriggeraction)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Htriggeraction
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRemoveAction]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRemoveAction(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Htriggeraction = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htrigger, &arg_4_Htriggeraction))
       Py_RETURN_NONE;
   rt = Jass_TriggerRemoveAction(arg_0_Htrigger, arg_4_Htriggeraction);
   return Py_BuildValue("I", rt);
}

// TriggerClearActions 002493b0 (Htrigger;)V
DWORD Jass_TriggerClearActions(DWORD arg_0_Htrigger)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerClearActions]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerClearActions(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htrigger))
       Py_RETURN_NONE;
   rt = Jass_TriggerClearActions(arg_0_Htrigger);
   return Py_BuildValue("I", rt);
}

// TriggerSleepAction 0024a790 (R)V
DWORD Jass_TriggerSleepAction(DWORD arg_0_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_R
       push eax
       call [_Jass_TriggerSleepAction]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerSleepAction(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_R))
       Py_RETURN_NONE;
   rt = Jass_TriggerSleepAction(arg_0_R);
   return Py_BuildValue("I", rt);
}

// TriggerWaitForSound 0024a7e0 (Hsound;R)V
DWORD Jass_TriggerWaitForSound(DWORD arg_0_Hsound, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_TriggerWaitForSound]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerWaitForSound(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hsound, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_TriggerWaitForSound(arg_0_Hsound, arg_4_R);
   return Py_BuildValue("I", rt);
}

// TriggerExecute 00249410 (Htrigger;)V
DWORD Jass_TriggerExecute(DWORD arg_0_Htrigger)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerExecute]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerExecute(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htrigger))
       Py_RETURN_NONE;
   rt = Jass_TriggerExecute(arg_0_Htrigger);
   return Py_BuildValue("I", rt);
}

// TriggerExecuteWait 00249430 (Htrigger;)V
DWORD Jass_TriggerExecuteWait(DWORD arg_0_Htrigger)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerExecuteWait]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerExecuteWait(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htrigger))
       Py_RETURN_NONE;
   rt = Jass_TriggerExecuteWait(arg_0_Htrigger);
   return Py_BuildValue("I", rt);
}

// TriggerEvaluate 002493f0 (Htrigger;)B
DWORD Jass_TriggerEvaluate(DWORD arg_0_Htrigger)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerEvaluate]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerEvaluate(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htrigger))
       Py_RETURN_NONE;
   rt = Jass_TriggerEvaluate(arg_0_Htrigger);
   return Py_BuildValue("I", rt);
}

// TriggerSyncStart 0024a7d0 ()V
DWORD Jass_TriggerSyncStart()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_TriggerSyncStart]
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerSyncStart(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_TriggerSyncStart();
   return Py_BuildValue("I", rt);
}

// TriggerSyncReady 0024a7a0 ()V
DWORD Jass_TriggerSyncReady()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_TriggerSyncReady]
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerSyncReady(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_TriggerSyncReady();
   return Py_BuildValue("I", rt);
}

// GetTriggerWidget 00236060 ()Hwidget;
DWORD Jass_GetTriggerWidget()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetTriggerWidget]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTriggerWidget(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetTriggerWidget();
   return Py_BuildValue("I", rt);
}

// GetTriggerDestructable 00235f60 ()Hdestructable;
DWORD Jass_GetTriggerDestructable()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetTriggerDestructable]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTriggerDestructable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetTriggerDestructable();
   return Py_BuildValue("I", rt);
}

// GetTriggerUnit 00236040 ()Hunit;
DWORD Jass_GetTriggerUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetTriggerUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTriggerUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetTriggerUnit();
   return Py_BuildValue("I", rt);
}

// GetTriggerPlayer 00236020 ()Hplayer;
DWORD Jass_GetTriggerPlayer()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetTriggerPlayer]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTriggerPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetTriggerPlayer();
   return Py_BuildValue("I", rt);
}

// GetTriggeringTrigger 00236100 ()Htrigger;
DWORD Jass_GetTriggeringTrigger()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetTriggeringTrigger]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTriggeringTrigger(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetTriggeringTrigger();
   return Py_BuildValue("I", rt);
}

// GetTriggerEventId 00235fc0 ()Heventid;
DWORD Jass_GetTriggerEventId()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetTriggerEventId]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTriggerEventId(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetTriggerEventId();
   return Py_BuildValue("I", rt);
}

// GetTriggerEvalCount 00235f80 (Htrigger;)I
DWORD Jass_GetTriggerEvalCount(DWORD arg_0_Htrigger)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_GetTriggerEvalCount]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTriggerEvalCount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htrigger))
       Py_RETURN_NONE;
   rt = Jass_GetTriggerEvalCount(arg_0_Htrigger);
   return Py_BuildValue("I", rt);
}

// GetTriggerExecCount 00236000 (Htrigger;)I
DWORD Jass_GetTriggerExecCount(DWORD arg_0_Htrigger)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_GetTriggerExecCount]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTriggerExecCount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htrigger))
       Py_RETURN_NONE;
   rt = Jass_GetTriggerExecCount(arg_0_Htrigger);
   return Py_BuildValue("I", rt);
}

// GetFilterUnit 00232720 ()Hunit;
DWORD Jass_GetFilterUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetFilterUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetFilterUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetFilterUnit();
   return Py_BuildValue("I", rt);
}

// GetEnumUnit 00232400 ()Hunit;
DWORD Jass_GetEnumUnit()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetEnumUnit]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetEnumUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetEnumUnit();
   return Py_BuildValue("I", rt);
}

// GetEnumPlayer 002323e0 ()Hplayer;
DWORD Jass_GetEnumPlayer()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetEnumPlayer]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetEnumPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetEnumPlayer();
   return Py_BuildValue("I", rt);
}

// GetFilterPlayer 00232700 ()Hplayer;
DWORD Jass_GetFilterPlayer()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetFilterPlayer]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetFilterPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetFilterPlayer();
   return Py_BuildValue("I", rt);
}

// GetFilterDestructable 002326c0 ()Hdestructable;
DWORD Jass_GetFilterDestructable()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetFilterDestructable]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetFilterDestructable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetFilterDestructable();
   return Py_BuildValue("I", rt);
}

// GetEnumDestructable 002323a0 ()Hdestructable;
DWORD Jass_GetEnumDestructable()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetEnumDestructable]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetEnumDestructable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetEnumDestructable();
   return Py_BuildValue("I", rt);
}

// GetFilterItem 002326e0 ()Hitem;
DWORD Jass_GetFilterItem()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetFilterItem]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetFilterItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetFilterItem();
   return Py_BuildValue("I", rt);
}

// GetEnumItem 002323c0 ()Hitem;
DWORD Jass_GetEnumItem()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetEnumItem]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetEnumItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetEnumItem();
   return Py_BuildValue("I", rt);
}

// CreateGroup 0022e2d0 ()Hgroup;
DWORD Jass_CreateGroup()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CreateGroup]
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateGroup(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CreateGroup();
   return Py_BuildValue("I", rt);
}

// DestroyGroup 0022f890 (Hgroup;)V
DWORD Jass_DestroyGroup(DWORD arg_0_Hgroup)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_DestroyGroup]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyGroup(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hgroup))
       Py_RETURN_NONE;
   rt = Jass_DestroyGroup(arg_0_Hgroup);
   return Py_BuildValue("I", rt);
}

// GroupAddUnit 00236b40 (Hgroup;Hunit;)V
DWORD Jass_GroupAddUnit(DWORD arg_0_Hgroup, DWORD arg_4_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hunit
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupAddUnit]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupAddUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_Hunit = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hgroup, &arg_4_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GroupAddUnit(arg_0_Hgroup, arg_4_Hunit);
   return Py_BuildValue("I", rt);
}

// GroupRemoveUnit 00237060 (Hgroup;Hunit;)V
DWORD Jass_GroupRemoveUnit(DWORD arg_0_Hgroup, DWORD arg_4_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hunit
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupRemoveUnit]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupRemoveUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_Hunit = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hgroup, &arg_4_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GroupRemoveUnit(arg_0_Hgroup, arg_4_Hunit);
   return Py_BuildValue("I", rt);
}

// GroupClear 00236b70 (Hgroup;)V
DWORD Jass_GroupClear(DWORD arg_0_Hgroup)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupClear]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupClear(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hgroup))
       Py_RETURN_NONE;
   rt = Jass_GroupClear(arg_0_Hgroup);
   return Py_BuildValue("I", rt);
}

// GroupEnumUnitsOfType 00236d80 (Hgroup;SHboolexpr;)V
DWORD Jass_GroupEnumUnitsOfType(DWORD arg_0_Hgroup, DWORD arg_4_S, DWORD arg_8_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hboolexpr
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupEnumUnitsOfType]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupEnumUnitsOfType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgroup, &arg_4_S, &arg_8_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_GroupEnumUnitsOfType(arg_0_Hgroup, arg_4_S, arg_8_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// GroupEnumUnitsOfTypeCounted 00236dd0 (Hgroup;SHboolexpr;I)V
DWORD Jass_GroupEnumUnitsOfTypeCounted(DWORD arg_0_Hgroup, DWORD arg_4_S, DWORD arg_8_Hboolexpr, DWORD arg_C_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_Hboolexpr
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupEnumUnitsOfTypeCounted]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupEnumUnitsOfTypeCounted(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_Hboolexpr = 0;
   DWORD arg_C_I = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hgroup, &arg_4_S, &arg_8_Hboolexpr, &arg_C_I))
       Py_RETURN_NONE;
   rt = Jass_GroupEnumUnitsOfTypeCounted(arg_0_Hgroup, arg_4_S, arg_8_Hboolexpr, arg_C_I);
   return Py_BuildValue("I", rt);
}

// GroupEnumUnitsInRect 00236c80 (Hgroup;Hrect;Hboolexpr;)V
DWORD Jass_GroupEnumUnitsInRect(DWORD arg_0_Hgroup, DWORD arg_4_Hrect, DWORD arg_8_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hboolexpr
       push eax
       mov eax, arg_4_Hrect
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupEnumUnitsInRect]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupEnumUnitsInRect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_Hrect = 0;
   DWORD arg_8_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgroup, &arg_4_Hrect, &arg_8_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_GroupEnumUnitsInRect(arg_0_Hgroup, arg_4_Hrect, arg_8_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// GroupEnumUnitsInRectCounted 00236ce0 (Hgroup;Hrect;Hboolexpr;I)V
DWORD Jass_GroupEnumUnitsInRectCounted(DWORD arg_0_Hgroup, DWORD arg_4_Hrect, DWORD arg_8_Hboolexpr, DWORD arg_C_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_Hboolexpr
       push eax
       mov eax, arg_4_Hrect
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupEnumUnitsInRectCounted]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupEnumUnitsInRectCounted(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_Hrect = 0;
   DWORD arg_8_Hboolexpr = 0;
   DWORD arg_C_I = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hgroup, &arg_4_Hrect, &arg_8_Hboolexpr, &arg_C_I))
       Py_RETURN_NONE;
   rt = Jass_GroupEnumUnitsInRectCounted(arg_0_Hgroup, arg_4_Hrect, arg_8_Hboolexpr, arg_C_I);
   return Py_BuildValue("I", rt);
}

// GroupEnumUnitsOfPlayer 00236d40 (Hgroup;Hplayer;Hboolexpr;)V
DWORD Jass_GroupEnumUnitsOfPlayer(DWORD arg_0_Hgroup, DWORD arg_4_Hplayer, DWORD arg_8_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hboolexpr
       push eax
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupEnumUnitsOfPlayer]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupEnumUnitsOfPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_Hplayer = 0;
   DWORD arg_8_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgroup, &arg_4_Hplayer, &arg_8_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_GroupEnumUnitsOfPlayer(arg_0_Hgroup, arg_4_Hplayer, arg_8_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// GroupEnumUnitsInRange 00236b90 (Hgroup;RRRHboolexpr;)V
DWORD Jass_GroupEnumUnitsInRange(DWORD arg_0_Hgroup, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_Hboolexpr
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupEnumUnitsInRange]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupEnumUnitsInRange(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hgroup, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_GroupEnumUnitsInRange(arg_0_Hgroup, arg_4_R, arg_8_R, arg_C_R, arg_10_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// GroupEnumUnitsInRangeOfLoc 00236c00 (Hgroup;Hlocation;RHboolexpr;)V
DWORD Jass_GroupEnumUnitsInRangeOfLoc(DWORD arg_0_Hgroup, DWORD arg_4_Hlocation, DWORD arg_8_R, DWORD arg_C_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hboolexpr
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_Hlocation
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupEnumUnitsInRangeOfLoc]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupEnumUnitsInRangeOfLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_Hlocation = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hgroup, &arg_4_Hlocation, &arg_8_R, &arg_C_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_GroupEnumUnitsInRangeOfLoc(arg_0_Hgroup, arg_4_Hlocation, arg_8_R, arg_C_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// GroupEnumUnitsInRangeCounted 00236bc0 (Hgroup;RRRHboolexpr;I)V
DWORD Jass_GroupEnumUnitsInRangeCounted(DWORD arg_0_Hgroup, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_Hboolexpr, DWORD arg_14_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_14_I
       push eax
       mov eax, arg_10_Hboolexpr
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupEnumUnitsInRangeCounted]
       add esp, 0x18
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupEnumUnitsInRangeCounted(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_Hboolexpr = 0;
   DWORD arg_14_I = 0;
   if (!PyArg_ParseTuple(args, "IIIIII", &arg_0_Hgroup, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_Hboolexpr, &arg_14_I))
       Py_RETURN_NONE;
   rt = Jass_GroupEnumUnitsInRangeCounted(arg_0_Hgroup, arg_4_R, arg_8_R, arg_C_R, arg_10_Hboolexpr, arg_14_I);
   return Py_BuildValue("I", rt);
}

// GroupEnumUnitsInRangeOfLocCounted 00236c40 (Hgroup;Hlocation;RHboolexpr;I)V
DWORD Jass_GroupEnumUnitsInRangeOfLocCounted(DWORD arg_0_Hgroup, DWORD arg_4_Hlocation, DWORD arg_8_R, DWORD arg_C_Hboolexpr, DWORD arg_10_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_Hboolexpr
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_Hlocation
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupEnumUnitsInRangeOfLocCounted]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupEnumUnitsInRangeOfLocCounted(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_Hlocation = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_Hboolexpr = 0;
   DWORD arg_10_I = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hgroup, &arg_4_Hlocation, &arg_8_R, &arg_C_Hboolexpr, &arg_10_I))
       Py_RETURN_NONE;
   rt = Jass_GroupEnumUnitsInRangeOfLocCounted(arg_0_Hgroup, arg_4_Hlocation, arg_8_R, arg_C_Hboolexpr, arg_10_I);
   return Py_BuildValue("I", rt);
}

// GroupEnumUnitsSelected 00236e20 (Hgroup;Hplayer;Hboolexpr;)V
DWORD Jass_GroupEnumUnitsSelected(DWORD arg_0_Hgroup, DWORD arg_4_Hplayer, DWORD arg_8_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hboolexpr
       push eax
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupEnumUnitsSelected]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupEnumUnitsSelected(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_Hplayer = 0;
   DWORD arg_8_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgroup, &arg_4_Hplayer, &arg_8_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_GroupEnumUnitsSelected(arg_0_Hgroup, arg_4_Hplayer, arg_8_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// GroupImmediateOrder 00236f70 (Hgroup;S)B
DWORD Jass_GroupImmediateOrder(DWORD arg_0_Hgroup, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupImmediateOrder]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupImmediateOrder(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hgroup, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_GroupImmediateOrder(arg_0_Hgroup, arg_4_S);
   return Py_BuildValue("I", rt);
}

// GroupImmediateOrderById 00236f90 (Hgroup;I)B
DWORD Jass_GroupImmediateOrderById(DWORD arg_0_Hgroup, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupImmediateOrderById]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupImmediateOrderById(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hgroup, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_GroupImmediateOrderById(arg_0_Hgroup, arg_4_I);
   return Py_BuildValue("I", rt);
}

// GroupPointOrder 00236fb0 (Hgroup;SRR)B
DWORD Jass_GroupPointOrder(DWORD arg_0_Hgroup, DWORD arg_4_S, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupPointOrder]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupPointOrder(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hgroup, &arg_4_S, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_GroupPointOrder(arg_0_Hgroup, arg_4_S, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// GroupPointOrderLoc 00237040 (Hgroup;SHlocation;)B
DWORD Jass_GroupPointOrderLoc(DWORD arg_0_Hgroup, DWORD arg_4_S, DWORD arg_8_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hlocation
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupPointOrderLoc]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupPointOrderLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgroup, &arg_4_S, &arg_8_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_GroupPointOrderLoc(arg_0_Hgroup, arg_4_S, arg_8_Hlocation);
   return Py_BuildValue("I", rt);
}

// GroupPointOrderById 00236fd0 (Hgroup;IRR)B
DWORD Jass_GroupPointOrderById(DWORD arg_0_Hgroup, DWORD arg_4_I, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupPointOrderById]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupPointOrderById(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hgroup, &arg_4_I, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_GroupPointOrderById(arg_0_Hgroup, arg_4_I, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// GroupPointOrderByIdLoc 00237000 (Hgroup;IHlocation;)B
DWORD Jass_GroupPointOrderByIdLoc(DWORD arg_0_Hgroup, DWORD arg_4_I, DWORD arg_8_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hlocation
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupPointOrderByIdLoc]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupPointOrderByIdLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgroup, &arg_4_I, &arg_8_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_GroupPointOrderByIdLoc(arg_0_Hgroup, arg_4_I, arg_8_Hlocation);
   return Py_BuildValue("I", rt);
}

// GroupTargetOrder 00237090 (Hgroup;SHwidget;)B
DWORD Jass_GroupTargetOrder(DWORD arg_0_Hgroup, DWORD arg_4_S, DWORD arg_8_Hwidget)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hwidget
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupTargetOrder]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupTargetOrder(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_Hwidget = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgroup, &arg_4_S, &arg_8_Hwidget))
       Py_RETURN_NONE;
   rt = Jass_GroupTargetOrder(arg_0_Hgroup, arg_4_S, arg_8_Hwidget);
   return Py_BuildValue("I", rt);
}

// GroupTargetOrderById 002370b0 (Hgroup;IHwidget;)B
DWORD Jass_GroupTargetOrderById(DWORD arg_0_Hgroup, DWORD arg_4_I, DWORD arg_8_Hwidget)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hwidget
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_GroupTargetOrderById]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupTargetOrderById(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_Hwidget = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgroup, &arg_4_I, &arg_8_Hwidget))
       Py_RETURN_NONE;
   rt = Jass_GroupTargetOrderById(arg_0_Hgroup, arg_4_I, arg_8_Hwidget);
   return Py_BuildValue("I", rt);
}

// ForGroup 00230ea0 (Hgroup;C)V
DWORD Jass_ForGroup(DWORD arg_0_Hgroup, DWORD arg_4_C)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_C
       push eax
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_ForGroup]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* ForGroup(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   DWORD arg_4_C = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hgroup, &arg_4_C))
       Py_RETURN_NONE;
   rt = Jass_ForGroup(arg_0_Hgroup, arg_4_C);
   return Py_BuildValue("I", rt);
}

// FirstOfGroup 00230aa0 (Hgroup;)Hunit;
DWORD Jass_FirstOfGroup(DWORD arg_0_Hgroup)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hgroup
       push eax
       call [_Jass_FirstOfGroup]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* FirstOfGroup(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgroup = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hgroup))
       Py_RETURN_NONE;
   rt = Jass_FirstOfGroup(arg_0_Hgroup);
   return Py_BuildValue("I", rt);
}

// CreateForce 0022e1f0 ()Hforce;
DWORD Jass_CreateForce()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CreateForce]
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateForce(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CreateForce();
   return Py_BuildValue("I", rt);
}

// DestroyForce 0022f870 (Hforce;)V
DWORD Jass_DestroyForce(DWORD arg_0_Hforce)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hforce
       push eax
       call [_Jass_DestroyForce]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyForce(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hforce = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hforce))
       Py_RETURN_NONE;
   rt = Jass_DestroyForce(arg_0_Hforce);
   return Py_BuildValue("I", rt);
}

// ForceAddPlayer 00230ec0 (Hforce;Hplayer;)V
DWORD Jass_ForceAddPlayer(DWORD arg_0_Hforce, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hforce
       push eax
       call [_Jass_ForceAddPlayer]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* ForceAddPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hforce = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hforce, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_ForceAddPlayer(arg_0_Hforce, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// ForceRemovePlayer 002310a0 (Hforce;Hplayer;)V
DWORD Jass_ForceRemovePlayer(DWORD arg_0_Hforce, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hforce
       push eax
       call [_Jass_ForceRemovePlayer]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* ForceRemovePlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hforce = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hforce, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_ForceRemovePlayer(arg_0_Hforce, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// ForceClear 00230f40 (Hforce;)V
DWORD Jass_ForceClear(DWORD arg_0_Hforce)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hforce
       push eax
       call [_Jass_ForceClear]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ForceClear(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hforce = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hforce))
       Py_RETURN_NONE;
   rt = Jass_ForceClear(arg_0_Hforce);
   return Py_BuildValue("I", rt);
}

// ForceEnumPlayers 00230fe0 (Hforce;Hboolexpr;)V
DWORD Jass_ForceEnumPlayers(DWORD arg_0_Hforce, DWORD arg_4_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hboolexpr
       push eax
       mov eax, arg_0_Hforce
       push eax
       call [_Jass_ForceEnumPlayers]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* ForceEnumPlayers(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hforce = 0;
   DWORD arg_4_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hforce, &arg_4_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_ForceEnumPlayers(arg_0_Hforce, arg_4_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// ForceEnumPlayersCounted 00231010 (Hforce;Hboolexpr;I)V
DWORD Jass_ForceEnumPlayersCounted(DWORD arg_0_Hforce, DWORD arg_4_Hboolexpr, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_Hboolexpr
       push eax
       mov eax, arg_0_Hforce
       push eax
       call [_Jass_ForceEnumPlayersCounted]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* ForceEnumPlayersCounted(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hforce = 0;
   DWORD arg_4_Hboolexpr = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hforce, &arg_4_Hboolexpr, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_ForceEnumPlayersCounted(arg_0_Hforce, arg_4_Hboolexpr, arg_8_I);
   return Py_BuildValue("I", rt);
}

// ForceEnumAllies 00230f60 (Hforce;Hplayer;Hboolexpr;)V
DWORD Jass_ForceEnumAllies(DWORD arg_0_Hforce, DWORD arg_4_Hplayer, DWORD arg_8_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hboolexpr
       push eax
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hforce
       push eax
       call [_Jass_ForceEnumAllies]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* ForceEnumAllies(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hforce = 0;
   DWORD arg_4_Hplayer = 0;
   DWORD arg_8_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hforce, &arg_4_Hplayer, &arg_8_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_ForceEnumAllies(arg_0_Hforce, arg_4_Hplayer, arg_8_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// ForceEnumEnemies 00230fa0 (Hforce;Hplayer;Hboolexpr;)V
DWORD Jass_ForceEnumEnemies(DWORD arg_0_Hforce, DWORD arg_4_Hplayer, DWORD arg_8_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hboolexpr
       push eax
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hforce
       push eax
       call [_Jass_ForceEnumEnemies]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* ForceEnumEnemies(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hforce = 0;
   DWORD arg_4_Hplayer = 0;
   DWORD arg_8_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hforce, &arg_4_Hplayer, &arg_8_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_ForceEnumEnemies(arg_0_Hforce, arg_4_Hplayer, arg_8_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// ForForce 00230e80 (Hforce;C)V
DWORD Jass_ForForce(DWORD arg_0_Hforce, DWORD arg_4_C)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_C
       push eax
       mov eax, arg_0_Hforce
       push eax
       call [_Jass_ForForce]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* ForForce(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hforce = 0;
   DWORD arg_4_C = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hforce, &arg_4_C))
       Py_RETURN_NONE;
   rt = Jass_ForForce(arg_0_Hforce, arg_4_C);
   return Py_BuildValue("I", rt);
}

// GetWidgetLife 00236960 (Hwidget;)R
DWORD Jass_GetWidgetLife(DWORD arg_0_Hwidget)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hwidget
       push eax
       call [_Jass_GetWidgetLife]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetWidgetLife(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hwidget = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hwidget))
       Py_RETURN_NONE;
   rt = Jass_GetWidgetLife(arg_0_Hwidget);
   return Py_BuildValue("I", rt);
}

// SetWidgetLife 002480c0 (Hwidget;R)V
DWORD Jass_SetWidgetLife(DWORD arg_0_Hwidget, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hwidget
       push eax
       call [_Jass_SetWidgetLife]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetWidgetLife(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hwidget = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hwidget, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetWidgetLife(arg_0_Hwidget, arg_4_R);
   return Py_BuildValue("I", rt);
}

// GetWidgetX 00236990 (Hwidget;)R
DWORD Jass_GetWidgetX(DWORD arg_0_Hwidget)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hwidget
       push eax
       call [_Jass_GetWidgetX]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetWidgetX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hwidget = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hwidget))
       Py_RETURN_NONE;
   rt = Jass_GetWidgetX(arg_0_Hwidget);
   return Py_BuildValue("I", rt);
}

// GetWidgetY 002369d0 (Hwidget;)R
DWORD Jass_GetWidgetY(DWORD arg_0_Hwidget)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hwidget
       push eax
       call [_Jass_GetWidgetY]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetWidgetY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hwidget = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hwidget))
       Py_RETURN_NONE;
   rt = Jass_GetWidgetY(arg_0_Hwidget);
   return Py_BuildValue("I", rt);
}

// CreateDestructable 0022dea0 (IRRRRI)Hdestructable;
DWORD Jass_CreateDestructable(DWORD arg_0_I, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_14_I
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_CreateDestructable]
       add esp, 0x18
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateDestructable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_I = 0;
   if (!PyArg_ParseTuple(args, "IIIIII", &arg_0_I, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_R, &arg_14_I))
       Py_RETURN_NONE;
   rt = Jass_CreateDestructable(arg_0_I, arg_4_R, arg_8_R, arg_C_R, arg_10_R, arg_14_I);
   return Py_BuildValue("I", rt);
}

// CreateDestructableZ 0022def0 (IRRRRRI)Hdestructable;
DWORD Jass_CreateDestructableZ(DWORD arg_0_I, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_18_I
       push eax
       mov eax, arg_14_R
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_CreateDestructableZ]
       add esp, 0x1c
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateDestructableZ(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_R = 0;
   DWORD arg_18_I = 0;
   if (!PyArg_ParseTuple(args, "IIIIIII", &arg_0_I, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_R, &arg_14_R, &arg_18_I))
       Py_RETURN_NONE;
   rt = Jass_CreateDestructableZ(arg_0_I, arg_4_R, arg_8_R, arg_C_R, arg_10_R, arg_14_R, arg_18_I);
   return Py_BuildValue("I", rt);
}

// CreateDeadDestructable 0022ddb0 (IRRRRI)Hdestructable;
DWORD Jass_CreateDeadDestructable(DWORD arg_0_I, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_14_I
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_CreateDeadDestructable]
       add esp, 0x18
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateDeadDestructable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_I = 0;
   if (!PyArg_ParseTuple(args, "IIIIII", &arg_0_I, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_R, &arg_14_I))
       Py_RETURN_NONE;
   rt = Jass_CreateDeadDestructable(arg_0_I, arg_4_R, arg_8_R, arg_C_R, arg_10_R, arg_14_I);
   return Py_BuildValue("I", rt);
}

// CreateDeadDestructableZ 0022de00 (IRRRRRI)Hdestructable;
DWORD Jass_CreateDeadDestructableZ(DWORD arg_0_I, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_18_I
       push eax
       mov eax, arg_14_R
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_CreateDeadDestructableZ]
       add esp, 0x1c
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateDeadDestructableZ(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_R = 0;
   DWORD arg_18_I = 0;
   if (!PyArg_ParseTuple(args, "IIIIIII", &arg_0_I, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_R, &arg_14_R, &arg_18_I))
       Py_RETURN_NONE;
   rt = Jass_CreateDeadDestructableZ(arg_0_I, arg_4_R, arg_8_R, arg_C_R, arg_10_R, arg_14_R, arg_18_I);
   return Py_BuildValue("I", rt);
}

// RemoveDestructable 00242fd0 (Hdestructable;)V
DWORD Jass_RemoveDestructable(DWORD arg_0_Hdestructable)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_RemoveDestructable]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveDestructable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hdestructable))
       Py_RETURN_NONE;
   rt = Jass_RemoveDestructable(arg_0_Hdestructable);
   return Py_BuildValue("I", rt);
}

// KillDestructable 0023fec0 (Hdestructable;)V
DWORD Jass_KillDestructable(DWORD arg_0_Hdestructable)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_KillDestructable]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* KillDestructable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hdestructable))
       Py_RETURN_NONE;
   rt = Jass_KillDestructable(arg_0_Hdestructable);
   return Py_BuildValue("I", rt);
}

// SetDestructableInvulnerable 00244e10 (Hdestructable;B)V
DWORD Jass_SetDestructableInvulnerable(DWORD arg_0_Hdestructable, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_SetDestructableInvulnerable]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetDestructableInvulnerable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hdestructable, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetDestructableInvulnerable(arg_0_Hdestructable, arg_4_B);
   return Py_BuildValue("I", rt);
}

// IsDestructableInvulnerable 00237a90 (Hdestructable;)B
DWORD Jass_IsDestructableInvulnerable(DWORD arg_0_Hdestructable)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_IsDestructableInvulnerable]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsDestructableInvulnerable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hdestructable))
       Py_RETURN_NONE;
   rt = Jass_IsDestructableInvulnerable(arg_0_Hdestructable);
   return Py_BuildValue("I", rt);
}

// EnumDestructablesInRect 00230390 (Hrect;Hboolexpr;C)V
DWORD Jass_EnumDestructablesInRect(DWORD arg_0_Hrect, DWORD arg_4_Hboolexpr, DWORD arg_8_C)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_C
       push eax
       mov eax, arg_4_Hboolexpr
       push eax
       mov eax, arg_0_Hrect
       push eax
       call [_Jass_EnumDestructablesInRect]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* EnumDestructablesInRect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hrect = 0;
   DWORD arg_4_Hboolexpr = 0;
   DWORD arg_8_C = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hrect, &arg_4_Hboolexpr, &arg_8_C))
       Py_RETURN_NONE;
   rt = Jass_EnumDestructablesInRect(arg_0_Hrect, arg_4_Hboolexpr, arg_8_C);
   return Py_BuildValue("I", rt);
}

// GetDestructableTypeId 00232280 (Hdestructable;)I
DWORD Jass_GetDestructableTypeId(DWORD arg_0_Hdestructable)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_GetDestructableTypeId]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetDestructableTypeId(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hdestructable))
       Py_RETURN_NONE;
   rt = Jass_GetDestructableTypeId(arg_0_Hdestructable);
   return Py_BuildValue("I", rt);
}

// GetDestructableX 002322a0 (Hdestructable;)R
DWORD Jass_GetDestructableX(DWORD arg_0_Hdestructable)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_GetDestructableX]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetDestructableX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hdestructable))
       Py_RETURN_NONE;
   rt = Jass_GetDestructableX(arg_0_Hdestructable);
   return Py_BuildValue("I", rt);
}

// GetDestructableY 002322e0 (Hdestructable;)R
DWORD Jass_GetDestructableY(DWORD arg_0_Hdestructable)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_GetDestructableY]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetDestructableY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hdestructable))
       Py_RETURN_NONE;
   rt = Jass_GetDestructableY(arg_0_Hdestructable);
   return Py_BuildValue("I", rt);
}

// SetDestructableLife 00244e30 (Hdestructable;R)V
DWORD Jass_SetDestructableLife(DWORD arg_0_Hdestructable, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_SetDestructableLife]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetDestructableLife(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hdestructable, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetDestructableLife(arg_0_Hdestructable, arg_4_R);
   return Py_BuildValue("I", rt);
}

// GetDestructableLife 002321c0 (Hdestructable;)R
DWORD Jass_GetDestructableLife(DWORD arg_0_Hdestructable)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_GetDestructableLife]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetDestructableLife(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hdestructable))
       Py_RETURN_NONE;
   rt = Jass_GetDestructableLife(arg_0_Hdestructable);
   return Py_BuildValue("I", rt);
}

// SetDestructableMaxLife 00244e50 (Hdestructable;R)V
DWORD Jass_SetDestructableMaxLife(DWORD arg_0_Hdestructable, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_SetDestructableMaxLife]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetDestructableMaxLife(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hdestructable, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetDestructableMaxLife(arg_0_Hdestructable, arg_4_R);
   return Py_BuildValue("I", rt);
}

// GetDestructableMaxLife 00232200 (Hdestructable;)R
DWORD Jass_GetDestructableMaxLife(DWORD arg_0_Hdestructable)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_GetDestructableMaxLife]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetDestructableMaxLife(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hdestructable))
       Py_RETURN_NONE;
   rt = Jass_GetDestructableMaxLife(arg_0_Hdestructable);
   return Py_BuildValue("I", rt);
}

// DestructableRestoreLife 0022fbd0 (Hdestructable;RB)V
DWORD Jass_DestructableRestoreLife(DWORD arg_0_Hdestructable, DWORD arg_4_R, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_DestructableRestoreLife]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* DestructableRestoreLife(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hdestructable, &arg_4_R, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_DestructableRestoreLife(arg_0_Hdestructable, arg_4_R, arg_8_B);
   return Py_BuildValue("I", rt);
}

// QueueDestructableAnimation 002429e0 (Hdestructable;S)V
DWORD Jass_QueueDestructableAnimation(DWORD arg_0_Hdestructable, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_QueueDestructableAnimation]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* QueueDestructableAnimation(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hdestructable, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_QueueDestructableAnimation(arg_0_Hdestructable, arg_4_S);
   return Py_BuildValue("I", rt);
}

// SetDestructableAnimation 00244d20 (Hdestructable;S)V
DWORD Jass_SetDestructableAnimation(DWORD arg_0_Hdestructable, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_SetDestructableAnimation]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetDestructableAnimation(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hdestructable, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_SetDestructableAnimation(arg_0_Hdestructable, arg_4_S);
   return Py_BuildValue("I", rt);
}

// SetDestructableAnimationSpeed 00244de0 (Hdestructable;R)V
DWORD Jass_SetDestructableAnimationSpeed(DWORD arg_0_Hdestructable, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_SetDestructableAnimationSpeed]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetDestructableAnimationSpeed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hdestructable, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetDestructableAnimationSpeed(arg_0_Hdestructable, arg_4_R);
   return Py_BuildValue("I", rt);
}

// ShowDestructable 002480e0 (Hdestructable;B)V
DWORD Jass_ShowDestructable(DWORD arg_0_Hdestructable, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_ShowDestructable]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* ShowDestructable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hdestructable, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_ShowDestructable(arg_0_Hdestructable, arg_4_B);
   return Py_BuildValue("I", rt);
}

// GetDestructableOccluderHeight 00232260 (Hdestructable;)R
DWORD Jass_GetDestructableOccluderHeight(DWORD arg_0_Hdestructable)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_GetDestructableOccluderHeight]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetDestructableOccluderHeight(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hdestructable))
       Py_RETURN_NONE;
   rt = Jass_GetDestructableOccluderHeight(arg_0_Hdestructable);
   return Py_BuildValue("I", rt);
}

// SetDestructableOccluderHeight 00244ea0 (Hdestructable;R)V
DWORD Jass_SetDestructableOccluderHeight(DWORD arg_0_Hdestructable, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_SetDestructableOccluderHeight]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetDestructableOccluderHeight(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hdestructable, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetDestructableOccluderHeight(arg_0_Hdestructable, arg_4_R);
   return Py_BuildValue("I", rt);
}

// GetDestructableName 00232230 (Hdestructable;)S
DWORD Jass_GetDestructableName(DWORD arg_0_Hdestructable)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hdestructable
       push eax
       call [_Jass_GetDestructableName]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetDestructableName(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdestructable = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hdestructable))
       Py_RETURN_NONE;
   rt = Jass_GetDestructableName(arg_0_Hdestructable);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// CreateUnit 0022f140 (Hplayer;IRRR)Hunit;
DWORD Jass_CreateUnit(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_CreateUnit]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hplayer, &arg_4_I, &arg_8_R, &arg_C_R, &arg_10_R))
       Py_RETURN_NONE;
   rt = Jass_CreateUnit(arg_0_Hplayer, arg_4_I, arg_8_R, arg_C_R, arg_10_R);
   return Py_BuildValue("I", rt);
}

// CreateUnitByName 0022f220 (Hplayer;SRRR)Hunit;
DWORD Jass_CreateUnitByName(DWORD arg_0_Hplayer, DWORD arg_4_S, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_CreateUnitByName]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateUnitByName(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hplayer, &arg_4_S, &arg_8_R, &arg_C_R, &arg_10_R))
       Py_RETURN_NONE;
   rt = Jass_CreateUnitByName(arg_0_Hplayer, arg_4_S, arg_8_R, arg_C_R, arg_10_R);
   return Py_BuildValue("I", rt);
}

// CreateUnitAtLoc 0022f1a0 (Hplayer;IHlocation;R)Hunit;
DWORD Jass_CreateUnitAtLoc(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_Hlocation, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_Hlocation
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_CreateUnitAtLoc]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateUnitAtLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_Hlocation = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hplayer, &arg_4_I, &arg_8_Hlocation, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_CreateUnitAtLoc(arg_0_Hplayer, arg_4_I, arg_8_Hlocation, arg_C_R);
   return Py_BuildValue("I", rt);
}

// CreateUnitAtLocByName 0022f1f0 (Hplayer;SHlocation;R)Hunit;
DWORD Jass_CreateUnitAtLocByName(DWORD arg_0_Hplayer, DWORD arg_4_S, DWORD arg_8_Hlocation, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_Hlocation
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_CreateUnitAtLocByName]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateUnitAtLocByName(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_Hlocation = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hplayer, &arg_4_S, &arg_8_Hlocation, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_CreateUnitAtLocByName(arg_0_Hplayer, arg_4_S, arg_8_Hlocation, arg_C_R);
   return Py_BuildValue("I", rt);
}

// CreateCorpse 0022dd00 (Hplayer;IRRR)Hunit;
DWORD Jass_CreateCorpse(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_CreateCorpse]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateCorpse(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hplayer, &arg_4_I, &arg_8_R, &arg_C_R, &arg_10_R))
       Py_RETURN_NONE;
   rt = Jass_CreateCorpse(arg_0_Hplayer, arg_4_I, arg_8_R, arg_C_R, arg_10_R);
   return Py_BuildValue("I", rt);
}

// GetUnitState 00236830 (Hunit;Hunitstate;)R
DWORD Jass_GetUnitState(DWORD arg_0_Hunit, DWORD arg_4_Hunitstate)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hunitstate
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitState]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hunitstate = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hunitstate))
       Py_RETURN_NONE;
   rt = Jass_GetUnitState(arg_0_Hunit, arg_4_Hunitstate);
   return Py_BuildValue("I", rt);
}

// GetUnitFoodUsed 00236410 (Hunit;)I
DWORD Jass_GetUnitFoodUsed(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitFoodUsed]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitFoodUsed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitFoodUsed(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitFoodMade 002363f0 (Hunit;)I
DWORD Jass_GetUnitFoodMade(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitFoodMade]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitFoodMade(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitFoodMade(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetFoodMade 002327b0 (I)I
DWORD Jass_GetFoodMade(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_GetFoodMade]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetFoodMade(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_GetFoodMade(arg_0_I);
   return Py_BuildValue("I", rt);
}

// GetFoodUsed 002327c0 (I)I
DWORD Jass_GetFoodUsed(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_GetFoodUsed]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetFoodUsed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_GetFoodUsed(arg_0_I);
   return Py_BuildValue("I", rt);
}

// SetUnitUseFood 00247e50 (Hunit;B)V
DWORD Jass_SetUnitUseFood(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitUseFood]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitUseFood(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetUnitUseFood(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// GetUnitX 002368e0 (Hunit;)R
DWORD Jass_GetUnitX(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitX]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitX(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitY 00236920 (Hunit;)R
DWORD Jass_GetUnitY(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitY]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitY(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitLoc 002364b0 (Hunit;)Hlocation;
DWORD Jass_GetUnitLoc(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitLoc]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitLoc(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitRallyPoint 002366f0 (Hunit;)Hlocation;
DWORD Jass_GetUnitRallyPoint(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitRallyPoint]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitRallyPoint(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitRallyPoint(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitRallyUnit 00236760 (Hunit;)Hunit;
DWORD Jass_GetUnitRallyUnit(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitRallyUnit]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitRallyUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitRallyUnit(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitRallyDestructable 00236620 (Hunit;)Hdestructable;
DWORD Jass_GetUnitRallyDestructable(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitRallyDestructable]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitRallyDestructable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitRallyDestructable(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitFacing 00236360 (Hunit;)R
DWORD Jass_GetUnitFacing(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitFacing]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitFacing(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitFacing(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitMoveSpeed 00236510 (Hunit;)R
DWORD Jass_GetUnitMoveSpeed(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitMoveSpeed]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitMoveSpeed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitMoveSpeed(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitDefaultMoveSpeed 00236270 (Hunit;)R
DWORD Jass_GetUnitDefaultMoveSpeed(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitDefaultMoveSpeed]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitDefaultMoveSpeed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitDefaultMoveSpeed(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitTypeId 002368a0 (Hunit;)I
DWORD Jass_GetUnitTypeId(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitTypeId]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitTypeId(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitTypeId(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitRace 00236600 (Hunit;)Hrace;
DWORD Jass_GetUnitRace(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitRace]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitRace(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitRace(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitName 00236570 (Hunit;)S
DWORD Jass_GetUnitName(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitName]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitName(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitName(arg_0_Hunit);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// GetUnitPointValue 002365a0 (Hunit;)I
DWORD Jass_GetUnitPointValue(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitPointValue]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitPointValue(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitPointValue(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitPointValueByType 002365c0 (I)I
DWORD Jass_GetUnitPointValueByType(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_GetUnitPointValueByType]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitPointValueByType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_GetUnitPointValueByType(arg_0_I);
   return Py_BuildValue("I", rt);
}

// SetUnitX 00247f80 (Hunit;R)V
DWORD Jass_SetUnitX(DWORD arg_0_Hunit, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitX]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetUnitX(arg_0_Hunit, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetUnitY 00247fe0 (Hunit;R)V
DWORD Jass_SetUnitY(DWORD arg_0_Hunit, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitY]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetUnitY(arg_0_Hunit, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetUnitPosition 00247c40 (Hunit;RR)V
DWORD Jass_SetUnitPosition(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitPosition]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitPosition(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_SetUnitPosition(arg_0_Hunit, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// SetUnitPositionLoc 00247ca0 (Hunit;Hlocation;)V
DWORD Jass_SetUnitPositionLoc(DWORD arg_0_Hunit, DWORD arg_4_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hlocation
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitPositionLoc]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitPositionLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_SetUnitPositionLoc(arg_0_Hunit, arg_4_Hlocation);
   return Py_BuildValue("I", rt);
}

// SetUnitFacing 002477f0 (Hunit;R)V
DWORD Jass_SetUnitFacing(DWORD arg_0_Hunit, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitFacing]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitFacing(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetUnitFacing(arg_0_Hunit, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetUnitFacingTimed 00247830 (Hunit;RR)V
DWORD Jass_SetUnitFacingTimed(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitFacingTimed]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitFacingTimed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_SetUnitFacingTimed(arg_0_Hunit, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// SetUnitFlyHeight 00247940 (Hunit;RR)V
DWORD Jass_SetUnitFlyHeight(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitFlyHeight]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitFlyHeight(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_SetUnitFlyHeight(arg_0_Hunit, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// SetUnitMoveSpeed 00247b60 (Hunit;R)V
DWORD Jass_SetUnitMoveSpeed(DWORD arg_0_Hunit, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitMoveSpeed]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitMoveSpeed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetUnitMoveSpeed(arg_0_Hunit, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetUnitTurnSpeed 00247df0 (Hunit;R)V
DWORD Jass_SetUnitTurnSpeed(DWORD arg_0_Hunit, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitTurnSpeed]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitTurnSpeed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetUnitTurnSpeed(arg_0_Hunit, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetUnitPropWindow 00247ce0 (Hunit;R)V
DWORD Jass_SetUnitPropWindow(DWORD arg_0_Hunit, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitPropWindow]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitPropWindow(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetUnitPropWindow(arg_0_Hunit, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetUnitCreepGuard 00247760 (Hunit;B)V
DWORD Jass_SetUnitCreepGuard(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitCreepGuard]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitCreepGuard(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetUnitCreepGuard(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// GetUnitAcquireRange 00236180 (Hunit;)R
DWORD Jass_GetUnitAcquireRange(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitAcquireRange]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitAcquireRange(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitAcquireRange(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitTurnSpeed 00236870 (Hunit;)R
DWORD Jass_GetUnitTurnSpeed(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitTurnSpeed]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitTurnSpeed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitTurnSpeed(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitPropWindow 002365d0 (Hunit;)R
DWORD Jass_GetUnitPropWindow(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitPropWindow]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitPropWindow(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitPropWindow(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitFlyHeight 002363d0 (Hunit;)R
DWORD Jass_GetUnitFlyHeight(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitFlyHeight]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitFlyHeight(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitFlyHeight(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitDefaultAcquireRange 00236210 (Hunit;)R
DWORD Jass_GetUnitDefaultAcquireRange(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitDefaultAcquireRange]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitDefaultAcquireRange(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitDefaultAcquireRange(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitDefaultTurnSpeed 00236330 (Hunit;)R
DWORD Jass_GetUnitDefaultTurnSpeed(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitDefaultTurnSpeed]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitDefaultTurnSpeed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitDefaultTurnSpeed(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitDefaultPropWindow 00236300 (Hunit;)R
DWORD Jass_GetUnitDefaultPropWindow(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitDefaultPropWindow]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitDefaultPropWindow(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitDefaultPropWindow(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitDefaultFlyHeight 00236240 (Hunit;)R
DWORD Jass_GetUnitDefaultFlyHeight(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitDefaultFlyHeight]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitDefaultFlyHeight(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitDefaultFlyHeight(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// SetUnitAcquireRange 00247520 (Hunit;R)V
DWORD Jass_SetUnitAcquireRange(DWORD arg_0_Hunit, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitAcquireRange]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitAcquireRange(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetUnitAcquireRange(arg_0_Hunit, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetUnitState 00247d90 (Hunit;Hunitstate;R)V
DWORD Jass_SetUnitState(DWORD arg_0_Hunit, DWORD arg_4_Hunitstate, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_Hunitstate
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitState]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hunitstate = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_Hunitstate, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_SetUnitState(arg_0_Hunit, arg_4_Hunitstate, arg_8_R);
   return Py_BuildValue("I", rt);
}

// SetUnitOwner 00247b80 (Hunit;Hplayer;B)V
DWORD Jass_SetUnitOwner(DWORD arg_0_Hunit, DWORD arg_4_Hplayer, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitOwner]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitOwner(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hplayer = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_Hplayer, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_SetUnitOwner(arg_0_Hunit, arg_4_Hplayer, arg_8_B);
   return Py_BuildValue("I", rt);
}

// SetUnitRescuable 00247d00 (Hunit;Hplayer;B)V
DWORD Jass_SetUnitRescuable(DWORD arg_0_Hunit, DWORD arg_4_Hplayer, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitRescuable]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitRescuable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hplayer = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_Hplayer, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_SetUnitRescuable(arg_0_Hunit, arg_4_Hplayer, arg_8_B);
   return Py_BuildValue("I", rt);
}

// SetUnitRescueRange 00247d30 (Hunit;R)V
DWORD Jass_SetUnitRescueRange(DWORD arg_0_Hunit, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitRescueRange]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitRescueRange(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetUnitRescueRange(arg_0_Hunit, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetUnitColor 00247720 (Hunit;Hplayercolor;)V
DWORD Jass_SetUnitColor(DWORD arg_0_Hunit, DWORD arg_4_Hplayercolor)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayercolor
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitColor]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hplayercolor = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hplayercolor))
       Py_RETURN_NONE;
   rt = Jass_SetUnitColor(arg_0_Hunit, arg_4_Hplayercolor);
   return Py_BuildValue("I", rt);
}

// QueueUnitAnimation 00242a00 (Hunit;S)V
DWORD Jass_QueueUnitAnimation(DWORD arg_0_Hunit, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_QueueUnitAnimation]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* QueueUnitAnimation(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_QueueUnitAnimation(arg_0_Hunit, arg_4_S);
   return Py_BuildValue("I", rt);
}

// SetUnitAnimation 00247540 (Hunit;S)V
DWORD Jass_SetUnitAnimation(DWORD arg_0_Hunit, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitAnimation]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitAnimation(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_SetUnitAnimation(arg_0_Hunit, arg_4_S);
   return Py_BuildValue("I", rt);
}

// SetUnitAnimationWithRarity 002476d0 (Hunit;SHraritycontrol;)V
DWORD Jass_SetUnitAnimationWithRarity(DWORD arg_0_Hunit, DWORD arg_4_S, DWORD arg_8_Hraritycontrol)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hraritycontrol
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitAnimationWithRarity]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitAnimationWithRarity(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_Hraritycontrol = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_S, &arg_8_Hraritycontrol))
       Py_RETURN_NONE;
   rt = Jass_SetUnitAnimationWithRarity(arg_0_Hunit, arg_4_S, arg_8_Hraritycontrol);
   return Py_BuildValue("I", rt);
}

// SetUnitAnimationByIndex 00247560 (Hunit;I)V
DWORD Jass_SetUnitAnimationByIndex(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitAnimationByIndex]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitAnimationByIndex(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetUnitAnimationByIndex(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// AddUnitAnimationProperties 0022a790 (Hunit;SB)V
DWORD Jass_AddUnitAnimationProperties(DWORD arg_0_Hunit, DWORD arg_4_S, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_AddUnitAnimationProperties]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* AddUnitAnimationProperties(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_S, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_AddUnitAnimationProperties(arg_0_Hunit, arg_4_S, arg_8_B);
   return Py_BuildValue("I", rt);
}

// SetUnitScale 00247d50 (Hunit;RRR)V
DWORD Jass_SetUnitScale(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitScale]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitScale(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hunit, &arg_4_R, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_SetUnitScale(arg_0_Hunit, arg_4_R, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// SetUnitTimeScale 00247dc0 (Hunit;R)V
DWORD Jass_SetUnitTimeScale(DWORD arg_0_Hunit, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitTimeScale]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitTimeScale(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetUnitTimeScale(arg_0_Hunit, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetUnitBlendTime 002476f0 (Hunit;R)V
DWORD Jass_SetUnitBlendTime(DWORD arg_0_Hunit, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitBlendTime]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitBlendTime(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetUnitBlendTime(arg_0_Hunit, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetUnitVertexColor 00247ee0 (Hunit;IIII)V
DWORD Jass_SetUnitVertexColor(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitVertexColor]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitVertexColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_I = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hunit, &arg_4_I, &arg_8_I, &arg_C_I, &arg_10_I))
       Py_RETURN_NONE;
   rt = Jass_SetUnitVertexColor(arg_0_Hunit, arg_4_I, arg_8_I, arg_C_I, arg_10_I);
   return Py_BuildValue("I", rt);
}

// SetUnitLookAt 002479f0 (Hunit;SHunit;RRR)V
DWORD Jass_SetUnitLookAt(DWORD arg_0_Hunit, DWORD arg_4_S, DWORD arg_8_Hunit, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_14_R
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_Hunit
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitLookAt]
       add esp, 0x18
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitLookAt(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_Hunit = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_R = 0;
   if (!PyArg_ParseTuple(args, "IIIIII", &arg_0_Hunit, &arg_4_S, &arg_8_Hunit, &arg_C_R, &arg_10_R, &arg_14_R))
       Py_RETURN_NONE;
   rt = Jass_SetUnitLookAt(arg_0_Hunit, arg_4_S, arg_8_Hunit, arg_C_R, arg_10_R, arg_14_R);
   return Py_BuildValue("I", rt);
}

// SetUnitPathing 00247bc0 (Hunit;B)V
DWORD Jass_SetUnitPathing(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitPathing]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitPathing(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetUnitPathing(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// ResetUnitLookAt 00243490 (Hunit;)V
DWORD Jass_ResetUnitLookAt(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_ResetUnitLookAt]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ResetUnitLookAt(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_ResetUnitLookAt(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// SetHeroStr 00245ba0 (Hunit;IB)V
DWORD Jass_SetHeroStr(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetHeroStr]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetHeroStr(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_I, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_SetHeroStr(arg_0_Hunit, arg_4_I, arg_8_B);
   return Py_BuildValue("I", rt);
}

// SetHeroAgi 00245a30 (Hunit;IB)V
DWORD Jass_SetHeroAgi(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetHeroAgi]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetHeroAgi(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_I, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_SetHeroAgi(arg_0_Hunit, arg_4_I, arg_8_B);
   return Py_BuildValue("I", rt);
}

// SetHeroInt 00245a90 (Hunit;IB)V
DWORD Jass_SetHeroInt(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetHeroInt]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetHeroInt(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_I, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_SetHeroInt(arg_0_Hunit, arg_4_I, arg_8_B);
   return Py_BuildValue("I", rt);
}

// GetHeroStr 00232c00 (Hunit;B)I
DWORD Jass_GetHeroStr(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetHeroStr]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetHeroStr(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_GetHeroStr(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// GetHeroAgi 002329e0 (Hunit;B)I
DWORD Jass_GetHeroAgi(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetHeroAgi]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetHeroAgi(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_GetHeroAgi(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// GetHeroInt 00232a40 (Hunit;B)I
DWORD Jass_GetHeroInt(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetHeroInt]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetHeroInt(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_GetHeroInt(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// GetHeroSkillPoints 00232ba0 (Hunit;)I
DWORD Jass_GetHeroSkillPoints(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetHeroSkillPoints]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetHeroSkillPoints(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetHeroSkillPoints(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// UnitStripHeroLevel 0024b680 (Hunit;I)B
DWORD Jass_UnitStripHeroLevel(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitStripHeroLevel]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitStripHeroLevel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_UnitStripHeroLevel(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// UnitModifySkillPoints 0024b300 (Hunit;I)B
DWORD Jass_UnitModifySkillPoints(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitModifySkillPoints]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitModifySkillPoints(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_UnitModifySkillPoints(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// GetHeroXP 00232c60 (Hunit;)I
DWORD Jass_GetHeroXP(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetHeroXP]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetHeroXP(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetHeroXP(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// SetHeroXP 00245c00 (Hunit;IB)V
DWORD Jass_SetHeroXP(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetHeroXP]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetHeroXP(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_I, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_SetHeroXP(arg_0_Hunit, arg_4_I, arg_8_B);
   return Py_BuildValue("I", rt);
}

// AddHeroXP 00229ff0 (Hunit;IB)V
DWORD Jass_AddHeroXP(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_AddHeroXP]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* AddHeroXP(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_I, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_AddHeroXP(arg_0_Hunit, arg_4_I, arg_8_B);
   return Py_BuildValue("I", rt);
}

// SetHeroLevel 00245af0 (Hunit;IB)V
DWORD Jass_SetHeroLevel(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetHeroLevel]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetHeroLevel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_I, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_SetHeroLevel(arg_0_Hunit, arg_4_I, arg_8_B);
   return Py_BuildValue("I", rt);
}

// GetHeroLevel 00232aa0 (Hunit;)I
DWORD Jass_GetHeroLevel(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetHeroLevel]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetHeroLevel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetHeroLevel(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetUnitLevel 00236440 (Hunit;)I
DWORD Jass_GetUnitLevel(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitLevel]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitLevel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitLevel(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetHeroProperName 00232b00 (Hunit;)S
DWORD Jass_GetHeroProperName(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetHeroProperName]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetHeroProperName(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetHeroProperName(arg_0_Hunit);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// SuspendHeroXP 00248b20 (Hunit;B)V
DWORD Jass_SuspendHeroXP(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SuspendHeroXP]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SuspendHeroXP(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SuspendHeroXP(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// IsSuspendedXP 00238600 (Hunit;)B
DWORD Jass_IsSuspendedXP(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsSuspendedXP]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsSuspendedXP(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_IsSuspendedXP(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// SelectHeroSkill 00243fc0 (Hunit;I)V
DWORD Jass_SelectHeroSkill(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SelectHeroSkill]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SelectHeroSkill(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SelectHeroSkill(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// GetUnitAbilityLevel 00236120 (Hunit;I)I
DWORD Jass_GetUnitAbilityLevel(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitAbilityLevel]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitAbilityLevel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_GetUnitAbilityLevel(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// ReviveHero 00243610 (Hunit;RRB)B
DWORD Jass_ReviveHero(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_ReviveHero]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* ReviveHero(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_B = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hunit, &arg_4_R, &arg_8_R, &arg_C_B))
       Py_RETURN_NONE;
   rt = Jass_ReviveHero(arg_0_Hunit, arg_4_R, arg_8_R, arg_C_B);
   return Py_BuildValue("I", rt);
}

// ReviveHeroLoc 00243690 (Hunit;Hlocation;B)B
DWORD Jass_ReviveHeroLoc(DWORD arg_0_Hunit, DWORD arg_4_Hlocation, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_Hlocation
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_ReviveHeroLoc]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* ReviveHeroLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hlocation = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_Hlocation, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_ReviveHeroLoc(arg_0_Hunit, arg_4_Hlocation, arg_8_B);
   return Py_BuildValue("I", rt);
}

// SetUnitExploded 00247790 (Hunit;B)V
DWORD Jass_SetUnitExploded(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitExploded]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitExploded(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetUnitExploded(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetUnitInvulnerable 002479a0 (Hunit;B)V
DWORD Jass_SetUnitInvulnerable(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitInvulnerable]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitInvulnerable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetUnitInvulnerable(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// PauseUnit 00241d30 (Hunit;B)V
DWORD Jass_PauseUnit(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_PauseUnit]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* PauseUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_PauseUnit(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// IsUnitPaused 00238de0 (Hunit;)B
DWORD Jass_IsUnitPaused(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitPaused]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitPaused(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_IsUnitPaused(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// UnitAddItem 0024a920 (Hunit;Hitem;)B
DWORD Jass_UnitAddItem(DWORD arg_0_Hunit, DWORD arg_4_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hitem
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitAddItem]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitAddItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hitem = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hitem))
       Py_RETURN_NONE;
   rt = Jass_UnitAddItem(arg_0_Hunit, arg_4_Hitem);
   return Py_BuildValue("I", rt);
}

// UnitAddItemById 0024aa10 (Hunit;I)Hitem;
DWORD Jass_UnitAddItemById(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitAddItemById]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitAddItemById(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_UnitAddItemById(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// UnitAddItemToSlotById 0024aac0 (Hunit;II)B
DWORD Jass_UnitAddItemToSlotById(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitAddItemToSlotById]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitAddItemToSlotById(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_UnitAddItemToSlotById(arg_0_Hunit, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// UnitRemoveItem 0024b480 (Hunit;Hitem;)V
DWORD Jass_UnitRemoveItem(DWORD arg_0_Hunit, DWORD arg_4_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hitem
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitRemoveItem]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitRemoveItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hitem = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hitem))
       Py_RETURN_NONE;
   rt = Jass_UnitRemoveItem(arg_0_Hunit, arg_4_Hitem);
   return Py_BuildValue("I", rt);
}

// UnitRemoveItemFromSlot 0024b4c0 (Hunit;I)Hitem;
DWORD Jass_UnitRemoveItemFromSlot(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitRemoveItemFromSlot]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitRemoveItemFromSlot(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_UnitRemoveItemFromSlot(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// UnitHasItem 0024b0a0 (Hunit;Hitem;)B
DWORD Jass_UnitHasItem(DWORD arg_0_Hunit, DWORD arg_4_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hitem
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitHasItem]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitHasItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hitem = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hitem))
       Py_RETURN_NONE;
   rt = Jass_UnitHasItem(arg_0_Hunit, arg_4_Hitem);
   return Py_BuildValue("I", rt);
}

// UnitItemInSlot 0024b260 (Hunit;I)Hitem;
DWORD Jass_UnitItemInSlot(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitItemInSlot]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitItemInSlot(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_UnitItemInSlot(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// UnitInventorySize 0024b1f0 (Hunit;)I
DWORD Jass_UnitInventorySize(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitInventorySize]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitInventorySize(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_UnitInventorySize(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// UnitDropItemPoint 0024af30 (Hunit;Hitem;RR)B
DWORD Jass_UnitDropItemPoint(DWORD arg_0_Hunit, DWORD arg_4_Hitem, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_Hitem
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitDropItemPoint]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitDropItemPoint(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hitem = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hunit, &arg_4_Hitem, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_UnitDropItemPoint(arg_0_Hunit, arg_4_Hitem, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// UnitDropItemSlot 0024af90 (Hunit;Hitem;I)B
DWORD Jass_UnitDropItemSlot(DWORD arg_0_Hunit, DWORD arg_4_Hitem, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_Hitem
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitDropItemSlot]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitDropItemSlot(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hitem = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_Hitem, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_UnitDropItemSlot(arg_0_Hunit, arg_4_Hitem, arg_8_I);
   return Py_BuildValue("I", rt);
}

// UnitDropItemTarget 0024b000 (Hunit;Hitem;Hwidget;)B
DWORD Jass_UnitDropItemTarget(DWORD arg_0_Hunit, DWORD arg_4_Hitem, DWORD arg_8_Hwidget)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hwidget
       push eax
       mov eax, arg_4_Hitem
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitDropItemTarget]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitDropItemTarget(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hitem = 0;
   DWORD arg_8_Hwidget = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_Hitem, &arg_8_Hwidget))
       Py_RETURN_NONE;
   rt = Jass_UnitDropItemTarget(arg_0_Hunit, arg_4_Hitem, arg_8_Hwidget);
   return Py_BuildValue("I", rt);
}

// UnitUseItem 0024b740 (Hunit;Hitem;)B
DWORD Jass_UnitUseItem(DWORD arg_0_Hunit, DWORD arg_4_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hitem
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitUseItem]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitUseItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hitem = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hitem))
       Py_RETURN_NONE;
   rt = Jass_UnitUseItem(arg_0_Hunit, arg_4_Hitem);
   return Py_BuildValue("I", rt);
}

// UnitUseItemPoint 0024b7b0 (Hunit;Hitem;RR)B
DWORD Jass_UnitUseItemPoint(DWORD arg_0_Hunit, DWORD arg_4_Hitem, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_Hitem
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitUseItemPoint]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitUseItemPoint(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hitem = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hunit, &arg_4_Hitem, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_UnitUseItemPoint(arg_0_Hunit, arg_4_Hitem, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// UnitUseItemTarget 0024b820 (Hunit;Hitem;Hwidget;)B
DWORD Jass_UnitUseItemTarget(DWORD arg_0_Hunit, DWORD arg_4_Hitem, DWORD arg_8_Hwidget)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hwidget
       push eax
       mov eax, arg_4_Hitem
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitUseItemTarget]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitUseItemTarget(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hitem = 0;
   DWORD arg_8_Hwidget = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_Hitem, &arg_8_Hwidget))
       Py_RETURN_NONE;
   rt = Jass_UnitUseItemTarget(arg_0_Hunit, arg_4_Hitem, arg_8_Hwidget);
   return Py_BuildValue("I", rt);
}

// GetUnitCurrentOrder 002361b0 (Hunit;)I
DWORD Jass_GetUnitCurrentOrder(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitCurrentOrder]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitCurrentOrder(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitCurrentOrder(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// SetResourceAmount 002468f0 (Hunit;I)V
DWORD Jass_SetResourceAmount(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetResourceAmount]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetResourceAmount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetResourceAmount(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// AddResourceAmount 0022a440 (Hunit;I)V
DWORD Jass_AddResourceAmount(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_AddResourceAmount]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* AddResourceAmount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_AddResourceAmount(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// GetResourceAmount 002349e0 (Hunit;)I
DWORD Jass_GetResourceAmount(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetResourceAmount]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetResourceAmount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetResourceAmount(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// SelectUnit 00244020 (Hunit;B)V
DWORD Jass_SelectUnit(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SelectUnit]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SelectUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SelectUnit(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// ClearSelection 0022b560 ()V
DWORD Jass_ClearSelection()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_ClearSelection]
       mov rt, eax
   }
   return rt;
}
static PyObject* ClearSelection(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_ClearSelection();
   return Py_BuildValue("I", rt);
}

// UnitAddIndicator 0024a890 (Hunit;IIII)V
DWORD Jass_UnitAddIndicator(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitAddIndicator]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitAddIndicator(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_I = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hunit, &arg_4_I, &arg_8_I, &arg_C_I, &arg_10_I))
       Py_RETURN_NONE;
   rt = Jass_UnitAddIndicator(arg_0_Hunit, arg_4_I, arg_8_I, arg_C_I, arg_10_I);
   return Py_BuildValue("I", rt);
}

// AddIndicator 0022a060 (Hwidget;IIII)V
DWORD Jass_AddIndicator(DWORD arg_0_Hwidget, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hwidget
       push eax
       call [_Jass_AddIndicator]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* AddIndicator(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hwidget = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_I = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hwidget, &arg_4_I, &arg_8_I, &arg_C_I, &arg_10_I))
       Py_RETURN_NONE;
   rt = Jass_AddIndicator(arg_0_Hwidget, arg_4_I, arg_8_I, arg_C_I, arg_10_I);
   return Py_BuildValue("I", rt);
}

// KillUnit 0023ff00 (Hunit;)V
DWORD Jass_KillUnit(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_KillUnit]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* KillUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_KillUnit(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// RemoveUnit 00243290 (Hunit;)V
DWORD Jass_RemoveUnit(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_RemoveUnit]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_RemoveUnit(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// ShowUnit 00248180 (Hunit;B)V
DWORD Jass_ShowUnit(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_ShowUnit]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* ShowUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_ShowUnit(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// IsUnitInForce 00238b00 (Hunit;Hforce;)B
DWORD Jass_IsUnitInForce(DWORD arg_0_Hunit, DWORD arg_4_Hforce)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hforce
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitInForce]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitInForce(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hforce = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hforce))
       Py_RETURN_NONE;
   rt = Jass_IsUnitInForce(arg_0_Hunit, arg_4_Hforce);
   return Py_BuildValue("I", rt);
}

// IsUnitInGroup 00238b40 (Hunit;Hgroup;)B
DWORD Jass_IsUnitInGroup(DWORD arg_0_Hunit, DWORD arg_4_Hgroup)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hgroup
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitInGroup]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitInGroup(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hgroup = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hgroup))
       Py_RETURN_NONE;
   rt = Jass_IsUnitInGroup(arg_0_Hunit, arg_4_Hgroup);
   return Py_BuildValue("I", rt);
}

// IsUnitOwnedByPlayer 00238da0 (Hunit;Hplayer;)B
DWORD Jass_IsUnitOwnedByPlayer(DWORD arg_0_Hunit, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitOwnedByPlayer]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitOwnedByPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_IsUnitOwnedByPlayer(arg_0_Hunit, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// IsUnitAlly 00238740 (Hunit;Hplayer;)B
DWORD Jass_IsUnitAlly(DWORD arg_0_Hunit, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitAlly]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitAlly(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_IsUnitAlly(arg_0_Hunit, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// IsUnitEnemy 002387e0 (Hunit;Hplayer;)B
DWORD Jass_IsUnitEnemy(DWORD arg_0_Hunit, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitEnemy]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitEnemy(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_IsUnitEnemy(arg_0_Hunit, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// IsUnitVisible 002390a0 (Hunit;Hplayer;)B
DWORD Jass_IsUnitVisible(DWORD arg_0_Hunit, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitVisible]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitVisible(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_IsUnitVisible(arg_0_Hunit, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// IsUnitDetected 002387a0 (Hunit;Hplayer;)B
DWORD Jass_IsUnitDetected(DWORD arg_0_Hunit, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitDetected]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitDetected(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_IsUnitDetected(arg_0_Hunit, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// IsUnitInvisible 00238cc0 (Hunit;Hplayer;)B
DWORD Jass_IsUnitInvisible(DWORD arg_0_Hunit, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitInvisible]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitInvisible(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_IsUnitInvisible(arg_0_Hunit, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// IsUnitFogged 00238860 (Hunit;Hplayer;)B
DWORD Jass_IsUnitFogged(DWORD arg_0_Hunit, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitFogged]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitFogged(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_IsUnitFogged(arg_0_Hunit, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// IsUnitMasked 00238d20 (Hunit;Hplayer;)B
DWORD Jass_IsUnitMasked(DWORD arg_0_Hunit, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitMasked]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitMasked(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_IsUnitMasked(arg_0_Hunit, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// IsUnitSelected 00238e60 (Hunit;Hplayer;)B
DWORD Jass_IsUnitSelected(DWORD arg_0_Hunit, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitSelected]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitSelected(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_IsUnitSelected(arg_0_Hunit, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// IsUnitRace 00238e30 (Hunit;Hrace;)B
DWORD Jass_IsUnitRace(DWORD arg_0_Hunit, DWORD arg_4_Hrace)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hrace
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitRace]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitRace(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hrace = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hrace))
       Py_RETURN_NONE;
   rt = Jass_IsUnitRace(arg_0_Hunit, arg_4_Hrace);
   return Py_BuildValue("I", rt);
}

// IsUnitType 00238ee0 (Hunit;Hunittype;)B
DWORD Jass_IsUnitType(DWORD arg_0_Hunit, DWORD arg_4_Hunittype)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hunittype
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitType]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hunittype = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hunittype))
       Py_RETURN_NONE;
   rt = Jass_IsUnitType(arg_0_Hunit, arg_4_Hunittype);
   return Py_BuildValue("I", rt);
}

// IsUnit 00238710 (Hunit;Hunit;)B
DWORD Jass_IsUnit(DWORD arg_0_Hunit, DWORD arg_4_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hunit
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnit]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hunit = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hunit))
       Py_RETURN_NONE;
   rt = Jass_IsUnit(arg_0_Hunit, arg_4_Hunit);
   return Py_BuildValue("I", rt);
}

// IsUnitInRange 00238b70 (Hunit;Hunit;R)B
DWORD Jass_IsUnitInRange(DWORD arg_0_Hunit, DWORD arg_4_Hunit, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_Hunit
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitInRange]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitInRange(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hunit = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_Hunit, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_IsUnitInRange(arg_0_Hunit, arg_4_Hunit, arg_8_R);
   return Py_BuildValue("I", rt);
}

// IsUnitInRangeXY 00238c00 (Hunit;RRR)B
DWORD Jass_IsUnitInRangeXY(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitInRangeXY]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitInRangeXY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hunit, &arg_4_R, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_IsUnitInRangeXY(arg_0_Hunit, arg_4_R, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// IsUnitInRangeLoc 00238bc0 (Hunit;Hlocation;R)B
DWORD Jass_IsUnitInRangeLoc(DWORD arg_0_Hunit, DWORD arg_4_Hlocation, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_Hlocation
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitInRangeLoc]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitInRangeLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hlocation = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_Hlocation, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_IsUnitInRangeLoc(arg_0_Hunit, arg_4_Hlocation, arg_8_R);
   return Py_BuildValue("I", rt);
}

// IsUnitHidden 002388e0 (Hunit;)B
DWORD Jass_IsUnitHidden(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitHidden]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitHidden(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_IsUnitHidden(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// IsUnitIllusion 00238ae0 (Hunit;)B
DWORD Jass_IsUnitIllusion(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitIllusion]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitIllusion(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_IsUnitIllusion(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// IsUnitInTransport 00238c90 (Hunit;Hunit;)B
DWORD Jass_IsUnitInTransport(DWORD arg_0_Hunit, DWORD arg_4_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hunit
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitInTransport]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitInTransport(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hunit = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hunit))
       Py_RETURN_NONE;
   rt = Jass_IsUnitInTransport(arg_0_Hunit, arg_4_Hunit);
   return Py_BuildValue("I", rt);
}

// IsUnitLoaded 00238d00 (Hunit;)B
DWORD Jass_IsUnitLoaded(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsUnitLoaded]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitLoaded(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_IsUnitLoaded(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// IsHeroUnitId 00237d70 (I)B
DWORD Jass_IsHeroUnitId(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_IsHeroUnitId]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsHeroUnitId(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_IsHeroUnitId(arg_0_I);
   return Py_BuildValue("I", rt);
}

// IsUnitIdType 00238900 (IHunittype;)B
DWORD Jass_IsUnitIdType(DWORD arg_0_I, DWORD arg_4_Hunittype)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hunittype
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_IsUnitIdType]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsUnitIdType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_Hunittype = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_Hunittype))
       Py_RETURN_NONE;
   rt = Jass_IsUnitIdType(arg_0_I, arg_4_Hunittype);
   return Py_BuildValue("I", rt);
}

// GetOwningPlayer 00233dd0 (Hunit;)Hplayer;
DWORD Jass_GetOwningPlayer(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetOwningPlayer]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetOwningPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetOwningPlayer(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// UnitShareVision 0024b650 (Hunit;Hplayer;B)V
DWORD Jass_UnitShareVision(DWORD arg_0_Hunit, DWORD arg_4_Hplayer, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitShareVision]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitShareVision(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hplayer = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_Hplayer, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_UnitShareVision(arg_0_Hunit, arg_4_Hplayer, arg_8_B);
   return Py_BuildValue("I", rt);
}

// UnitSuspendDecay 0024b6e0 (Hunit;B)V
DWORD Jass_UnitSuspendDecay(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitSuspendDecay]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitSuspendDecay(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_UnitSuspendDecay(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// UnitAddType 0024ac00 (Hunit;Hunittype;)B
DWORD Jass_UnitAddType(DWORD arg_0_Hunit, DWORD arg_4_Hunittype)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hunittype
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitAddType]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitAddType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hunittype = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hunittype))
       Py_RETURN_NONE;
   rt = Jass_UnitAddType(arg_0_Hunit, arg_4_Hunittype);
   return Py_BuildValue("I", rt);
}

// UnitRemoveType 0024b520 (Hunit;Hunittype;)B
DWORD Jass_UnitRemoveType(DWORD arg_0_Hunit, DWORD arg_4_Hunittype)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hunittype
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitRemoveType]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitRemoveType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hunittype = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_Hunittype))
       Py_RETURN_NONE;
   rt = Jass_UnitRemoveType(arg_0_Hunit, arg_4_Hunittype);
   return Py_BuildValue("I", rt);
}

// UnitAddAbility 0024a820 (Hunit;I)B
DWORD Jass_UnitAddAbility(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitAddAbility]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitAddAbility(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_UnitAddAbility(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// UnitRemoveAbility 0024b3c0 (Hunit;I)B
DWORD Jass_UnitRemoveAbility(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitRemoveAbility]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitRemoveAbility(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_UnitRemoveAbility(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// UnitMakeAbilityPermanent 0024b2b0 (Hunit;BI)B
DWORD Jass_UnitMakeAbilityPermanent(DWORD arg_0_Hunit, DWORD arg_4_B, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitMakeAbilityPermanent]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitMakeAbilityPermanent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_B, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_UnitMakeAbilityPermanent(arg_0_Hunit, arg_4_B, arg_8_I);
   return Py_BuildValue("I", rt);
}

// UnitHasBuffsEx 0024b060 (Hunit;BBBBBBB)B
DWORD Jass_UnitHasBuffsEx(DWORD arg_0_Hunit, DWORD arg_4_B, DWORD arg_8_B, DWORD arg_C_B, DWORD arg_10_B, DWORD arg_14_B, DWORD arg_18_B, DWORD arg_1C_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_1C_B
       push eax
       mov eax, arg_18_B
       push eax
       mov eax, arg_14_B
       push eax
       mov eax, arg_10_B
       push eax
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitHasBuffsEx]
       add esp, 0x20
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitHasBuffsEx(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_B = 0;
   DWORD arg_C_B = 0;
   DWORD arg_10_B = 0;
   DWORD arg_14_B = 0;
   DWORD arg_18_B = 0;
   DWORD arg_1C_B = 0;
   if (!PyArg_ParseTuple(args, "IIIIIIII", &arg_0_Hunit, &arg_4_B, &arg_8_B, &arg_C_B, &arg_10_B, &arg_14_B, &arg_18_B, &arg_1C_B))
       Py_RETURN_NONE;
   rt = Jass_UnitHasBuffsEx(arg_0_Hunit, arg_4_B, arg_8_B, arg_C_B, arg_10_B, arg_14_B, arg_18_B, arg_1C_B);
   return Py_BuildValue("I", rt);
}

// UnitCountBuffsEx 0024ad50 (Hunit;BBBBBBB)I
DWORD Jass_UnitCountBuffsEx(DWORD arg_0_Hunit, DWORD arg_4_B, DWORD arg_8_B, DWORD arg_C_B, DWORD arg_10_B, DWORD arg_14_B, DWORD arg_18_B, DWORD arg_1C_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_1C_B
       push eax
       mov eax, arg_18_B
       push eax
       mov eax, arg_14_B
       push eax
       mov eax, arg_10_B
       push eax
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitCountBuffsEx]
       add esp, 0x20
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitCountBuffsEx(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_B = 0;
   DWORD arg_C_B = 0;
   DWORD arg_10_B = 0;
   DWORD arg_14_B = 0;
   DWORD arg_18_B = 0;
   DWORD arg_1C_B = 0;
   if (!PyArg_ParseTuple(args, "IIIIIIII", &arg_0_Hunit, &arg_4_B, &arg_8_B, &arg_C_B, &arg_10_B, &arg_14_B, &arg_18_B, &arg_1C_B))
       Py_RETURN_NONE;
   rt = Jass_UnitCountBuffsEx(arg_0_Hunit, arg_4_B, arg_8_B, arg_C_B, arg_10_B, arg_14_B, arg_18_B, arg_1C_B);
   return Py_BuildValue("I", rt);
}

// UnitRemoveBuffs 0024b410 (Hunit;BB)V
DWORD Jass_UnitRemoveBuffs(DWORD arg_0_Hunit, DWORD arg_4_B, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitRemoveBuffs]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitRemoveBuffs(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_B, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_UnitRemoveBuffs(arg_0_Hunit, arg_4_B, arg_8_B);
   return Py_BuildValue("I", rt);
}

// UnitRemoveBuffsEx 0024b440 (Hunit;BBBBBBB)V
DWORD Jass_UnitRemoveBuffsEx(DWORD arg_0_Hunit, DWORD arg_4_B, DWORD arg_8_B, DWORD arg_C_B, DWORD arg_10_B, DWORD arg_14_B, DWORD arg_18_B, DWORD arg_1C_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_1C_B
       push eax
       mov eax, arg_18_B
       push eax
       mov eax, arg_14_B
       push eax
       mov eax, arg_10_B
       push eax
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitRemoveBuffsEx]
       add esp, 0x20
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitRemoveBuffsEx(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_B = 0;
   DWORD arg_C_B = 0;
   DWORD arg_10_B = 0;
   DWORD arg_14_B = 0;
   DWORD arg_18_B = 0;
   DWORD arg_1C_B = 0;
   if (!PyArg_ParseTuple(args, "IIIIIIII", &arg_0_Hunit, &arg_4_B, &arg_8_B, &arg_C_B, &arg_10_B, &arg_14_B, &arg_18_B, &arg_1C_B))
       Py_RETURN_NONE;
   rt = Jass_UnitRemoveBuffsEx(arg_0_Hunit, arg_4_B, arg_8_B, arg_C_B, arg_10_B, arg_14_B, arg_18_B, arg_1C_B);
   return Py_BuildValue("I", rt);
}

// UnitAddSleep 0024ab60 (Hunit;B)V
DWORD Jass_UnitAddSleep(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitAddSleep]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitAddSleep(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_UnitAddSleep(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// UnitCanSleep 0024acd0 (Hunit;)B
DWORD Jass_UnitCanSleep(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitCanSleep]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitCanSleep(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_UnitCanSleep(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// UnitAddSleepPerm 0024abb0 (Hunit;B)V
DWORD Jass_UnitAddSleepPerm(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitAddSleepPerm]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitAddSleepPerm(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_UnitAddSleepPerm(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// UnitCanSleepPerm 0024ad10 (Hunit;)B
DWORD Jass_UnitCanSleepPerm(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitCanSleepPerm]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitCanSleepPerm(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_UnitCanSleepPerm(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// UnitIsSleeping 0024b220 (Hunit;)B
DWORD Jass_UnitIsSleeping(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitIsSleeping]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitIsSleeping(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_UnitIsSleeping(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// UnitWakeUp 0024b8a0 (Hunit;)V
DWORD Jass_UnitWakeUp(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitWakeUp]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitWakeUp(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_UnitWakeUp(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// UnitApplyTimedLife 0024ac60 (Hunit;IR)V
DWORD Jass_UnitApplyTimedLife(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitApplyTimedLife]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitApplyTimedLife(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_I, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_UnitApplyTimedLife(arg_0_Hunit, arg_4_I, arg_8_R);
   return Py_BuildValue("I", rt);
}

// UnitIgnoreAlarm 0024b150 (Hunit;B)B
DWORD Jass_UnitIgnoreAlarm(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitIgnoreAlarm]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitIgnoreAlarm(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_UnitIgnoreAlarm(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// UnitIgnoreAlarmToggled 0024b1b0 (Hunit;)B
DWORD Jass_UnitIgnoreAlarmToggled(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitIgnoreAlarmToggled]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitIgnoreAlarmToggled(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_UnitIgnoreAlarmToggled(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// UnitDamagePoint 0024ad90 (Hunit;RRRRRBBHattacktype;Hdamagetype;Hweapontype;)B
DWORD Jass_UnitDamagePoint(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_B, DWORD arg_1C_B, DWORD arg_20_Hattacktype, DWORD arg_24_Hdamagetype, DWORD arg_28_Hweapontype)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_28_Hweapontype
       push eax
       mov eax, arg_24_Hdamagetype
       push eax
       mov eax, arg_20_Hattacktype
       push eax
       mov eax, arg_1C_B
       push eax
       mov eax, arg_18_B
       push eax
       mov eax, arg_14_R
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitDamagePoint]
       add esp, 0x2c
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitDamagePoint(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_R = 0;
   DWORD arg_18_B = 0;
   DWORD arg_1C_B = 0;
   DWORD arg_20_Hattacktype = 0;
   DWORD arg_24_Hdamagetype = 0;
   DWORD arg_28_Hweapontype = 0;
   if (!PyArg_ParseTuple(args, "IIIIIIIIIII", &arg_0_Hunit, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_R, &arg_14_R, &arg_18_B, &arg_1C_B, &arg_20_Hattacktype, &arg_24_Hdamagetype, &arg_28_Hweapontype))
       Py_RETURN_NONE;
   rt = Jass_UnitDamagePoint(arg_0_Hunit, arg_4_R, arg_8_R, arg_C_R, arg_10_R, arg_14_R, arg_18_B, arg_1C_B, arg_20_Hattacktype, arg_24_Hdamagetype, arg_28_Hweapontype);
   return Py_BuildValue("I", rt);
}

// UnitDamageTarget 0024ae80 (Hunit;Hwidget;RBBHattacktype;Hdamagetype;Hweapontype;)B
DWORD Jass_UnitDamageTarget(DWORD arg_0_Hunit, DWORD arg_4_Hwidget, DWORD arg_8_R, DWORD arg_C_B, DWORD arg_10_B, DWORD arg_14_Hattacktype, DWORD arg_18_Hdamagetype, DWORD arg_1C_Hweapontype)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_1C_Hweapontype
       push eax
       mov eax, arg_18_Hdamagetype
       push eax
       mov eax, arg_14_Hattacktype
       push eax
       mov eax, arg_10_B
       push eax
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_Hwidget
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitDamageTarget]
       add esp, 0x20
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitDamageTarget(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_Hwidget = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_B = 0;
   DWORD arg_10_B = 0;
   DWORD arg_14_Hattacktype = 0;
   DWORD arg_18_Hdamagetype = 0;
   DWORD arg_1C_Hweapontype = 0;
   if (!PyArg_ParseTuple(args, "IIIIIIII", &arg_0_Hunit, &arg_4_Hwidget, &arg_8_R, &arg_C_B, &arg_10_B, &arg_14_Hattacktype, &arg_18_Hdamagetype, &arg_1C_Hweapontype))
       Py_RETURN_NONE;
   rt = Jass_UnitDamageTarget(arg_0_Hunit, arg_4_Hwidget, arg_8_R, arg_C_B, arg_10_B, arg_14_Hattacktype, arg_18_Hdamagetype, arg_1C_Hweapontype);
   return Py_BuildValue("I", rt);
}

// DecUnitAbilityLevel 0022f400 (Hunit;I)I
DWORD Jass_DecUnitAbilityLevel(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_DecUnitAbilityLevel]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* DecUnitAbilityLevel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_DecUnitAbilityLevel(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// IncUnitAbilityLevel 00237570 (Hunit;I)I
DWORD Jass_IncUnitAbilityLevel(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IncUnitAbilityLevel]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IncUnitAbilityLevel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_IncUnitAbilityLevel(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// SetUnitAbilityLevel 00247450 (Hunit;II)I
DWORD Jass_SetUnitAbilityLevel(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitAbilityLevel]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitAbilityLevel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_SetUnitAbilityLevel(arg_0_Hunit, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// UnitResetCooldown 0024b580 (Hunit;)V
DWORD Jass_UnitResetCooldown(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitResetCooldown]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitResetCooldown(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_UnitResetCooldown(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// UnitSetConstructionProgress 0024b5a0 (Hunit;I)V
DWORD Jass_UnitSetConstructionProgress(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitSetConstructionProgress]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitSetConstructionProgress(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_UnitSetConstructionProgress(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// UnitSetUpgradeProgress 0024b5e0 (Hunit;I)V
DWORD Jass_UnitSetUpgradeProgress(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitSetUpgradeProgress]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitSetUpgradeProgress(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_UnitSetUpgradeProgress(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// UnitPauseTimedLife 0024b360 (Hunit;B)V
DWORD Jass_UnitPauseTimedLife(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitPauseTimedLife]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitPauseTimedLife(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_UnitPauseTimedLife(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// UnitSetUsesAltIcon 0024b620 (Hunit;B)V
DWORD Jass_UnitSetUsesAltIcon(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitSetUsesAltIcon]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitSetUsesAltIcon(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_UnitSetUsesAltIcon(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// IssueImmediateOrderById 002392c0 (Hunit;I)B
DWORD Jass_IssueImmediateOrderById(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IssueImmediateOrderById]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IssueImmediateOrderById(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_IssueImmediateOrderById(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// IssuePointOrderById 00239690 (Hunit;IRR)B
DWORD Jass_IssuePointOrderById(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IssuePointOrderById]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* IssuePointOrderById(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hunit, &arg_4_I, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_IssuePointOrderById(arg_0_Hunit, arg_4_I, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// IssuePointOrderByIdLoc 00239830 (Hunit;IHlocation;)B
DWORD Jass_IssuePointOrderByIdLoc(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hlocation
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IssuePointOrderByIdLoc]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* IssuePointOrderByIdLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_I, &arg_8_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_IssuePointOrderByIdLoc(arg_0_Hunit, arg_4_I, arg_8_Hlocation);
   return Py_BuildValue("I", rt);
}

// IssueTargetOrderById 002398e0 (Hunit;IHwidget;)B
DWORD Jass_IssueTargetOrderById(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_Hwidget)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hwidget
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IssueTargetOrderById]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* IssueTargetOrderById(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_Hwidget = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_I, &arg_8_Hwidget))
       Py_RETURN_NONE;
   rt = Jass_IssueTargetOrderById(arg_0_Hunit, arg_4_I, arg_8_Hwidget);
   return Py_BuildValue("I", rt);
}

// IssueInstantPointOrderById 00239360 (Hunit;IRRHwidget;)B
DWORD Jass_IssueInstantPointOrderById(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_Hwidget)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_Hwidget
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IssueInstantPointOrderById]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* IssueInstantPointOrderById(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_Hwidget = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hunit, &arg_4_I, &arg_8_R, &arg_C_R, &arg_10_Hwidget))
       Py_RETURN_NONE;
   rt = Jass_IssueInstantPointOrderById(arg_0_Hunit, arg_4_I, arg_8_R, arg_C_R, arg_10_Hwidget);
   return Py_BuildValue("I", rt);
}

// IssueInstantTargetOrderById 00239410 (Hunit;IHwidget;Hwidget;)B
DWORD Jass_IssueInstantTargetOrderById(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_Hwidget, DWORD arg_C_Hwidget)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hwidget
       push eax
       mov eax, arg_8_Hwidget
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IssueInstantTargetOrderById]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* IssueInstantTargetOrderById(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_Hwidget = 0;
   DWORD arg_C_Hwidget = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hunit, &arg_4_I, &arg_8_Hwidget, &arg_C_Hwidget))
       Py_RETURN_NONE;
   rt = Jass_IssueInstantTargetOrderById(arg_0_Hunit, arg_4_I, arg_8_Hwidget, arg_C_Hwidget);
   return Py_BuildValue("I", rt);
}

// IssueBuildOrderById 002391f0 (Hunit;IRR)B
DWORD Jass_IssueBuildOrderById(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IssueBuildOrderById]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* IssueBuildOrderById(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hunit, &arg_4_I, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_IssueBuildOrderById(arg_0_Hunit, arg_4_I, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// IssueNeutralImmediateOrderById 00239550 (Hplayer;Hunit;I)B
DWORD Jass_IssueNeutralImmediateOrderById(DWORD arg_0_Hplayer, DWORD arg_4_Hunit, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_Hunit
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_IssueNeutralImmediateOrderById]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* IssueNeutralImmediateOrderById(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hunit = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hplayer, &arg_4_Hunit, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_IssueNeutralImmediateOrderById(arg_0_Hplayer, arg_4_Hunit, arg_8_I);
   return Py_BuildValue("I", rt);
}

// IssueNeutralPointOrderById 002395b0 (Hplayer;Hunit;IRR)B
DWORD Jass_IssueNeutralPointOrderById(DWORD arg_0_Hplayer, DWORD arg_4_Hunit, DWORD arg_8_I, DWORD arg_C_R, DWORD arg_10_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_Hunit
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_IssueNeutralPointOrderById]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* IssueNeutralPointOrderById(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hunit = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hplayer, &arg_4_Hunit, &arg_8_I, &arg_C_R, &arg_10_R))
       Py_RETURN_NONE;
   rt = Jass_IssueNeutralPointOrderById(arg_0_Hplayer, arg_4_Hunit, arg_8_I, arg_C_R, arg_10_R);
   return Py_BuildValue("I", rt);
}

// IssueNeutralTargetOrderById 00239620 (Hplayer;Hunit;IHwidget;)B
DWORD Jass_IssueNeutralTargetOrderById(DWORD arg_0_Hplayer, DWORD arg_4_Hunit, DWORD arg_8_I, DWORD arg_C_Hwidget)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hwidget
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_Hunit
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_IssueNeutralTargetOrderById]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* IssueNeutralTargetOrderById(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hunit = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hwidget = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hplayer, &arg_4_Hunit, &arg_8_I, &arg_C_Hwidget))
       Py_RETURN_NONE;
   rt = Jass_IssueNeutralTargetOrderById(arg_0_Hplayer, arg_4_Hunit, arg_8_I, arg_C_Hwidget);
   return Py_BuildValue("I", rt);
}

// IssueImmediateOrder 002392a0 (Hunit;S)B
DWORD Jass_IssueImmediateOrder(DWORD arg_0_Hunit, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IssueImmediateOrder]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IssueImmediateOrder(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_IssueImmediateOrder(arg_0_Hunit, arg_4_S);
   return Py_BuildValue("I", rt);
}

// IssuePointOrder 00239670 (Hunit;SRR)B
DWORD Jass_IssuePointOrder(DWORD arg_0_Hunit, DWORD arg_4_S, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IssuePointOrder]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* IssuePointOrder(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hunit, &arg_4_S, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_IssuePointOrder(arg_0_Hunit, arg_4_S, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// IssuePointOrderLoc 00239870 (Hunit;SHlocation;)B
DWORD Jass_IssuePointOrderLoc(DWORD arg_0_Hunit, DWORD arg_4_S, DWORD arg_8_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hlocation
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IssuePointOrderLoc]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* IssuePointOrderLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_S, &arg_8_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_IssuePointOrderLoc(arg_0_Hunit, arg_4_S, arg_8_Hlocation);
   return Py_BuildValue("I", rt);
}

// IssueTargetOrder 002398c0 (Hunit;SHwidget;)B
DWORD Jass_IssueTargetOrder(DWORD arg_0_Hunit, DWORD arg_4_S, DWORD arg_8_Hwidget)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hwidget
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IssueTargetOrder]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* IssueTargetOrder(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_Hwidget = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_S, &arg_8_Hwidget))
       Py_RETURN_NONE;
   rt = Jass_IssueTargetOrder(arg_0_Hunit, arg_4_S, arg_8_Hwidget);
   return Py_BuildValue("I", rt);
}

// IssueInstantPointOrder 00239340 (Hunit;SRRHwidget;)B
DWORD Jass_IssueInstantPointOrder(DWORD arg_0_Hunit, DWORD arg_4_S, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_Hwidget)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_Hwidget
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IssueInstantPointOrder]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* IssueInstantPointOrder(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_Hwidget = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hunit, &arg_4_S, &arg_8_R, &arg_C_R, &arg_10_Hwidget))
       Py_RETURN_NONE;
   rt = Jass_IssueInstantPointOrder(arg_0_Hunit, arg_4_S, arg_8_R, arg_C_R, arg_10_Hwidget);
   return Py_BuildValue("I", rt);
}

// IssueInstantTargetOrder 002393f0 (Hunit;SHwidget;Hwidget;)B
DWORD Jass_IssueInstantTargetOrder(DWORD arg_0_Hunit, DWORD arg_4_S, DWORD arg_8_Hwidget, DWORD arg_C_Hwidget)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hwidget
       push eax
       mov eax, arg_8_Hwidget
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IssueInstantTargetOrder]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* IssueInstantTargetOrder(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_Hwidget = 0;
   DWORD arg_C_Hwidget = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hunit, &arg_4_S, &arg_8_Hwidget, &arg_C_Hwidget))
       Py_RETURN_NONE;
   rt = Jass_IssueInstantTargetOrder(arg_0_Hunit, arg_4_S, arg_8_Hwidget, arg_C_Hwidget);
   return Py_BuildValue("I", rt);
}

// IssueBuildOrder 002391d0 (Hunit;SRR)B
DWORD Jass_IssueBuildOrder(DWORD arg_0_Hunit, DWORD arg_4_S, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IssueBuildOrder]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* IssueBuildOrder(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hunit, &arg_4_S, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_IssueBuildOrder(arg_0_Hunit, arg_4_S, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// IssueNeutralImmediateOrder 00239530 (Hplayer;Hunit;S)B
DWORD Jass_IssueNeutralImmediateOrder(DWORD arg_0_Hplayer, DWORD arg_4_Hunit, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_Hunit
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_IssueNeutralImmediateOrder]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* IssueNeutralImmediateOrder(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hunit = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hplayer, &arg_4_Hunit, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_IssueNeutralImmediateOrder(arg_0_Hplayer, arg_4_Hunit, arg_8_S);
   return Py_BuildValue("I", rt);
}

// IssueNeutralPointOrder 00239590 (Hplayer;Hunit;SRR)B
DWORD Jass_IssueNeutralPointOrder(DWORD arg_0_Hplayer, DWORD arg_4_Hunit, DWORD arg_8_S, DWORD arg_C_R, DWORD arg_10_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_Hunit
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_IssueNeutralPointOrder]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* IssueNeutralPointOrder(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hunit = 0;
   DWORD arg_8_S = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hplayer, &arg_4_Hunit, &arg_8_S, &arg_C_R, &arg_10_R))
       Py_RETURN_NONE;
   rt = Jass_IssueNeutralPointOrder(arg_0_Hplayer, arg_4_Hunit, arg_8_S, arg_C_R, arg_10_R);
   return Py_BuildValue("I", rt);
}

// IssueNeutralTargetOrder 00239600 (Hplayer;Hunit;SHwidget;)B
DWORD Jass_IssueNeutralTargetOrder(DWORD arg_0_Hplayer, DWORD arg_4_Hunit, DWORD arg_8_S, DWORD arg_C_Hwidget)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hwidget
       push eax
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_Hunit
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_IssueNeutralTargetOrder]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* IssueNeutralTargetOrder(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hunit = 0;
   DWORD arg_8_S = 0;
   DWORD arg_C_Hwidget = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hplayer, &arg_4_Hunit, &arg_8_S, &arg_C_Hwidget))
       Py_RETURN_NONE;
   rt = Jass_IssueNeutralTargetOrder(arg_0_Hplayer, arg_4_Hunit, arg_8_S, arg_C_Hwidget);
   return Py_BuildValue("I", rt);
}

// WaygateGetDestinationX 0024baa0 (Hunit;)R
DWORD Jass_WaygateGetDestinationX(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_WaygateGetDestinationX]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* WaygateGetDestinationX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_WaygateGetDestinationX(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// WaygateGetDestinationY 0024baf0 (Hunit;)R
DWORD Jass_WaygateGetDestinationY(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_WaygateGetDestinationY]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* WaygateGetDestinationY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_WaygateGetDestinationY(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// WaygateSetDestination 0024bb80 (Hunit;RR)V
DWORD Jass_WaygateSetDestination(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_WaygateSetDestination]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* WaygateSetDestination(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_WaygateSetDestination(arg_0_Hunit, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// WaygateActivate 0024ba60 (Hunit;B)V
DWORD Jass_WaygateActivate(DWORD arg_0_Hunit, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_WaygateActivate]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* WaygateActivate(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_WaygateActivate(arg_0_Hunit, arg_4_B);
   return Py_BuildValue("I", rt);
}

// WaygateIsActive 0024bb40 (Hunit;)B
DWORD Jass_WaygateIsActive(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_WaygateIsActive]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* WaygateIsActive(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_WaygateIsActive(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// AddItemToAllStock 0022a200 (III)V
DWORD Jass_AddItemToAllStock(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_AddItemToAllStock]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* AddItemToAllStock(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_I, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_AddItemToAllStock(arg_0_I, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// AddItemToStock 0022a220 (Hunit;III)V
DWORD Jass_AddItemToStock(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_AddItemToStock]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* AddItemToStock(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hunit, &arg_4_I, &arg_8_I, &arg_C_I))
       Py_RETURN_NONE;
   rt = Jass_AddItemToStock(arg_0_Hunit, arg_4_I, arg_8_I, arg_C_I);
   return Py_BuildValue("I", rt);
}

// AddUnitToAllStock 0022a840 (III)V
DWORD Jass_AddUnitToAllStock(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_AddUnitToAllStock]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* AddUnitToAllStock(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_I, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_AddUnitToAllStock(arg_0_I, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// AddUnitToStock 0022a860 (Hunit;III)V
DWORD Jass_AddUnitToStock(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_AddUnitToStock]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* AddUnitToStock(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hunit, &arg_4_I, &arg_8_I, &arg_C_I))
       Py_RETURN_NONE;
   rt = Jass_AddUnitToStock(arg_0_Hunit, arg_4_I, arg_8_I, arg_C_I);
   return Py_BuildValue("I", rt);
}

// RemoveItemFromAllStock 00243040 (I)V
DWORD Jass_RemoveItemFromAllStock(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_RemoveItemFromAllStock]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveItemFromAllStock(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_RemoveItemFromAllStock(arg_0_I);
   return Py_BuildValue("I", rt);
}

// RemoveItemFromStock 00243050 (Hunit;I)V
DWORD Jass_RemoveItemFromStock(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_RemoveItemFromStock]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveItemFromStock(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_RemoveItemFromStock(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// RemoveUnitFromAllStock 002432c0 (I)V
DWORD Jass_RemoveUnitFromAllStock(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_RemoveUnitFromAllStock]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveUnitFromAllStock(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_RemoveUnitFromAllStock(arg_0_I);
   return Py_BuildValue("I", rt);
}

// RemoveUnitFromStock 002432d0 (Hunit;I)V
DWORD Jass_RemoveUnitFromStock(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_RemoveUnitFromStock]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveUnitFromStock(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_RemoveUnitFromStock(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// SetAllItemTypeSlots 00244170 (I)V
DWORD Jass_SetAllItemTypeSlots(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_SetAllItemTypeSlots]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetAllItemTypeSlots(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_SetAllItemTypeSlots(arg_0_I);
   return Py_BuildValue("I", rt);
}

// SetAllUnitTypeSlots 00244180 (I)V
DWORD Jass_SetAllUnitTypeSlots(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_SetAllUnitTypeSlots]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetAllUnitTypeSlots(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_SetAllUnitTypeSlots(arg_0_I);
   return Py_BuildValue("I", rt);
}

// SetItemTypeSlots 00246040 (Hunit;I)V
DWORD Jass_SetItemTypeSlots(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetItemTypeSlots]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetItemTypeSlots(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetItemTypeSlots(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// SetUnitTypeSlots 00247e10 (Hunit;I)V
DWORD Jass_SetUnitTypeSlots(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitTypeSlots]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitTypeSlots(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetUnitTypeSlots(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// GetUnitUserData 002368c0 (Hunit;)I
DWORD Jass_GetUnitUserData(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_GetUnitUserData]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitUserData(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_GetUnitUserData(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// SetUnitUserData 00247ec0 (Hunit;I)V
DWORD Jass_SetUnitUserData(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetUnitUserData]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitUserData(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetUnitUserData(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// CreateItem 0022e450 (IRR)Hitem;
DWORD Jass_CreateItem(DWORD arg_0_I, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_CreateItem]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_I, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_CreateItem(arg_0_I, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// RemoveItem 00243010 (Hitem;)V
DWORD Jass_RemoveItem(DWORD arg_0_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_RemoveItem]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hitem))
       Py_RETURN_NONE;
   rt = Jass_RemoveItem(arg_0_Hitem);
   return Py_BuildValue("I", rt);
}

// GetItemPlayer 00232e80 (Hitem;)Hplayer;
DWORD Jass_GetItemPlayer(DWORD arg_0_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_GetItemPlayer]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetItemPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hitem))
       Py_RETURN_NONE;
   rt = Jass_GetItemPlayer(arg_0_Hitem);
   return Py_BuildValue("I", rt);
}

// GetItemTypeId 00232ef0 (Hitem;)I
DWORD Jass_GetItemTypeId(DWORD arg_0_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_GetItemTypeId]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetItemTypeId(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hitem))
       Py_RETURN_NONE;
   rt = Jass_GetItemTypeId(arg_0_Hitem);
   return Py_BuildValue("I", rt);
}

// GetItemX 00232f30 (Hitem;)R
DWORD Jass_GetItemX(DWORD arg_0_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_GetItemX]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetItemX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hitem))
       Py_RETURN_NONE;
   rt = Jass_GetItemX(arg_0_Hitem);
   return Py_BuildValue("I", rt);
}

// GetItemY 00232f70 (Hitem;)R
DWORD Jass_GetItemY(DWORD arg_0_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_GetItemY]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetItemY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hitem))
       Py_RETURN_NONE;
   rt = Jass_GetItemY(arg_0_Hitem);
   return Py_BuildValue("I", rt);
}

// SetItemPosition 00245fc0 (Hitem;RR)V
DWORD Jass_SetItemPosition(DWORD arg_0_Hitem, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_SetItemPosition]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetItemPosition(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hitem, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_SetItemPosition(arg_0_Hitem, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// SetItemDropOnDeath 00245ee0 (Hitem;B)V
DWORD Jass_SetItemDropOnDeath(DWORD arg_0_Hitem, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_SetItemDropOnDeath]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetItemDropOnDeath(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hitem, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetItemDropOnDeath(arg_0_Hitem, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetItemDroppable 00245f10 (Hitem;B)V
DWORD Jass_SetItemDroppable(DWORD arg_0_Hitem, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_SetItemDroppable]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetItemDroppable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hitem, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetItemDroppable(arg_0_Hitem, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetItemPawnable 00245f60 (Hitem;B)V
DWORD Jass_SetItemPawnable(DWORD arg_0_Hitem, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_SetItemPawnable]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetItemPawnable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hitem, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetItemPawnable(arg_0_Hitem, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetItemPlayer 00245f90 (Hitem;Hplayer;B)V
DWORD Jass_SetItemPlayer(DWORD arg_0_Hitem, DWORD arg_4_Hplayer, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_SetItemPlayer]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetItemPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   DWORD arg_4_Hplayer = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hitem, &arg_4_Hplayer, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_SetItemPlayer(arg_0_Hitem, arg_4_Hplayer, arg_8_B);
   return Py_BuildValue("I", rt);
}

// SetItemInvulnerable 00245f40 (Hitem;B)V
DWORD Jass_SetItemInvulnerable(DWORD arg_0_Hitem, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_SetItemInvulnerable]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetItemInvulnerable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hitem, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetItemInvulnerable(arg_0_Hitem, arg_4_B);
   return Py_BuildValue("I", rt);
}

// IsItemInvulnerable 00237e30 (Hitem;)B
DWORD Jass_IsItemInvulnerable(DWORD arg_0_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_IsItemInvulnerable]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsItemInvulnerable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hitem))
       Py_RETURN_NONE;
   rt = Jass_IsItemInvulnerable(arg_0_Hitem);
   return Py_BuildValue("I", rt);
}

// GetItemLevel 00232e30 (Hitem;)I
DWORD Jass_GetItemLevel(DWORD arg_0_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_GetItemLevel]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetItemLevel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hitem))
       Py_RETURN_NONE;
   rt = Jass_GetItemLevel(arg_0_Hitem);
   return Py_BuildValue("I", rt);
}

// GetItemType 00232ed0 (Hitem;)Hitemtype;
DWORD Jass_GetItemType(DWORD arg_0_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_GetItemType]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetItemType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hitem))
       Py_RETURN_NONE;
   rt = Jass_GetItemType(arg_0_Hitem);
   return Py_BuildValue("I", rt);
}

// SetItemVisible 002460a0 (Hitem;B)V
DWORD Jass_SetItemVisible(DWORD arg_0_Hitem, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_SetItemVisible]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetItemVisible(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hitem, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetItemVisible(arg_0_Hitem, arg_4_B);
   return Py_BuildValue("I", rt);
}

// IsItemVisible 00237ef0 (Hitem;)B
DWORD Jass_IsItemVisible(DWORD arg_0_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_IsItemVisible]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsItemVisible(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hitem))
       Py_RETURN_NONE;
   rt = Jass_IsItemVisible(arg_0_Hitem);
   return Py_BuildValue("I", rt);
}

// EnumItemsInRect 00230480 (Hrect;Hboolexpr;C)V
DWORD Jass_EnumItemsInRect(DWORD arg_0_Hrect, DWORD arg_4_Hboolexpr, DWORD arg_8_C)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_C
       push eax
       mov eax, arg_4_Hboolexpr
       push eax
       mov eax, arg_0_Hrect
       push eax
       call [_Jass_EnumItemsInRect]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* EnumItemsInRect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hrect = 0;
   DWORD arg_4_Hboolexpr = 0;
   DWORD arg_8_C = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hrect, &arg_4_Hboolexpr, &arg_8_C))
       Py_RETURN_NONE;
   rt = Jass_EnumItemsInRect(arg_0_Hrect, arg_4_Hboolexpr, arg_8_C);
   return Py_BuildValue("I", rt);
}

// IsItemOwned 00237e50 (Hitem;)B
DWORD Jass_IsItemOwned(DWORD arg_0_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_IsItemOwned]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsItemOwned(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hitem))
       Py_RETURN_NONE;
   rt = Jass_IsItemOwned(arg_0_Hitem);
   return Py_BuildValue("I", rt);
}

// IsItemPowerup 00237eb0 (Hitem;)B
DWORD Jass_IsItemPowerup(DWORD arg_0_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_IsItemPowerup]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsItemPowerup(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hitem))
       Py_RETURN_NONE;
   rt = Jass_IsItemPowerup(arg_0_Hitem);
   return Py_BuildValue("I", rt);
}

// IsItemSellable 00237ed0 (Hitem;)B
DWORD Jass_IsItemSellable(DWORD arg_0_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_IsItemSellable]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsItemSellable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hitem))
       Py_RETURN_NONE;
   rt = Jass_IsItemSellable(arg_0_Hitem);
   return Py_BuildValue("I", rt);
}

// IsItemPawnable 00237e90 (Hitem;)B
DWORD Jass_IsItemPawnable(DWORD arg_0_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_IsItemPawnable]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsItemPawnable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hitem))
       Py_RETURN_NONE;
   rt = Jass_IsItemPawnable(arg_0_Hitem);
   return Py_BuildValue("I", rt);
}

// IsItemIdPowerup 00237e10 (I)B
DWORD Jass_IsItemIdPowerup(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_IsItemIdPowerup]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsItemIdPowerup(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_IsItemIdPowerup(arg_0_I);
   return Py_BuildValue("I", rt);
}

// IsItemIdSellable 00237e20 (I)B
DWORD Jass_IsItemIdSellable(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_IsItemIdSellable]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsItemIdSellable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_IsItemIdSellable(arg_0_I);
   return Py_BuildValue("I", rt);
}

// IsItemIdPawnable 00237e00 (I)B
DWORD Jass_IsItemIdPawnable(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_IsItemIdPawnable]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsItemIdPawnable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_IsItemIdPawnable(arg_0_I);
   return Py_BuildValue("I", rt);
}

// SetItemDropID 00245ec0 (Hitem;I)V
DWORD Jass_SetItemDropID(DWORD arg_0_Hitem, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_SetItemDropID]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetItemDropID(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hitem, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetItemDropID(arg_0_Hitem, arg_4_I);
   return Py_BuildValue("I", rt);
}

// GetItemName 00232e50 (Hitem;)S
DWORD Jass_GetItemName(DWORD arg_0_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_GetItemName]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetItemName(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hitem))
       Py_RETURN_NONE;
   rt = Jass_GetItemName(arg_0_Hitem);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// GetItemCharges 00232e10 (Hitem;)I
DWORD Jass_GetItemCharges(DWORD arg_0_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_GetItemCharges]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetItemCharges(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hitem))
       Py_RETURN_NONE;
   rt = Jass_GetItemCharges(arg_0_Hitem);
   return Py_BuildValue("I", rt);
}

// SetItemCharges 00245e60 (Hitem;I)V
DWORD Jass_SetItemCharges(DWORD arg_0_Hitem, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_SetItemCharges]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetItemCharges(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hitem, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetItemCharges(arg_0_Hitem, arg_4_I);
   return Py_BuildValue("I", rt);
}

// GetItemUserData 00232f10 (Hitem;)I
DWORD Jass_GetItemUserData(DWORD arg_0_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_GetItemUserData]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetItemUserData(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hitem))
       Py_RETURN_NONE;
   rt = Jass_GetItemUserData(arg_0_Hitem);
   return Py_BuildValue("I", rt);
}

// SetItemUserData 00246080 (Hitem;I)V
DWORD Jass_SetItemUserData(DWORD arg_0_Hitem, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hitem
       push eax
       call [_Jass_SetItemUserData]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetItemUserData(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitem = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hitem, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetItemUserData(arg_0_Hitem, arg_4_I);
   return Py_BuildValue("I", rt);
}

// Player 00242080 (I)Hplayer;
DWORD Jass_Player(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_Player]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* Player(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_Player(arg_0_I);
   return Py_BuildValue("I", rt);
}

// GetLocalPlayer 00233380 ()Hplayer;
DWORD Jass_GetLocalPlayer()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetLocalPlayer]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetLocalPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetLocalPlayer();
   return Py_BuildValue("I", rt);
}

// IsPlayerAlly 00238260 (Hplayer;Hplayer;)B
DWORD Jass_IsPlayerAlly(DWORD arg_0_Hplayer, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_IsPlayerAlly]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsPlayerAlly(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_IsPlayerAlly(arg_0_Hplayer, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// IsPlayerEnemy 002382b0 (Hplayer;Hplayer;)B
DWORD Jass_IsPlayerEnemy(DWORD arg_0_Hplayer, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_IsPlayerEnemy]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsPlayerEnemy(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_IsPlayerEnemy(arg_0_Hplayer, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// IsPlayerInForce 00238360 (Hplayer;Hforce;)B
DWORD Jass_IsPlayerInForce(DWORD arg_0_Hplayer, DWORD arg_4_Hforce)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hforce
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_IsPlayerInForce]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsPlayerInForce(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hforce = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_Hforce))
       Py_RETURN_NONE;
   rt = Jass_IsPlayerInForce(arg_0_Hplayer, arg_4_Hforce);
   return Py_BuildValue("I", rt);
}

// IsPlayerObserver 00238390 (Hplayer;)B
DWORD Jass_IsPlayerObserver(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_IsPlayerObserver]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsPlayerObserver(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_IsPlayerObserver(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// GetPlayerRace 00233fa0 (Hplayer;)Hrace;
DWORD Jass_GetPlayerRace(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerRace]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerRace(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerRace(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// GetPlayerId 00233f50 (Hplayer;)I
DWORD Jass_GetPlayerId(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerId]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerId(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerId(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// SetPlayerTechMaxAllowed 00246720 (Hplayer;II)V
DWORD Jass_SetPlayerTechMaxAllowed(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetPlayerTechMaxAllowed]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPlayerTechMaxAllowed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hplayer, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_SetPlayerTechMaxAllowed(arg_0_Hplayer, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// GetPlayerTechMaxAllowed 002343f0 (Hplayer;I)I
DWORD Jass_GetPlayerTechMaxAllowed(DWORD arg_0_Hplayer, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerTechMaxAllowed]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerTechMaxAllowed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerTechMaxAllowed(arg_0_Hplayer, arg_4_I);
   return Py_BuildValue("I", rt);
}

// AddPlayerTechResearched 0022a3e0 (Hplayer;II)V
DWORD Jass_AddPlayerTechResearched(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_AddPlayerTechResearched]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* AddPlayerTechResearched(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hplayer, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_AddPlayerTechResearched(arg_0_Hplayer, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// SetPlayerTechResearched 00246750 (Hplayer;II)V
DWORD Jass_SetPlayerTechResearched(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetPlayerTechResearched]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPlayerTechResearched(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hplayer, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_SetPlayerTechResearched(arg_0_Hplayer, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// GetPlayerTechResearched 00234430 (Hplayer;IB)B
DWORD Jass_GetPlayerTechResearched(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerTechResearched]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerTechResearched(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hplayer, &arg_4_I, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerTechResearched(arg_0_Hplayer, arg_4_I, arg_8_B);
   return Py_BuildValue("I", rt);
}

// GetPlayerTechCount 002343c0 (Hplayer;IB)I
DWORD Jass_GetPlayerTechCount(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerTechCount]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerTechCount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hplayer, &arg_4_I, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerTechCount(arg_0_Hplayer, arg_4_I, arg_8_B);
   return Py_BuildValue("I", rt);
}

// SetPlayerAbilityAvailable 00246310 (Hplayer;IB)V
DWORD Jass_SetPlayerAbilityAvailable(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetPlayerAbilityAvailable]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPlayerAbilityAvailable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hplayer, &arg_4_I, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_SetPlayerAbilityAvailable(arg_0_Hplayer, arg_4_I, arg_8_B);
   return Py_BuildValue("I", rt);
}

// GetPlayerUnitCount 002344d0 (Hplayer;B)I
DWORD Jass_GetPlayerUnitCount(DWORD arg_0_Hplayer, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerUnitCount]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerUnitCount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerUnitCount(arg_0_Hplayer, arg_4_B);
   return Py_BuildValue("I", rt);
}

// GetPlayerTypedUnitCount 00234460 (Hplayer;SBB)I
DWORD Jass_GetPlayerTypedUnitCount(DWORD arg_0_Hplayer, DWORD arg_4_S, DWORD arg_8_B, DWORD arg_C_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerTypedUnitCount]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerTypedUnitCount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_B = 0;
   DWORD arg_C_B = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hplayer, &arg_4_S, &arg_8_B, &arg_C_B))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerTypedUnitCount(arg_0_Hplayer, arg_4_S, arg_8_B, arg_C_B);
   return Py_BuildValue("I", rt);
}

// GetPlayerStructureCount 00234310 (Hplayer;B)I
DWORD Jass_GetPlayerStructureCount(DWORD arg_0_Hplayer, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerStructureCount]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerStructureCount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerStructureCount(arg_0_Hplayer, arg_4_B);
   return Py_BuildValue("I", rt);
}

// IsVisibleToPlayer 00239170 (RRHplayer;)B
DWORD Jass_IsVisibleToPlayer(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hplayer
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_IsVisibleToPlayer]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* IsVisibleToPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_R, &arg_4_R, &arg_8_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_IsVisibleToPlayer(arg_0_R, arg_4_R, arg_8_Hplayer);
   return Py_BuildValue("I", rt);
}

// IsLocationVisibleToPlayer 00238000 (Hlocation;Hplayer;)B
DWORD Jass_IsLocationVisibleToPlayer(DWORD arg_0_Hlocation, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hlocation
       push eax
       call [_Jass_IsLocationVisibleToPlayer]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsLocationVisibleToPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hlocation = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hlocation, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_IsLocationVisibleToPlayer(arg_0_Hlocation, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// IsFoggedToPlayer 00237c30 (RRHplayer;)B
DWORD Jass_IsFoggedToPlayer(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hplayer
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_IsFoggedToPlayer]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* IsFoggedToPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_R, &arg_4_R, &arg_8_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_IsFoggedToPlayer(arg_0_R, arg_4_R, arg_8_Hplayer);
   return Py_BuildValue("I", rt);
}

// IsLocationFoggedToPlayer 00237f40 (Hlocation;Hplayer;)B
DWORD Jass_IsLocationFoggedToPlayer(DWORD arg_0_Hlocation, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hlocation
       push eax
       call [_Jass_IsLocationFoggedToPlayer]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsLocationFoggedToPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hlocation = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hlocation, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_IsLocationFoggedToPlayer(arg_0_Hlocation, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// IsMaskedToPlayer 00238110 (RRHplayer;)B
DWORD Jass_IsMaskedToPlayer(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hplayer
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_IsMaskedToPlayer]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* IsMaskedToPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_R, &arg_4_R, &arg_8_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_IsMaskedToPlayer(arg_0_R, arg_4_R, arg_8_Hplayer);
   return Py_BuildValue("I", rt);
}

// IsLocationMaskedToPlayer 00237fc0 (Hlocation;Hplayer;)B
DWORD Jass_IsLocationMaskedToPlayer(DWORD arg_0_Hlocation, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hlocation
       push eax
       call [_Jass_IsLocationMaskedToPlayer]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsLocationMaskedToPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hlocation = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hlocation, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_IsLocationMaskedToPlayer(arg_0_Hlocation, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// SetPlayerState 00246630 (Hplayer;Hplayerstate;I)V
DWORD Jass_SetPlayerState(DWORD arg_0_Hplayer, DWORD arg_4_Hplayerstate, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_Hplayerstate
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetPlayerState]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPlayerState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hplayerstate = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hplayer, &arg_4_Hplayerstate, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_SetPlayerState(arg_0_Hplayer, arg_4_Hplayerstate, arg_8_I);
   return Py_BuildValue("I", rt);
}

// GetPlayerState 002342b0 (Hplayer;Hplayerstate;)I
DWORD Jass_GetPlayerState(DWORD arg_0_Hplayer, DWORD arg_4_Hplayerstate)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayerstate
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerState]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hplayerstate = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_Hplayerstate))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerState(arg_0_Hplayer, arg_4_Hplayerstate);
   return Py_BuildValue("I", rt);
}

// GetPlayerScore 00233fc0 (Hplayer;Hplayerscore;)I
DWORD Jass_GetPlayerScore(DWORD arg_0_Hplayer, DWORD arg_4_Hplayerscore)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayerscore
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerScore]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerScore(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hplayerscore = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_Hplayerscore))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerScore(arg_0_Hplayer, arg_4_Hplayerscore);
   return Py_BuildValue("I", rt);
}

// GetPlayerAlliance 00233e80 (Hplayer;Hplayer;Halliancetype;)B
DWORD Jass_GetPlayerAlliance(DWORD arg_0_Hplayer, DWORD arg_4_Hplayer, DWORD arg_8_Halliancetype)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Halliancetype
       push eax
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerAlliance]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerAlliance(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hplayer = 0;
   DWORD arg_8_Halliancetype = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hplayer, &arg_4_Hplayer, &arg_8_Halliancetype))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerAlliance(arg_0_Hplayer, arg_4_Hplayer, arg_8_Halliancetype);
   return Py_BuildValue("I", rt);
}

// RemovePlayer 002430c0 (Hplayer;Hplayergameresult;)V
DWORD Jass_RemovePlayer(DWORD arg_0_Hplayer, DWORD arg_4_Hplayergameresult)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayergameresult
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_RemovePlayer]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* RemovePlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hplayergameresult = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_Hplayergameresult))
       Py_RETURN_NONE;
   rt = Jass_RemovePlayer(arg_0_Hplayer, arg_4_Hplayergameresult);
   return Py_BuildValue("I", rt);
}

// CachePlayerHeroData 0022abc0 (Hplayer;)V
DWORD Jass_CachePlayerHeroData(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_CachePlayerHeroData]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* CachePlayerHeroData(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_CachePlayerHeroData(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// GetPlayerHandicap 00233f10 (Hplayer;)R
DWORD Jass_GetPlayerHandicap(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerHandicap]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerHandicap(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerHandicap(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// SetPlayerHandicap 00246430 (Hplayer;R)V
DWORD Jass_SetPlayerHandicap(DWORD arg_0_Hplayer, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetPlayerHandicap]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPlayerHandicap(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetPlayerHandicap(arg_0_Hplayer, arg_4_R);
   return Py_BuildValue("I", rt);
}

// GetPlayerHandicapXP 00233f30 (Hplayer;)R
DWORD Jass_GetPlayerHandicapXP(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerHandicapXP]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerHandicapXP(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerHandicapXP(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// SetPlayerHandicapXP 002464f0 (Hplayer;R)V
DWORD Jass_SetPlayerHandicapXP(DWORD arg_0_Hplayer, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetPlayerHandicapXP]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPlayerHandicapXP(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetPlayerHandicapXP(arg_0_Hplayer, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetPlayerUnitsOwner 00246790 (Hplayer;I)V
DWORD Jass_SetPlayerUnitsOwner(DWORD arg_0_Hplayer, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetPlayerUnitsOwner]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPlayerUnitsOwner(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetPlayerUnitsOwner(arg_0_Hplayer, arg_4_I);
   return Py_BuildValue("I", rt);
}

// CripplePlayer 0022f350 (Hplayer;Hforce;B)V
DWORD Jass_CripplePlayer(DWORD arg_0_Hplayer, DWORD arg_4_Hforce, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_Hforce
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_CripplePlayer]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* CripplePlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hforce = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hplayer, &arg_4_Hforce, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_CripplePlayer(arg_0_Hplayer, arg_4_Hforce, arg_8_B);
   return Py_BuildValue("I", rt);
}

// VersionGet 0024b9e0 ()Hversion;
DWORD Jass_VersionGet()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_VersionGet]
       mov rt, eax
   }
   return rt;
}
static PyObject* VersionGet(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_VersionGet();
   return Py_BuildValue("I", rt);
}

// VersionCompatible 0024b9d0 (Hversion;)B
DWORD Jass_VersionCompatible(DWORD arg_0_Hversion)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hversion
       push eax
       call [_Jass_VersionCompatible]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* VersionCompatible(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hversion = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hversion))
       Py_RETURN_NONE;
   rt = Jass_VersionCompatible(arg_0_Hversion);
   return Py_BuildValue("I", rt);
}

// VersionSupported 0024b9f0 (Hversion;)B
DWORD Jass_VersionSupported(DWORD arg_0_Hversion)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hversion
       push eax
       call [_Jass_VersionSupported]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* VersionSupported(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hversion = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hversion))
       Py_RETURN_NONE;
   rt = Jass_VersionSupported(arg_0_Hversion);
   return Py_BuildValue("I", rt);
}

// EndGame 00230350 (B)V
DWORD Jass_EndGame(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_EndGame]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* EndGame(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_EndGame(arg_0_B);
   return Py_BuildValue("I", rt);
}

// ChangeLevel 0022b1f0 (SB)V
DWORD Jass_ChangeLevel(DWORD arg_0_S, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_ChangeLevel]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* ChangeLevel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_S, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_ChangeLevel(arg_0_S, arg_4_B);
   return Py_BuildValue("I", rt);
}

// RestartGame 002434f0 (B)V
DWORD Jass_RestartGame(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_RestartGame]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* RestartGame(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_RestartGame(arg_0_B);
   return Py_BuildValue("I", rt);
}

// ReloadGame 00242f30 ()V
DWORD Jass_ReloadGame()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_ReloadGame]
       mov rt, eax
   }
   return rt;
}
static PyObject* ReloadGame(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_ReloadGame();
   return Py_BuildValue("I", rt);
}

// LoadGame 00240860 (SB)V
DWORD Jass_LoadGame(DWORD arg_0_S, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_LoadGame]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadGame(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_S, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_LoadGame(arg_0_S, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SaveGame 002439e0 (S)V
DWORD Jass_SaveGame(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_SaveGame]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveGame(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_SaveGame(arg_0_S);
   return Py_BuildValue("I", rt);
}

// RenameSaveDirectory 00243320 (SS)B
DWORD Jass_RenameSaveDirectory(DWORD arg_0_S, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_RenameSaveDirectory]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* RenameSaveDirectory(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_S, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_RenameSaveDirectory(arg_0_S, arg_4_S);
   return Py_BuildValue("I", rt);
}

// RemoveSaveDirectory 00243120 (S)B
DWORD Jass_RemoveSaveDirectory(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_RemoveSaveDirectory]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveSaveDirectory(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_RemoveSaveDirectory(arg_0_S);
   return Py_BuildValue("I", rt);
}

// CopySaveGame 0022bc40 (SS)B
DWORD Jass_CopySaveGame(DWORD arg_0_S, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_CopySaveGame]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* CopySaveGame(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_S, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_CopySaveGame(arg_0_S, arg_4_S);
   return Py_BuildValue("I", rt);
}

// SaveGameExists 00243ad0 (S)B
DWORD Jass_SaveGameExists(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_SaveGameExists]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveGameExists(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_SaveGameExists(arg_0_S);
   return Py_BuildValue("I", rt);
}

// SetFloatGameState 002450b0 (Hfgamestate;R)V
DWORD Jass_SetFloatGameState(DWORD arg_0_Hfgamestate, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hfgamestate
       push eax
       call [_Jass_SetFloatGameState]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetFloatGameState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hfgamestate = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hfgamestate, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetFloatGameState(arg_0_Hfgamestate, arg_4_R);
   return Py_BuildValue("I", rt);
}

// GetFloatGameState 00232750 (Hfgamestate;)R
DWORD Jass_GetFloatGameState(DWORD arg_0_Hfgamestate)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hfgamestate
       push eax
       call [_Jass_GetFloatGameState]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetFloatGameState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hfgamestate = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hfgamestate))
       Py_RETURN_NONE;
   rt = Jass_GetFloatGameState(arg_0_Hfgamestate);
   return Py_BuildValue("I", rt);
}

// SetIntegerGameState 00245dd0 (Higamestate;I)V
DWORD Jass_SetIntegerGameState(DWORD arg_0_Higamestate, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Higamestate
       push eax
       call [_Jass_SetIntegerGameState]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetIntegerGameState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Higamestate = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Higamestate, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetIntegerGameState(arg_0_Higamestate, arg_4_I);
   return Py_BuildValue("I", rt);
}

// GetIntegerGameState 00232d60 (Higamestate;)I
DWORD Jass_GetIntegerGameState(DWORD arg_0_Higamestate)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Higamestate
       push eax
       call [_Jass_GetIntegerGameState]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetIntegerGameState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Higamestate = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Higamestate))
       Py_RETURN_NONE;
   rt = Jass_GetIntegerGameState(arg_0_Higamestate);
   return Py_BuildValue("I", rt);
}

// SyncSelections 00248bb0 ()V
DWORD Jass_SyncSelections()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_SyncSelections]
       mov rt, eax
   }
   return rt;
}
static PyObject* SyncSelections(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_SyncSelections();
   return Py_BuildValue("I", rt);
}

// DialogCreate 0022fcb0 ()Hdialog;
DWORD Jass_DialogCreate()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_DialogCreate]
       mov rt, eax
   }
   return rt;
}
static PyObject* DialogCreate(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_DialogCreate();
   return Py_BuildValue("I", rt);
}

// DialogDestroy 0022fda0 (Hdialog;)V
DWORD Jass_DialogDestroy(DWORD arg_0_Hdialog)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hdialog
       push eax
       call [_Jass_DialogDestroy]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DialogDestroy(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdialog = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hdialog))
       Py_RETURN_NONE;
   rt = Jass_DialogDestroy(arg_0_Hdialog);
   return Py_BuildValue("I", rt);
}

// DialogSetAsync 0022fe10 (Hdialog;)V
DWORD Jass_DialogSetAsync(DWORD arg_0_Hdialog)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hdialog
       push eax
       call [_Jass_DialogSetAsync]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DialogSetAsync(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdialog = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hdialog))
       Py_RETURN_NONE;
   rt = Jass_DialogSetAsync(arg_0_Hdialog);
   return Py_BuildValue("I", rt);
}

// DialogClear 0022fc90 (Hdialog;)V
DWORD Jass_DialogClear(DWORD arg_0_Hdialog)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hdialog
       push eax
       call [_Jass_DialogClear]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DialogClear(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdialog = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hdialog))
       Py_RETURN_NONE;
   rt = Jass_DialogClear(arg_0_Hdialog);
   return Py_BuildValue("I", rt);
}

// DialogSetMessage 0022fe30 (Hdialog;S)V
DWORD Jass_DialogSetMessage(DWORD arg_0_Hdialog, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hdialog
       push eax
       call [_Jass_DialogSetMessage]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* DialogSetMessage(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdialog = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hdialog, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_DialogSetMessage(arg_0_Hdialog, arg_4_S);
   return Py_BuildValue("I", rt);
}

// DialogAddButton 0022fbf0 (Hdialog;SI)Hbutton;
DWORD Jass_DialogAddButton(DWORD arg_0_Hdialog, DWORD arg_4_S, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hdialog
       push eax
       call [_Jass_DialogAddButton]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* DialogAddButton(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdialog = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hdialog, &arg_4_S, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_DialogAddButton(arg_0_Hdialog, arg_4_S, arg_8_I);
   return Py_BuildValue("I", rt);
}

// DialogAddQuitButton 0022fc40 (Hdialog;BSI)Hbutton;
DWORD Jass_DialogAddQuitButton(DWORD arg_0_Hdialog, DWORD arg_4_B, DWORD arg_8_S, DWORD arg_C_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hdialog
       push eax
       call [_Jass_DialogAddQuitButton]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* DialogAddQuitButton(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdialog = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_S = 0;
   DWORD arg_C_I = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hdialog, &arg_4_B, &arg_8_S, &arg_C_I))
       Py_RETURN_NONE;
   rt = Jass_DialogAddQuitButton(arg_0_Hdialog, arg_4_B, arg_8_S, arg_C_I);
   return Py_BuildValue("I", rt);
}

// DialogDisplay 0022fdc0 (Hplayer;Hdialog;B)V
DWORD Jass_DialogDisplay(DWORD arg_0_Hplayer, DWORD arg_4_Hdialog, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_Hdialog
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_DialogDisplay]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* DialogDisplay(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hdialog = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hplayer, &arg_4_Hdialog, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_DialogDisplay(arg_0_Hplayer, arg_4_Hdialog, arg_8_B);
   return Py_BuildValue("I", rt);
}

// SetMissionAvailable 00246260 (IIB)V
DWORD Jass_SetMissionAvailable(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_SetMissionAvailable]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetMissionAvailable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_I, &arg_4_I, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_SetMissionAvailable(arg_0_I, arg_4_I, arg_8_B);
   return Py_BuildValue("I", rt);
}

// SetCampaignAvailable 00244660 (IB)V
DWORD Jass_SetCampaignAvailable(DWORD arg_0_I, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_SetCampaignAvailable]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCampaignAvailable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetCampaignAvailable(arg_0_I, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetCampaignMenuRace 00244690 (Hrace;)V
DWORD Jass_SetCampaignMenuRace(DWORD arg_0_Hrace)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hrace
       push eax
       call [_Jass_SetCampaignMenuRace]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCampaignMenuRace(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hrace = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hrace))
       Py_RETURN_NONE;
   rt = Jass_SetCampaignMenuRace(arg_0_Hrace);
   return Py_BuildValue("I", rt);
}

// SetCampaignMenuRaceEx 002446c0 (I)V
DWORD Jass_SetCampaignMenuRaceEx(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_SetCampaignMenuRaceEx]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCampaignMenuRaceEx(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_SetCampaignMenuRaceEx(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ForceCampaignSelectScreen 00230ef0 ()V
DWORD Jass_ForceCampaignSelectScreen()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_ForceCampaignSelectScreen]
       mov rt, eax
   }
   return rt;
}
static PyObject* ForceCampaignSelectScreen(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_ForceCampaignSelectScreen();
   return Py_BuildValue("I", rt);
}

// SetOpCinematicAvailable 002462e0 (IB)V
DWORD Jass_SetOpCinematicAvailable(DWORD arg_0_I, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_SetOpCinematicAvailable]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetOpCinematicAvailable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetOpCinematicAvailable(arg_0_I, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetEdCinematicAvailable 00244ff0 (IB)V
DWORD Jass_SetEdCinematicAvailable(DWORD arg_0_I, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_SetEdCinematicAvailable]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetEdCinematicAvailable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetEdCinematicAvailable(arg_0_I, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetTutorialCleared 002473e0 (B)V
DWORD Jass_SetTutorialCleared(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SetTutorialCleared]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTutorialCleared(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SetTutorialCleared(arg_0_B);
   return Py_BuildValue("I", rt);
}

// GetDefaultDifficulty 00232160 ()Hgamedifficulty;
DWORD Jass_GetDefaultDifficulty()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetDefaultDifficulty]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetDefaultDifficulty(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetDefaultDifficulty();
   return Py_BuildValue("I", rt);
}

// SetDefaultDifficulty 00244c90 (Hgamedifficulty;)V
DWORD Jass_SetDefaultDifficulty(DWORD arg_0_Hgamedifficulty)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hgamedifficulty
       push eax
       call [_Jass_SetDefaultDifficulty]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetDefaultDifficulty(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamedifficulty = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hgamedifficulty))
       Py_RETURN_NONE;
   rt = Jass_SetDefaultDifficulty(arg_0_Hgamedifficulty);
   return Py_BuildValue("I", rt);
}

// ReloadGameCachesFromDisk 00242f50 ()B
DWORD Jass_ReloadGameCachesFromDisk()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_ReloadGameCachesFromDisk]
       mov rt, eax
   }
   return rt;
}
static PyObject* ReloadGameCachesFromDisk(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_ReloadGameCachesFromDisk();
   return Py_BuildValue("I", rt);
}

// SetCustomCampaignButtonVisible 00244c30 (IB)V
DWORD Jass_SetCustomCampaignButtonVisible(DWORD arg_0_I, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_SetCustomCampaignButtonVisible]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCustomCampaignButtonVisible(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetCustomCampaignButtonVisible(arg_0_I, arg_4_B);
   return Py_BuildValue("I", rt);
}

// GetCustomCampaignButtonVisible 002320f0 (I)B
DWORD Jass_GetCustomCampaignButtonVisible(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_GetCustomCampaignButtonVisible]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCustomCampaignButtonVisible(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_GetCustomCampaignButtonVisible(arg_0_I);
   return Py_BuildValue("I", rt);
}

// DoNotSaveReplay 00230130 ()V
DWORD Jass_DoNotSaveReplay()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_DoNotSaveReplay]
       mov rt, eax
   }
   return rt;
}
static PyObject* DoNotSaveReplay(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_DoNotSaveReplay();
   return Py_BuildValue("I", rt);
}

// InitGameCache 002375f0 (S)Hgamecache;
DWORD Jass_InitGameCache(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_InitGameCache]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* InitGameCache(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_InitGameCache(arg_0_S);
   return Py_BuildValue("I", rt);
}

// SaveGameCache 00243aa0 (Hgamecache;)B
DWORD Jass_SaveGameCache(DWORD arg_0_Hgamecache)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_SaveGameCache]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveGameCache(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hgamecache))
       Py_RETURN_NONE;
   rt = Jass_SaveGameCache(arg_0_Hgamecache);
   return Py_BuildValue("I", rt);
}

// StoreInteger 00248590 (Hgamecache;SSI)V
DWORD Jass_StoreInteger(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S, DWORD arg_C_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_StoreInteger]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* StoreInteger(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   DWORD arg_C_I = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hgamecache, &arg_4_S, &arg_8_S, &arg_C_I))
       Py_RETURN_NONE;
   rt = Jass_StoreInteger(arg_0_Hgamecache, arg_4_S, arg_8_S, arg_C_I);
   return Py_BuildValue("I", rt);
}

// StoreReal 002485e0 (Hgamecache;SSR)V
DWORD Jass_StoreReal(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_StoreReal]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* StoreReal(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hgamecache, &arg_4_S, &arg_8_S, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_StoreReal(arg_0_Hgamecache, arg_4_S, arg_8_S, arg_C_R);
   return Py_BuildValue("I", rt);
}

// StoreBoolean 00248530 (Hgamecache;SSB)V
DWORD Jass_StoreBoolean(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S, DWORD arg_C_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_StoreBoolean]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* StoreBoolean(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   DWORD arg_C_B = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hgamecache, &arg_4_S, &arg_8_S, &arg_C_B))
       Py_RETURN_NONE;
   rt = Jass_StoreBoolean(arg_0_Hgamecache, arg_4_S, arg_8_S, arg_C_B);
   return Py_BuildValue("I", rt);
}

// StoreUnit 00248690 (Hgamecache;SSHunit;)B
DWORD Jass_StoreUnit(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S, DWORD arg_C_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hunit
       push eax
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_StoreUnit]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* StoreUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   DWORD arg_C_Hunit = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hgamecache, &arg_4_S, &arg_8_S, &arg_C_Hunit))
       Py_RETURN_NONE;
   rt = Jass_StoreUnit(arg_0_Hgamecache, arg_4_S, arg_8_S, arg_C_Hunit);
   return Py_BuildValue("I", rt);
}

// StoreString 00248630 (Hgamecache;SSS)B
DWORD Jass_StoreString(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S, DWORD arg_C_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_S
       push eax
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_StoreString]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* StoreString(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   DWORD arg_C_S = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hgamecache, &arg_4_S, &arg_8_S, &arg_C_S))
       Py_RETURN_NONE;
   rt = Jass_StoreString(arg_0_Hgamecache, arg_4_S, arg_8_S, arg_C_S);
   return Py_BuildValue("I", rt);
}

// SaveInteger 00243ba0 (Hhashtable;III)V
DWORD Jass_SaveInteger(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveInteger]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveInteger(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_I))
       Py_RETURN_NONE;
   rt = Jass_SaveInteger(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_I);
   return Py_BuildValue("I", rt);
}

// SaveReal 00243d20 (Hhashtable;IIR)V
DWORD Jass_SaveReal(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveReal]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveReal(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_SaveReal(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_R);
   return Py_BuildValue("I", rt);
}

// SaveBoolean 00243880 (Hhashtable;IIB)V
DWORD Jass_SaveBoolean(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveBoolean]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveBoolean(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_B = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_B))
       Py_RETURN_NONE;
   rt = Jass_SaveBoolean(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_B);
   return Py_BuildValue("I", rt);
}

// SaveStr 00243e00 (Hhashtable;IIS)B
DWORD Jass_SaveStr(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_S
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveStr]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveStr(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_S = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_S))
       Py_RETURN_NONE;
   rt = Jass_SaveStr(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_S);
   return Py_BuildValue("I", rt);
}

// SavePlayerHandle 00243cc0 (Hhashtable;IIHplayer;)B
DWORD Jass_SavePlayerHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hplayer
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SavePlayerHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SavePlayerHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_SavePlayerHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hplayer);
   return Py_BuildValue("I", rt);
}

// SaveWidgetHandle 00243fa0 (Hhashtable;IIHwidget;)B
DWORD Jass_SaveWidgetHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hwidget)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hwidget
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveWidgetHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveWidgetHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hwidget = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hwidget))
       Py_RETURN_NONE;
   rt = Jass_SaveWidgetHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hwidget);
   return Py_BuildValue("I", rt);
}

// SaveDestructableHandle 00243920 (Hhashtable;IIHdestructable;)B
DWORD Jass_SaveDestructableHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hdestructable)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hdestructable
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveDestructableHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveDestructableHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hdestructable = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hdestructable))
       Py_RETURN_NONE;
   rt = Jass_SaveDestructableHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hdestructable);
   return Py_BuildValue("I", rt);
}

// SaveItemHandle 00243be0 (Hhashtable;IIHitem;)B
DWORD Jass_SaveItemHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hitem
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveItemHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveItemHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hitem = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hitem))
       Py_RETURN_NONE;
   rt = Jass_SaveItemHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hitem);
   return Py_BuildValue("I", rt);
}

// SaveUnitHandle 00243f60 (Hhashtable;IIHunit;)B
DWORD Jass_SaveUnitHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hunit
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveUnitHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveUnitHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hunit = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hunit))
       Py_RETURN_NONE;
   rt = Jass_SaveUnitHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hunit);
   return Py_BuildValue("I", rt);
}

// SaveAbilityHandle 00243840 (Hhashtable;IIHability;)B
DWORD Jass_SaveAbilityHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hability)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hability
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveAbilityHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveAbilityHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hability = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hability))
       Py_RETURN_NONE;
   rt = Jass_SaveAbilityHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hability);
   return Py_BuildValue("I", rt);
}

// SaveTimerHandle 00243e80 (Hhashtable;IIHtimer;)B
DWORD Jass_SaveTimerHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Htimer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Htimer
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveTimerHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveTimerHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Htimer = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Htimer))
       Py_RETURN_NONE;
   rt = Jass_SaveTimerHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Htimer);
   return Py_BuildValue("I", rt);
}

// SaveRegionHandle 00243d80 (Hhashtable;IIHregion;)B
DWORD Jass_SaveRegionHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hregion)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hregion
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveRegionHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveRegionHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hregion = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hregion))
       Py_RETURN_NONE;
   rt = Jass_SaveRegionHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hregion);
   return Py_BuildValue("I", rt);
}

// SaveTriggerHandle 00243f20 (Hhashtable;IIHtrigger;)B
DWORD Jass_SaveTriggerHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Htrigger)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Htrigger
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveTriggerHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveTriggerHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Htrigger = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Htrigger))
       Py_RETURN_NONE;
   rt = Jass_SaveTriggerHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Htrigger);
   return Py_BuildValue("I", rt);
}

// SaveTriggerConditionHandle 00243ee0 (Hhashtable;IIHtriggercondition;)B
DWORD Jass_SaveTriggerConditionHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Htriggercondition)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Htriggercondition
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveTriggerConditionHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveTriggerConditionHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Htriggercondition = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Htriggercondition))
       Py_RETURN_NONE;
   rt = Jass_SaveTriggerConditionHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Htriggercondition);
   return Py_BuildValue("I", rt);
}

// SaveTriggerActionHandle 00243ec0 (Hhashtable;IIHtriggeraction;)B
DWORD Jass_SaveTriggerActionHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Htriggeraction)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Htriggeraction
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveTriggerActionHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveTriggerActionHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Htriggeraction = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Htriggeraction))
       Py_RETURN_NONE;
   rt = Jass_SaveTriggerActionHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Htriggeraction);
   return Py_BuildValue("I", rt);
}

// SaveTriggerEventHandle 00243f00 (Hhashtable;IIHevent;)B
DWORD Jass_SaveTriggerEventHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hevent)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hevent
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveTriggerEventHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveTriggerEventHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hevent = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hevent))
       Py_RETURN_NONE;
   rt = Jass_SaveTriggerEventHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hevent);
   return Py_BuildValue("I", rt);
}

// SaveForceHandle 002439c0 (Hhashtable;IIHforce;)B
DWORD Jass_SaveForceHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hforce)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hforce
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveForceHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveForceHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hforce = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hforce))
       Py_RETURN_NONE;
   rt = Jass_SaveForceHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hforce);
   return Py_BuildValue("I", rt);
}

// SaveGroupHandle 00243b40 (Hhashtable;IIHgroup;)B
DWORD Jass_SaveGroupHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hgroup)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hgroup
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveGroupHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveGroupHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hgroup = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hgroup))
       Py_RETURN_NONE;
   rt = Jass_SaveGroupHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hgroup);
   return Py_BuildValue("I", rt);
}

// SaveLocationHandle 00243c60 (Hhashtable;IIHlocation;)B
DWORD Jass_SaveLocationHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hlocation
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveLocationHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveLocationHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_SaveLocationHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hlocation);
   return Py_BuildValue("I", rt);
}

// SaveRectHandle 00243d60 (Hhashtable;IIHrect;)B
DWORD Jass_SaveRectHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hrect)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hrect
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveRectHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveRectHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hrect = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hrect))
       Py_RETURN_NONE;
   rt = Jass_SaveRectHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hrect);
   return Py_BuildValue("I", rt);
}

// SaveBooleanExprHandle 002438c0 (Hhashtable;IIHboolexpr;)B
DWORD Jass_SaveBooleanExprHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hboolexpr)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hboolexpr
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveBooleanExprHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveBooleanExprHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hboolexpr = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hboolexpr))
       Py_RETURN_NONE;
   rt = Jass_SaveBooleanExprHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hboolexpr);
   return Py_BuildValue("I", rt);
}

// SaveSoundHandle 00243de0 (Hhashtable;IIHsound;)B
DWORD Jass_SaveSoundHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hsound)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hsound
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveSoundHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveSoundHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hsound = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hsound))
       Py_RETURN_NONE;
   rt = Jass_SaveSoundHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hsound);
   return Py_BuildValue("I", rt);
}

// SaveEffectHandle 00243960 (Hhashtable;IIHeffect;)B
DWORD Jass_SaveEffectHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Heffect)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Heffect
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveEffectHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveEffectHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Heffect = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Heffect))
       Py_RETURN_NONE;
   rt = Jass_SaveEffectHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Heffect);
   return Py_BuildValue("I", rt);
}

// SaveUnitPoolHandle 00243f80 (Hhashtable;IIHunitpool;)B
DWORD Jass_SaveUnitPoolHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hunitpool)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hunitpool
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveUnitPoolHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveUnitPoolHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hunitpool = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hunitpool))
       Py_RETURN_NONE;
   rt = Jass_SaveUnitPoolHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hunitpool);
   return Py_BuildValue("I", rt);
}

// SaveItemPoolHandle 00243c00 (Hhashtable;IIHitempool;)B
DWORD Jass_SaveItemPoolHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hitempool)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hitempool
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveItemPoolHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveItemPoolHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hitempool = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hitempool))
       Py_RETURN_NONE;
   rt = Jass_SaveItemPoolHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hitempool);
   return Py_BuildValue("I", rt);
}

// SaveQuestHandle 00243ce0 (Hhashtable;IIHquest;)B
DWORD Jass_SaveQuestHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hquest)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hquest
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveQuestHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveQuestHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hquest = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hquest))
       Py_RETURN_NONE;
   rt = Jass_SaveQuestHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hquest);
   return Py_BuildValue("I", rt);
}

// SaveQuestItemHandle 00243d00 (Hhashtable;IIHquestitem;)B
DWORD Jass_SaveQuestItemHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hquestitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hquestitem
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveQuestItemHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveQuestItemHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hquestitem = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hquestitem))
       Py_RETURN_NONE;
   rt = Jass_SaveQuestItemHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hquestitem);
   return Py_BuildValue("I", rt);
}

// SaveDefeatConditionHandle 00243900 (Hhashtable;IIHdefeatcondition;)B
DWORD Jass_SaveDefeatConditionHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hdefeatcondition)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hdefeatcondition
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveDefeatConditionHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveDefeatConditionHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hdefeatcondition = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hdefeatcondition))
       Py_RETURN_NONE;
   rt = Jass_SaveDefeatConditionHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hdefeatcondition);
   return Py_BuildValue("I", rt);
}

// SaveTimerDialogHandle 00243e60 (Hhashtable;IIHtimerdialog;)B
DWORD Jass_SaveTimerDialogHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Htimerdialog)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Htimerdialog
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveTimerDialogHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveTimerDialogHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Htimerdialog = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Htimerdialog))
       Py_RETURN_NONE;
   rt = Jass_SaveTimerDialogHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Htimerdialog);
   return Py_BuildValue("I", rt);
}

// SaveLeaderboardHandle 00243c20 (Hhashtable;IIHleaderboard;)B
DWORD Jass_SaveLeaderboardHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hleaderboard)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hleaderboard
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveLeaderboardHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveLeaderboardHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hleaderboard = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hleaderboard))
       Py_RETURN_NONE;
   rt = Jass_SaveLeaderboardHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hleaderboard);
   return Py_BuildValue("I", rt);
}

// SaveMultiboardHandle 00243c80 (Hhashtable;IIHmultiboard;)B
DWORD Jass_SaveMultiboardHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hmultiboard)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hmultiboard
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveMultiboardHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveMultiboardHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hmultiboard = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hmultiboard))
       Py_RETURN_NONE;
   rt = Jass_SaveMultiboardHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hmultiboard);
   return Py_BuildValue("I", rt);
}

// SaveMultiboardItemHandle 00243ca0 (Hhashtable;IIHmultiboarditem;)B
DWORD Jass_SaveMultiboardItemHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hmultiboarditem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hmultiboarditem
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveMultiboardItemHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveMultiboardItemHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hmultiboarditem = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hmultiboarditem))
       Py_RETURN_NONE;
   rt = Jass_SaveMultiboardItemHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hmultiboarditem);
   return Py_BuildValue("I", rt);
}

// SaveTrackableHandle 00243ea0 (Hhashtable;IIHtrackable;)B
DWORD Jass_SaveTrackableHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Htrackable)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Htrackable
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveTrackableHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveTrackableHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Htrackable = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Htrackable))
       Py_RETURN_NONE;
   rt = Jass_SaveTrackableHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Htrackable);
   return Py_BuildValue("I", rt);
}

// SaveDialogHandle 00243940 (Hhashtable;IIHdialog;)B
DWORD Jass_SaveDialogHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hdialog)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hdialog
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveDialogHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveDialogHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hdialog = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hdialog))
       Py_RETURN_NONE;
   rt = Jass_SaveDialogHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hdialog);
   return Py_BuildValue("I", rt);
}

// SaveButtonHandle 002438e0 (Hhashtable;IIHbutton;)B
DWORD Jass_SaveButtonHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hbutton)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hbutton
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveButtonHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveButtonHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hbutton = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hbutton))
       Py_RETURN_NONE;
   rt = Jass_SaveButtonHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hbutton);
   return Py_BuildValue("I", rt);
}

// SaveTextTagHandle 00243e40 (Hhashtable;IIHtexttag;)B
DWORD Jass_SaveTextTagHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Htexttag)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Htexttag
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveTextTagHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveTextTagHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Htexttag = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Htexttag))
       Py_RETURN_NONE;
   rt = Jass_SaveTextTagHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Htexttag);
   return Py_BuildValue("I", rt);
}

// SaveLightningHandle 00243c40 (Hhashtable;IIHlightning;)B
DWORD Jass_SaveLightningHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hlightning)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hlightning
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveLightningHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveLightningHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hlightning = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hlightning))
       Py_RETURN_NONE;
   rt = Jass_SaveLightningHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hlightning);
   return Py_BuildValue("I", rt);
}

// SaveImageHandle 00243b80 (Hhashtable;IIHimage;)B
DWORD Jass_SaveImageHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Himage)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Himage
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveImageHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveImageHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Himage = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Himage))
       Py_RETURN_NONE;
   rt = Jass_SaveImageHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Himage);
   return Py_BuildValue("I", rt);
}

// SaveUbersplatHandle 00243f40 (Hhashtable;IIHubersplat;)B
DWORD Jass_SaveUbersplatHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hubersplat)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hubersplat
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveUbersplatHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveUbersplatHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hubersplat = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hubersplat))
       Py_RETURN_NONE;
   rt = Jass_SaveUbersplatHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hubersplat);
   return Py_BuildValue("I", rt);
}

// SaveFogStateHandle 002439a0 (Hhashtable;IIHfogstate;)B
DWORD Jass_SaveFogStateHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hfogstate)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hfogstate
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveFogStateHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveFogStateHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hfogstate = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hfogstate))
       Py_RETURN_NONE;
   rt = Jass_SaveFogStateHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hfogstate);
   return Py_BuildValue("I", rt);
}

// SaveFogModifierHandle 00243980 (Hhashtable;IIHfogmodifier;)B
DWORD Jass_SaveFogModifierHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hfogmodifier)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hfogmodifier
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveFogModifierHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveFogModifierHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hfogmodifier = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hfogmodifier))
       Py_RETURN_NONE;
   rt = Jass_SaveFogModifierHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hfogmodifier);
   return Py_BuildValue("I", rt);
}

// SaveAgentHandle 00243860 (Hhashtable;IIHagent;)B
DWORD Jass_SaveAgentHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hagent)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hagent
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveAgentHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveAgentHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hagent = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hagent))
       Py_RETURN_NONE;
   rt = Jass_SaveAgentHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hagent);
   return Py_BuildValue("I", rt);
}

// SaveHashtableHandle 00243b60 (Hhashtable;IIHhashtable;)B
DWORD Jass_SaveHashtableHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hhashtable)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hhashtable
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_SaveHashtableHandle]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SaveHashtableHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hhashtable = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hhashtable, &arg_4_I, &arg_8_I, &arg_C_Hhashtable))
       Py_RETURN_NONE;
   rt = Jass_SaveHashtableHandle(arg_0_Hhashtable, arg_4_I, arg_8_I, arg_C_Hhashtable);
   return Py_BuildValue("I", rt);
}

// SyncStoredInteger 00248c50 (Hgamecache;SS)V
DWORD Jass_SyncStoredInteger(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_SyncStoredInteger]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SyncStoredInteger(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_SyncStoredInteger(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("I", rt);
}

// SyncStoredReal 00248cb0 (Hgamecache;SS)V
DWORD Jass_SyncStoredReal(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_SyncStoredReal]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SyncStoredReal(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_SyncStoredReal(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("I", rt);
}

// SyncStoredBoolean 00248bf0 (Hgamecache;SS)V
DWORD Jass_SyncStoredBoolean(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_SyncStoredBoolean]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SyncStoredBoolean(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_SyncStoredBoolean(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("I", rt);
}

// SyncStoredUnit 00248d70 (Hgamecache;SS)V
DWORD Jass_SyncStoredUnit(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_SyncStoredUnit]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SyncStoredUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_SyncStoredUnit(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("I", rt);
}

// SyncStoredString 00248d10 (Hgamecache;SS)V
DWORD Jass_SyncStoredString(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_SyncStoredString]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SyncStoredString(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_SyncStoredString(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("I", rt);
}

// GetStoredInteger 00235940 (Hgamecache;SS)I
DWORD Jass_GetStoredInteger(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_GetStoredInteger]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GetStoredInteger(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_GetStoredInteger(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("I", rt);
}

// GetStoredReal 00235990 (Hgamecache;SS)R
DWORD Jass_GetStoredReal(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_GetStoredReal]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GetStoredReal(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_GetStoredReal(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("I", rt);
}

// GetStoredBoolean 002358f0 (Hgamecache;SS)B
DWORD Jass_GetStoredBoolean(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_GetStoredBoolean]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GetStoredBoolean(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_GetStoredBoolean(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("I", rt);
}

// RestoreUnit 00243520 (Hgamecache;SSHplayer;RRR)Hunit;
DWORD Jass_RestoreUnit(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S, DWORD arg_C_Hplayer, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_18_R
       push eax
       mov eax, arg_14_R
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_Hplayer
       push eax
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_RestoreUnit]
       add esp, 0x1c
       mov rt, eax
   }
   return rt;
}
static PyObject* RestoreUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   DWORD arg_C_Hplayer = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_R = 0;
   DWORD arg_18_R = 0;
   if (!PyArg_ParseTuple(args, "IIIIIII", &arg_0_Hgamecache, &arg_4_S, &arg_8_S, &arg_C_Hplayer, &arg_10_R, &arg_14_R, &arg_18_R))
       Py_RETURN_NONE;
   rt = Jass_RestoreUnit(arg_0_Hgamecache, arg_4_S, arg_8_S, arg_C_Hplayer, arg_10_R, arg_14_R, arg_18_R);
   return Py_BuildValue("I", rt);
}

// GetStoredString 002359f0 (Hgamecache;SS)S
DWORD Jass_GetStoredString(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_GetStoredString]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GetStoredString(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_GetStoredString(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// HaveStoredInteger 00237320 (Hgamecache;SS)B
DWORD Jass_HaveStoredInteger(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_HaveStoredInteger]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* HaveStoredInteger(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_HaveStoredInteger(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("I", rt);
}

// HaveStoredReal 00237370 (Hgamecache;SS)B
DWORD Jass_HaveStoredReal(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_HaveStoredReal]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* HaveStoredReal(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_HaveStoredReal(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("I", rt);
}

// HaveStoredBoolean 002372d0 (Hgamecache;SS)B
DWORD Jass_HaveStoredBoolean(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_HaveStoredBoolean]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* HaveStoredBoolean(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_HaveStoredBoolean(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("I", rt);
}

// HaveStoredUnit 00237410 (Hgamecache;SS)B
DWORD Jass_HaveStoredUnit(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_HaveStoredUnit]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* HaveStoredUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_HaveStoredUnit(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("I", rt);
}

// HaveStoredString 002373c0 (Hgamecache;SS)B
DWORD Jass_HaveStoredString(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_HaveStoredString]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* HaveStoredString(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_HaveStoredString(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("I", rt);
}

// FlushGameCache 00230b70 (Hgamecache;)V
DWORD Jass_FlushGameCache(DWORD arg_0_Hgamecache)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_FlushGameCache]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* FlushGameCache(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hgamecache))
       Py_RETURN_NONE;
   rt = Jass_FlushGameCache(arg_0_Hgamecache);
   return Py_BuildValue("I", rt);
}

// FlushStoredMission 00230c90 (Hgamecache;S)V
DWORD Jass_FlushStoredMission(DWORD arg_0_Hgamecache, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_FlushStoredMission]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* FlushStoredMission(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hgamecache, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_FlushStoredMission(arg_0_Hgamecache, arg_4_S);
   return Py_BuildValue("I", rt);
}

// FlushStoredInteger 00230c40 (Hgamecache;SS)V
DWORD Jass_FlushStoredInteger(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_FlushStoredInteger]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* FlushStoredInteger(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_FlushStoredInteger(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("I", rt);
}

// FlushStoredReal 00230cd0 (Hgamecache;SS)V
DWORD Jass_FlushStoredReal(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_FlushStoredReal]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* FlushStoredReal(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_FlushStoredReal(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("I", rt);
}

// FlushStoredBoolean 00230bf0 (Hgamecache;SS)V
DWORD Jass_FlushStoredBoolean(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_FlushStoredBoolean]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* FlushStoredBoolean(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_FlushStoredBoolean(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("I", rt);
}

// FlushStoredUnit 00230d70 (Hgamecache;SS)V
DWORD Jass_FlushStoredUnit(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_FlushStoredUnit]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* FlushStoredUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_FlushStoredUnit(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("I", rt);
}

// FlushStoredString 00230d20 (Hgamecache;SS)V
DWORD Jass_FlushStoredString(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hgamecache
       push eax
       call [_Jass_FlushStoredString]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* FlushStoredString(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hgamecache = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hgamecache, &arg_4_S, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_FlushStoredString(arg_0_Hgamecache, arg_4_S, arg_8_S);
   return Py_BuildValue("I", rt);
}

// InitHashtable 00237700 ()Hhashtable;
DWORD Jass_InitHashtable()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_InitHashtable]
       mov rt, eax
   }
   return rt;
}
static PyObject* InitHashtable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_InitHashtable();
   return Py_BuildValue("I", rt);
}

// LoadInteger 00240940 (Hhashtable;II)I;
DWORD Jass_LoadInteger(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadInteger]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadInteger(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadInteger(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadReal 00240ac0 (Hhashtable;II)R;
DWORD Jass_LoadReal(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadReal]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadReal(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadReal(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadBoolean 00240700 (Hhashtable;II)B;
DWORD Jass_LoadBoolean(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadBoolean]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadBoolean(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadBoolean(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadStr 00240c60 (Hhashtable;II)S;
DWORD Jass_LoadStr(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadStr]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadStr(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadStr(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// LoadPlayerHandle 00240a60 (Hhashtable;II)Hplayer;
DWORD Jass_LoadPlayerHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadPlayerHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadPlayerHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadPlayerHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadWidgetHandle 00240e00 (Hhashtable;II)Hwidget;
DWORD Jass_LoadWidgetHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadWidgetHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadWidgetHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadWidgetHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadDestructableHandle 002407a0 (Hhashtable;II)Hdestructable;
DWORD Jass_LoadDestructableHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadDestructableHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadDestructableHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadDestructableHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadItemHandle 00240980 (Hhashtable;II)Hitem;
DWORD Jass_LoadItemHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadItemHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadItemHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadItemHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadUnitHandle 00240dc0 (Hhashtable;II)Hunit;
DWORD Jass_LoadUnitHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadUnitHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadUnitHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadUnitHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadAbilityHandle 002406e0 (Hhashtable;II)Hability;
DWORD Jass_LoadAbilityHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadAbilityHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadAbilityHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadAbilityHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadTimerHandle 00240ce0 (Hhashtable;II)Htimer;
DWORD Jass_LoadTimerHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadTimerHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadTimerHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadTimerHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadRegionHandle 00240b20 (Hhashtable;II)Hregion;
DWORD Jass_LoadRegionHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadRegionHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadRegionHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadRegionHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadTriggerHandle 00240d80 (Hhashtable;II)Htrigger;
DWORD Jass_LoadTriggerHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadTriggerHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadTriggerHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadTriggerHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadTriggerConditionHandle 00240d40 (Hhashtable;II)Htriggercondition;
DWORD Jass_LoadTriggerConditionHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadTriggerConditionHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadTriggerConditionHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadTriggerConditionHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadTriggerActionHandle 00240d20 (Hhashtable;II)Htriggeraction;
DWORD Jass_LoadTriggerActionHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadTriggerActionHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadTriggerActionHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadTriggerActionHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadTriggerEventHandle 00240d60 (Hhashtable;II)Hevent;
DWORD Jass_LoadTriggerEventHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadTriggerEventHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadTriggerEventHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadTriggerEventHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadForceHandle 00240840 (Hhashtable;II)Hforce;
DWORD Jass_LoadForceHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadForceHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadForceHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadForceHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadGroupHandle 002408e0 (Hhashtable;II)Hgroup;
DWORD Jass_LoadGroupHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadGroupHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadGroupHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadGroupHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadLocationHandle 00240a00 (Hhashtable;II)Hlocation;
DWORD Jass_LoadLocationHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadLocationHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadLocationHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadLocationHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadRectHandle 00240b00 (Hhashtable;II)Hrect;
DWORD Jass_LoadRectHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadRectHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadRectHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadRectHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadBooleanExprHandle 00240740 (Hhashtable;II)Hboolexpr;
DWORD Jass_LoadBooleanExprHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadBooleanExprHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadBooleanExprHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadBooleanExprHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadSoundHandle 00240c40 (Hhashtable;II)Hsound;
DWORD Jass_LoadSoundHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadSoundHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadSoundHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadSoundHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadEffectHandle 002407e0 (Hhashtable;II)Heffect;
DWORD Jass_LoadEffectHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadEffectHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadEffectHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadEffectHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadUnitPoolHandle 00240de0 (Hhashtable;II)Hunitpool;
DWORD Jass_LoadUnitPoolHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadUnitPoolHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadUnitPoolHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadUnitPoolHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadItemPoolHandle 002409a0 (Hhashtable;II)Hitempool;
DWORD Jass_LoadItemPoolHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadItemPoolHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadItemPoolHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadItemPoolHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadQuestHandle 00240a80 (Hhashtable;II)Hquest;
DWORD Jass_LoadQuestHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadQuestHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadQuestHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadQuestHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadQuestItemHandle 00240aa0 (Hhashtable;II)Hquestitem;
DWORD Jass_LoadQuestItemHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadQuestItemHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadQuestItemHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadQuestItemHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadDefeatConditionHandle 00240780 (Hhashtable;II)Hdefeatcondition;
DWORD Jass_LoadDefeatConditionHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadDefeatConditionHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadDefeatConditionHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadDefeatConditionHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadTimerDialogHandle 00240cc0 (Hhashtable;II)Htimerdialog;
DWORD Jass_LoadTimerDialogHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadTimerDialogHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadTimerDialogHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadTimerDialogHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadLeaderboardHandle 002409c0 (Hhashtable;II)Hleaderboard;
DWORD Jass_LoadLeaderboardHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadLeaderboardHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadLeaderboardHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadLeaderboardHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadMultiboardHandle 00240a20 (Hhashtable;II)Hmultiboard;
DWORD Jass_LoadMultiboardHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadMultiboardHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadMultiboardHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadMultiboardHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadMultiboardItemHandle 00240a40 (Hhashtable;II)Hmultiboarditem;
DWORD Jass_LoadMultiboardItemHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadMultiboardItemHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadMultiboardItemHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadMultiboardItemHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadTrackableHandle 00240d00 (Hhashtable;II)Htrackable;
DWORD Jass_LoadTrackableHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadTrackableHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadTrackableHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadTrackableHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadDialogHandle 002407c0 (Hhashtable;II)Hdialog;
DWORD Jass_LoadDialogHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadDialogHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadDialogHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadDialogHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadButtonHandle 00240760 (Hhashtable;II)Hbutton;
DWORD Jass_LoadButtonHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadButtonHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadButtonHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadButtonHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadTextTagHandle 00240ca0 (Hhashtable;II)Htexttag;
DWORD Jass_LoadTextTagHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadTextTagHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadTextTagHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadTextTagHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadLightningHandle 002409e0 (Hhashtable;II)Hlightning;
DWORD Jass_LoadLightningHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadLightningHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadLightningHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadLightningHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadImageHandle 00240920 (Hhashtable;II)Himage;
DWORD Jass_LoadImageHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadImageHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadImageHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadImageHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadUbersplatHandle 00240da0 (Hhashtable;II)Hubersplat;
DWORD Jass_LoadUbersplatHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadUbersplatHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadUbersplatHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadUbersplatHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadFogStateHandle 00240820 (Hhashtable;II)Hfogstate;
DWORD Jass_LoadFogStateHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadFogStateHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadFogStateHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadFogStateHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadFogModifierHandle 00240800 (Hhashtable;II)Hfogmodifier;
DWORD Jass_LoadFogModifierHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadFogModifierHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadFogModifierHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadFogModifierHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LoadHashtableHandle 00240900 (Hhashtable;II)Hhashtable;
DWORD Jass_LoadHashtableHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_LoadHashtableHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadHashtableHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LoadHashtableHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// HaveSavedInteger 00237210 (Hhashtable;II)B
DWORD Jass_HaveSavedInteger(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_HaveSavedInteger]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* HaveSavedInteger(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_HaveSavedInteger(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// HaveSavedReal 00237250 (Hhashtable;II)B
DWORD Jass_HaveSavedReal(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_HaveSavedReal]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* HaveSavedReal(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_HaveSavedReal(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// HaveSavedBoolean 00237190 (Hhashtable;II)B
DWORD Jass_HaveSavedBoolean(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_HaveSavedBoolean]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* HaveSavedBoolean(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_HaveSavedBoolean(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// HaveSavedString 00237290 (Hhashtable;II)B
DWORD Jass_HaveSavedString(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_HaveSavedString]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* HaveSavedString(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_HaveSavedString(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// HaveSavedHandle 002371d0 (Hhashtable;II)B
DWORD Jass_HaveSavedHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_HaveSavedHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* HaveSavedHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_HaveSavedHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// RemoveSavedInteger 00243200 (Hhashtable;II)V
DWORD Jass_RemoveSavedInteger(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_RemoveSavedInteger]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveSavedInteger(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_RemoveSavedInteger(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// RemoveSavedReal 00243230 (Hhashtable;II)V
DWORD Jass_RemoveSavedReal(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_RemoveSavedReal]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveSavedReal(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_RemoveSavedReal(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// RemoveSavedBoolean 002431a0 (Hhashtable;II)V
DWORD Jass_RemoveSavedBoolean(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_RemoveSavedBoolean]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveSavedBoolean(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_RemoveSavedBoolean(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// RemoveSavedString 00243260 (Hhashtable;II)V
DWORD Jass_RemoveSavedString(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_RemoveSavedString]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveSavedString(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_RemoveSavedString(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// RemoveSavedHandle 002431d0 (Hhashtable;II)V
DWORD Jass_RemoveSavedHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_RemoveSavedHandle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveSavedHandle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hhashtable, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_RemoveSavedHandle(arg_0_Hhashtable, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// FlushParentHashtable 00230bb0 (Hhashtable;)V
DWORD Jass_FlushParentHashtable(DWORD arg_0_Hhashtable)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_FlushParentHashtable]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* FlushParentHashtable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hhashtable))
       Py_RETURN_NONE;
   rt = Jass_FlushParentHashtable(arg_0_Hhashtable);
   return Py_BuildValue("I", rt);
}

// FlushChildHashtable 00230b40 (Hhashtable;I)V
DWORD Jass_FlushChildHashtable(DWORD arg_0_Hhashtable, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hhashtable
       push eax
       call [_Jass_FlushChildHashtable]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* FlushChildHashtable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hhashtable = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hhashtable, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_FlushChildHashtable(arg_0_Hhashtable, arg_4_I);
   return Py_BuildValue("I", rt);
}

// GetRandomInt 00234610 (II)I
DWORD Jass_GetRandomInt(DWORD arg_0_I, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_GetRandomInt]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetRandomInt(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_GetRandomInt(arg_0_I, arg_4_I);
   return Py_BuildValue("I", rt);
}

// GetRandomReal 00234650 (RR)R
DWORD Jass_GetRandomReal(DWORD arg_0_R, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_GetRandomReal]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetRandomReal(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_R, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_GetRandomReal(arg_0_R, arg_4_R);
   return Py_BuildValue("I", rt);
}

// CreateUnitPool 0022f250 ()Hunitpool;
DWORD Jass_CreateUnitPool()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CreateUnitPool]
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateUnitPool(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CreateUnitPool();
   return Py_BuildValue("I", rt);
}

// DestroyUnitPool 0022fa60 (Hunitpool;)V
DWORD Jass_DestroyUnitPool(DWORD arg_0_Hunitpool)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunitpool
       push eax
       call [_Jass_DestroyUnitPool]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyUnitPool(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunitpool = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunitpool))
       Py_RETURN_NONE;
   rt = Jass_DestroyUnitPool(arg_0_Hunitpool);
   return Py_BuildValue("I", rt);
}

// UnitPoolAddUnitType 0024b380 (Hunitpool;IR)V
DWORD Jass_UnitPoolAddUnitType(DWORD arg_0_Hunitpool, DWORD arg_4_I, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunitpool
       push eax
       call [_Jass_UnitPoolAddUnitType]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitPoolAddUnitType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunitpool = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunitpool, &arg_4_I, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_UnitPoolAddUnitType(arg_0_Hunitpool, arg_4_I, arg_8_R);
   return Py_BuildValue("I", rt);
}

// UnitPoolRemoveUnitType 0024b3a0 (Hunitpool;I)V
DWORD Jass_UnitPoolRemoveUnitType(DWORD arg_0_Hunitpool, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunitpool
       push eax
       call [_Jass_UnitPoolRemoveUnitType]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitPoolRemoveUnitType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunitpool = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunitpool, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_UnitPoolRemoveUnitType(arg_0_Hunitpool, arg_4_I);
   return Py_BuildValue("I", rt);
}

// PlaceRandomUnit 00241f10 (Hunitpool;Hplayer;RRR)Hunit;
DWORD Jass_PlaceRandomUnit(DWORD arg_0_Hunitpool, DWORD arg_4_Hplayer, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hunitpool
       push eax
       call [_Jass_PlaceRandomUnit]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* PlaceRandomUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunitpool = 0;
   DWORD arg_4_Hplayer = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hunitpool, &arg_4_Hplayer, &arg_8_R, &arg_C_R, &arg_10_R))
       Py_RETURN_NONE;
   rt = Jass_PlaceRandomUnit(arg_0_Hunitpool, arg_4_Hplayer, arg_8_R, arg_C_R, arg_10_R);
   return Py_BuildValue("I", rt);
}

// CreateItemPool 0022e480 ()Hitempool;
DWORD Jass_CreateItemPool()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CreateItemPool]
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateItemPool(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CreateItemPool();
   return Py_BuildValue("I", rt);
}

// DestroyItemPool 0022f8d0 (Hitempool;)V
DWORD Jass_DestroyItemPool(DWORD arg_0_Hitempool)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hitempool
       push eax
       call [_Jass_DestroyItemPool]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyItemPool(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitempool = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hitempool))
       Py_RETURN_NONE;
   rt = Jass_DestroyItemPool(arg_0_Hitempool);
   return Py_BuildValue("I", rt);
}

// ItemPoolAddItemType 00239ba0 (Hitempool;IR)V
DWORD Jass_ItemPoolAddItemType(DWORD arg_0_Hitempool, DWORD arg_4_I, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hitempool
       push eax
       call [_Jass_ItemPoolAddItemType]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* ItemPoolAddItemType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitempool = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hitempool, &arg_4_I, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_ItemPoolAddItemType(arg_0_Hitempool, arg_4_I, arg_8_R);
   return Py_BuildValue("I", rt);
}

// ItemPoolRemoveItemType 00239bc0 (Hitempool;I)V
DWORD Jass_ItemPoolRemoveItemType(DWORD arg_0_Hitempool, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hitempool
       push eax
       call [_Jass_ItemPoolRemoveItemType]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* ItemPoolRemoveItemType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitempool = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hitempool, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_ItemPoolRemoveItemType(arg_0_Hitempool, arg_4_I);
   return Py_BuildValue("I", rt);
}

// PlaceRandomItem 00241ed0 (Hitempool;RR)Hitem;
DWORD Jass_PlaceRandomItem(DWORD arg_0_Hitempool, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hitempool
       push eax
       call [_Jass_PlaceRandomItem]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* PlaceRandomItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitempool = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hitempool, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_PlaceRandomItem(arg_0_Hitempool, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// ChooseRandomCreep 0022b2f0 (I)I
DWORD Jass_ChooseRandomCreep(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ChooseRandomCreep]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ChooseRandomCreep(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ChooseRandomCreep(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ChooseRandomNPBuilding 0022b350 ()I
DWORD Jass_ChooseRandomNPBuilding()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_ChooseRandomNPBuilding]
       mov rt, eax
   }
   return rt;
}
static PyObject* ChooseRandomNPBuilding(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_ChooseRandomNPBuilding();
   return Py_BuildValue("I", rt);
}

// ChooseRandomItem 0022b310 (I)I
DWORD Jass_ChooseRandomItem(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_ChooseRandomItem]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ChooseRandomItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_ChooseRandomItem(arg_0_I);
   return Py_BuildValue("I", rt);
}

// ChooseRandomItemEx 0022b330 (Hitemtype;I)I
DWORD Jass_ChooseRandomItemEx(DWORD arg_0_Hitemtype, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hitemtype
       push eax
       call [_Jass_ChooseRandomItemEx]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* ChooseRandomItemEx(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hitemtype = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hitemtype, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_ChooseRandomItemEx(arg_0_Hitemtype, arg_4_I);
   return Py_BuildValue("I", rt);
}

// SetRandomSeed 002467c0 (I)V
DWORD Jass_SetRandomSeed(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_SetRandomSeed]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetRandomSeed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_SetRandomSeed(arg_0_I);
   return Py_BuildValue("I", rt);
}

// DisplayTextToPlayer 0022ff30 (Hplayer;RRS)V
DWORD Jass_DisplayTextToPlayer(DWORD arg_0_Hplayer, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_S
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_DisplayTextToPlayer]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* DisplayTextToPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_S = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hplayer, &arg_4_R, &arg_8_R, &arg_C_S))
       Py_RETURN_NONE;
   rt = Jass_DisplayTextToPlayer(arg_0_Hplayer, arg_4_R, arg_8_R, arg_C_S);
   return Py_BuildValue("I", rt);
}

// DisplayTimedTextToPlayer 002300c0 (Hplayer;RRRS)V
DWORD Jass_DisplayTimedTextToPlayer(DWORD arg_0_Hplayer, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_S
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_DisplayTimedTextToPlayer]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* DisplayTimedTextToPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_S = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hplayer, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_S))
       Py_RETURN_NONE;
   rt = Jass_DisplayTimedTextToPlayer(arg_0_Hplayer, arg_4_R, arg_8_R, arg_C_R, arg_10_S);
   return Py_BuildValue("I", rt);
}

// DisplayTimedTextFromPlayer 0022ffe0 (Hplayer;RRRS)V
DWORD Jass_DisplayTimedTextFromPlayer(DWORD arg_0_Hplayer, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_S
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_DisplayTimedTextFromPlayer]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* DisplayTimedTextFromPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_S = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hplayer, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_S))
       Py_RETURN_NONE;
   rt = Jass_DisplayTimedTextFromPlayer(arg_0_Hplayer, arg_4_R, arg_8_R, arg_C_R, arg_10_S);
   return Py_BuildValue("I", rt);
}

// ClearTextMessages 0022b770 ()V
DWORD Jass_ClearTextMessages()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_ClearTextMessages]
       mov rt, eax
   }
   return rt;
}
static PyObject* ClearTextMessages(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_ClearTextMessages();
   return Py_BuildValue("I", rt);
}

// EnableUserControl 00230280 (B)V
DWORD Jass_EnableUserControl(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_EnableUserControl]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* EnableUserControl(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_EnableUserControl(arg_0_B);
   return Py_BuildValue("I", rt);
}

// EnableUserUI 002302b0 (B)V
DWORD Jass_EnableUserUI(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_EnableUserUI]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* EnableUserUI(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_EnableUserUI(arg_0_B);
   return Py_BuildValue("I", rt);
}

// DisableRestartMission 0022fe80 (B)V
DWORD Jass_DisableRestartMission(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_DisableRestartMission]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DisableRestartMission(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_DisableRestartMission(arg_0_B);
   return Py_BuildValue("I", rt);
}

// ForceUIKey 00231150 (S)V
DWORD Jass_ForceUIKey(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_ForceUIKey]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ForceUIKey(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_ForceUIKey(arg_0_S);
   return Py_BuildValue("I", rt);
}

// ForceUICancel 002310d0 ()V
DWORD Jass_ForceUICancel()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_ForceUICancel]
       mov rt, eax
   }
   return rt;
}
static PyObject* ForceUICancel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_ForceUICancel();
   return Py_BuildValue("I", rt);
}

// DisplayLoadDialog 0022ff10 ()V
DWORD Jass_DisplayLoadDialog()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_DisplayLoadDialog]
       mov rt, eax
   }
   return rt;
}
static PyObject* DisplayLoadDialog(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_DisplayLoadDialog();
   return Py_BuildValue("I", rt);
}

// SetTerrainFog 00246eb0 (RRRRR)V
DWORD Jass_SetTerrainFog(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_SetTerrainFog]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTerrainFog(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_R, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_R))
       Py_RETURN_NONE;
   rt = Jass_SetTerrainFog(arg_0_R, arg_4_R, arg_8_R, arg_C_R, arg_10_R);
   return Py_BuildValue("I", rt);
}

// SetUnitFog 00247990 (RRRRR)V
DWORD Jass_SetUnitFog(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_SetUnitFog]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitFog(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_R, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_R))
       Py_RETURN_NONE;
   rt = Jass_SetUnitFog(arg_0_R, arg_4_R, arg_8_R, arg_C_R, arg_10_R);
   return Py_BuildValue("I", rt);
}

// SetTerrainFogEx 00246ec0 (IRRRRRR)V
DWORD Jass_SetTerrainFogEx(DWORD arg_0_I, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_18_R
       push eax
       mov eax, arg_14_R
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_SetTerrainFogEx]
       add esp, 0x1c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTerrainFogEx(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_R = 0;
   DWORD arg_18_R = 0;
   if (!PyArg_ParseTuple(args, "IIIIIII", &arg_0_I, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_R, &arg_14_R, &arg_18_R))
       Py_RETURN_NONE;
   rt = Jass_SetTerrainFogEx(arg_0_I, arg_4_R, arg_8_R, arg_C_R, arg_10_R, arg_14_R, arg_18_R);
   return Py_BuildValue("I", rt);
}

// ResetTerrainFog 00243400 ()V
DWORD Jass_ResetTerrainFog()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_ResetTerrainFog]
       mov rt, eax
   }
   return rt;
}
static PyObject* ResetTerrainFog(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_ResetTerrainFog();
   return Py_BuildValue("I", rt);
}

// SetDayNightModels 00244c50 (SS)V
DWORD Jass_SetDayNightModels(DWORD arg_0_S, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_SetDayNightModels]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetDayNightModels(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_S, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_SetDayNightModels(arg_0_S, arg_4_S);
   return Py_BuildValue("I", rt);
}

// SetSkyModel 00246960 (S)V
DWORD Jass_SetSkyModel(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_SetSkyModel]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetSkyModel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_SetSkyModel(arg_0_S);
   return Py_BuildValue("I", rt);
}

// SuspendTimeOfDay 00248b80 (B)V
DWORD Jass_SuspendTimeOfDay(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SuspendTimeOfDay]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SuspendTimeOfDay(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SuspendTimeOfDay(arg_0_B);
   return Py_BuildValue("I", rt);
}

// SetTimeOfDayScale 00247370 (R)V
DWORD Jass_SetTimeOfDayScale(DWORD arg_0_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_R
       push eax
       call [_Jass_SetTimeOfDayScale]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTimeOfDayScale(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_R))
       Py_RETURN_NONE;
   rt = Jass_SetTimeOfDayScale(arg_0_R);
   return Py_BuildValue("I", rt);
}

// GetTimeOfDayScale 00235c80 ()R
DWORD Jass_GetTimeOfDayScale()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetTimeOfDayScale]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTimeOfDayScale(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetTimeOfDayScale();
   return Py_BuildValue("I", rt);
}

// ShowInterface 00248130 (BR)V
DWORD Jass_ShowInterface(DWORD arg_0_B, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_B
       push eax
       call [_Jass_ShowInterface]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* ShowInterface(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_B, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_ShowInterface(arg_0_B, arg_4_R);
   return Py_BuildValue("I", rt);
}

// PauseGame 00241ce0 (B)V
DWORD Jass_PauseGame(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_PauseGame]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* PauseGame(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_PauseGame(arg_0_B);
   return Py_BuildValue("I", rt);
}

// PingMinimap 00241de0 (RRR)V
DWORD Jass_PingMinimap(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_PingMinimap]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* PingMinimap(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_R, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_PingMinimap(arg_0_R, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// PingMinimapEx 00241e40 (RRRIIIB)V
DWORD Jass_PingMinimapEx(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_I, DWORD arg_10_I, DWORD arg_14_I, DWORD arg_18_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_18_B
       push eax
       mov eax, arg_14_I
       push eax
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_PingMinimapEx]
       add esp, 0x1c
       mov rt, eax
   }
   return rt;
}
static PyObject* PingMinimapEx(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_I = 0;
   DWORD arg_14_I = 0;
   DWORD arg_18_B = 0;
   if (!PyArg_ParseTuple(args, "IIIIIII", &arg_0_R, &arg_4_R, &arg_8_R, &arg_C_I, &arg_10_I, &arg_14_I, &arg_18_B))
       Py_RETURN_NONE;
   rt = Jass_PingMinimapEx(arg_0_R, arg_4_R, arg_8_R, arg_C_I, arg_10_I, arg_14_I, arg_18_B);
   return Py_BuildValue("I", rt);
}

// SetIntroShotText 00245e30 (S)V
DWORD Jass_SetIntroShotText(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_SetIntroShotText]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetIntroShotText(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_SetIntroShotText(arg_0_S);
   return Py_BuildValue("I", rt);
}

// SetIntroShotModel 00245e10 (S)V
DWORD Jass_SetIntroShotModel(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_SetIntroShotModel]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetIntroShotModel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_SetIntroShotModel(arg_0_S);
   return Py_BuildValue("I", rt);
}

// EnableOcclusion 002301f0 (B)V
DWORD Jass_EnableOcclusion(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_EnableOcclusion]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* EnableOcclusion(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_EnableOcclusion(arg_0_B);
   return Py_BuildValue("I", rt);
}

// EnableWorldFogBoundary 002302f0 (B)V
DWORD Jass_EnableWorldFogBoundary(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_EnableWorldFogBoundary]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* EnableWorldFogBoundary(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_EnableWorldFogBoundary(arg_0_B);
   return Py_BuildValue("I", rt);
}

// PlayModelCinematic 00241fc0 (S)V
DWORD Jass_PlayModelCinematic(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_PlayModelCinematic]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* PlayModelCinematic(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_PlayModelCinematic(arg_0_S);
   return Py_BuildValue("I", rt);
}

// PlayCinematic 00241fa0 (S)V
DWORD Jass_PlayCinematic(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_PlayCinematic]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* PlayCinematic(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_PlayCinematic(arg_0_S);
   return Py_BuildValue("I", rt);
}

// SetAltMinimapIcon 002441c0 (S)V
DWORD Jass_SetAltMinimapIcon(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_SetAltMinimapIcon]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetAltMinimapIcon(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_SetAltMinimapIcon(arg_0_S);
   return Py_BuildValue("I", rt);
}

// CreateTextTag 0022ece0 ()Htexttag;
DWORD Jass_CreateTextTag()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CreateTextTag]
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateTextTag(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CreateTextTag();
   return Py_BuildValue("I", rt);
}

// DestroyTextTag 0022f9b0 (Htexttag;)V
DWORD Jass_DestroyTextTag(DWORD arg_0_Htexttag)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htexttag
       push eax
       call [_Jass_DestroyTextTag]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyTextTag(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htexttag = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htexttag))
       Py_RETURN_NONE;
   rt = Jass_DestroyTextTag(arg_0_Htexttag);
   return Py_BuildValue("I", rt);
}

// SetTextTagText 00247280 (Htexttag;SR)V
DWORD Jass_SetTextTagText(DWORD arg_0_Htexttag, DWORD arg_4_S, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Htexttag
       push eax
       call [_Jass_SetTextTagText]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTextTagText(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htexttag = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Htexttag, &arg_4_S, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_SetTextTagText(arg_0_Htexttag, arg_4_S, arg_8_R);
   return Py_BuildValue("I", rt);
}

// SetTextTagPos 00247140 (Htexttag;RRR)V
DWORD Jass_SetTextTagPos(DWORD arg_0_Htexttag, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Htexttag
       push eax
       call [_Jass_SetTextTagPos]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTextTagPos(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htexttag = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Htexttag, &arg_4_R, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_SetTextTagPos(arg_0_Htexttag, arg_4_R, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// SetTextTagPosUnit 002471e0 (Htexttag;Hunit;R)V
DWORD Jass_SetTextTagPosUnit(DWORD arg_0_Htexttag, DWORD arg_4_Hunit, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_Hunit
       push eax
       mov eax, arg_0_Htexttag
       push eax
       call [_Jass_SetTextTagPosUnit]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTextTagPosUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htexttag = 0;
   DWORD arg_4_Hunit = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Htexttag, &arg_4_Hunit, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_SetTextTagPosUnit(arg_0_Htexttag, arg_4_Hunit, arg_8_R);
   return Py_BuildValue("I", rt);
}

// SetTextTagColor 00247040 (Htexttag;IIII)V
DWORD Jass_SetTextTagColor(DWORD arg_0_Htexttag, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Htexttag
       push eax
       call [_Jass_SetTextTagColor]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTextTagColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htexttag = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_I = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Htexttag, &arg_4_I, &arg_8_I, &arg_C_I, &arg_10_I))
       Py_RETURN_NONE;
   rt = Jass_SetTextTagColor(arg_0_Htexttag, arg_4_I, arg_8_I, arg_C_I, arg_10_I);
   return Py_BuildValue("I", rt);
}

// SetTextTagVelocity 002472d0 (Htexttag;RR)V
DWORD Jass_SetTextTagVelocity(DWORD arg_0_Htexttag, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Htexttag
       push eax
       call [_Jass_SetTextTagVelocity]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTextTagVelocity(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htexttag = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Htexttag, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_SetTextTagVelocity(arg_0_Htexttag, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// SetTextTagVisibility 00247330 (Htexttag;B)V
DWORD Jass_SetTextTagVisibility(DWORD arg_0_Htexttag, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Htexttag
       push eax
       call [_Jass_SetTextTagVisibility]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTextTagVisibility(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htexttag = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htexttag, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetTextTagVisibility(arg_0_Htexttag, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetTextTagSuspended 00247250 (Htexttag;B)V
DWORD Jass_SetTextTagSuspended(DWORD arg_0_Htexttag, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Htexttag
       push eax
       call [_Jass_SetTextTagSuspended]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTextTagSuspended(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htexttag = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htexttag, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetTextTagSuspended(arg_0_Htexttag, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetTextTagPermanent 00247110 (Htexttag;B)V
DWORD Jass_SetTextTagPermanent(DWORD arg_0_Htexttag, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Htexttag
       push eax
       call [_Jass_SetTextTagPermanent]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTextTagPermanent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htexttag = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htexttag, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetTextTagPermanent(arg_0_Htexttag, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetTextTagAge 00247000 (Htexttag;R)V
DWORD Jass_SetTextTagAge(DWORD arg_0_Htexttag, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Htexttag
       push eax
       call [_Jass_SetTextTagAge]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTextTagAge(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htexttag = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htexttag, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetTextTagAge(arg_0_Htexttag, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetTextTagLifespan 002470d0 (Htexttag;R)V
DWORD Jass_SetTextTagLifespan(DWORD arg_0_Htexttag, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Htexttag
       push eax
       call [_Jass_SetTextTagLifespan]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTextTagLifespan(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htexttag = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htexttag, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetTextTagLifespan(arg_0_Htexttag, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetTextTagFadepoint 00247090 (Htexttag;R)V
DWORD Jass_SetTextTagFadepoint(DWORD arg_0_Htexttag, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Htexttag
       push eax
       call [_Jass_SetTextTagFadepoint]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTextTagFadepoint(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htexttag = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htexttag, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetTextTagFadepoint(arg_0_Htexttag, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetReservedLocalHeroButtons 002468d0 (I)V
DWORD Jass_SetReservedLocalHeroButtons(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_SetReservedLocalHeroButtons]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetReservedLocalHeroButtons(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_SetReservedLocalHeroButtons(arg_0_I);
   return Py_BuildValue("I", rt);
}

// GetAllyColorFilterState 002318d0 ()I
DWORD Jass_GetAllyColorFilterState()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetAllyColorFilterState]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetAllyColorFilterState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetAllyColorFilterState();
   return Py_BuildValue("I", rt);
}

// SetAllyColorFilterState 00244190 (I)V
DWORD Jass_SetAllyColorFilterState(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_SetAllyColorFilterState]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetAllyColorFilterState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_SetAllyColorFilterState(arg_0_I);
   return Py_BuildValue("I", rt);
}

// GetCreepCampFilterState 002320c0 ()B
DWORD Jass_GetCreepCampFilterState()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetCreepCampFilterState]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCreepCampFilterState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetCreepCampFilterState();
   return Py_BuildValue("I", rt);
}

// SetCreepCampFilterState 00244bf0 (B)V
DWORD Jass_SetCreepCampFilterState(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SetCreepCampFilterState]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCreepCampFilterState(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SetCreepCampFilterState(arg_0_B);
   return Py_BuildValue("I", rt);
}

// EnableMinimapFilterButtons 002301b0 (BB)V
DWORD Jass_EnableMinimapFilterButtons(DWORD arg_0_B, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_B
       push eax
       call [_Jass_EnableMinimapFilterButtons]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* EnableMinimapFilterButtons(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_B, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_EnableMinimapFilterButtons(arg_0_B, arg_4_B);
   return Py_BuildValue("I", rt);
}

// EnableDragSelect 00230190 (BB)V
DWORD Jass_EnableDragSelect(DWORD arg_0_B, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_B
       push eax
       call [_Jass_EnableDragSelect]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* EnableDragSelect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_B, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_EnableDragSelect(arg_0_B, arg_4_B);
   return Py_BuildValue("I", rt);
}

// EnablePreSelect 00230220 (BB)V
DWORD Jass_EnablePreSelect(DWORD arg_0_B, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_B
       push eax
       call [_Jass_EnablePreSelect]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* EnablePreSelect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_B, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_EnablePreSelect(arg_0_B, arg_4_B);
   return Py_BuildValue("I", rt);
}

// EnableSelect 00230240 (BB)V
DWORD Jass_EnableSelect(DWORD arg_0_B, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_B
       push eax
       call [_Jass_EnableSelect]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* EnableSelect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_B, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_EnableSelect(arg_0_B, arg_4_B);
   return Py_BuildValue("I", rt);
}

// CreateTrackable 0022eee0 (SRRR)Htrackable;
DWORD Jass_CreateTrackable(DWORD arg_0_S, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_CreateTrackable]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateTrackable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_S, &arg_4_R, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_CreateTrackable(arg_0_S, arg_4_R, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// TriggerRegisterTrackableHitEvent 0024a1f0 (Htrigger;Htrackable;)Hevent;
DWORD Jass_TriggerRegisterTrackableHitEvent(DWORD arg_0_Htrigger, DWORD arg_4_Htrackable)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Htrackable
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterTrackableHitEvent]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterTrackableHitEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Htrackable = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htrigger, &arg_4_Htrackable))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterTrackableHitEvent(arg_0_Htrigger, arg_4_Htrackable);
   return Py_BuildValue("I", rt);
}

// TriggerRegisterTrackableTrackEvent 0024a2b0 (Htrigger;Htrackable;)Hevent;
DWORD Jass_TriggerRegisterTrackableTrackEvent(DWORD arg_0_Htrigger, DWORD arg_4_Htrackable)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Htrackable
       push eax
       mov eax, arg_0_Htrigger
       push eax
       call [_Jass_TriggerRegisterTrackableTrackEvent]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TriggerRegisterTrackableTrackEvent(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htrigger = 0;
   DWORD arg_4_Htrackable = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htrigger, &arg_4_Htrackable))
       Py_RETURN_NONE;
   rt = Jass_TriggerRegisterTrackableTrackEvent(arg_0_Htrigger, arg_4_Htrackable);
   return Py_BuildValue("I", rt);
}

// GetTriggeringTrackable 002360c0 ()Htrackable;
DWORD Jass_GetTriggeringTrackable()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetTriggeringTrackable]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTriggeringTrackable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetTriggeringTrackable();
   return Py_BuildValue("I", rt);
}

// CreateQuest 0022e840 ()Hquest;
DWORD Jass_CreateQuest()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CreateQuest]
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateQuest(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CreateQuest();
   return Py_BuildValue("I", rt);
}

// DestroyQuest 0022f960 (Hquest;)V
DWORD Jass_DestroyQuest(DWORD arg_0_Hquest)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hquest
       push eax
       call [_Jass_DestroyQuest]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyQuest(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hquest = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hquest))
       Py_RETURN_NONE;
   rt = Jass_DestroyQuest(arg_0_Hquest);
   return Py_BuildValue("I", rt);
}

// QuestSetTitle 002429b0 (Hquest;S)V
DWORD Jass_QuestSetTitle(DWORD arg_0_Hquest, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hquest
       push eax
       call [_Jass_QuestSetTitle]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* QuestSetTitle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hquest = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hquest, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_QuestSetTitle(arg_0_Hquest, arg_4_S);
   return Py_BuildValue("I", rt);
}

// QuestSetDescription 00242890 (Hquest;S)V
DWORD Jass_QuestSetDescription(DWORD arg_0_Hquest, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hquest
       push eax
       call [_Jass_QuestSetDescription]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* QuestSetDescription(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hquest = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hquest, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_QuestSetDescription(arg_0_Hquest, arg_4_S);
   return Py_BuildValue("I", rt);
}

// QuestSetIconPath 00242950 (Hquest;S)V
DWORD Jass_QuestSetIconPath(DWORD arg_0_Hquest, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hquest
       push eax
       call [_Jass_QuestSetIconPath]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* QuestSetIconPath(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hquest = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hquest, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_QuestSetIconPath(arg_0_Hquest, arg_4_S);
   return Py_BuildValue("I", rt);
}

// QuestSetRequired 00242980 (Hquest;B)V
DWORD Jass_QuestSetRequired(DWORD arg_0_Hquest, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hquest
       push eax
       call [_Jass_QuestSetRequired]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* QuestSetRequired(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hquest = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hquest, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_QuestSetRequired(arg_0_Hquest, arg_4_B);
   return Py_BuildValue("I", rt);
}

// QuestSetCompleted 00242860 (Hquest;B)V
DWORD Jass_QuestSetCompleted(DWORD arg_0_Hquest, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hquest
       push eax
       call [_Jass_QuestSetCompleted]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* QuestSetCompleted(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hquest = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hquest, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_QuestSetCompleted(arg_0_Hquest, arg_4_B);
   return Py_BuildValue("I", rt);
}

// QuestSetDiscovered 002428c0 (Hquest;B)V
DWORD Jass_QuestSetDiscovered(DWORD arg_0_Hquest, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hquest
       push eax
       call [_Jass_QuestSetDiscovered]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* QuestSetDiscovered(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hquest = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hquest, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_QuestSetDiscovered(arg_0_Hquest, arg_4_B);
   return Py_BuildValue("I", rt);
}

// QuestSetFailed 00242920 (Hquest;B)V
DWORD Jass_QuestSetFailed(DWORD arg_0_Hquest, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hquest
       push eax
       call [_Jass_QuestSetFailed]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* QuestSetFailed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hquest = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hquest, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_QuestSetFailed(arg_0_Hquest, arg_4_B);
   return Py_BuildValue("I", rt);
}

// QuestSetEnabled 002428f0 (Hquest;B)V
DWORD Jass_QuestSetEnabled(DWORD arg_0_Hquest, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hquest
       push eax
       call [_Jass_QuestSetEnabled]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* QuestSetEnabled(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hquest = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hquest, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_QuestSetEnabled(arg_0_Hquest, arg_4_B);
   return Py_BuildValue("I", rt);
}

// IsQuestRequired 00238550 (Hquest;)B
DWORD Jass_IsQuestRequired(DWORD arg_0_Hquest)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hquest
       push eax
       call [_Jass_IsQuestRequired]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsQuestRequired(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hquest = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hquest))
       Py_RETURN_NONE;
   rt = Jass_IsQuestRequired(arg_0_Hquest);
   return Py_BuildValue("I", rt);
}

// IsQuestCompleted 002384b0 (Hquest;)B
DWORD Jass_IsQuestCompleted(DWORD arg_0_Hquest)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hquest
       push eax
       call [_Jass_IsQuestCompleted]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsQuestCompleted(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hquest = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hquest))
       Py_RETURN_NONE;
   rt = Jass_IsQuestCompleted(arg_0_Hquest);
   return Py_BuildValue("I", rt);
}

// IsQuestDiscovered 002384d0 (Hquest;)B
DWORD Jass_IsQuestDiscovered(DWORD arg_0_Hquest)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hquest
       push eax
       call [_Jass_IsQuestDiscovered]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsQuestDiscovered(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hquest = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hquest))
       Py_RETURN_NONE;
   rt = Jass_IsQuestDiscovered(arg_0_Hquest);
   return Py_BuildValue("I", rt);
}

// IsQuestFailed 00238510 (Hquest;)B
DWORD Jass_IsQuestFailed(DWORD arg_0_Hquest)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hquest
       push eax
       call [_Jass_IsQuestFailed]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsQuestFailed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hquest = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hquest))
       Py_RETURN_NONE;
   rt = Jass_IsQuestFailed(arg_0_Hquest);
   return Py_BuildValue("I", rt);
}

// IsQuestEnabled 002384f0 (Hquest;)B
DWORD Jass_IsQuestEnabled(DWORD arg_0_Hquest)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hquest
       push eax
       call [_Jass_IsQuestEnabled]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsQuestEnabled(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hquest = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hquest))
       Py_RETURN_NONE;
   rt = Jass_IsQuestEnabled(arg_0_Hquest);
   return Py_BuildValue("I", rt);
}

// QuestCreateItem 00242730 (Hquest;)Hquestitem;
DWORD Jass_QuestCreateItem(DWORD arg_0_Hquest)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hquest
       push eax
       call [_Jass_QuestCreateItem]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* QuestCreateItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hquest = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hquest))
       Py_RETURN_NONE;
   rt = Jass_QuestCreateItem(arg_0_Hquest);
   return Py_BuildValue("I", rt);
}

// QuestItemSetDescription 00242810 (Hquestitem;S)V
DWORD Jass_QuestItemSetDescription(DWORD arg_0_Hquestitem, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hquestitem
       push eax
       call [_Jass_QuestItemSetDescription]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* QuestItemSetDescription(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hquestitem = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hquestitem, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_QuestItemSetDescription(arg_0_Hquestitem, arg_4_S);
   return Py_BuildValue("I", rt);
}

// QuestItemSetCompleted 002427e0 (Hquestitem;B)V
DWORD Jass_QuestItemSetCompleted(DWORD arg_0_Hquestitem, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hquestitem
       push eax
       call [_Jass_QuestItemSetCompleted]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* QuestItemSetCompleted(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hquestitem = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hquestitem, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_QuestItemSetCompleted(arg_0_Hquestitem, arg_4_B);
   return Py_BuildValue("I", rt);
}

// IsQuestItemCompleted 00238530 (Hquestitem;)B
DWORD Jass_IsQuestItemCompleted(DWORD arg_0_Hquestitem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hquestitem
       push eax
       call [_Jass_IsQuestItemCompleted]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsQuestItemCompleted(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hquestitem = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hquestitem))
       Py_RETURN_NONE;
   rt = Jass_IsQuestItemCompleted(arg_0_Hquestitem);
   return Py_BuildValue("I", rt);
}

// CreateDefeatCondition 0022de50 ()Hdefeatcondition;
DWORD Jass_CreateDefeatCondition()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CreateDefeatCondition]
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateDefeatCondition(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CreateDefeatCondition();
   return Py_BuildValue("I", rt);
}

// DestroyDefeatCondition 0022f7b0 (Hdefeatcondition;)V
DWORD Jass_DestroyDefeatCondition(DWORD arg_0_Hdefeatcondition)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hdefeatcondition
       push eax
       call [_Jass_DestroyDefeatCondition]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyDefeatCondition(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdefeatcondition = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hdefeatcondition))
       Py_RETURN_NONE;
   rt = Jass_DestroyDefeatCondition(arg_0_Hdefeatcondition);
   return Py_BuildValue("I", rt);
}

// DefeatConditionSetDescription 0022f520 (Hdefeatcondition;S)V
DWORD Jass_DefeatConditionSetDescription(DWORD arg_0_Hdefeatcondition, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hdefeatcondition
       push eax
       call [_Jass_DefeatConditionSetDescription]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* DefeatConditionSetDescription(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hdefeatcondition = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hdefeatcondition, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_DefeatConditionSetDescription(arg_0_Hdefeatcondition, arg_4_S);
   return Py_BuildValue("I", rt);
}

// FlashQuestDialogButton 00230af0 ()V
DWORD Jass_FlashQuestDialogButton()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_FlashQuestDialogButton]
       mov rt, eax
   }
   return rt;
}
static PyObject* FlashQuestDialogButton(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_FlashQuestDialogButton();
   return Py_BuildValue("I", rt);
}

// ForceQuestDialogUpdate 00231070 ()V
DWORD Jass_ForceQuestDialogUpdate()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_ForceQuestDialogUpdate]
       mov rt, eax
   }
   return rt;
}
static PyObject* ForceQuestDialogUpdate(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_ForceQuestDialogUpdate();
   return Py_BuildValue("I", rt);
}

// CreateTimerDialog 0022ede0 (Htimer;)Htimerdialog;
DWORD Jass_CreateTimerDialog(DWORD arg_0_Htimer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htimer
       push eax
       call [_Jass_CreateTimerDialog]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateTimerDialog(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htimer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htimer))
       Py_RETURN_NONE;
   rt = Jass_CreateTimerDialog(arg_0_Htimer);
   return Py_BuildValue("I", rt);
}

// DestroyTimerDialog 0022fa00 (Htimerdialog;)V
DWORD Jass_DestroyTimerDialog(DWORD arg_0_Htimerdialog)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htimerdialog
       push eax
       call [_Jass_DestroyTimerDialog]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyTimerDialog(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htimerdialog = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htimerdialog))
       Py_RETURN_NONE;
   rt = Jass_DestroyTimerDialog(arg_0_Htimerdialog);
   return Py_BuildValue("I", rt);
}

// TimerDialogSetTitle 002491d0 (Htimerdialog;S)V
DWORD Jass_TimerDialogSetTitle(DWORD arg_0_Htimerdialog, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Htimerdialog
       push eax
       call [_Jass_TimerDialogSetTitle]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TimerDialogSetTitle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htimerdialog = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htimerdialog, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_TimerDialogSetTitle(arg_0_Htimerdialog, arg_4_S);
   return Py_BuildValue("I", rt);
}

// TimerDialogSetTitleColor 00249200 (Htimerdialog;IIII)V
DWORD Jass_TimerDialogSetTitleColor(DWORD arg_0_Htimerdialog, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Htimerdialog
       push eax
       call [_Jass_TimerDialogSetTitleColor]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* TimerDialogSetTitleColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htimerdialog = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_I = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Htimerdialog, &arg_4_I, &arg_8_I, &arg_C_I, &arg_10_I))
       Py_RETURN_NONE;
   rt = Jass_TimerDialogSetTitleColor(arg_0_Htimerdialog, arg_4_I, arg_8_I, arg_C_I, arg_10_I);
   return Py_BuildValue("I", rt);
}

// TimerDialogSetTimeColor 00249170 (Htimerdialog;IIII)V
DWORD Jass_TimerDialogSetTimeColor(DWORD arg_0_Htimerdialog, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Htimerdialog
       push eax
       call [_Jass_TimerDialogSetTimeColor]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* TimerDialogSetTimeColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htimerdialog = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_I = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Htimerdialog, &arg_4_I, &arg_8_I, &arg_C_I, &arg_10_I))
       Py_RETURN_NONE;
   rt = Jass_TimerDialogSetTimeColor(arg_0_Htimerdialog, arg_4_I, arg_8_I, arg_C_I, arg_10_I);
   return Py_BuildValue("I", rt);
}

// TimerDialogSetSpeed 00249140 (Htimerdialog;R)V
DWORD Jass_TimerDialogSetSpeed(DWORD arg_0_Htimerdialog, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Htimerdialog
       push eax
       call [_Jass_TimerDialogSetSpeed]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TimerDialogSetSpeed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htimerdialog = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htimerdialog, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_TimerDialogSetSpeed(arg_0_Htimerdialog, arg_4_R);
   return Py_BuildValue("I", rt);
}

// TimerDialogDisplay 002490f0 (Htimerdialog;B)V
DWORD Jass_TimerDialogDisplay(DWORD arg_0_Htimerdialog, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Htimerdialog
       push eax
       call [_Jass_TimerDialogDisplay]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TimerDialogDisplay(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htimerdialog = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htimerdialog, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_TimerDialogDisplay(arg_0_Htimerdialog, arg_4_B);
   return Py_BuildValue("I", rt);
}

// IsTimerDialogDisplayed 00238690 (Htimerdialog;)B
DWORD Jass_IsTimerDialogDisplayed(DWORD arg_0_Htimerdialog)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htimerdialog
       push eax
       call [_Jass_IsTimerDialogDisplayed]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsTimerDialogDisplayed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htimerdialog = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htimerdialog))
       Py_RETURN_NONE;
   rt = Jass_IsTimerDialogDisplayed(arg_0_Htimerdialog);
   return Py_BuildValue("I", rt);
}

// TimerDialogSetRealTimeRemaining 00249110 (Htimerdialog;R)V
DWORD Jass_TimerDialogSetRealTimeRemaining(DWORD arg_0_Htimerdialog, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Htimerdialog
       push eax
       call [_Jass_TimerDialogSetRealTimeRemaining]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TimerDialogSetRealTimeRemaining(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htimerdialog = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Htimerdialog, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_TimerDialogSetRealTimeRemaining(arg_0_Htimerdialog, arg_4_R);
   return Py_BuildValue("I", rt);
}

// CreateLeaderboard 0022e560 ()Hleaderboard;
DWORD Jass_CreateLeaderboard()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CreateLeaderboard]
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateLeaderboard(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CreateLeaderboard();
   return Py_BuildValue("I", rt);
}

// DestroyLeaderboard 0022f8f0 (Hleaderboard;)V
DWORD Jass_DestroyLeaderboard(DWORD arg_0_Hleaderboard)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_DestroyLeaderboard]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyLeaderboard(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hleaderboard))
       Py_RETURN_NONE;
   rt = Jass_DestroyLeaderboard(arg_0_Hleaderboard);
   return Py_BuildValue("I", rt);
}

// LeaderboardGetItemCount 0023fff0 (Hleaderboard;)I
DWORD Jass_LeaderboardGetItemCount(DWORD arg_0_Hleaderboard)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardGetItemCount]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardGetItemCount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hleaderboard))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardGetItemCount(arg_0_Hleaderboard);
   return Py_BuildValue("I", rt);
}

// LeaderboardSetSizeByItemCount 00240390 (Hleaderboard;I)V
DWORD Jass_LeaderboardSetSizeByItemCount(DWORD arg_0_Hleaderboard, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardSetSizeByItemCount]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardSetSizeByItemCount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hleaderboard, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardSetSizeByItemCount(arg_0_Hleaderboard, arg_4_I);
   return Py_BuildValue("I", rt);
}

// LeaderboardAddItem 0023ff20 (Hleaderboard;SIHplayer;)V
DWORD Jass_LeaderboardAddItem(DWORD arg_0_Hleaderboard, DWORD arg_4_S, DWORD arg_8_I, DWORD arg_C_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_Hplayer
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardAddItem]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardAddItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hleaderboard, &arg_4_S, &arg_8_I, &arg_C_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardAddItem(arg_0_Hleaderboard, arg_4_S, arg_8_I, arg_C_Hplayer);
   return Py_BuildValue("I", rt);
}

// LeaderboardRemoveItem 00240110 (Hleaderboard;I)V
DWORD Jass_LeaderboardRemoveItem(DWORD arg_0_Hleaderboard, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardRemoveItem]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardRemoveItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hleaderboard, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardRemoveItem(arg_0_Hleaderboard, arg_4_I);
   return Py_BuildValue("I", rt);
}

// LeaderboardRemovePlayerItem 00240140 (Hleaderboard;Hplayer;)V
DWORD Jass_LeaderboardRemovePlayerItem(DWORD arg_0_Hleaderboard, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardRemovePlayerItem]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardRemovePlayerItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hleaderboard, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardRemovePlayerItem(arg_0_Hleaderboard, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// LeaderboardSortItemsByValue 002404d0 (Hleaderboard;B)V
DWORD Jass_LeaderboardSortItemsByValue(DWORD arg_0_Hleaderboard, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardSortItemsByValue]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardSortItemsByValue(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hleaderboard, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardSortItemsByValue(arg_0_Hleaderboard, arg_4_B);
   return Py_BuildValue("I", rt);
}

// LeaderboardSortItemsByPlayer 002404a0 (Hleaderboard;B)V
DWORD Jass_LeaderboardSortItemsByPlayer(DWORD arg_0_Hleaderboard, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardSortItemsByPlayer]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardSortItemsByPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hleaderboard, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardSortItemsByPlayer(arg_0_Hleaderboard, arg_4_B);
   return Py_BuildValue("I", rt);
}

// LeaderboardSortItemsByLabel 00240470 (Hleaderboard;B)V
DWORD Jass_LeaderboardSortItemsByLabel(DWORD arg_0_Hleaderboard, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardSortItemsByLabel]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardSortItemsByLabel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hleaderboard, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardSortItemsByLabel(arg_0_Hleaderboard, arg_4_B);
   return Py_BuildValue("I", rt);
}

// LeaderboardClear 0023ff70 (Hleaderboard;)V
DWORD Jass_LeaderboardClear(DWORD arg_0_Hleaderboard)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardClear]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardClear(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hleaderboard))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardClear(arg_0_Hleaderboard);
   return Py_BuildValue("I", rt);
}

// LeaderboardDisplay 0023ffa0 (Hleaderboard;B)V
DWORD Jass_LeaderboardDisplay(DWORD arg_0_Hleaderboard, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardDisplay]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardDisplay(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hleaderboard, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardDisplay(arg_0_Hleaderboard, arg_4_B);
   return Py_BuildValue("I", rt);
}

// IsLeaderboardDisplayed 00237f10 (Hleaderboard;)B
DWORD Jass_IsLeaderboardDisplayed(DWORD arg_0_Hleaderboard)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_IsLeaderboardDisplayed]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsLeaderboardDisplayed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hleaderboard))
       Py_RETURN_NONE;
   rt = Jass_IsLeaderboardDisplayed(arg_0_Hleaderboard);
   return Py_BuildValue("I", rt);
}

// LeaderboardGetLabelText 00240020 (Hleaderboard;)S
DWORD Jass_LeaderboardGetLabelText(DWORD arg_0_Hleaderboard)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardGetLabelText]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardGetLabelText(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hleaderboard))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardGetLabelText(arg_0_Hleaderboard);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// PlayerSetLeaderboard 00242110 (Hplayer;Hleaderboard;)V
DWORD Jass_PlayerSetLeaderboard(DWORD arg_0_Hplayer, DWORD arg_4_Hleaderboard)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hleaderboard
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_PlayerSetLeaderboard]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* PlayerSetLeaderboard(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hleaderboard = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_Hleaderboard))
       Py_RETURN_NONE;
   rt = Jass_PlayerSetLeaderboard(arg_0_Hplayer, arg_4_Hleaderboard);
   return Py_BuildValue("I", rt);
}

// PlayerGetLeaderboard 002420b0 (Hplayer;)Hleaderboard;
DWORD Jass_PlayerGetLeaderboard(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_PlayerGetLeaderboard]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* PlayerGetLeaderboard(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_PlayerGetLeaderboard(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// LeaderboardHasPlayerItem 002400c0 (Hleaderboard;Hplayer;)B
DWORD Jass_LeaderboardHasPlayerItem(DWORD arg_0_Hleaderboard, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardHasPlayerItem]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardHasPlayerItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hleaderboard, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardHasPlayerItem(arg_0_Hleaderboard, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// LeaderboardGetPlayerIndex 00240070 (Hleaderboard;Hplayer;)I
DWORD Jass_LeaderboardGetPlayerIndex(DWORD arg_0_Hleaderboard, DWORD arg_4_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hplayer
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardGetPlayerIndex]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardGetPlayerIndex(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hleaderboard, &arg_4_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardGetPlayerIndex(arg_0_Hleaderboard, arg_4_Hplayer);
   return Py_BuildValue("I", rt);
}

// LeaderboardSetLabel 00240300 (Hleaderboard;S)V
DWORD Jass_LeaderboardSetLabel(DWORD arg_0_Hleaderboard, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardSetLabel]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardSetLabel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hleaderboard, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardSetLabel(arg_0_Hleaderboard, arg_4_S);
   return Py_BuildValue("I", rt);
}

// LeaderboardSetLabelColor 00240330 (Hleaderboard;IIII)V
DWORD Jass_LeaderboardSetLabelColor(DWORD arg_0_Hleaderboard, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardSetLabelColor]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardSetLabelColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_I = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hleaderboard, &arg_4_I, &arg_8_I, &arg_C_I, &arg_10_I))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardSetLabelColor(arg_0_Hleaderboard, arg_4_I, arg_8_I, arg_C_I, arg_10_I);
   return Py_BuildValue("I", rt);
}

// LeaderboardSetValueColor 00240410 (Hleaderboard;IIII)V
DWORD Jass_LeaderboardSetValueColor(DWORD arg_0_Hleaderboard, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardSetValueColor]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardSetValueColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_I = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hleaderboard, &arg_4_I, &arg_8_I, &arg_C_I, &arg_10_I))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardSetValueColor(arg_0_Hleaderboard, arg_4_I, arg_8_I, arg_C_I, arg_10_I);
   return Py_BuildValue("I", rt);
}

// LeaderboardSetStyle 002403c0 (Hleaderboard;BBBB)V
DWORD Jass_LeaderboardSetStyle(DWORD arg_0_Hleaderboard, DWORD arg_4_B, DWORD arg_8_B, DWORD arg_C_B, DWORD arg_10_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_B
       push eax
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardSetStyle]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardSetStyle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_B = 0;
   DWORD arg_C_B = 0;
   DWORD arg_10_B = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hleaderboard, &arg_4_B, &arg_8_B, &arg_C_B, &arg_10_B))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardSetStyle(arg_0_Hleaderboard, arg_4_B, arg_8_B, arg_C_B, arg_10_B);
   return Py_BuildValue("I", rt);
}

// LeaderboardSetItemValue 00240270 (Hleaderboard;II)V
DWORD Jass_LeaderboardSetItemValue(DWORD arg_0_Hleaderboard, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardSetItemValue]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardSetItemValue(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hleaderboard, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardSetItemValue(arg_0_Hleaderboard, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// LeaderboardSetItemLabel 00240180 (Hleaderboard;IS)V
DWORD Jass_LeaderboardSetItemLabel(DWORD arg_0_Hleaderboard, DWORD arg_4_I, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardSetItemLabel]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardSetItemLabel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hleaderboard, &arg_4_I, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardSetItemLabel(arg_0_Hleaderboard, arg_4_I, arg_8_S);
   return Py_BuildValue("I", rt);
}

// LeaderboardSetItemStyle 00240220 (Hleaderboard;IBBB)V
DWORD Jass_LeaderboardSetItemStyle(DWORD arg_0_Hleaderboard, DWORD arg_4_I, DWORD arg_8_B, DWORD arg_C_B, DWORD arg_10_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_B
       push eax
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardSetItemStyle]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardSetItemStyle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_B = 0;
   DWORD arg_C_B = 0;
   DWORD arg_10_B = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hleaderboard, &arg_4_I, &arg_8_B, &arg_C_B, &arg_10_B))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardSetItemStyle(arg_0_Hleaderboard, arg_4_I, arg_8_B, arg_C_B, arg_10_B);
   return Py_BuildValue("I", rt);
}

// LeaderboardSetItemLabelColor 002401c0 (Hleaderboard;IIIII)V
DWORD Jass_LeaderboardSetItemLabelColor(DWORD arg_0_Hleaderboard, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I, DWORD arg_14_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_14_I
       push eax
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardSetItemLabelColor]
       add esp, 0x18
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardSetItemLabelColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_I = 0;
   DWORD arg_14_I = 0;
   if (!PyArg_ParseTuple(args, "IIIIII", &arg_0_Hleaderboard, &arg_4_I, &arg_8_I, &arg_C_I, &arg_10_I, &arg_14_I))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardSetItemLabelColor(arg_0_Hleaderboard, arg_4_I, arg_8_I, arg_C_I, arg_10_I, arg_14_I);
   return Py_BuildValue("I", rt);
}

// LeaderboardSetItemValueColor 002402a0 (Hleaderboard;IIIII)V
DWORD Jass_LeaderboardSetItemValueColor(DWORD arg_0_Hleaderboard, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I, DWORD arg_14_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_14_I
       push eax
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hleaderboard
       push eax
       call [_Jass_LeaderboardSetItemValueColor]
       add esp, 0x18
       mov rt, eax
   }
   return rt;
}
static PyObject* LeaderboardSetItemValueColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hleaderboard = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_I = 0;
   DWORD arg_14_I = 0;
   if (!PyArg_ParseTuple(args, "IIIIII", &arg_0_Hleaderboard, &arg_4_I, &arg_8_I, &arg_C_I, &arg_10_I, &arg_14_I))
       Py_RETURN_NONE;
   rt = Jass_LeaderboardSetItemValueColor(arg_0_Hleaderboard, arg_4_I, arg_8_I, arg_C_I, arg_10_I, arg_14_I);
   return Py_BuildValue("I", rt);
}

// CreateMultiboard 0022e750 ()Hmultiboard;
DWORD Jass_CreateMultiboard()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CreateMultiboard]
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateMultiboard(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CreateMultiboard();
   return Py_BuildValue("I", rt);
}

// DestroyMultiboard 0022f940 (Hmultiboard;)V
DWORD Jass_DestroyMultiboard(DWORD arg_0_Hmultiboard)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_DestroyMultiboard]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyMultiboard(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hmultiboard))
       Py_RETURN_NONE;
   rt = Jass_DestroyMultiboard(arg_0_Hmultiboard);
   return Py_BuildValue("I", rt);
}

// MultiboardDisplay 00241270 (Hmultiboard;B)V
DWORD Jass_MultiboardDisplay(DWORD arg_0_Hmultiboard, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_MultiboardDisplay]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardDisplay(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hmultiboard, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_MultiboardDisplay(arg_0_Hmultiboard, arg_4_B);
   return Py_BuildValue("I", rt);
}

// MultiboardMinimize 002413b0 (Hmultiboard;B)V
DWORD Jass_MultiboardMinimize(DWORD arg_0_Hmultiboard, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_MultiboardMinimize]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardMinimize(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hmultiboard, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_MultiboardMinimize(arg_0_Hmultiboard, arg_4_B);
   return Py_BuildValue("I", rt);
}

// IsMultiboardDisplayed 00238190 (Hmultiboard;)B
DWORD Jass_IsMultiboardDisplayed(DWORD arg_0_Hmultiboard)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_IsMultiboardDisplayed]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsMultiboardDisplayed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hmultiboard))
       Py_RETURN_NONE;
   rt = Jass_IsMultiboardDisplayed(arg_0_Hmultiboard);
   return Py_BuildValue("I", rt);
}

// IsMultiboardMinimized 002381b0 (Hmultiboard;)B
DWORD Jass_IsMultiboardMinimized(DWORD arg_0_Hmultiboard)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_IsMultiboardMinimized]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsMultiboardMinimized(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hmultiboard))
       Py_RETURN_NONE;
   rt = Jass_IsMultiboardMinimized(arg_0_Hmultiboard);
   return Py_BuildValue("I", rt);
}

// MultiboardClear 00241240 (Hmultiboard;)V
DWORD Jass_MultiboardClear(DWORD arg_0_Hmultiboard)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_MultiboardClear]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardClear(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hmultiboard))
       Py_RETURN_NONE;
   rt = Jass_MultiboardClear(arg_0_Hmultiboard);
   return Py_BuildValue("I", rt);
}

// MultiboardSetTitleText 00241660 (Hmultiboard;S)V
DWORD Jass_MultiboardSetTitleText(DWORD arg_0_Hmultiboard, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_MultiboardSetTitleText]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardSetTitleText(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hmultiboard, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_MultiboardSetTitleText(arg_0_Hmultiboard, arg_4_S);
   return Py_BuildValue("I", rt);
}

// MultiboardGetTitleText 00241390 (Hmultiboard;)S
DWORD Jass_MultiboardGetTitleText(DWORD arg_0_Hmultiboard)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_MultiboardGetTitleText]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardGetTitleText(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hmultiboard))
       Py_RETURN_NONE;
   rt = Jass_MultiboardGetTitleText(arg_0_Hmultiboard);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// MultiboardSetTitleTextColor 00241690 (Hmultiboard;IIII)V
DWORD Jass_MultiboardSetTitleTextColor(DWORD arg_0_Hmultiboard, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_MultiboardSetTitleTextColor]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardSetTitleTextColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_I = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hmultiboard, &arg_4_I, &arg_8_I, &arg_C_I, &arg_10_I))
       Py_RETURN_NONE;
   rt = Jass_MultiboardSetTitleTextColor(arg_0_Hmultiboard, arg_4_I, arg_8_I, arg_C_I, arg_10_I);
   return Py_BuildValue("I", rt);
}

// MultiboardGetRowCount 00241370 (Hmultiboard;)I
DWORD Jass_MultiboardGetRowCount(DWORD arg_0_Hmultiboard)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_MultiboardGetRowCount]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardGetRowCount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hmultiboard))
       Py_RETURN_NONE;
   rt = Jass_MultiboardGetRowCount(arg_0_Hmultiboard);
   return Py_BuildValue("I", rt);
}

// MultiboardGetColumnCount 00241290 (Hmultiboard;)I
DWORD Jass_MultiboardGetColumnCount(DWORD arg_0_Hmultiboard)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_MultiboardGetColumnCount]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardGetColumnCount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hmultiboard))
       Py_RETURN_NONE;
   rt = Jass_MultiboardGetColumnCount(arg_0_Hmultiboard);
   return Py_BuildValue("I", rt);
}

// MultiboardSetColumnCount 002413f0 (Hmultiboard;I)V
DWORD Jass_MultiboardSetColumnCount(DWORD arg_0_Hmultiboard, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_MultiboardSetColumnCount]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardSetColumnCount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hmultiboard, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_MultiboardSetColumnCount(arg_0_Hmultiboard, arg_4_I);
   return Py_BuildValue("I", rt);
}

// MultiboardSetRowCount 00241640 (Hmultiboard;I)V
DWORD Jass_MultiboardSetRowCount(DWORD arg_0_Hmultiboard, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_MultiboardSetRowCount]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardSetRowCount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hmultiboard, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_MultiboardSetRowCount(arg_0_Hmultiboard, arg_4_I);
   return Py_BuildValue("I", rt);
}

// MultiboardSetItemsStyle 00241540 (Hmultiboard;BB)V
DWORD Jass_MultiboardSetItemsStyle(DWORD arg_0_Hmultiboard, DWORD arg_4_B, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_MultiboardSetItemsStyle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardSetItemsStyle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hmultiboard, &arg_4_B, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_MultiboardSetItemsStyle(arg_0_Hmultiboard, arg_4_B, arg_8_B);
   return Py_BuildValue("I", rt);
}

// MultiboardSetItemsValueColor 002415b0 (Hmultiboard;IIII)V
DWORD Jass_MultiboardSetItemsValueColor(DWORD arg_0_Hmultiboard, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_MultiboardSetItemsValueColor]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardSetItemsValueColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_I = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hmultiboard, &arg_4_I, &arg_8_I, &arg_C_I, &arg_10_I))
       Py_RETURN_NONE;
   rt = Jass_MultiboardSetItemsValueColor(arg_0_Hmultiboard, arg_4_I, arg_8_I, arg_C_I, arg_10_I);
   return Py_BuildValue("I", rt);
}

// MultiboardSetItemsValue 00241580 (Hmultiboard;S)V
DWORD Jass_MultiboardSetItemsValue(DWORD arg_0_Hmultiboard, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_MultiboardSetItemsValue]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardSetItemsValue(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hmultiboard, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_MultiboardSetItemsValue(arg_0_Hmultiboard, arg_4_S);
   return Py_BuildValue("I", rt);
}

// MultiboardSetItemsWidth 00241610 (Hmultiboard;R)V
DWORD Jass_MultiboardSetItemsWidth(DWORD arg_0_Hmultiboard, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_MultiboardSetItemsWidth]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardSetItemsWidth(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hmultiboard, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_MultiboardSetItemsWidth(arg_0_Hmultiboard, arg_4_R);
   return Py_BuildValue("I", rt);
}

// MultiboardSetItemsIcon 00241510 (Hmultiboard;S)V
DWORD Jass_MultiboardSetItemsIcon(DWORD arg_0_Hmultiboard, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_MultiboardSetItemsIcon]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardSetItemsIcon(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hmultiboard, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_MultiboardSetItemsIcon(arg_0_Hmultiboard, arg_4_S);
   return Py_BuildValue("I", rt);
}

// MultiboardGetItem 002412b0 (Hmultiboard;II)Hmultiboarditem;
DWORD Jass_MultiboardGetItem(DWORD arg_0_Hmultiboard, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hmultiboard
       push eax
       call [_Jass_MultiboardGetItem]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardGetItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboard = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hmultiboard, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_MultiboardGetItem(arg_0_Hmultiboard, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// MultiboardReleaseItem 002413d0 (Hmultiboarditem;)V
DWORD Jass_MultiboardReleaseItem(DWORD arg_0_Hmultiboarditem)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hmultiboarditem
       push eax
       call [_Jass_MultiboardReleaseItem]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardReleaseItem(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboarditem = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hmultiboarditem))
       Py_RETURN_NONE;
   rt = Jass_MultiboardReleaseItem(arg_0_Hmultiboarditem);
   return Py_BuildValue("I", rt);
}

// MultiboardSetItemStyle 00241440 (Hmultiboarditem;BB)V
DWORD Jass_MultiboardSetItemStyle(DWORD arg_0_Hmultiboarditem, DWORD arg_4_B, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hmultiboarditem
       push eax
       call [_Jass_MultiboardSetItemStyle]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardSetItemStyle(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboarditem = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hmultiboarditem, &arg_4_B, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_MultiboardSetItemStyle(arg_0_Hmultiboarditem, arg_4_B, arg_8_B);
   return Py_BuildValue("I", rt);
}

// MultiboardSetItemValue 00241460 (Hmultiboarditem;S)V
DWORD Jass_MultiboardSetItemValue(DWORD arg_0_Hmultiboarditem, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hmultiboarditem
       push eax
       call [_Jass_MultiboardSetItemValue]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardSetItemValue(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboarditem = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hmultiboarditem, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_MultiboardSetItemValue(arg_0_Hmultiboarditem, arg_4_S);
   return Py_BuildValue("I", rt);
}

// MultiboardSetItemValueColor 00241490 (Hmultiboarditem;IIII)V
DWORD Jass_MultiboardSetItemValueColor(DWORD arg_0_Hmultiboarditem, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hmultiboarditem
       push eax
       call [_Jass_MultiboardSetItemValueColor]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardSetItemValueColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboarditem = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_I = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hmultiboarditem, &arg_4_I, &arg_8_I, &arg_C_I, &arg_10_I))
       Py_RETURN_NONE;
   rt = Jass_MultiboardSetItemValueColor(arg_0_Hmultiboarditem, arg_4_I, arg_8_I, arg_C_I, arg_10_I);
   return Py_BuildValue("I", rt);
}

// MultiboardSetItemWidth 002414e0 (Hmultiboarditem;R)V
DWORD Jass_MultiboardSetItemWidth(DWORD arg_0_Hmultiboarditem, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hmultiboarditem
       push eax
       call [_Jass_MultiboardSetItemWidth]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardSetItemWidth(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboarditem = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hmultiboarditem, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_MultiboardSetItemWidth(arg_0_Hmultiboarditem, arg_4_R);
   return Py_BuildValue("I", rt);
}

// MultiboardSetItemIcon 00241410 (Hmultiboarditem;S)V
DWORD Jass_MultiboardSetItemIcon(DWORD arg_0_Hmultiboarditem, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hmultiboarditem
       push eax
       call [_Jass_MultiboardSetItemIcon]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardSetItemIcon(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hmultiboarditem = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hmultiboarditem, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_MultiboardSetItemIcon(arg_0_Hmultiboarditem, arg_4_S);
   return Py_BuildValue("I", rt);
}

// MultiboardSuppressDisplay 002416e0 (B)V
DWORD Jass_MultiboardSuppressDisplay(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_MultiboardSuppressDisplay]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* MultiboardSuppressDisplay(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_MultiboardSuppressDisplay(arg_0_B);
   return Py_BuildValue("I", rt);
}

// SetCameraBounds 002443a0 (RRRRRRRR)V
DWORD Jass_SetCameraBounds(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_R, DWORD arg_1C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_1C_R
       push eax
       mov eax, arg_18_R
       push eax
       mov eax, arg_14_R
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_SetCameraBounds]
       add esp, 0x20
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCameraBounds(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_R = 0;
   DWORD arg_18_R = 0;
   DWORD arg_1C_R = 0;
   if (!PyArg_ParseTuple(args, "IIIIIIII", &arg_0_R, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_R, &arg_14_R, &arg_18_R, &arg_1C_R))
       Py_RETURN_NONE;
   rt = Jass_SetCameraBounds(arg_0_R, arg_4_R, arg_8_R, arg_C_R, arg_10_R, arg_14_R, arg_18_R, arg_1C_R);
   return Py_BuildValue("I", rt);
}

// SetCameraPosition 00244510 (RR)V
DWORD Jass_SetCameraPosition(DWORD arg_0_R, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_SetCameraPosition]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCameraPosition(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_R, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetCameraPosition(arg_0_R, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetCameraQuickPosition 00244560 (RR)V
DWORD Jass_SetCameraQuickPosition(DWORD arg_0_R, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_SetCameraQuickPosition]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCameraQuickPosition(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_R, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetCameraQuickPosition(arg_0_R, arg_4_R);
   return Py_BuildValue("I", rt);
}

// ResetToGameCamera 00243420 (R)V
DWORD Jass_ResetToGameCamera(DWORD arg_0_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_R
       push eax
       call [_Jass_ResetToGameCamera]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ResetToGameCamera(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_R))
       Py_RETURN_NONE;
   rt = Jass_ResetToGameCamera(arg_0_R);
   return Py_BuildValue("I", rt);
}

// StopCamera 002484e0 ()V
DWORD Jass_StopCamera()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_StopCamera]
       mov rt, eax
   }
   return rt;
}
static PyObject* StopCamera(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_StopCamera();
   return Py_BuildValue("I", rt);
}

// PanCameraTo 00241b60 (RR)V
DWORD Jass_PanCameraTo(DWORD arg_0_R, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_PanCameraTo]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* PanCameraTo(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_R, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_PanCameraTo(arg_0_R, arg_4_R);
   return Py_BuildValue("I", rt);
}

// PanCameraToTimed 00241bb0 (RRR)V
DWORD Jass_PanCameraToTimed(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_PanCameraToTimed]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* PanCameraToTimed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_R, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_PanCameraToTimed(arg_0_R, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// PanCameraToWithZ 00241c70 (RRR)V
DWORD Jass_PanCameraToWithZ(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_PanCameraToWithZ]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* PanCameraToWithZ(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_R, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_PanCameraToWithZ(arg_0_R, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// PanCameraToTimedWithZ 00241c10 (RRRR)V
DWORD Jass_PanCameraToTimedWithZ(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_PanCameraToTimedWithZ]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* PanCameraToTimedWithZ(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_R, &arg_4_R, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_PanCameraToTimedWithZ(arg_0_R, arg_4_R, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// SetCinematicCamera 00244b30 (S)V
DWORD Jass_SetCinematicCamera(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_SetCinematicCamera]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCinematicCamera(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_SetCinematicCamera(arg_0_S);
   return Py_BuildValue("I", rt);
}

// SetCameraField 00244480 (Hcamerafield;RR)V
DWORD Jass_SetCameraField(DWORD arg_0_Hcamerafield, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hcamerafield
       push eax
       call [_Jass_SetCameraField]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCameraField(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hcamerafield = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hcamerafield, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_SetCameraField(arg_0_Hcamerafield, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// AdjustCameraField 0022a910 (Hcamerafield;RR)V
DWORD Jass_AdjustCameraField(DWORD arg_0_Hcamerafield, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hcamerafield
       push eax
       call [_Jass_AdjustCameraField]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* AdjustCameraField(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hcamerafield = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hcamerafield, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_AdjustCameraField(arg_0_Hcamerafield, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// SetCameraTargetController 00244600 (Hunit;RRB)V
DWORD Jass_SetCameraTargetController(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetCameraTargetController]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCameraTargetController(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_B = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hunit, &arg_4_R, &arg_8_R, &arg_C_B))
       Py_RETURN_NONE;
   rt = Jass_SetCameraTargetController(arg_0_Hunit, arg_4_R, arg_8_R, arg_C_B);
   return Py_BuildValue("I", rt);
}

// SetCameraOrientController 002444c0 (Hunit;RR)V
DWORD Jass_SetCameraOrientController(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetCameraOrientController]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCameraOrientController(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hunit, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_SetCameraOrientController(arg_0_Hunit, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// SetCameraRotateMode 002445a0 (RRRR)V
DWORD Jass_SetCameraRotateMode(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_SetCameraRotateMode]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCameraRotateMode(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_R, &arg_4_R, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_SetCameraRotateMode(arg_0_R, arg_4_R, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// CreateCameraSetup 0022dc10 ()Hcamerasetup;
DWORD Jass_CreateCameraSetup()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CreateCameraSetup]
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateCameraSetup(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CreateCameraSetup();
   return Py_BuildValue("I", rt);
}

// CameraSetupSetField 0022b170 (Hcamerasetup;Hcamerafield;RR)V
DWORD Jass_CameraSetupSetField(DWORD arg_0_Hcamerasetup, DWORD arg_4_Hcamerafield, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_Hcamerafield
       push eax
       mov eax, arg_0_Hcamerasetup
       push eax
       call [_Jass_CameraSetupSetField]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* CameraSetupSetField(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hcamerasetup = 0;
   DWORD arg_4_Hcamerafield = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hcamerasetup, &arg_4_Hcamerafield, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_CameraSetupSetField(arg_0_Hcamerasetup, arg_4_Hcamerafield, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// CameraSetupGetField 0022b0e0 (Hcamerasetup;Hcamerafield;)R
DWORD Jass_CameraSetupGetField(DWORD arg_0_Hcamerasetup, DWORD arg_4_Hcamerafield)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hcamerafield
       push eax
       mov eax, arg_0_Hcamerasetup
       push eax
       call [_Jass_CameraSetupGetField]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* CameraSetupGetField(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hcamerasetup = 0;
   DWORD arg_4_Hcamerafield = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hcamerasetup, &arg_4_Hcamerafield))
       Py_RETURN_NONE;
   rt = Jass_CameraSetupGetField(arg_0_Hcamerasetup, arg_4_Hcamerafield);
   return Py_BuildValue("I", rt);
}

// CameraSetupSetDestPosition 0022b120 (Hcamerasetup;RRR)V
DWORD Jass_CameraSetupSetDestPosition(DWORD arg_0_Hcamerasetup, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hcamerasetup
       push eax
       call [_Jass_CameraSetupSetDestPosition]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* CameraSetupSetDestPosition(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hcamerasetup = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hcamerasetup, &arg_4_R, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_CameraSetupSetDestPosition(arg_0_Hcamerasetup, arg_4_R, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// CameraSetupGetDestPositionLoc 0022b040 (Hcamerasetup;)Hlocation;
DWORD Jass_CameraSetupGetDestPositionLoc(DWORD arg_0_Hcamerasetup)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hcamerasetup
       push eax
       call [_Jass_CameraSetupGetDestPositionLoc]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* CameraSetupGetDestPositionLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hcamerasetup = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hcamerasetup))
       Py_RETURN_NONE;
   rt = Jass_CameraSetupGetDestPositionLoc(arg_0_Hcamerasetup);
   return Py_BuildValue("I", rt);
}

// CameraSetupGetDestPositionX 0022b090 (Hcamerasetup;)R
DWORD Jass_CameraSetupGetDestPositionX(DWORD arg_0_Hcamerasetup)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hcamerasetup
       push eax
       call [_Jass_CameraSetupGetDestPositionX]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* CameraSetupGetDestPositionX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hcamerasetup = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hcamerasetup))
       Py_RETURN_NONE;
   rt = Jass_CameraSetupGetDestPositionX(arg_0_Hcamerasetup);
   return Py_BuildValue("I", rt);
}

// CameraSetupGetDestPositionY 0022b0c0 (Hcamerasetup;)R
DWORD Jass_CameraSetupGetDestPositionY(DWORD arg_0_Hcamerasetup)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hcamerasetup
       push eax
       call [_Jass_CameraSetupGetDestPositionY]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* CameraSetupGetDestPositionY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hcamerasetup = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hcamerasetup))
       Py_RETURN_NONE;
   rt = Jass_CameraSetupGetDestPositionY(arg_0_Hcamerasetup);
   return Py_BuildValue("I", rt);
}

// CameraSetupApply 0022af80 (Hcamerasetup;BB)V
DWORD Jass_CameraSetupApply(DWORD arg_0_Hcamerasetup, DWORD arg_4_B, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hcamerasetup
       push eax
       call [_Jass_CameraSetupApply]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* CameraSetupApply(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hcamerasetup = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hcamerasetup, &arg_4_B, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_CameraSetupApply(arg_0_Hcamerasetup, arg_4_B, arg_8_B);
   return Py_BuildValue("I", rt);
}

// CameraSetupApplyWithZ 0022b010 (Hcamerasetup;R)V
DWORD Jass_CameraSetupApplyWithZ(DWORD arg_0_Hcamerasetup, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hcamerasetup
       push eax
       call [_Jass_CameraSetupApplyWithZ]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* CameraSetupApplyWithZ(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hcamerasetup = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hcamerasetup, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_CameraSetupApplyWithZ(arg_0_Hcamerasetup, arg_4_R);
   return Py_BuildValue("I", rt);
}

// CameraSetupApplyForceDuration 0022afb0 (Hcamerasetup;BR)V
DWORD Jass_CameraSetupApplyForceDuration(DWORD arg_0_Hcamerasetup, DWORD arg_4_B, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hcamerasetup
       push eax
       call [_Jass_CameraSetupApplyForceDuration]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* CameraSetupApplyForceDuration(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hcamerasetup = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hcamerasetup, &arg_4_B, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_CameraSetupApplyForceDuration(arg_0_Hcamerasetup, arg_4_B, arg_8_R);
   return Py_BuildValue("I", rt);
}

// CameraSetupApplyForceDurationWithZ 0022afe0 (Hcamerasetup;RR)V
DWORD Jass_CameraSetupApplyForceDurationWithZ(DWORD arg_0_Hcamerasetup, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hcamerasetup
       push eax
       call [_Jass_CameraSetupApplyForceDurationWithZ]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* CameraSetupApplyForceDurationWithZ(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hcamerasetup = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hcamerasetup, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_CameraSetupApplyForceDurationWithZ(arg_0_Hcamerasetup, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// CameraSetTargetNoise 0022ae20 (RR)V
DWORD Jass_CameraSetTargetNoise(DWORD arg_0_R, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_CameraSetTargetNoise]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* CameraSetTargetNoise(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_R, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_CameraSetTargetNoise(arg_0_R, arg_4_R);
   return Py_BuildValue("I", rt);
}

// CameraSetSourceNoise 0022ace0 (RR)V
DWORD Jass_CameraSetSourceNoise(DWORD arg_0_R, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_CameraSetSourceNoise]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* CameraSetSourceNoise(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_R, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_CameraSetSourceNoise(arg_0_R, arg_4_R);
   return Py_BuildValue("I", rt);
}

// CameraSetTargetNoiseEx 0022aed0 (RRB)V
DWORD Jass_CameraSetTargetNoiseEx(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_CameraSetTargetNoiseEx]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* CameraSetTargetNoiseEx(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_R, &arg_4_R, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_CameraSetTargetNoiseEx(arg_0_R, arg_4_R, arg_8_B);
   return Py_BuildValue("I", rt);
}

// CameraSetSourceNoiseEx 0022ad80 (RRB)V
DWORD Jass_CameraSetSourceNoiseEx(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_CameraSetSourceNoiseEx]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* CameraSetSourceNoiseEx(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_R, &arg_4_R, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_CameraSetSourceNoiseEx(arg_0_R, arg_4_R, arg_8_B);
   return Py_BuildValue("I", rt);
}

// CameraSetSmoothingFactor 0022acb0 (R)V
DWORD Jass_CameraSetSmoothingFactor(DWORD arg_0_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_R
       push eax
       call [_Jass_CameraSetSmoothingFactor]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* CameraSetSmoothingFactor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_R))
       Py_RETURN_NONE;
   rt = Jass_CameraSetSmoothingFactor(arg_0_R);
   return Py_BuildValue("I", rt);
}

// GetCameraMargin 00231c70 (I)R
DWORD Jass_GetCameraMargin(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_GetCameraMargin]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCameraMargin(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_GetCameraMargin(arg_0_I);
   return Py_BuildValue("I", rt);
}

// GetCameraBoundMinX 00231ac0 ()R
DWORD Jass_GetCameraBoundMinX()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetCameraBoundMinX]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCameraBoundMinX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetCameraBoundMinX();
   return Py_BuildValue("I", rt);
}

// GetCameraBoundMinY 00231af0 ()R
DWORD Jass_GetCameraBoundMinY()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetCameraBoundMinY]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCameraBoundMinY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetCameraBoundMinY();
   return Py_BuildValue("I", rt);
}

// GetCameraBoundMaxX 00231a60 ()R
DWORD Jass_GetCameraBoundMaxX()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetCameraBoundMaxX]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCameraBoundMaxX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetCameraBoundMaxX();
   return Py_BuildValue("I", rt);
}

// GetCameraBoundMaxY 00231a90 ()R
DWORD Jass_GetCameraBoundMaxY()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetCameraBoundMaxY]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCameraBoundMaxY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetCameraBoundMaxY();
   return Py_BuildValue("I", rt);
}

// GetCameraField 00231c40 (Hcamerafield;)R
DWORD Jass_GetCameraField(DWORD arg_0_Hcamerafield)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hcamerafield
       push eax
       call [_Jass_GetCameraField]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCameraField(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hcamerafield = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hcamerafield))
       Py_RETURN_NONE;
   rt = Jass_GetCameraField(arg_0_Hcamerafield);
   return Py_BuildValue("I", rt);
}

// GetCameraTargetPositionX 00231d30 ()R
DWORD Jass_GetCameraTargetPositionX()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetCameraTargetPositionX]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCameraTargetPositionX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetCameraTargetPositionX();
   return Py_BuildValue("I", rt);
}

// GetCameraTargetPositionY 00231d70 ()R
DWORD Jass_GetCameraTargetPositionY()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetCameraTargetPositionY]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCameraTargetPositionY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetCameraTargetPositionY();
   return Py_BuildValue("I", rt);
}

// GetCameraTargetPositionZ 00231db0 ()R
DWORD Jass_GetCameraTargetPositionZ()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetCameraTargetPositionZ]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCameraTargetPositionZ(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetCameraTargetPositionZ();
   return Py_BuildValue("I", rt);
}

// GetCameraTargetPositionLoc 00231ce0 ()Hlocation;
DWORD Jass_GetCameraTargetPositionLoc()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetCameraTargetPositionLoc]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCameraTargetPositionLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetCameraTargetPositionLoc();
   return Py_BuildValue("I", rt);
}

// GetCameraEyePositionX 00231b80 ()R
DWORD Jass_GetCameraEyePositionX()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetCameraEyePositionX]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCameraEyePositionX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetCameraEyePositionX();
   return Py_BuildValue("I", rt);
}

// GetCameraEyePositionY 00231bc0 ()R
DWORD Jass_GetCameraEyePositionY()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetCameraEyePositionY]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCameraEyePositionY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetCameraEyePositionY();
   return Py_BuildValue("I", rt);
}

// GetCameraEyePositionZ 00231c00 ()R
DWORD Jass_GetCameraEyePositionZ()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetCameraEyePositionZ]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCameraEyePositionZ(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetCameraEyePositionZ();
   return Py_BuildValue("I", rt);
}

// GetCameraEyePositionLoc 00231b30 ()Hlocation;
DWORD Jass_GetCameraEyePositionLoc()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetCameraEyePositionLoc]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCameraEyePositionLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetCameraEyePositionLoc();
   return Py_BuildValue("I", rt);
}

// SetCineFilterTexture 00244b00 (S)V
DWORD Jass_SetCineFilterTexture(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_SetCineFilterTexture]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCineFilterTexture(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_SetCineFilterTexture(arg_0_S);
   return Py_BuildValue("I", rt);
}

// SetCineFilterBlendMode 002446e0 (Hblendmode;)V
DWORD Jass_SetCineFilterBlendMode(DWORD arg_0_Hblendmode)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hblendmode
       push eax
       call [_Jass_SetCineFilterBlendMode]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCineFilterBlendMode(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hblendmode = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hblendmode))
       Py_RETURN_NONE;
   rt = Jass_SetCineFilterBlendMode(arg_0_Hblendmode);
   return Py_BuildValue("I", rt);
}

// SetCineFilterTexMapFlags 00244ac0 (Htexmapflags;)V
DWORD Jass_SetCineFilterTexMapFlags(DWORD arg_0_Htexmapflags)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Htexmapflags
       push eax
       call [_Jass_SetCineFilterTexMapFlags]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCineFilterTexMapFlags(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Htexmapflags = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Htexmapflags))
       Py_RETURN_NONE;
   rt = Jass_SetCineFilterTexMapFlags(arg_0_Htexmapflags);
   return Py_BuildValue("I", rt);
}

// SetCineFilterStartUV 00244a30 (RRRR)V
DWORD Jass_SetCineFilterStartUV(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_SetCineFilterStartUV]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCineFilterStartUV(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_R, &arg_4_R, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_SetCineFilterStartUV(arg_0_R, arg_4_R, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// SetCineFilterEndUV 002448a0 (RRRR)V
DWORD Jass_SetCineFilterEndUV(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_SetCineFilterEndUV]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCineFilterEndUV(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_R, &arg_4_R, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_SetCineFilterEndUV(arg_0_R, arg_4_R, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// SetCineFilterStartColor 00244930 (IIII)V
DWORD Jass_SetCineFilterStartColor(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_SetCineFilterStartColor]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCineFilterStartColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_I, &arg_4_I, &arg_8_I, &arg_C_I))
       Py_RETURN_NONE;
   rt = Jass_SetCineFilterStartColor(arg_0_I, arg_4_I, arg_8_I, arg_C_I);
   return Py_BuildValue("I", rt);
}

// SetCineFilterEndColor 002447a0 (IIII)V
DWORD Jass_SetCineFilterEndColor(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_SetCineFilterEndColor]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCineFilterEndColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_I, &arg_4_I, &arg_8_I, &arg_C_I))
       Py_RETURN_NONE;
   rt = Jass_SetCineFilterEndColor(arg_0_I, arg_4_I, arg_8_I, arg_C_I);
   return Py_BuildValue("I", rt);
}

// SetCineFilterDuration 00244780 (R)V
DWORD Jass_SetCineFilterDuration(DWORD arg_0_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_R
       push eax
       call [_Jass_SetCineFilterDuration]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCineFilterDuration(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_R))
       Py_RETURN_NONE;
   rt = Jass_SetCineFilterDuration(arg_0_R);
   return Py_BuildValue("I", rt);
}

// DisplayCineFilter 0022fee0 (B)V
DWORD Jass_DisplayCineFilter(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_DisplayCineFilter]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DisplayCineFilter(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_DisplayCineFilter(arg_0_B);
   return Py_BuildValue("I", rt);
}

// IsCineFilterDisplayed 00237a40 ()B
DWORD Jass_IsCineFilterDisplayed()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_IsCineFilterDisplayed]
       mov rt, eax
   }
   return rt;
}
static PyObject* IsCineFilterDisplayed(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_IsCineFilterDisplayed();
   return Py_BuildValue("I", rt);
}

// SetCinematicScene 00244b70 (IHplayercolor;SSRR)V
DWORD Jass_SetCinematicScene(DWORD arg_0_I, DWORD arg_4_Hplayercolor, DWORD arg_8_S, DWORD arg_C_S, DWORD arg_10_R, DWORD arg_14_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_14_R
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_S
       push eax
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_Hplayercolor
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_SetCinematicScene]
       add esp, 0x18
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCinematicScene(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_Hplayercolor = 0;
   DWORD arg_8_S = 0;
   DWORD arg_C_S = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_R = 0;
   if (!PyArg_ParseTuple(args, "IIIIII", &arg_0_I, &arg_4_Hplayercolor, &arg_8_S, &arg_C_S, &arg_10_R, &arg_14_R))
       Py_RETURN_NONE;
   rt = Jass_SetCinematicScene(arg_0_I, arg_4_Hplayercolor, arg_8_S, arg_C_S, arg_10_R, arg_14_R);
   return Py_BuildValue("I", rt);
}

// EndCinematicScene 00230330 ()V
DWORD Jass_EndCinematicScene()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_EndCinematicScene]
       mov rt, eax
   }
   return rt;
}
static PyObject* EndCinematicScene(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_EndCinematicScene();
   return Py_BuildValue("I", rt);
}

// ForceCinematicSubtitles 00230f20 (B)V
DWORD Jass_ForceCinematicSubtitles(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_ForceCinematicSubtitles]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ForceCinematicSubtitles(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_ForceCinematicSubtitles(arg_0_B);
   return Py_BuildValue("I", rt);
}

// NewSoundEnvironment 002417c0 (S)V
DWORD Jass_NewSoundEnvironment(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_NewSoundEnvironment]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* NewSoundEnvironment(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_NewSoundEnvironment(arg_0_S);
   return Py_BuildValue("I", rt);
}

// CreateSound 0022e990 (SBBBIIS)Hsound;
DWORD Jass_CreateSound(DWORD arg_0_S, DWORD arg_4_B, DWORD arg_8_B, DWORD arg_C_B, DWORD arg_10_I, DWORD arg_14_I, DWORD arg_18_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_18_S
       push eax
       mov eax, arg_14_I
       push eax
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_CreateSound]
       add esp, 0x1c
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateSound(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_B = 0;
   DWORD arg_C_B = 0;
   DWORD arg_10_I = 0;
   DWORD arg_14_I = 0;
   DWORD arg_18_S = 0;
   if (!PyArg_ParseTuple(args, "IIIIIII", &arg_0_S, &arg_4_B, &arg_8_B, &arg_C_B, &arg_10_I, &arg_14_I, &arg_18_S))
       Py_RETURN_NONE;
   rt = Jass_CreateSound(arg_0_S, arg_4_B, arg_8_B, arg_C_B, arg_10_I, arg_14_I, arg_18_S);
   return Py_BuildValue("I", rt);
}

// CreateSoundFilenameWithLabel 0022eab0 (SBBBIIS)Hsound;
DWORD Jass_CreateSoundFilenameWithLabel(DWORD arg_0_S, DWORD arg_4_B, DWORD arg_8_B, DWORD arg_C_B, DWORD arg_10_I, DWORD arg_14_I, DWORD arg_18_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_18_S
       push eax
       mov eax, arg_14_I
       push eax
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_CreateSoundFilenameWithLabel]
       add esp, 0x1c
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateSoundFilenameWithLabel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_B = 0;
   DWORD arg_C_B = 0;
   DWORD arg_10_I = 0;
   DWORD arg_14_I = 0;
   DWORD arg_18_S = 0;
   if (!PyArg_ParseTuple(args, "IIIIIII", &arg_0_S, &arg_4_B, &arg_8_B, &arg_C_B, &arg_10_I, &arg_14_I, &arg_18_S))
       Py_RETURN_NONE;
   rt = Jass_CreateSoundFilenameWithLabel(arg_0_S, arg_4_B, arg_8_B, arg_C_B, arg_10_I, arg_14_I, arg_18_S);
   return Py_BuildValue("I", rt);
}

// CreateSoundFromLabel 0022ebd0 (SBBBII)Hsound;
DWORD Jass_CreateSoundFromLabel(DWORD arg_0_S, DWORD arg_4_B, DWORD arg_8_B, DWORD arg_C_B, DWORD arg_10_I, DWORD arg_14_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_14_I
       push eax
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_CreateSoundFromLabel]
       add esp, 0x18
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateSoundFromLabel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_B = 0;
   DWORD arg_C_B = 0;
   DWORD arg_10_I = 0;
   DWORD arg_14_I = 0;
   if (!PyArg_ParseTuple(args, "IIIIII", &arg_0_S, &arg_4_B, &arg_8_B, &arg_C_B, &arg_10_I, &arg_14_I))
       Py_RETURN_NONE;
   rt = Jass_CreateSoundFromLabel(arg_0_S, arg_4_B, arg_8_B, arg_C_B, arg_10_I, arg_14_I);
   return Py_BuildValue("I", rt);
}

// CreateMIDISound 0022e650 (SII)Hsound;
DWORD Jass_CreateMIDISound(DWORD arg_0_S, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_CreateMIDISound]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateMIDISound(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_S, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_CreateMIDISound(arg_0_S, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// SetStackedSound 00246c70 (SRR)V
DWORD Jass_SetStackedSound(DWORD arg_0_S, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_SetStackedSound]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetStackedSound(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_S, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_SetStackedSound(arg_0_S, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// ClearStackedSound 0022b5f0 (SRR)V
DWORD Jass_ClearStackedSound(DWORD arg_0_S, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_ClearStackedSound]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* ClearStackedSound(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_S, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_ClearStackedSound(arg_0_S, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// SetStackedSoundRect 00246cd0 (SHrect;)V
DWORD Jass_SetStackedSoundRect(DWORD arg_0_S, DWORD arg_4_Hrect)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hrect
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_SetStackedSoundRect]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetStackedSoundRect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_Hrect = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_S, &arg_4_Hrect))
       Py_RETURN_NONE;
   rt = Jass_SetStackedSoundRect(arg_0_S, arg_4_Hrect);
   return Py_BuildValue("I", rt);
}

// ClearStackedSoundRect 0022b640 (SHrect;)V
DWORD Jass_ClearStackedSoundRect(DWORD arg_0_S, DWORD arg_4_Hrect)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hrect
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_ClearStackedSoundRect]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* ClearStackedSoundRect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_Hrect = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_S, &arg_4_Hrect))
       Py_RETURN_NONE;
   rt = Jass_ClearStackedSoundRect(arg_0_S, arg_4_Hrect);
   return Py_BuildValue("I", rt);
}

// SetSoundParamsFromLabel 00246b10 (Hsound;S)V
DWORD Jass_SetSoundParamsFromLabel(DWORD arg_0_Hsound, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_SetSoundParamsFromLabel]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetSoundParamsFromLabel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hsound, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_SetSoundParamsFromLabel(arg_0_Hsound, arg_4_S);
   return Py_BuildValue("I", rt);
}

// SetSoundChannel 002469a0 (Hsound;I)V
DWORD Jass_SetSoundChannel(DWORD arg_0_Hsound, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_SetSoundChannel]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetSoundChannel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hsound, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetSoundChannel(arg_0_Hsound, arg_4_I);
   return Py_BuildValue("I", rt);
}

// SetSoundVolume 00246c50 (Hsound;I)V
DWORD Jass_SetSoundVolume(DWORD arg_0_Hsound, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_SetSoundVolume]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetSoundVolume(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hsound, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetSoundVolume(arg_0_Hsound, arg_4_I);
   return Py_BuildValue("I", rt);
}

// SetSoundPitch 00246b40 (Hsound;R)V
DWORD Jass_SetSoundPitch(DWORD arg_0_Hsound, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_SetSoundPitch]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetSoundPitch(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hsound, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetSoundPitch(arg_0_Hsound, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetSoundPlayPosition 00246b70 (Hsound;I)V
DWORD Jass_SetSoundPlayPosition(DWORD arg_0_Hsound, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_SetSoundPlayPosition]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetSoundPlayPosition(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hsound, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetSoundPlayPosition(arg_0_Hsound, arg_4_I);
   return Py_BuildValue("I", rt);
}

// SetSoundDistances 00246aa0 (Hsound;RR)V
DWORD Jass_SetSoundDistances(DWORD arg_0_Hsound, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_SetSoundDistances]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetSoundDistances(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hsound, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_SetSoundDistances(arg_0_Hsound, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// SetSoundDistanceCutoff 00246a70 (Hsound;R)V
DWORD Jass_SetSoundDistanceCutoff(DWORD arg_0_Hsound, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_SetSoundDistanceCutoff]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetSoundDistanceCutoff(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hsound, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetSoundDistanceCutoff(arg_0_Hsound, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetSoundConeAngles 002469c0 (Hsound;RRI)V
DWORD Jass_SetSoundConeAngles(DWORD arg_0_Hsound, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_SetSoundConeAngles]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetSoundConeAngles(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_I = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hsound, &arg_4_R, &arg_8_R, &arg_C_I))
       Py_RETURN_NONE;
   rt = Jass_SetSoundConeAngles(arg_0_Hsound, arg_4_R, arg_8_R, arg_C_I);
   return Py_BuildValue("I", rt);
}

// SetSoundConeOrientation 00246a10 (Hsound;RRR)V
DWORD Jass_SetSoundConeOrientation(DWORD arg_0_Hsound, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_SetSoundConeOrientation]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetSoundConeOrientation(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hsound, &arg_4_R, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_SetSoundConeOrientation(arg_0_Hsound, arg_4_R, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// SetSoundPosition 00246b90 (Hsound;RRR)V
DWORD Jass_SetSoundPosition(DWORD arg_0_Hsound, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_SetSoundPosition]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetSoundPosition(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hsound, &arg_4_R, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_SetSoundPosition(arg_0_Hsound, arg_4_R, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// SetSoundVelocity 00246bf0 (Hsound;RRR)V
DWORD Jass_SetSoundVelocity(DWORD arg_0_Hsound, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_SetSoundVelocity]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetSoundVelocity(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hsound, &arg_4_R, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_SetSoundVelocity(arg_0_Hsound, arg_4_R, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// AttachSoundToUnit 0022ab40 (Hsound;Hunit;)V
DWORD Jass_AttachSoundToUnit(DWORD arg_0_Hsound, DWORD arg_4_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hunit
       push eax
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_AttachSoundToUnit]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* AttachSoundToUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   DWORD arg_4_Hunit = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hsound, &arg_4_Hunit))
       Py_RETURN_NONE;
   rt = Jass_AttachSoundToUnit(arg_0_Hsound, arg_4_Hunit);
   return Py_BuildValue("I", rt);
}

// StartSound 00248490 (Hsound;)V
DWORD Jass_StartSound(DWORD arg_0_Hsound)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_StartSound]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* StartSound(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hsound))
       Py_RETURN_NONE;
   rt = Jass_StartSound(arg_0_Hsound);
   return Py_BuildValue("I", rt);
}

// StopSound 00248510 (Hsound;BB)V
DWORD Jass_StopSound(DWORD arg_0_Hsound, DWORD arg_4_B, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_StopSound]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* StopSound(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hsound, &arg_4_B, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_StopSound(arg_0_Hsound, arg_4_B, arg_8_B);
   return Py_BuildValue("I", rt);
}

// KillSoundWhenDone 0023fee0 (Hsound;)V
DWORD Jass_KillSoundWhenDone(DWORD arg_0_Hsound)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_KillSoundWhenDone]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* KillSoundWhenDone(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hsound))
       Py_RETURN_NONE;
   rt = Jass_KillSoundWhenDone(arg_0_Hsound);
   return Py_BuildValue("I", rt);
}

// SetMapMusic 00246200 (SBI)V
DWORD Jass_SetMapMusic(DWORD arg_0_S, DWORD arg_4_B, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_SetMapMusic]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetMapMusic(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_S, &arg_4_B, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_SetMapMusic(arg_0_S, arg_4_B, arg_8_I);
   return Py_BuildValue("I", rt);
}

// ClearMapMusic 0022b470 ()V
DWORD Jass_ClearMapMusic()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_ClearMapMusic]
       mov rt, eax
   }
   return rt;
}
static PyObject* ClearMapMusic(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_ClearMapMusic();
   return Py_BuildValue("I", rt);
}

// PlayMusic 00241fe0 (S)V
DWORD Jass_PlayMusic(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_PlayMusic]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* PlayMusic(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_PlayMusic(arg_0_S);
   return Py_BuildValue("I", rt);
}

// PlayMusicEx 00242010 (SII)V
DWORD Jass_PlayMusicEx(DWORD arg_0_S, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_PlayMusicEx]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* PlayMusicEx(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_S, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_PlayMusicEx(arg_0_S, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// StopMusic 00248500 (B)V
DWORD Jass_StopMusic(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_StopMusic]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* StopMusic(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_StopMusic(arg_0_B);
   return Py_BuildValue("I", rt);
}

// ResumeMusic 002435e0 ()V
DWORD Jass_ResumeMusic()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_ResumeMusic]
       mov rt, eax
   }
   return rt;
}
static PyObject* ResumeMusic(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_ResumeMusic();
   return Py_BuildValue("I", rt);
}

// PlayThematicMusic 00242040 (S)V
DWORD Jass_PlayThematicMusic(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_PlayThematicMusic]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* PlayThematicMusic(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_PlayThematicMusic(arg_0_S);
   return Py_BuildValue("I", rt);
}

// PlayThematicMusicEx 00242060 (SI)V
DWORD Jass_PlayThematicMusicEx(DWORD arg_0_S, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_PlayThematicMusicEx]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* PlayThematicMusicEx(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_S, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_PlayThematicMusicEx(arg_0_S, arg_4_I);
   return Py_BuildValue("I", rt);
}

// EndThematicMusic 00230380 ()V
DWORD Jass_EndThematicMusic()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_EndThematicMusic]
       mov rt, eax
   }
   return rt;
}
static PyObject* EndThematicMusic(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_EndThematicMusic();
   return Py_BuildValue("I", rt);
}

// SetMusicVolume 002462a0 (I)V
DWORD Jass_SetMusicVolume(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_SetMusicVolume]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetMusicVolume(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_SetMusicVolume(arg_0_I);
   return Py_BuildValue("I", rt);
}

// SetMusicPlayPosition 00246290 (I)V
DWORD Jass_SetMusicPlayPosition(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_SetMusicPlayPosition]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetMusicPlayPosition(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_SetMusicPlayPosition(arg_0_I);
   return Py_BuildValue("I", rt);
}

// SetThematicMusicPlayPosition 00247360 (I)V
DWORD Jass_SetThematicMusicPlayPosition(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_SetThematicMusicPlayPosition]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetThematicMusicPlayPosition(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_SetThematicMusicPlayPosition(arg_0_I);
   return Py_BuildValue("I", rt);
}

// SetSoundDuration 00246ae0 (Hsound;I)V
DWORD Jass_SetSoundDuration(DWORD arg_0_Hsound, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_SetSoundDuration]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetSoundDuration(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hsound, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetSoundDuration(arg_0_Hsound, arg_4_I);
   return Py_BuildValue("I", rt);
}

// GetSoundDuration 00234e10 (Hsound;)I
DWORD Jass_GetSoundDuration(DWORD arg_0_Hsound)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_GetSoundDuration]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSoundDuration(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hsound))
       Py_RETURN_NONE;
   rt = Jass_GetSoundDuration(arg_0_Hsound);
   return Py_BuildValue("I", rt);
}

// GetSoundFileDuration 00234e30 (S)I
DWORD Jass_GetSoundFileDuration(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_GetSoundFileDuration]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSoundFileDuration(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_GetSoundFileDuration(arg_0_S);
   return Py_BuildValue("I", rt);
}

// VolumeGroupSetVolume 0024ba10 (Hvolumegroup;R)V
DWORD Jass_VolumeGroupSetVolume(DWORD arg_0_Hvolumegroup, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hvolumegroup
       push eax
       call [_Jass_VolumeGroupSetVolume]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* VolumeGroupSetVolume(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hvolumegroup = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hvolumegroup, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_VolumeGroupSetVolume(arg_0_Hvolumegroup, arg_4_R);
   return Py_BuildValue("I", rt);
}

// VolumeGroupReset 0024ba00 ()V
DWORD Jass_VolumeGroupReset()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_VolumeGroupReset]
       mov rt, eax
   }
   return rt;
}
static PyObject* VolumeGroupReset(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_VolumeGroupReset();
   return Py_BuildValue("I", rt);
}

// GetSoundIsPlaying 00234e70 (Hsound;)B
DWORD Jass_GetSoundIsPlaying(DWORD arg_0_Hsound)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_GetSoundIsPlaying]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSoundIsPlaying(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hsound))
       Py_RETURN_NONE;
   rt = Jass_GetSoundIsPlaying(arg_0_Hsound);
   return Py_BuildValue("I", rt);
}

// GetSoundIsLoading 00234e50 (Hsound;)B
DWORD Jass_GetSoundIsLoading(DWORD arg_0_Hsound)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_GetSoundIsLoading]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetSoundIsLoading(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hsound))
       Py_RETURN_NONE;
   rt = Jass_GetSoundIsLoading(arg_0_Hsound);
   return Py_BuildValue("I", rt);
}

// RegisterStackedSound 00242ef0 (Hsound;BRR)V
DWORD Jass_RegisterStackedSound(DWORD arg_0_Hsound, DWORD arg_4_B, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_RegisterStackedSound]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* RegisterStackedSound(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hsound, &arg_4_B, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_RegisterStackedSound(arg_0_Hsound, arg_4_B, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// UnregisterStackedSound 0024b990 (Hsound;BRR)V
DWORD Jass_UnregisterStackedSound(DWORD arg_0_Hsound, DWORD arg_4_B, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hsound
       push eax
       call [_Jass_UnregisterStackedSound]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* UnregisterStackedSound(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hsound = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hsound, &arg_4_B, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_UnregisterStackedSound(arg_0_Hsound, arg_4_B, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// AddWeatherEffect 0022a8a0 (Hrect;I)Hweathereffect;
DWORD Jass_AddWeatherEffect(DWORD arg_0_Hrect, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hrect
       push eax
       call [_Jass_AddWeatherEffect]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* AddWeatherEffect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hrect = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hrect, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_AddWeatherEffect(arg_0_Hrect, arg_4_I);
   return Py_BuildValue("I", rt);
}

// RemoveWeatherEffect 00243310 (Hweathereffect;)V
DWORD Jass_RemoveWeatherEffect(DWORD arg_0_Hweathereffect)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hweathereffect
       push eax
       call [_Jass_RemoveWeatherEffect]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveWeatherEffect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hweathereffect = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hweathereffect))
       Py_RETURN_NONE;
   rt = Jass_RemoveWeatherEffect(arg_0_Hweathereffect);
   return Py_BuildValue("I", rt);
}

// EnableWeatherEffect 002302e0 (Hweathereffect;B)V
DWORD Jass_EnableWeatherEffect(DWORD arg_0_Hweathereffect, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hweathereffect
       push eax
       call [_Jass_EnableWeatherEffect]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* EnableWeatherEffect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hweathereffect = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hweathereffect, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_EnableWeatherEffect(arg_0_Hweathereffect, arg_4_B);
   return Py_BuildValue("I", rt);
}

// TerrainDeformCrater 00248e10 (RRRRIB)Hterraindeformation;
DWORD Jass_TerrainDeformCrater(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_I, DWORD arg_14_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_14_B
       push eax
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_TerrainDeformCrater]
       add esp, 0x18
       mov rt, eax
   }
   return rt;
}
static PyObject* TerrainDeformCrater(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_I = 0;
   DWORD arg_14_B = 0;
   if (!PyArg_ParseTuple(args, "IIIIII", &arg_0_R, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_I, &arg_14_B))
       Py_RETURN_NONE;
   rt = Jass_TerrainDeformCrater(arg_0_R, arg_4_R, arg_8_R, arg_C_R, arg_10_I, arg_14_B);
   return Py_BuildValue("I", rt);
}

// TerrainDeformRipple 00248ed0 (RRRRIIRRRB)Hterraindeformation;
DWORD Jass_TerrainDeformRipple(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_I, DWORD arg_14_I, DWORD arg_18_R, DWORD arg_1C_R, DWORD arg_20_R, DWORD arg_24_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_24_B
       push eax
       mov eax, arg_20_R
       push eax
       mov eax, arg_1C_R
       push eax
       mov eax, arg_18_R
       push eax
       mov eax, arg_14_I
       push eax
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_TerrainDeformRipple]
       add esp, 0x28
       mov rt, eax
   }
   return rt;
}
static PyObject* TerrainDeformRipple(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_I = 0;
   DWORD arg_14_I = 0;
   DWORD arg_18_R = 0;
   DWORD arg_1C_R = 0;
   DWORD arg_20_R = 0;
   DWORD arg_24_B = 0;
   if (!PyArg_ParseTuple(args, "IIIIIIIIII", &arg_0_R, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_I, &arg_14_I, &arg_18_R, &arg_1C_R, &arg_20_R, &arg_24_B))
       Py_RETURN_NONE;
   rt = Jass_TerrainDeformRipple(arg_0_R, arg_4_R, arg_8_R, arg_C_R, arg_10_I, arg_14_I, arg_18_R, arg_1C_R, arg_20_R, arg_24_B);
   return Py_BuildValue("I", rt);
}

// TerrainDeformWave 00248f70 (RRRRRRRRII)Hterraindeformation;
DWORD Jass_TerrainDeformWave(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_R, DWORD arg_1C_R, DWORD arg_20_I, DWORD arg_24_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_24_I
       push eax
       mov eax, arg_20_I
       push eax
       mov eax, arg_1C_R
       push eax
       mov eax, arg_18_R
       push eax
       mov eax, arg_14_R
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_TerrainDeformWave]
       add esp, 0x28
       mov rt, eax
   }
   return rt;
}
static PyObject* TerrainDeformWave(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_R = 0;
   DWORD arg_18_R = 0;
   DWORD arg_1C_R = 0;
   DWORD arg_20_I = 0;
   DWORD arg_24_I = 0;
   if (!PyArg_ParseTuple(args, "IIIIIIIIII", &arg_0_R, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_R, &arg_14_R, &arg_18_R, &arg_1C_R, &arg_20_I, &arg_24_I))
       Py_RETURN_NONE;
   rt = Jass_TerrainDeformWave(arg_0_R, arg_4_R, arg_8_R, arg_C_R, arg_10_R, arg_14_R, arg_18_R, arg_1C_R, arg_20_I, arg_24_I);
   return Py_BuildValue("I", rt);
}

// TerrainDeformRandom 00248e70 (RRRRRII)Hterraindeformation;
DWORD Jass_TerrainDeformRandom(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_I, DWORD arg_18_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_18_I
       push eax
       mov eax, arg_14_I
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_TerrainDeformRandom]
       add esp, 0x1c
       mov rt, eax
   }
   return rt;
}
static PyObject* TerrainDeformRandom(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_I = 0;
   DWORD arg_18_I = 0;
   if (!PyArg_ParseTuple(args, "IIIIIII", &arg_0_R, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_R, &arg_14_I, &arg_18_I))
       Py_RETURN_NONE;
   rt = Jass_TerrainDeformRandom(arg_0_R, arg_4_R, arg_8_R, arg_C_R, arg_10_R, arg_14_I, arg_18_I);
   return Py_BuildValue("I", rt);
}

// TerrainDeformStop 00248f50 (Hterraindeformation;I)V
DWORD Jass_TerrainDeformStop(DWORD arg_0_Hterraindeformation, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hterraindeformation
       push eax
       call [_Jass_TerrainDeformStop]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TerrainDeformStop(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hterraindeformation = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hterraindeformation, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_TerrainDeformStop(arg_0_Hterraindeformation, arg_4_I);
   return Py_BuildValue("I", rt);
}

// TerrainDeformStopAll 00248f60 ()V
DWORD Jass_TerrainDeformStopAll()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_TerrainDeformStopAll]
       mov rt, eax
   }
   return rt;
}
static PyObject* TerrainDeformStopAll(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_TerrainDeformStopAll();
   return Py_BuildValue("I", rt);
}

// DestroyEffect 0022f800 (Heffect;)V
DWORD Jass_DestroyEffect(DWORD arg_0_Heffect)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Heffect
       push eax
       call [_Jass_DestroyEffect]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyEffect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Heffect = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Heffect))
       Py_RETURN_NONE;
   rt = Jass_DestroyEffect(arg_0_Heffect);
   return Py_BuildValue("I", rt);
}

// AddSpecialEffect 0022a490 (SRR)Heffect;
DWORD Jass_AddSpecialEffect(DWORD arg_0_S, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_AddSpecialEffect]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* AddSpecialEffect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_S, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_AddSpecialEffect(arg_0_S, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// AddSpecialEffectLoc 0022a4b0 (SHlocation;)Heffect;
DWORD Jass_AddSpecialEffectLoc(DWORD arg_0_S, DWORD arg_4_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hlocation
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_AddSpecialEffectLoc]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* AddSpecialEffectLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_S, &arg_4_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_AddSpecialEffectLoc(arg_0_S, arg_4_Hlocation);
   return Py_BuildValue("I", rt);
}

// AddSpecialEffectTarget 0022a4f0 (SHwidget;S)Heffect;
DWORD Jass_AddSpecialEffectTarget(DWORD arg_0_S, DWORD arg_4_Hwidget, DWORD arg_8_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_Hwidget
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_AddSpecialEffectTarget]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* AddSpecialEffectTarget(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_Hwidget = 0;
   DWORD arg_8_S = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_S, &arg_4_Hwidget, &arg_8_S))
       Py_RETURN_NONE;
   rt = Jass_AddSpecialEffectTarget(arg_0_S, arg_4_Hwidget, arg_8_S);
   return Py_BuildValue("I", rt);
}

// AddSpellEffect 0022a520 (SHeffecttype;RR)Heffect;
DWORD Jass_AddSpellEffect(DWORD arg_0_S, DWORD arg_4_Heffecttype, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_Heffecttype
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_AddSpellEffect]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* AddSpellEffect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_Heffecttype = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_S, &arg_4_Heffecttype, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_AddSpellEffect(arg_0_S, arg_4_Heffecttype, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// AddSpellEffectLoc 0022a5b0 (SHeffecttype;Hlocation;)Heffect;
DWORD Jass_AddSpellEffectLoc(DWORD arg_0_S, DWORD arg_4_Heffecttype, DWORD arg_8_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hlocation
       push eax
       mov eax, arg_4_Heffecttype
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_AddSpellEffectLoc]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* AddSpellEffectLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_Heffecttype = 0;
   DWORD arg_8_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_S, &arg_4_Heffecttype, &arg_8_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_AddSpellEffectLoc(arg_0_S, arg_4_Heffecttype, arg_8_Hlocation);
   return Py_BuildValue("I", rt);
}

// AddSpellEffectById 0022a540 (IHeffecttype;RR)Heffect;
DWORD Jass_AddSpellEffectById(DWORD arg_0_I, DWORD arg_4_Heffecttype, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_Heffecttype
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_AddSpellEffectById]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* AddSpellEffectById(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_Heffecttype = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_I, &arg_4_Heffecttype, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_AddSpellEffectById(arg_0_I, arg_4_Heffecttype, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// AddSpellEffectByIdLoc 0022a570 (IHeffecttype;Hlocation;)Heffect;
DWORD Jass_AddSpellEffectByIdLoc(DWORD arg_0_I, DWORD arg_4_Heffecttype, DWORD arg_8_Hlocation)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hlocation
       push eax
       mov eax, arg_4_Heffecttype
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_AddSpellEffectByIdLoc]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* AddSpellEffectByIdLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_Heffecttype = 0;
   DWORD arg_8_Hlocation = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_I, &arg_4_Heffecttype, &arg_8_Hlocation))
       Py_RETURN_NONE;
   rt = Jass_AddSpellEffectByIdLoc(arg_0_I, arg_4_Heffecttype, arg_8_Hlocation);
   return Py_BuildValue("I", rt);
}

// AddSpellEffectTarget 0022a610 (SHeffecttype;Hwidget;S)Heffect;
DWORD Jass_AddSpellEffectTarget(DWORD arg_0_S, DWORD arg_4_Heffecttype, DWORD arg_8_Hwidget, DWORD arg_C_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_S
       push eax
       mov eax, arg_8_Hwidget
       push eax
       mov eax, arg_4_Heffecttype
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_AddSpellEffectTarget]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* AddSpellEffectTarget(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_Heffecttype = 0;
   DWORD arg_8_Hwidget = 0;
   DWORD arg_C_S = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_S, &arg_4_Heffecttype, &arg_8_Hwidget, &arg_C_S))
       Py_RETURN_NONE;
   rt = Jass_AddSpellEffectTarget(arg_0_S, arg_4_Heffecttype, arg_8_Hwidget, arg_C_S);
   return Py_BuildValue("I", rt);
}

// AddSpellEffectTargetById 0022a630 (IHeffecttype;Hwidget;S)Heffect;
DWORD Jass_AddSpellEffectTargetById(DWORD arg_0_I, DWORD arg_4_Heffecttype, DWORD arg_8_Hwidget, DWORD arg_C_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_S
       push eax
       mov eax, arg_8_Hwidget
       push eax
       mov eax, arg_4_Heffecttype
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_AddSpellEffectTargetById]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* AddSpellEffectTargetById(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_Heffecttype = 0;
   DWORD arg_8_Hwidget = 0;
   DWORD arg_C_S = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_I, &arg_4_Heffecttype, &arg_8_Hwidget, &arg_C_S))
       Py_RETURN_NONE;
   rt = Jass_AddSpellEffectTargetById(arg_0_I, arg_4_Heffecttype, arg_8_Hwidget, arg_C_S);
   return Py_BuildValue("I", rt);
}

// AddLightning 0022a260 (SBRRRR)Hlightning;
DWORD Jass_AddLightning(DWORD arg_0_S, DWORD arg_4_B, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_14_R
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_AddLightning]
       add esp, 0x18
       mov rt, eax
   }
   return rt;
}
static PyObject* AddLightning(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_R = 0;
   if (!PyArg_ParseTuple(args, "IIIIII", &arg_0_S, &arg_4_B, &arg_8_R, &arg_C_R, &arg_10_R, &arg_14_R))
       Py_RETURN_NONE;
   rt = Jass_AddLightning(arg_0_S, arg_4_B, arg_8_R, arg_C_R, arg_10_R, arg_14_R);
   return Py_BuildValue("I", rt);
}

// AddLightningEx 0022a2e0 (SBRRRRRR)Hlightning;
DWORD Jass_AddLightningEx(DWORD arg_0_S, DWORD arg_4_B, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_R, DWORD arg_1C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_1C_R
       push eax
       mov eax, arg_18_R
       push eax
       mov eax, arg_14_R
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_AddLightningEx]
       add esp, 0x20
       mov rt, eax
   }
   return rt;
}
static PyObject* AddLightningEx(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_R = 0;
   DWORD arg_18_R = 0;
   DWORD arg_1C_R = 0;
   if (!PyArg_ParseTuple(args, "IIIIIIII", &arg_0_S, &arg_4_B, &arg_8_R, &arg_C_R, &arg_10_R, &arg_14_R, &arg_18_R, &arg_1C_R))
       Py_RETURN_NONE;
   rt = Jass_AddLightningEx(arg_0_S, arg_4_B, arg_8_R, arg_C_R, arg_10_R, arg_14_R, arg_18_R, arg_1C_R);
   return Py_BuildValue("I", rt);
}

// DestroyLightning 0022f920 (Hlightning;)B
DWORD Jass_DestroyLightning(DWORD arg_0_Hlightning)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hlightning
       push eax
       call [_Jass_DestroyLightning]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyLightning(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hlightning = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hlightning))
       Py_RETURN_NONE;
   rt = Jass_DestroyLightning(arg_0_Hlightning);
   return Py_BuildValue("I", rt);
}

// GetLightningColorA 002331e0 (Hlightning;)R
DWORD Jass_GetLightningColorA(DWORD arg_0_Hlightning)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hlightning
       push eax
       call [_Jass_GetLightningColorA]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetLightningColorA(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hlightning = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hlightning))
       Py_RETURN_NONE;
   rt = Jass_GetLightningColorA(arg_0_Hlightning);
   return Py_BuildValue("I", rt);
}

// GetLightningColorR 002332d0 (Hlightning;)R
DWORD Jass_GetLightningColorR(DWORD arg_0_Hlightning)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hlightning
       push eax
       call [_Jass_GetLightningColorR]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetLightningColorR(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hlightning = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hlightning))
       Py_RETURN_NONE;
   rt = Jass_GetLightningColorR(arg_0_Hlightning);
   return Py_BuildValue("I", rt);
}

// GetLightningColorG 00233280 (Hlightning;)R
DWORD Jass_GetLightningColorG(DWORD arg_0_Hlightning)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hlightning
       push eax
       call [_Jass_GetLightningColorG]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetLightningColorG(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hlightning = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hlightning))
       Py_RETURN_NONE;
   rt = Jass_GetLightningColorG(arg_0_Hlightning);
   return Py_BuildValue("I", rt);
}

// GetLightningColorB 00233230 (Hlightning;)R
DWORD Jass_GetLightningColorB(DWORD arg_0_Hlightning)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hlightning
       push eax
       call [_Jass_GetLightningColorB]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetLightningColorB(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hlightning = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hlightning))
       Py_RETURN_NONE;
   rt = Jass_GetLightningColorB(arg_0_Hlightning);
   return Py_BuildValue("I", rt);
}

// MoveLightning 00240f70 (Hlightning;BRRRR)B
DWORD Jass_MoveLightning(DWORD arg_0_Hlightning, DWORD arg_4_B, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_14_R
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hlightning
       push eax
       call [_Jass_MoveLightning]
       add esp, 0x18
       mov rt, eax
   }
   return rt;
}
static PyObject* MoveLightning(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hlightning = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_R = 0;
   if (!PyArg_ParseTuple(args, "IIIIII", &arg_0_Hlightning, &arg_4_B, &arg_8_R, &arg_C_R, &arg_10_R, &arg_14_R))
       Py_RETURN_NONE;
   rt = Jass_MoveLightning(arg_0_Hlightning, arg_4_B, arg_8_R, arg_C_R, arg_10_R, arg_14_R);
   return Py_BuildValue("I", rt);
}

// MoveLightningEx 00240ff0 (Hlightning;BRRRRRR)B
DWORD Jass_MoveLightningEx(DWORD arg_0_Hlightning, DWORD arg_4_B, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_R, DWORD arg_1C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_1C_R
       push eax
       mov eax, arg_18_R
       push eax
       mov eax, arg_14_R
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hlightning
       push eax
       call [_Jass_MoveLightningEx]
       add esp, 0x20
       mov rt, eax
   }
   return rt;
}
static PyObject* MoveLightningEx(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hlightning = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_R = 0;
   DWORD arg_18_R = 0;
   DWORD arg_1C_R = 0;
   if (!PyArg_ParseTuple(args, "IIIIIIII", &arg_0_Hlightning, &arg_4_B, &arg_8_R, &arg_C_R, &arg_10_R, &arg_14_R, &arg_18_R, &arg_1C_R))
       Py_RETURN_NONE;
   rt = Jass_MoveLightningEx(arg_0_Hlightning, arg_4_B, arg_8_R, arg_C_R, arg_10_R, arg_14_R, arg_18_R, arg_1C_R);
   return Py_BuildValue("I", rt);
}

// SetLightningColor 00246110 (Hlightning;RRRR)B
DWORD Jass_SetLightningColor(DWORD arg_0_Hlightning, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hlightning
       push eax
       call [_Jass_SetLightningColor]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* SetLightningColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hlightning = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hlightning, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_R))
       Py_RETURN_NONE;
   rt = Jass_SetLightningColor(arg_0_Hlightning, arg_4_R, arg_8_R, arg_C_R, arg_10_R);
   return Py_BuildValue("I", rt);
}

// GetAbilityEffect 002317f0 (SHeffecttype;I)S
DWORD Jass_GetAbilityEffect(DWORD arg_0_S, DWORD arg_4_Heffecttype, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_Heffecttype
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_GetAbilityEffect]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GetAbilityEffect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_Heffecttype = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_S, &arg_4_Heffecttype, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_GetAbilityEffect(arg_0_S, arg_4_Heffecttype, arg_8_I);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// GetAbilityEffectById 00231820 (IHeffecttype;I)S
DWORD Jass_GetAbilityEffectById(DWORD arg_0_I, DWORD arg_4_Heffecttype, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_Heffecttype
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_GetAbilityEffectById]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GetAbilityEffectById(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_Heffecttype = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_I, &arg_4_Heffecttype, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_GetAbilityEffectById(arg_0_I, arg_4_Heffecttype, arg_8_I);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// GetAbilitySound 00231840 (SHsoundtype;)S
DWORD Jass_GetAbilitySound(DWORD arg_0_S, DWORD arg_4_Hsoundtype)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hsoundtype
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_GetAbilitySound]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetAbilitySound(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_Hsoundtype = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_S, &arg_4_Hsoundtype))
       Py_RETURN_NONE;
   rt = Jass_GetAbilitySound(arg_0_S, arg_4_Hsoundtype);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// GetAbilitySoundById 00231880 (IHsoundtype;)S
DWORD Jass_GetAbilitySoundById(DWORD arg_0_I, DWORD arg_4_Hsoundtype)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_Hsoundtype
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_GetAbilitySoundById]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetAbilitySoundById(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_Hsoundtype = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_Hsoundtype))
       Py_RETURN_NONE;
   rt = Jass_GetAbilitySoundById(arg_0_I, arg_4_Hsoundtype);
   return Py_BuildValue("s", jstr2cstr(rt));
}

// GetTerrainCliffLevel 00235b50 (RR)I
DWORD Jass_GetTerrainCliffLevel(DWORD arg_0_R, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_GetTerrainCliffLevel]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTerrainCliffLevel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_R, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_GetTerrainCliffLevel(arg_0_R, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetWaterBaseColor 00248070 (IIII)V
DWORD Jass_SetWaterBaseColor(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_SetWaterBaseColor]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetWaterBaseColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_I, &arg_4_I, &arg_8_I, &arg_C_I))
       Py_RETURN_NONE;
   rt = Jass_SetWaterBaseColor(arg_0_I, arg_4_I, arg_8_I, arg_C_I);
   return Py_BuildValue("I", rt);
}

// SetWaterDeforms 002480b0 (B)V
DWORD Jass_SetWaterDeforms(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SetWaterDeforms]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetWaterDeforms(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SetWaterDeforms(arg_0_B);
   return Py_BuildValue("I", rt);
}

// GetTerrainType 00235bf0 (RR)I
DWORD Jass_GetTerrainType(DWORD arg_0_R, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_GetTerrainType]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTerrainType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_R, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_GetTerrainType(arg_0_R, arg_4_R);
   return Py_BuildValue("I", rt);
}

// GetTerrainVariance 00235c40 (RR)I
DWORD Jass_GetTerrainVariance(DWORD arg_0_R, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_GetTerrainVariance]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTerrainVariance(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_R, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_GetTerrainVariance(arg_0_R, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetTerrainType 00246fa0 (RRIIII)V
DWORD Jass_SetTerrainType(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I, DWORD arg_14_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_14_I
       push eax
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_SetTerrainType]
       add esp, 0x18
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTerrainType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_I = 0;
   DWORD arg_14_I = 0;
   if (!PyArg_ParseTuple(args, "IIIIII", &arg_0_R, &arg_4_R, &arg_8_I, &arg_C_I, &arg_10_I, &arg_14_I))
       Py_RETURN_NONE;
   rt = Jass_SetTerrainType(arg_0_R, arg_4_R, arg_8_I, arg_C_I, arg_10_I, arg_14_I);
   return Py_BuildValue("I", rt);
}

// IsTerrainPathable 00238660 (RRHpathingtype;)B
DWORD Jass_IsTerrainPathable(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_Hpathingtype)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_Hpathingtype
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_IsTerrainPathable]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* IsTerrainPathable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_Hpathingtype = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_R, &arg_4_R, &arg_8_Hpathingtype))
       Py_RETURN_NONE;
   rt = Jass_IsTerrainPathable(arg_0_R, arg_4_R, arg_8_Hpathingtype);
   return Py_BuildValue("I", rt);
}

// SetTerrainPathable 00246f70 (RRHpathingtype;B)V
DWORD Jass_SetTerrainPathable(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_Hpathingtype, DWORD arg_C_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_Hpathingtype
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_SetTerrainPathable]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTerrainPathable(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_Hpathingtype = 0;
   DWORD arg_C_B = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_R, &arg_4_R, &arg_8_Hpathingtype, &arg_C_B))
       Py_RETURN_NONE;
   rt = Jass_SetTerrainPathable(arg_0_R, arg_4_R, arg_8_Hpathingtype, arg_C_B);
   return Py_BuildValue("I", rt);
}

// CreateImage 0022e3b0 (SRRRRRRRRRI)Himage;
DWORD Jass_CreateImage(DWORD arg_0_S, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_R, DWORD arg_1C_R, DWORD arg_20_R, DWORD arg_24_R, DWORD arg_28_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_28_I
       push eax
       mov eax, arg_24_R
       push eax
       mov eax, arg_20_R
       push eax
       mov eax, arg_1C_R
       push eax
       mov eax, arg_18_R
       push eax
       mov eax, arg_14_R
       push eax
       mov eax, arg_10_R
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_CreateImage]
       add esp, 0x2c
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateImage(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_R = 0;
   DWORD arg_14_R = 0;
   DWORD arg_18_R = 0;
   DWORD arg_1C_R = 0;
   DWORD arg_20_R = 0;
   DWORD arg_24_R = 0;
   DWORD arg_28_I = 0;
   if (!PyArg_ParseTuple(args, "IIIIIIIIIII", &arg_0_S, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_R, &arg_14_R, &arg_18_R, &arg_1C_R, &arg_20_R, &arg_24_R, &arg_28_I))
       Py_RETURN_NONE;
   rt = Jass_CreateImage(arg_0_S, arg_4_R, arg_8_R, arg_C_R, arg_10_R, arg_14_R, arg_18_R, arg_1C_R, arg_20_R, arg_24_R, arg_28_I);
   return Py_BuildValue("I", rt);
}

// DestroyImage 0022f8b0 (Himage;)V
DWORD Jass_DestroyImage(DWORD arg_0_Himage)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Himage
       push eax
       call [_Jass_DestroyImage]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyImage(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Himage = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Himage))
       Py_RETURN_NONE;
   rt = Jass_DestroyImage(arg_0_Himage);
   return Py_BuildValue("I", rt);
}

// ShowImage 00248110 (Himage;B)V
DWORD Jass_ShowImage(DWORD arg_0_Himage, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Himage
       push eax
       call [_Jass_ShowImage]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* ShowImage(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Himage = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Himage, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_ShowImage(arg_0_Himage, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetImageConstantHeight 00245d00 (Himage;BR)V
DWORD Jass_SetImageConstantHeight(DWORD arg_0_Himage, DWORD arg_4_B, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Himage
       push eax
       call [_Jass_SetImageConstantHeight]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetImageConstantHeight(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Himage = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Himage, &arg_4_B, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_SetImageConstantHeight(arg_0_Himage, arg_4_B, arg_8_R);
   return Py_BuildValue("I", rt);
}

// SetImagePosition 00245d30 (Himage;RRR)V
DWORD Jass_SetImagePosition(DWORD arg_0_Himage, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Himage
       push eax
       call [_Jass_SetImagePosition]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetImagePosition(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Himage = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Himage, &arg_4_R, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_SetImagePosition(arg_0_Himage, arg_4_R, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// SetImageColor 00245cc0 (Himage;IIII)V
DWORD Jass_SetImageColor(DWORD arg_0_Himage, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Himage
       push eax
       call [_Jass_SetImageColor]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* SetImageColor(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Himage = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_I = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Himage, &arg_4_I, &arg_8_I, &arg_C_I, &arg_10_I))
       Py_RETURN_NONE;
   rt = Jass_SetImageColor(arg_0_Himage, arg_4_I, arg_8_I, arg_C_I, arg_10_I);
   return Py_BuildValue("I", rt);
}

// SetImageRender 00245d70 (Himage;B)V
DWORD Jass_SetImageRender(DWORD arg_0_Himage, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Himage
       push eax
       call [_Jass_SetImageRender]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetImageRender(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Himage = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Himage, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetImageRender(arg_0_Himage, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetImageRenderAlways 00245d90 (Himage;B)V
DWORD Jass_SetImageRenderAlways(DWORD arg_0_Himage, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Himage
       push eax
       call [_Jass_SetImageRenderAlways]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetImageRenderAlways(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Himage = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Himage, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetImageRenderAlways(arg_0_Himage, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetImageAboveWater 00245ca0 (Himage;BB)V
DWORD Jass_SetImageAboveWater(DWORD arg_0_Himage, DWORD arg_4_B, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Himage
       push eax
       call [_Jass_SetImageAboveWater]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetImageAboveWater(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Himage = 0;
   DWORD arg_4_B = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Himage, &arg_4_B, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_SetImageAboveWater(arg_0_Himage, arg_4_B, arg_8_B);
   return Py_BuildValue("I", rt);
}

// SetImageType 00245db0 (Himage;I)V
DWORD Jass_SetImageType(DWORD arg_0_Himage, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Himage
       push eax
       call [_Jass_SetImageType]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetImageType(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Himage = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Himage, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetImageType(arg_0_Himage, arg_4_I);
   return Py_BuildValue("I", rt);
}

// CreateUbersplat 0022f0d0 (RRSIIIIBB)Hubersplat;
DWORD Jass_CreateUbersplat(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_S, DWORD arg_C_I, DWORD arg_10_I, DWORD arg_14_I, DWORD arg_18_I, DWORD arg_1C_B, DWORD arg_20_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_20_B
       push eax
       mov eax, arg_1C_B
       push eax
       mov eax, arg_18_I
       push eax
       mov eax, arg_14_I
       push eax
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_CreateUbersplat]
       add esp, 0x24
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateUbersplat(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_S = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_I = 0;
   DWORD arg_14_I = 0;
   DWORD arg_18_I = 0;
   DWORD arg_1C_B = 0;
   DWORD arg_20_B = 0;
   if (!PyArg_ParseTuple(args, "IIIIIIIII", &arg_0_R, &arg_4_R, &arg_8_S, &arg_C_I, &arg_10_I, &arg_14_I, &arg_18_I, &arg_1C_B, &arg_20_B))
       Py_RETURN_NONE;
   rt = Jass_CreateUbersplat(arg_0_R, arg_4_R, arg_8_S, arg_C_I, arg_10_I, arg_14_I, arg_18_I, arg_1C_B, arg_20_B);
   return Py_BuildValue("I", rt);
}

// DestroyUbersplat 0022fa40 (Hubersplat;)V
DWORD Jass_DestroyUbersplat(DWORD arg_0_Hubersplat)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hubersplat
       push eax
       call [_Jass_DestroyUbersplat]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DestroyUbersplat(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hubersplat = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hubersplat))
       Py_RETURN_NONE;
   rt = Jass_DestroyUbersplat(arg_0_Hubersplat);
   return Py_BuildValue("I", rt);
}

// ResetUbersplat 00243470 (Hubersplat;)V
DWORD Jass_ResetUbersplat(DWORD arg_0_Hubersplat)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hubersplat
       push eax
       call [_Jass_ResetUbersplat]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ResetUbersplat(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hubersplat = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hubersplat))
       Py_RETURN_NONE;
   rt = Jass_ResetUbersplat(arg_0_Hubersplat);
   return Py_BuildValue("I", rt);
}

// FinishUbersplat 00230a80 (Hubersplat;)V
DWORD Jass_FinishUbersplat(DWORD arg_0_Hubersplat)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hubersplat
       push eax
       call [_Jass_FinishUbersplat]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* FinishUbersplat(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hubersplat = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hubersplat))
       Py_RETURN_NONE;
   rt = Jass_FinishUbersplat(arg_0_Hubersplat);
   return Py_BuildValue("I", rt);
}

// ShowUbersplat 00248160 (Hubersplat;B)V
DWORD Jass_ShowUbersplat(DWORD arg_0_Hubersplat, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hubersplat
       push eax
       call [_Jass_ShowUbersplat]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* ShowUbersplat(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hubersplat = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hubersplat, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_ShowUbersplat(arg_0_Hubersplat, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetUbersplatRender 00247410 (Hubersplat;B)V
DWORD Jass_SetUbersplatRender(DWORD arg_0_Hubersplat, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hubersplat
       push eax
       call [_Jass_SetUbersplatRender]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUbersplatRender(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hubersplat = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hubersplat, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetUbersplatRender(arg_0_Hubersplat, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetUbersplatRenderAlways 00247430 (Hubersplat;B)V
DWORD Jass_SetUbersplatRenderAlways(DWORD arg_0_Hubersplat, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hubersplat
       push eax
       call [_Jass_SetUbersplatRenderAlways]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUbersplatRenderAlways(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hubersplat = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hubersplat, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SetUbersplatRenderAlways(arg_0_Hubersplat, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SetBlight 00244230 (Hplayer;RRRB)V
DWORD Jass_SetBlight(DWORD arg_0_Hplayer, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_B
       push eax
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetBlight]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* SetBlight(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   DWORD arg_10_B = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_Hplayer, &arg_4_R, &arg_8_R, &arg_C_R, &arg_10_B))
       Py_RETURN_NONE;
   rt = Jass_SetBlight(arg_0_Hplayer, arg_4_R, arg_8_R, arg_C_R, arg_10_B);
   return Py_BuildValue("I", rt);
}

// SetBlightLoc 00244290 (Hplayer;Hlocation;RB)V
DWORD Jass_SetBlightLoc(DWORD arg_0_Hplayer, DWORD arg_4_Hlocation, DWORD arg_8_R, DWORD arg_C_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_Hlocation
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetBlightLoc]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetBlightLoc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hlocation = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_B = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hplayer, &arg_4_Hlocation, &arg_8_R, &arg_C_B))
       Py_RETURN_NONE;
   rt = Jass_SetBlightLoc(arg_0_Hplayer, arg_4_Hlocation, arg_8_R, arg_C_B);
   return Py_BuildValue("I", rt);
}

// SetBlightRect 00244340 (Hplayer;Hrect;B)V
DWORD Jass_SetBlightRect(DWORD arg_0_Hplayer, DWORD arg_4_Hrect, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_Hrect
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetBlightRect]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetBlightRect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_Hrect = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hplayer, &arg_4_Hrect, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_SetBlightRect(arg_0_Hplayer, arg_4_Hrect, arg_8_B);
   return Py_BuildValue("I", rt);
}

// SetBlightPoint 002442f0 (Hplayer;RRB)V
DWORD Jass_SetBlightPoint(DWORD arg_0_Hplayer, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SetBlightPoint]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetBlightPoint(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_B = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hplayer, &arg_4_R, &arg_8_R, &arg_C_B))
       Py_RETURN_NONE;
   rt = Jass_SetBlightPoint(arg_0_Hplayer, arg_4_R, arg_8_R, arg_C_B);
   return Py_BuildValue("I", rt);
}

// CreateBlightedGoldmine 0022db50 (Hplayer;RRR)Hunit;
DWORD Jass_CreateBlightedGoldmine(DWORD arg_0_Hplayer, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_R
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_CreateBlightedGoldmine]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateBlightedGoldmine(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_R = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hplayer, &arg_4_R, &arg_8_R, &arg_C_R))
       Py_RETURN_NONE;
   rt = Jass_CreateBlightedGoldmine(arg_0_Hplayer, arg_4_R, arg_8_R, arg_C_R);
   return Py_BuildValue("I", rt);
}

// IsPointBlighted 00238470 (RR)B
DWORD Jass_IsPointBlighted(DWORD arg_0_R, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_IsPointBlighted]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* IsPointBlighted(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_R, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_IsPointBlighted(arg_0_R, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetDoodadAnimation 00244ef0 (RRRIBSB)V
DWORD Jass_SetDoodadAnimation(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_I, DWORD arg_10_B, DWORD arg_14_S, DWORD arg_18_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_18_B
       push eax
       mov eax, arg_14_S
       push eax
       mov eax, arg_10_B
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_SetDoodadAnimation]
       add esp, 0x1c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetDoodadAnimation(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_B = 0;
   DWORD arg_14_S = 0;
   DWORD arg_18_B = 0;
   if (!PyArg_ParseTuple(args, "IIIIIII", &arg_0_R, &arg_4_R, &arg_8_R, &arg_C_I, &arg_10_B, &arg_14_S, &arg_18_B))
       Py_RETURN_NONE;
   rt = Jass_SetDoodadAnimation(arg_0_R, arg_4_R, arg_8_R, arg_C_I, arg_10_B, arg_14_S, arg_18_B);
   return Py_BuildValue("I", rt);
}

// SetDoodadAnimationRect 00244f50 (Hrect;ISB)V
DWORD Jass_SetDoodadAnimationRect(DWORD arg_0_Hrect, DWORD arg_4_I, DWORD arg_8_S, DWORD arg_C_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_B
       push eax
       mov eax, arg_8_S
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hrect
       push eax
       call [_Jass_SetDoodadAnimationRect]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* SetDoodadAnimationRect(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hrect = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_S = 0;
   DWORD arg_C_B = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_Hrect, &arg_4_I, &arg_8_S, &arg_C_B))
       Py_RETURN_NONE;
   rt = Jass_SetDoodadAnimationRect(arg_0_Hrect, arg_4_I, arg_8_S, arg_C_B);
   return Py_BuildValue("I", rt);
}

// StartMeleeAI 00248460 (Hplayer;S)V
DWORD Jass_StartMeleeAI(DWORD arg_0_Hplayer, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_StartMeleeAI]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* StartMeleeAI(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_StartMeleeAI(arg_0_Hplayer, arg_4_S);
   return Py_BuildValue("I", rt);
}

// StartCampaignAI 00248410 (Hplayer;S)V
DWORD Jass_StartCampaignAI(DWORD arg_0_Hplayer, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_StartCampaignAI]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* StartCampaignAI(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_StartCampaignAI(arg_0_Hplayer, arg_4_S);
   return Py_BuildValue("I", rt);
}

// CommandAI 0022b7a0 (Hplayer;II)V
DWORD Jass_CommandAI(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_CommandAI]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* CommandAI(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_Hplayer, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_CommandAI(arg_0_Hplayer, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// PauseCompAI 00241cc0 (Hplayer;B)V
DWORD Jass_PauseCompAI(DWORD arg_0_Hplayer, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_PauseCompAI]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* PauseCompAI(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_PauseCompAI(arg_0_Hplayer, arg_4_B);
   return Py_BuildValue("I", rt);
}

// GetAIDifficulty 00231750 (Hplayer;)Haidifficulty;
DWORD Jass_GetAIDifficulty(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetAIDifficulty]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetAIDifficulty(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_GetAIDifficulty(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// RemoveGuardPosition 00242ff0 (Hunit;)V
DWORD Jass_RemoveGuardPosition(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_RemoveGuardPosition]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveGuardPosition(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_RemoveGuardPosition(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// RecycleGuardPosition 00242c90 (Hunit;)V
DWORD Jass_RecycleGuardPosition(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_RecycleGuardPosition]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* RecycleGuardPosition(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_RecycleGuardPosition(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// RemoveAllGuardPositions 00242f90 (Hplayer;)V
DWORD Jass_RemoveAllGuardPositions(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_RemoveAllGuardPositions]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveAllGuardPositions(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_RemoveAllGuardPositions(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// ExecuteFunc 002308a0 (S)V
DWORD Jass_ExecuteFunc(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_ExecuteFunc]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* ExecuteFunc(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_ExecuteFunc(arg_0_S);
   return Py_BuildValue("I", rt);
}

// Cheat 0022b230 (S)V
DWORD Jass_Cheat(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_Cheat]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* Cheat(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_Cheat(arg_0_S);
   return Py_BuildValue("I", rt);
}

// IsNoVictoryCheat 00238200 ()B
DWORD Jass_IsNoVictoryCheat()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_IsNoVictoryCheat]
       mov rt, eax
   }
   return rt;
}
static PyObject* IsNoVictoryCheat(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_IsNoVictoryCheat();
   return Py_BuildValue("I", rt);
}

// IsNoDefeatCheat 002381d0 ()B
DWORD Jass_IsNoDefeatCheat()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_IsNoDefeatCheat]
       mov rt, eax
   }
   return rt;
}
static PyObject* IsNoDefeatCheat(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_IsNoDefeatCheat();
   return Py_BuildValue("I", rt);
}

// Preload 00242230 (S)V
DWORD Jass_Preload(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_Preload]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* Preload(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_Preload(arg_0_S);
   return Py_BuildValue("I", rt);
}

// PreloadEnd 00242260 (R)V
DWORD Jass_PreloadEnd(DWORD arg_0_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_R
       push eax
       call [_Jass_PreloadEnd]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* PreloadEnd(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_R))
       Py_RETURN_NONE;
   rt = Jass_PreloadEnd(arg_0_R);
   return Py_BuildValue("I", rt);
}

// PreloadStart 00242380 ()V
DWORD Jass_PreloadStart()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_PreloadStart]
       mov rt, eax
   }
   return rt;
}
static PyObject* PreloadStart(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_PreloadStart();
   return Py_BuildValue("I", rt);
}

// PreloadRefresh 00242370 ()V
DWORD Jass_PreloadRefresh()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_PreloadRefresh]
       mov rt, eax
   }
   return rt;
}
static PyObject* PreloadRefresh(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_PreloadRefresh();
   return Py_BuildValue("I", rt);
}

// PreloadEndEx 002422b0 ()V
DWORD Jass_PreloadEndEx()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_PreloadEndEx]
       mov rt, eax
   }
   return rt;
}
static PyObject* PreloadEndEx(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_PreloadEndEx();
   return Py_BuildValue("I", rt);
}

// PreloadGenStart 00242350 ()V
DWORD Jass_PreloadGenStart()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_PreloadGenStart]
       mov rt, eax
   }
   return rt;
}
static PyObject* PreloadGenStart(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_PreloadGenStart();
   return Py_BuildValue("I", rt);
}

// PreloadGenClear 00242300 ()V
DWORD Jass_PreloadGenClear()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_PreloadGenClear]
       mov rt, eax
   }
   return rt;
}
static PyObject* PreloadGenClear(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_PreloadGenClear();
   return Py_BuildValue("I", rt);
}

// PreloadGenEnd 00242320 (S)V
DWORD Jass_PreloadGenEnd(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_PreloadGenEnd]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* PreloadGenEnd(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_PreloadGenEnd(arg_0_S);
   return Py_BuildValue("I", rt);
}

// Preloader 002423a0 (S)V
DWORD Jass_Preloader(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_Preloader]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* Preloader(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_Preloader(arg_0_S);
   return Py_BuildValue("I", rt);
}

// DebugS 0096e660 (S)V
DWORD Jass_DebugS(DWORD arg_0_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_S
       push eax
       call [_Jass_DebugS]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DebugS(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_S))
       Py_RETURN_NONE;
   rt = Jass_DebugS(arg_0_S);
   return Py_BuildValue("I", rt);
}

// DebugFI 0096e650 (SI)V
DWORD Jass_DebugFI(DWORD arg_0_S, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_DebugFI]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* DebugFI(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_S, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_DebugFI(arg_0_S, arg_4_I);
   return Py_BuildValue("I", rt);
}

// DebugUnitID 0096e670 (SI)V
DWORD Jass_DebugUnitID(DWORD arg_0_S, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_S
       push eax
       call [_Jass_DebugUnitID]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* DebugUnitID(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_S = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_S, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_DebugUnitID(arg_0_S, arg_4_I);
   return Py_BuildValue("I", rt);
}

// DisplayText 0096e810 (IS)V
DWORD Jass_DisplayText(DWORD arg_0_I, DWORD arg_4_S)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_DisplayText]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* DisplayText(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_S = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_S))
       Py_RETURN_NONE;
   rt = Jass_DisplayText(arg_0_I, arg_4_S);
   return Py_BuildValue("I", rt);
}

// DisplayTextI 0096e820 (ISI)V
DWORD Jass_DisplayTextI(DWORD arg_0_I, DWORD arg_4_S, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_DisplayTextI]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* DisplayTextI(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_I, &arg_4_S, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_DisplayTextI(arg_0_I, arg_4_S, arg_8_I);
   return Py_BuildValue("I", rt);
}

// DisplayTextII 0096e830 (ISII)V
DWORD Jass_DisplayTextII(DWORD arg_0_I, DWORD arg_4_S, DWORD arg_8_I, DWORD arg_C_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_DisplayTextII]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* DisplayTextII(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_I, &arg_4_S, &arg_8_I, &arg_C_I))
       Py_RETURN_NONE;
   rt = Jass_DisplayTextII(arg_0_I, arg_4_S, arg_8_I, arg_C_I);
   return Py_BuildValue("I", rt);
}

// DisplayTextIII 0096e840 (ISIII)V
DWORD Jass_DisplayTextIII(DWORD arg_0_I, DWORD arg_4_S, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_10_I
       push eax
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_S
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_DisplayTextIII]
       add esp, 0x14
       mov rt, eax
   }
   return rt;
}
static PyObject* DisplayTextIII(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_S = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   DWORD arg_10_I = 0;
   if (!PyArg_ParseTuple(args, "IIIII", &arg_0_I, &arg_4_S, &arg_8_I, &arg_C_I, &arg_10_I))
       Py_RETURN_NONE;
   rt = Jass_DisplayTextIII(arg_0_I, arg_4_S, arg_8_I, arg_C_I, arg_10_I);
   return Py_BuildValue("I", rt);
}

// SuicideUnit 00975390 (II)V
DWORD Jass_SuicideUnit(DWORD arg_0_I, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_SuicideUnit]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SuicideUnit(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SuicideUnit(arg_0_I, arg_4_I);
   return Py_BuildValue("I", rt);
}

// SuicideUnitEx 009753e0 (III)V
DWORD Jass_SuicideUnitEx(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_SuicideUnitEx]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SuicideUnitEx(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_I, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_SuicideUnitEx(arg_0_I, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// Sleep 00975090 (R)V
DWORD Jass_Sleep(DWORD arg_0_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_R
       push eax
       call [_Jass_Sleep]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* Sleep(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_R))
       Py_RETURN_NONE;
   rt = Jass_Sleep(arg_0_R);
   return Py_BuildValue("I", rt);
}

// StartThread 00975150 (C)V
DWORD Jass_StartThread(DWORD arg_0_C)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_C
       push eax
       call [_Jass_StartThread]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* StartThread(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_C = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_C))
       Py_RETURN_NONE;
   rt = Jass_StartThread(arg_0_C);
   return Py_BuildValue("I", rt);
}

// GetAiPlayer 0096f310 ()I
DWORD Jass_GetAiPlayer()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetAiPlayer]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetAiPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetAiPlayer();
   return Py_BuildValue("I", rt);
}

// DoAiScriptDebug 0096e850 ()B
DWORD Jass_DoAiScriptDebug()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_DoAiScriptDebug]
       mov rt, eax
   }
   return rt;
}
static PyObject* DoAiScriptDebug(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_DoAiScriptDebug();
   return Py_BuildValue("I", rt);
}

// GetHeroId 0096fe60 ()I
DWORD Jass_GetHeroId()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetHeroId]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetHeroId(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetHeroId();
   return Py_BuildValue("I", rt);
}

// GetHeroLevelAI 0096fee0 ()I
DWORD Jass_GetHeroLevelAI()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetHeroLevelAI]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetHeroLevelAI(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetHeroLevelAI();
   return Py_BuildValue("I", rt);
}

// SetHeroLevels 00974700 (C)V
DWORD Jass_SetHeroLevels(DWORD arg_0_C)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_C
       push eax
       call [_Jass_SetHeroLevels]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetHeroLevels(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_C = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_C))
       Py_RETURN_NONE;
   rt = Jass_SetHeroLevels(arg_0_C);
   return Py_BuildValue("I", rt);
}

// SetNewHeroes 00974920 (B)V
DWORD Jass_SetNewHeroes(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SetNewHeroes]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetNewHeroes(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SetNewHeroes(arg_0_B);
   return Py_BuildValue("I", rt);
}

// GetUnitCount 009707e0 (I)I
DWORD Jass_GetUnitCount(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_GetUnitCount]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitCount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_GetUnitCount(arg_0_I);
   return Py_BuildValue("I", rt);
}

// GetPlayerUnitTypeCount 00970660 (Hplayer;I)I
DWORD Jass_GetPlayerUnitTypeCount(DWORD arg_0_Hplayer, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetPlayerUnitTypeCount]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* GetPlayerUnitTypeCount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_GetPlayerUnitTypeCount(arg_0_Hplayer, arg_4_I);
   return Py_BuildValue("I", rt);
}

// GetTownUnitCount 00970710 (IIB)I
DWORD Jass_GetTownUnitCount(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_GetTownUnitCount]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GetTownUnitCount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_I, &arg_4_I, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_GetTownUnitCount(arg_0_I, arg_4_I, arg_8_B);
   return Py_BuildValue("I", rt);
}

// GetUnitCountDone 00970850 (I)I
DWORD Jass_GetUnitCountDone(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_GetUnitCountDone]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitCountDone(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_GetUnitCountDone(arg_0_I);
   return Py_BuildValue("I", rt);
}

// GetUpgradeLevel 00970970 (I)I
DWORD Jass_GetUpgradeLevel(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_GetUpgradeLevel]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUpgradeLevel(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_GetUpgradeLevel(arg_0_I);
   return Py_BuildValue("I", rt);
}

// GetUnitGoldCost 00970890 (I)I
DWORD Jass_GetUnitGoldCost(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_GetUnitGoldCost]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitGoldCost(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_GetUnitGoldCost(arg_0_I);
   return Py_BuildValue("I", rt);
}

// GetUnitWoodCost 009708f0 (I)I
DWORD Jass_GetUnitWoodCost(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_GetUnitWoodCost]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitWoodCost(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_GetUnitWoodCost(arg_0_I);
   return Py_BuildValue("I", rt);
}

// GetUnitBuildTime 00970790 (I)I
DWORD Jass_GetUnitBuildTime(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_GetUnitBuildTime]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUnitBuildTime(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_GetUnitBuildTime(arg_0_I);
   return Py_BuildValue("I", rt);
}

// GetUpgradeGoldCost 00970950 (I)I
DWORD Jass_GetUpgradeGoldCost(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_GetUpgradeGoldCost]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUpgradeGoldCost(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_GetUpgradeGoldCost(arg_0_I);
   return Py_BuildValue("I", rt);
}

// GetUpgradeWoodCost 009709d0 (I)I
DWORD Jass_GetUpgradeWoodCost(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_GetUpgradeWoodCost]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetUpgradeWoodCost(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_GetUpgradeWoodCost(arg_0_I);
   return Py_BuildValue("I", rt);
}

// GetEnemyPower 0096fc20 ()I
DWORD Jass_GetEnemyPower()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetEnemyPower]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetEnemyPower(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetEnemyPower();
   return Py_BuildValue("I", rt);
}

// GetMinesOwned 00970120 ()I
DWORD Jass_GetMinesOwned()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetMinesOwned]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetMinesOwned(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetMinesOwned();
   return Py_BuildValue("I", rt);
}

// GetGoldOwned 0096fe30 ()I
DWORD Jass_GetGoldOwned()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetGoldOwned]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetGoldOwned(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetGoldOwned();
   return Py_BuildValue("I", rt);
}

// TownWithMine 00975800 ()I
DWORD Jass_TownWithMine()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_TownWithMine]
       mov rt, eax
   }
   return rt;
}
static PyObject* TownWithMine(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_TownWithMine();
   return Py_BuildValue("I", rt);
}

// TownHasMine 00975770 (I)B
DWORD Jass_TownHasMine(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_TownHasMine]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* TownHasMine(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_TownHasMine(arg_0_I);
   return Py_BuildValue("I", rt);
}

// TownHasHall 00975730 (I)B
DWORD Jass_TownHasHall(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_TownHasHall]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* TownHasHall(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_TownHasHall(arg_0_I);
   return Py_BuildValue("I", rt);
}

// GetNextExpansion 00970170 ()I
DWORD Jass_GetNextExpansion()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetNextExpansion]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetNextExpansion(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetNextExpansion();
   return Py_BuildValue("I", rt);
}

// GetExpansionPeon 0096fce0 ()Hunit;
DWORD Jass_GetExpansionPeon()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetExpansionPeon]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetExpansionPeon(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetExpansionPeon();
   return Py_BuildValue("I", rt);
}

// GetEnemyExpansion 0096fbe0 ()Hunit;
DWORD Jass_GetEnemyExpansion()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetEnemyExpansion]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetEnemyExpansion(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetEnemyExpansion();
   return Py_BuildValue("I", rt);
}

// SetExpansion 00974470 (Hunit;I)B
DWORD Jass_SetExpansion(DWORD arg_0_Hunit, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetExpansion]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetExpansion(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hunit, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_SetExpansion(arg_0_Hunit, arg_4_I);
   return Py_BuildValue("I", rt);
}

// GetBuilding 0096f4b0 (Hplayer;)Hunit;
DWORD Jass_GetBuilding(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_GetBuilding]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GetBuilding(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_GetBuilding(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// SetAllianceTarget 009741e0 (Hunit;)V
DWORD Jass_SetAllianceTarget(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_SetAllianceTarget]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetAllianceTarget(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_SetAllianceTarget(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// GetAllianceTarget 0096f340 ()Hunit;
DWORD Jass_GetAllianceTarget()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetAllianceTarget]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetAllianceTarget(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetAllianceTarget();
   return Py_BuildValue("I", rt);
}

// SetProduce 009749f0 (III)B
DWORD Jass_SetProduce(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_SetProduce]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetProduce(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_I, &arg_4_I, &arg_8_I))
       Py_RETURN_NONE;
   rt = Jass_SetProduce(arg_0_I, arg_4_I, arg_8_I);
   return Py_BuildValue("I", rt);
}

// MergeUnits 00971fb0 (IIII)B
DWORD Jass_MergeUnits(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_C_I
       push eax
       mov eax, arg_8_I
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_MergeUnits]
       add esp, 0x10
       mov rt, eax
   }
   return rt;
}
static PyObject* MergeUnits(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_I = 0;
   DWORD arg_C_I = 0;
   if (!PyArg_ParseTuple(args, "IIII", &arg_0_I, &arg_4_I, &arg_8_I, &arg_C_I))
       Py_RETURN_NONE;
   rt = Jass_MergeUnits(arg_0_I, arg_4_I, arg_8_I, arg_C_I);
   return Py_BuildValue("I", rt);
}

// ConvertUnits 0096e3e0 (II)B
DWORD Jass_ConvertUnits(DWORD arg_0_I, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_ConvertUnits]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* ConvertUnits(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_ConvertUnits(arg_0_I, arg_4_I);
   return Py_BuildValue("I", rt);
}

// SetUpgrade 00974d70 (I)B
DWORD Jass_SetUpgrade(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_SetUpgrade]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUpgrade(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_SetUpgrade(arg_0_I);
   return Py_BuildValue("I", rt);
}

// Unsummon 00975bc0 (Hunit;)V
DWORD Jass_Unsummon(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_Unsummon]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* Unsummon(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_Unsummon(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// ClearHarvestAI 0096de70 ()V
DWORD Jass_ClearHarvestAI()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_ClearHarvestAI]
       mov rt, eax
   }
   return rt;
}
static PyObject* ClearHarvestAI(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_ClearHarvestAI();
   return Py_BuildValue("I", rt);
}

// HarvestGold 00970d40 (II)V
DWORD Jass_HarvestGold(DWORD arg_0_I, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_HarvestGold]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* HarvestGold(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_HarvestGold(arg_0_I, arg_4_I);
   return Py_BuildValue("I", rt);
}

// HarvestWood 00970db0 (II)V
DWORD Jass_HarvestWood(DWORD arg_0_I, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_HarvestWood]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* HarvestWood(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_HarvestWood(arg_0_I, arg_4_I);
   return Py_BuildValue("I", rt);
}

// StopGathering 00975240 ()V
DWORD Jass_StopGathering()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_StopGathering]
       mov rt, eax
   }
   return rt;
}
static PyObject* StopGathering(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_StopGathering();
   return Py_BuildValue("I", rt);
}

// AddGuardPost 0096cbc0 (IRR)V
DWORD Jass_AddGuardPost(DWORD arg_0_I, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_AddGuardPost]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* AddGuardPost(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_I, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_AddGuardPost(arg_0_I, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// FillGuardPosts 0096eae0 ()V
DWORD Jass_FillGuardPosts()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_FillGuardPosts]
       mov rt, eax
   }
   return rt;
}
static PyObject* FillGuardPosts(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_FillGuardPosts();
   return Py_BuildValue("I", rt);
}

// ReturnGuardPosts 00973e40 ()V
DWORD Jass_ReturnGuardPosts()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_ReturnGuardPosts]
       mov rt, eax
   }
   return rt;
}
static PyObject* ReturnGuardPosts(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_ReturnGuardPosts();
   return Py_BuildValue("I", rt);
}

// CreateCaptains 0096e5c0 ()V
DWORD Jass_CreateCaptains()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CreateCaptains]
       mov rt, eax
   }
   return rt;
}
static PyObject* CreateCaptains(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CreateCaptains();
   return Py_BuildValue("I", rt);
}

// SetCaptainHome 009743b0 (IRR)V
DWORD Jass_SetCaptainHome(DWORD arg_0_I, DWORD arg_4_R, DWORD arg_8_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_R
       push eax
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_SetCaptainHome]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCaptainHome(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_R = 0;
   DWORD arg_8_R = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_I, &arg_4_R, &arg_8_R))
       Py_RETURN_NONE;
   rt = Jass_SetCaptainHome(arg_0_I, arg_4_R, arg_8_R);
   return Py_BuildValue("I", rt);
}

// ResetCaptainLocs 00973e00 ()V
DWORD Jass_ResetCaptainLocs()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_ResetCaptainLocs]
       mov rt, eax
   }
   return rt;
}
static PyObject* ResetCaptainLocs(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_ResetCaptainLocs();
   return Py_BuildValue("I", rt);
}

// ShiftTownSpot 00975050 (RR)V
DWORD Jass_ShiftTownSpot(DWORD arg_0_R, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_ShiftTownSpot]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* ShiftTownSpot(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_R, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_ShiftTownSpot(arg_0_R, arg_4_R);
   return Py_BuildValue("I", rt);
}

// SetCaptainChanges 00974340 (B)V
DWORD Jass_SetCaptainChanges(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SetCaptainChanges]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCaptainChanges(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SetCaptainChanges(arg_0_B);
   return Py_BuildValue("I", rt);
}

// TeleportCaptain 00975430 (RR)V
DWORD Jass_TeleportCaptain(DWORD arg_0_R, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_TeleportCaptain]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* TeleportCaptain(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_R, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_TeleportCaptain(arg_0_R, arg_4_R);
   return Py_BuildValue("I", rt);
}

// ClearCaptainTargets 0096de10 ()V
DWORD Jass_ClearCaptainTargets()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_ClearCaptainTargets]
       mov rt, eax
   }
   return rt;
}
static PyObject* ClearCaptainTargets(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_ClearCaptainTargets();
   return Py_BuildValue("I", rt);
}

// CaptainVsUnits 0096dbb0 (Hplayer;)V
DWORD Jass_CaptainVsUnits(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_CaptainVsUnits]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* CaptainVsUnits(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_CaptainVsUnits(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// CaptainVsPlayer 0096db20 (Hplayer;)V
DWORD Jass_CaptainVsPlayer(DWORD arg_0_Hplayer)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_CaptainVsPlayer]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* CaptainVsPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hplayer))
       Py_RETURN_NONE;
   rt = Jass_CaptainVsPlayer(arg_0_Hplayer);
   return Py_BuildValue("I", rt);
}

// CaptainAttack 0096d880 (RR)V
DWORD Jass_CaptainAttack(DWORD arg_0_R, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_CaptainAttack]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* CaptainAttack(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_R, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_CaptainAttack(arg_0_R, arg_4_R);
   return Py_BuildValue("I", rt);
}

// GroupTimedLife 00970b20 (B)V
DWORD Jass_GroupTimedLife(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_GroupTimedLife]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* GroupTimedLife(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_GroupTimedLife(arg_0_B);
   return Py_BuildValue("I", rt);
}

// CaptainGoHome 0096d8c0 ()V
DWORD Jass_CaptainGoHome()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CaptainGoHome]
       mov rt, eax
   }
   return rt;
}
static PyObject* CaptainGoHome(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CaptainGoHome();
   return Py_BuildValue("I", rt);
}

// CaptainIsHome 0096d9f0 ()B
DWORD Jass_CaptainIsHome()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CaptainIsHome]
       mov rt, eax
   }
   return rt;
}
static PyObject* CaptainIsHome(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CaptainIsHome();
   return Py_BuildValue("I", rt);
}

// CaptainRetreating 0096dae0 ()B
DWORD Jass_CaptainRetreating()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CaptainRetreating]
       mov rt, eax
   }
   return rt;
}
static PyObject* CaptainRetreating(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CaptainRetreating();
   return Py_BuildValue("I", rt);
}

// CaptainIsFull 0096d9b0 ()B
DWORD Jass_CaptainIsFull()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CaptainIsFull]
       mov rt, eax
   }
   return rt;
}
static PyObject* CaptainIsFull(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CaptainIsFull();
   return Py_BuildValue("I", rt);
}

// CaptainIsEmpty 0096d970 ()B
DWORD Jass_CaptainIsEmpty()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CaptainIsEmpty]
       mov rt, eax
   }
   return rt;
}
static PyObject* CaptainIsEmpty(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CaptainIsEmpty();
   return Py_BuildValue("I", rt);
}

// CaptainGroupSize 0096d8f0 ()I
DWORD Jass_CaptainGroupSize()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CaptainGroupSize]
       mov rt, eax
   }
   return rt;
}
static PyObject* CaptainGroupSize(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CaptainGroupSize();
   return Py_BuildValue("I", rt);
}

// CaptainReadiness 0096da20 ()I
DWORD Jass_CaptainReadiness()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CaptainReadiness]
       mov rt, eax
   }
   return rt;
}
static PyObject* CaptainReadiness(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CaptainReadiness();
   return Py_BuildValue("I", rt);
}

// CaptainReadinessHP 0096da60 ()I
DWORD Jass_CaptainReadinessHP()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CaptainReadinessHP]
       mov rt, eax
   }
   return rt;
}
static PyObject* CaptainReadinessHP(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CaptainReadinessHP();
   return Py_BuildValue("I", rt);
}

// CaptainReadinessMa 0096daa0 ()I
DWORD Jass_CaptainReadinessMa()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CaptainReadinessMa]
       mov rt, eax
   }
   return rt;
}
static PyObject* CaptainReadinessMa(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CaptainReadinessMa();
   return Py_BuildValue("I", rt);
}

// CaptainInCombat 0096d930 (B)B
DWORD Jass_CaptainInCombat(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_CaptainInCombat]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* CaptainInCombat(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_CaptainInCombat(arg_0_B);
   return Py_BuildValue("I", rt);
}

// TownThreatened 009757b0 ()B
DWORD Jass_TownThreatened()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_TownThreatened]
       mov rt, eax
   }
   return rt;
}
static PyObject* TownThreatened(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_TownThreatened();
   return Py_BuildValue("I", rt);
}

// CaptainAtGoal 0096d850 ()B
DWORD Jass_CaptainAtGoal()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CaptainAtGoal]
       mov rt, eax
   }
   return rt;
}
static PyObject* CaptainAtGoal(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CaptainAtGoal();
   return Py_BuildValue("I", rt);
}

// CreepsOnMap 0096e610 ()B
DWORD Jass_CreepsOnMap()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CreepsOnMap]
       mov rt, eax
   }
   return rt;
}
static PyObject* CreepsOnMap(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CreepsOnMap();
   return Py_BuildValue("I", rt);
}

// RemoveInjuries 00973920 ()V
DWORD Jass_RemoveInjuries()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_RemoveInjuries]
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveInjuries(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_RemoveInjuries();
   return Py_BuildValue("I", rt);
}

// RemoveSiege 00973a00 ()V
DWORD Jass_RemoveSiege()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_RemoveSiege]
       mov rt, eax
   }
   return rt;
}
static PyObject* RemoveSiege(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_RemoveSiege();
   return Py_BuildValue("I", rt);
}

// IsTowered 00971370 (Hunit;)B
DWORD Jass_IsTowered(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_IsTowered]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IsTowered(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_IsTowered(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// DisablePathing 0096e7c0 ()V
DWORD Jass_DisablePathing()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_DisablePathing]
       mov rt, eax
   }
   return rt;
}
static PyObject* DisablePathing(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_DisablePathing();
   return Py_BuildValue("I", rt);
}

// SetAmphibious 009742a0 ()V
DWORD Jass_SetAmphibious()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_SetAmphibious]
       mov rt, eax
   }
   return rt;
}
static PyObject* SetAmphibious(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_SetAmphibious();
   return Py_BuildValue("I", rt);
}

// InitAssault 00971080 ()V
DWORD Jass_InitAssault()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_InitAssault]
       mov rt, eax
   }
   return rt;
}
static PyObject* InitAssault(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_InitAssault();
   return Py_BuildValue("I", rt);
}

// AddAssault 0096c930 (II)B
DWORD Jass_AddAssault(DWORD arg_0_I, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_AddAssault]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* AddAssault(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_AddAssault(arg_0_I, arg_4_I);
   return Py_BuildValue("I", rt);
}

// AddDefenders 0096cb50 (II)B
DWORD Jass_AddDefenders(DWORD arg_0_I, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_AddDefenders]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* AddDefenders(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_AddDefenders(arg_0_I, arg_4_I);
   return Py_BuildValue("I", rt);
}

// GetCreepCamp 0096fb60 (IIB)Hunit;
DWORD Jass_GetCreepCamp(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_8_B
       push eax
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_GetCreepCamp]
       add esp, 0x0c
       mov rt, eax
   }
   return rt;
}
static PyObject* GetCreepCamp(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   DWORD arg_8_B = 0;
   if (!PyArg_ParseTuple(args, "III", &arg_0_I, &arg_4_I, &arg_8_B))
       Py_RETURN_NONE;
   rt = Jass_GetCreepCamp(arg_0_I, arg_4_I, arg_8_B);
   return Py_BuildValue("I", rt);
}

// StartGetEnemyBase 00975120 ()V
DWORD Jass_StartGetEnemyBase()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_StartGetEnemyBase]
       mov rt, eax
   }
   return rt;
}
static PyObject* StartGetEnemyBase(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_StartGetEnemyBase();
   return Py_BuildValue("I", rt);
}

// WaitGetEnemyBase 00975c80 ()B
DWORD Jass_WaitGetEnemyBase()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_WaitGetEnemyBase]
       mov rt, eax
   }
   return rt;
}
static PyObject* WaitGetEnemyBase(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_WaitGetEnemyBase();
   return Py_BuildValue("I", rt);
}

// GetMegaTarget 009700e0 ()Hunit;
DWORD Jass_GetMegaTarget()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetMegaTarget]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetMegaTarget(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetMegaTarget();
   return Py_BuildValue("I", rt);
}

// GetEnemyBase 0096fba0 ()Hunit;
DWORD Jass_GetEnemyBase()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetEnemyBase]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetEnemyBase(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetEnemyBase();
   return Py_BuildValue("I", rt);
}

// GetExpansionFoe 0096fc30 ()Hunit;
DWORD Jass_GetExpansionFoe()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetExpansionFoe]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetExpansionFoe(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetExpansionFoe();
   return Py_BuildValue("I", rt);
}

// GetExpansionX 0096fd20 ()I
DWORD Jass_GetExpansionX()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetExpansionX]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetExpansionX(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetExpansionX();
   return Py_BuildValue("I", rt);
}

// GetExpansionY 0096fda0 ()I
DWORD Jass_GetExpansionY()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetExpansionY]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetExpansionY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetExpansionY();
   return Py_BuildValue("I", rt);
}

// SetStagePoint 00974bb0 (RR)V
DWORD Jass_SetStagePoint(DWORD arg_0_R, DWORD arg_4_R)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_R
       push eax
       mov eax, arg_0_R
       push eax
       call [_Jass_SetStagePoint]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SetStagePoint(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_R = 0;
   DWORD arg_4_R = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_R, &arg_4_R))
       Py_RETURN_NONE;
   rt = Jass_SetStagePoint(arg_0_R, arg_4_R);
   return Py_BuildValue("I", rt);
}

// AttackMoveKill 0096cfa0 (Hunit;)V
DWORD Jass_AttackMoveKill(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_AttackMoveKill]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* AttackMoveKill(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_AttackMoveKill(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// AttackMoveXY 0096d070 (II)V
DWORD Jass_AttackMoveXY(DWORD arg_0_I, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_AttackMoveXY]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* AttackMoveXY(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_AttackMoveXY(arg_0_I, arg_4_I);
   return Py_BuildValue("I", rt);
}

// LoadZepWave 00971850 (II)V
DWORD Jass_LoadZepWave(DWORD arg_0_I, DWORD arg_4_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_I
       push eax
       mov eax, arg_0_I
       push eax
       call [_Jass_LoadZepWave]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* LoadZepWave(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   DWORD arg_4_I = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_I, &arg_4_I))
       Py_RETURN_NONE;
   rt = Jass_LoadZepWave(arg_0_I, arg_4_I);
   return Py_BuildValue("I", rt);
}

// SuicidePlayer 00975270 (Hplayer;B)B
DWORD Jass_SuicidePlayer(DWORD arg_0_Hplayer, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SuicidePlayer]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SuicidePlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SuicidePlayer(arg_0_Hplayer, arg_4_B);
   return Py_BuildValue("I", rt);
}

// SuicidePlayerUnits 00975300 (Hplayer;B)B
DWORD Jass_SuicidePlayerUnits(DWORD arg_0_Hplayer, DWORD arg_4_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_4_B
       push eax
       mov eax, arg_0_Hplayer
       push eax
       call [_Jass_SuicidePlayerUnits]
       add esp, 0x08
       mov rt, eax
   }
   return rt;
}
static PyObject* SuicidePlayerUnits(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hplayer = 0;
   DWORD arg_4_B = 0;
   if (!PyArg_ParseTuple(args, "II", &arg_0_Hplayer, &arg_4_B))
       Py_RETURN_NONE;
   rt = Jass_SuicidePlayerUnits(arg_0_Hplayer, arg_4_B);
   return Py_BuildValue("I", rt);
}

// UnitAlive 00975970 (Hunit;)B
DWORD Jass_UnitAlive(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitAlive]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitAlive(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_UnitAlive(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// UnitInvis 009759d0 (Hunit;)B
DWORD Jass_UnitInvis(DWORD arg_0_Hunit)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_Hunit
       push eax
       call [_Jass_UnitInvis]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* UnitInvis(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_Hunit = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_Hunit))
       Py_RETURN_NONE;
   rt = Jass_UnitInvis(arg_0_Hunit);
   return Py_BuildValue("I", rt);
}

// IgnoredUnits 00971040 (I)I
DWORD Jass_IgnoredUnits(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_IgnoredUnits]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* IgnoredUnits(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_IgnoredUnits(arg_0_I);
   return Py_BuildValue("I", rt);
}

// CommandsWaiting 0096e190 ()I
DWORD Jass_CommandsWaiting()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_CommandsWaiting]
       mov rt, eax
   }
   return rt;
}
static PyObject* CommandsWaiting(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_CommandsWaiting();
   return Py_BuildValue("I", rt);
}

// GetLastCommand 0096ff50 ()I
DWORD Jass_GetLastCommand()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetLastCommand]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetLastCommand(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetLastCommand();
   return Py_BuildValue("I", rt);
}

// GetLastData 0096ff90 ()I
DWORD Jass_GetLastData()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_GetLastData]
       mov rt, eax
   }
   return rt;
}
static PyObject* GetLastData(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_GetLastData();
   return Py_BuildValue("I", rt);
}

// PopLastCommand 00972930 ()V
DWORD Jass_PopLastCommand()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_PopLastCommand]
       mov rt, eax
   }
   return rt;
}
static PyObject* PopLastCommand(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_PopLastCommand();
   return Py_BuildValue("I", rt);
}

// SetCampaignAI 00974300 ()V
DWORD Jass_SetCampaignAI()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_SetCampaignAI]
       mov rt, eax
   }
   return rt;
}
static PyObject* SetCampaignAI(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_SetCampaignAI();
   return Py_BuildValue("I", rt);
}

// SetMeleeAI 009748f0 ()V
DWORD Jass_SetMeleeAI()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_SetMeleeAI]
       mov rt, eax
   }
   return rt;
}
static PyObject* SetMeleeAI(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_SetMeleeAI();
   return Py_BuildValue("I", rt);
}

// SetTargetHeroes 00974bf0 (B)V
DWORD Jass_SetTargetHeroes(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SetTargetHeroes]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetTargetHeroes(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SetTargetHeroes(arg_0_B);
   return Py_BuildValue("I", rt);
}

// SetHeroesFlee 009747b0 (B)V
DWORD Jass_SetHeroesFlee(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SetHeroesFlee]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetHeroesFlee(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SetHeroesFlee(arg_0_B);
   return Py_BuildValue("I", rt);
}

// SetHeroesBuyItems 00974770 (B)V
DWORD Jass_SetHeroesBuyItems(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SetHeroesBuyItems]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetHeroesBuyItems(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SetHeroesBuyItems(arg_0_B);
   return Py_BuildValue("I", rt);
}

// SetIgnoreInjured 00974880 (B)V
DWORD Jass_SetIgnoreInjured(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SetIgnoreInjured]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetIgnoreInjured(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SetIgnoreInjured(arg_0_B);
   return Py_BuildValue("I", rt);
}

// SetPeonsRepair 00974980 (B)V
DWORD Jass_SetPeonsRepair(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SetPeonsRepair]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetPeonsRepair(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SetPeonsRepair(arg_0_B);
   return Py_BuildValue("I", rt);
}

// SetRandomPaths 00974a50 (B)V
DWORD Jass_SetRandomPaths(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SetRandomPaths]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetRandomPaths(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SetRandomPaths(arg_0_B);
   return Py_BuildValue("I", rt);
}

// SetDefendPlayer 00974400 (B)V
DWORD Jass_SetDefendPlayer(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SetDefendPlayer]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetDefendPlayer(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SetDefendPlayer(arg_0_B);
   return Py_BuildValue("I", rt);
}

// SetHeroesTakeItems 00974840 (B)V
DWORD Jass_SetHeroesTakeItems(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SetHeroesTakeItems]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetHeroesTakeItems(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SetHeroesTakeItems(arg_0_B);
   return Py_BuildValue("I", rt);
}

// SetUnitsFlee 00974d10 (B)V
DWORD Jass_SetUnitsFlee(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SetUnitsFlee]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetUnitsFlee(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SetUnitsFlee(arg_0_B);
   return Py_BuildValue("I", rt);
}

// SetGroupsFlee 009745b0 (B)V
DWORD Jass_SetGroupsFlee(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SetGroupsFlee]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetGroupsFlee(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SetGroupsFlee(arg_0_B);
   return Py_BuildValue("I", rt);
}

// SetSlowChopping 00974b10 (B)V
DWORD Jass_SetSlowChopping(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SetSlowChopping]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetSlowChopping(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SetSlowChopping(arg_0_B);
   return Py_BuildValue("I", rt);
}

// SetSmartArtillery 00974b70 (B)V
DWORD Jass_SetSmartArtillery(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SetSmartArtillery]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetSmartArtillery(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SetSmartArtillery(arg_0_B);
   return Py_BuildValue("I", rt);
}

// SetWatchMegaTargets 00974db0 (B)V
DWORD Jass_SetWatchMegaTargets(DWORD arg_0_B)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_B
       push eax
       call [_Jass_SetWatchMegaTargets]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetWatchMegaTargets(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_B = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_B))
       Py_RETURN_NONE;
   rt = Jass_SetWatchMegaTargets(arg_0_B);
   return Py_BuildValue("I", rt);
}

// SetReplacementCount 00974ad0 (I)V
DWORD Jass_SetReplacementCount(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_SetReplacementCount]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* SetReplacementCount(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_SetReplacementCount(arg_0_I);
   return Py_BuildValue("I", rt);
}

// PurchaseZeppelin 009729c0 ()V
DWORD Jass_PurchaseZeppelin()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_PurchaseZeppelin]
       mov rt, eax
   }
   return rt;
}
static PyObject* PurchaseZeppelin(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_PurchaseZeppelin();
   return Py_BuildValue("I", rt);
}

// MeleeDifficulty 00971f00 ()I
DWORD Jass_MeleeDifficulty()
{
   DWORD rt = 0;
   __asm {
       call [_Jass_MeleeDifficulty]
       mov rt, eax
   }
   return rt;
}
static PyObject* MeleeDifficulty(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   rt = Jass_MeleeDifficulty();
   return Py_BuildValue("I", rt);
}

// DebugBreak 0096e640 (I)V
DWORD Jass_DebugBreak(DWORD arg_0_I)
{
   DWORD rt = 0;
   __asm {
       mov eax, arg_0_I
       push eax
       call [_Jass_DebugBreak]
       add esp, 0x04
       mov rt, eax
   }
   return rt;
}
static PyObject* DebugBreak(PyObject *self, PyObject *args)
{
   DWORD rt = 0;
   DWORD arg_0_I = 0;
   if (!PyArg_ParseTuple(args, "I", &arg_0_I))
       Py_RETURN_NONE;
   rt = Jass_DebugBreak(arg_0_I);
   return Py_BuildValue("I", rt);
}

PyMethodDef JassMethods[] = {
   {"Deg2Rad", Deg2Rad, METH_VARARGS, "Game.base+0022F5B0 (R)R"},
   {"Rad2Deg", Rad2Deg, METH_VARARGS, "Game.base+00242B00 (R)R"},
   {"Sin", Sin, METH_VARARGS, "Game.base+00248380 (R)R"},
   {"Cos", Cos, METH_VARARGS, "Game.base+0022BD90 (R)R"},
   {"Tan", Tan, METH_VARARGS, "Game.base+00248DD0 (R)R"},
   {"Asin", Asin, METH_VARARGS, "Game.base+0022AA60 (R)R"},
   {"Acos", Acos, METH_VARARGS, "Game.base+00229DE0 (R)R"},
   {"Atan", Atan, METH_VARARGS, "Game.base+0022AB20 (R)R"},
   {"Atan2", Atan2, METH_VARARGS, "Game.base+0022AAA0 (RR)R"},
   {"SquareRoot", SquareRoot, METH_VARARGS, "Game.base+002483B0 (R)R"},
   {"Pow", Pow, METH_VARARGS, "Game.base+00242180 (RR)R"},
   {"I2R", I2R, METH_VARARGS, "Game.base+00237460 (I)R"},
   {"R2I", R2I, METH_VARARGS, "Game.base+00242A20 (R)I"},
   {"I2S", I2S, METH_VARARGS, "Game.base+00237480 (I)S"},
   {"R2S", R2S, METH_VARARGS, "Game.base+00242A30 (R)S"},
   {"R2SW", R2SW, METH_VARARGS, "Game.base+00242A70 (RII)S"},
   {"S2I", S2I, METH_VARARGS, "Game.base+002436D0 (S)I"},
   {"S2R", S2R, METH_VARARGS, "Game.base+00243700 (S)R"},
   {"GetHandleId", GetHandleId, METH_VARARGS, "Game.base+002329D0 (Hhandle;)I"},
   {"SubString", SubString, METH_VARARGS, "Game.base+00248A80 (SII)S"},
   {"StringLength", StringLength, METH_VARARGS, "Game.base+002487A0 (S)I"},
   {"StringCase", StringCase, METH_VARARGS, "Game.base+002486F0 (SB)S"},
   {"StringHash", StringHash, METH_VARARGS, "Game.base+00248780 (S)I"},
   {"GetLocalizedString", GetLocalizedString, METH_VARARGS, "Game.base+00233400 (S)S"},
   {"GetLocalizedHotkey", GetLocalizedHotkey, METH_VARARGS, "Game.base+002333D0 (S)I"},
   {"ConvertRace", ConvertRace, METH_VARARGS, "Game.base+0022BB10 (I)Hrace;"},
   {"ConvertAllianceType", ConvertAllianceType, METH_VARARGS, "Game.base+0022B930 (I)Halliancetype;"},
   {"ConvertRacePref", ConvertRacePref, METH_VARARGS, "Game.base+0022BB20 (I)Hracepreference;"},
   {"ConvertIGameState", ConvertIGameState, METH_VARARGS, "Game.base+0022BA00 (I)Higamestate;"},
   {"ConvertFGameState", ConvertFGameState, METH_VARARGS, "Game.base+0022B9A0 (I)Hfgamestate;"},
   {"ConvertPlayerState", ConvertPlayerState, METH_VARARGS, "Game.base+0022BAF0 (I)Hplayerstate;"},
   {"ConvertPlayerScore", ConvertPlayerScore, METH_VARARGS, "Game.base+0022BAD0 (I)Hplayerscore;"},
   {"ConvertStartLocPrio", ConvertStartLocPrio, METH_VARARGS, "Game.base+0022BB60 (I)Hstartlocprio;"},
   {"ConvertPlayerGameResult", ConvertPlayerGameResult, METH_VARARGS, "Game.base+0022BAC0 (I)Hplayergameresult;"},
   {"ConvertUnitState", ConvertUnitState, METH_VARARGS, "Game.base+0022BBE0 (I)Hunitstate;"},
   {"ConvertAIDifficulty", ConvertAIDifficulty, METH_VARARGS, "Game.base+0022B920 (I)Haidifficulty;"},
   {"ConvertGameEvent", ConvertGameEvent, METH_VARARGS, "Game.base+0022B9D0 (I)Hgameevent;"},
   {"ConvertPlayerEvent", ConvertPlayerEvent, METH_VARARGS, "Game.base+0022BAB0 (I)Hplayerevent;"},
   {"ConvertPlayerUnitEvent", ConvertPlayerUnitEvent, METH_VARARGS, "Game.base+0022BB00 (I)Hplayerunitevent;"},
   {"ConvertUnitEvent", ConvertUnitEvent, METH_VARARGS, "Game.base+0022BBD0 (I)Hunitevent;"},
   {"ConvertWidgetEvent", ConvertWidgetEvent, METH_VARARGS, "Game.base+0022BC30 (I)Hwidgetevent;"},
   {"ConvertDialogEvent", ConvertDialogEvent, METH_VARARGS, "Game.base+0022B980 (I)Hdialogevent;"},
   {"ConvertLimitOp", ConvertLimitOp, METH_VARARGS, "Game.base+0022BA20 (I)Hlimitop;"},
   {"ConvertUnitType", ConvertUnitType, METH_VARARGS, "Game.base+0022BBF0 (I)Hunittype;"},
   {"ConvertGameSpeed", ConvertGameSpeed, METH_VARARGS, "Game.base+0022B9E0 (I)Hgamespeed;"},
   {"ConvertPlacement", ConvertPlacement, METH_VARARGS, "Game.base+0022BA90 (I)Hplacement;"},
   {"ConvertGameDifficulty", ConvertGameDifficulty, METH_VARARGS, "Game.base+0022B9C0 (I)Hgamedifficulty;"},
   {"ConvertGameType", ConvertGameType, METH_VARARGS, "Game.base+0022B9F0 (I)Hgametype;"},
   {"ConvertMapFlag", ConvertMapFlag, METH_VARARGS, "Game.base+0022BA50 (I)Hmapflag;"},
   {"ConvertMapVisibility", ConvertMapVisibility, METH_VARARGS, "Game.base+0022BA70 (I)Hmapvisibility;"},
   {"ConvertMapSetting", ConvertMapSetting, METH_VARARGS, "Game.base+0022BA60 (I)Hmapsetting;"},
   {"ConvertMapDensity", ConvertMapDensity, METH_VARARGS, "Game.base+0022BA40 (I)Hmapdensity;"},
   {"ConvertMapControl", ConvertMapControl, METH_VARARGS, "Game.base+0022BA30 (I)Hmapcontrol;"},
   {"ConvertPlayerColor", ConvertPlayerColor, METH_VARARGS, "Game.base+0022BAA0 (I)Hplayercolor;"},
   {"ConvertPlayerSlotState", ConvertPlayerSlotState, METH_VARARGS, "Game.base+0022BAE0 (I)Hplayerslotstate;"},
   {"ConvertVolumeGroup", ConvertVolumeGroup, METH_VARARGS, "Game.base+0022BC10 (I)Hvolumegroup;"},
   {"ConvertCameraField", ConvertCameraField, METH_VARARGS, "Game.base+0022B960 (I)Hcamerafield;"},
   {"ConvertBlendMode", ConvertBlendMode, METH_VARARGS, "Game.base+0022B950 (I)Hblendmode;"},
   {"ConvertRarityControl", ConvertRarityControl, METH_VARARGS, "Game.base+0022BB40 (I)Hraritycontrol;"},
   {"ConvertTexMapFlags", ConvertTexMapFlags, METH_VARARGS, "Game.base+0022BB70 (I)Htexmapflags;"},
   {"ConvertFogState", ConvertFogState, METH_VARARGS, "Game.base+0022B9B0 (I)Hfogstate;"},
   {"ConvertEffectType", ConvertEffectType, METH_VARARGS, "Game.base+0022B990 (I)Heffecttype;"},
   {"ConvertVersion", ConvertVersion, METH_VARARGS, "Game.base+0022BC00 (I)Hversion;"},
   {"ConvertItemType", ConvertItemType, METH_VARARGS, "Game.base+0022BA10 (I)Hitemtype;"},
   {"ConvertAttackType", ConvertAttackType, METH_VARARGS, "Game.base+0022B940 (I)Hattacktype;"},
   {"ConvertDamageType", ConvertDamageType, METH_VARARGS, "Game.base+0022B970 (I)Hdamagetype;"},
   {"ConvertWeaponType", ConvertWeaponType, METH_VARARGS, "Game.base+0022BC20 (I)Hweapontype;"},
   {"ConvertSoundType", ConvertSoundType, METH_VARARGS, "Game.base+0022BB50 (I)Hsoundtype;"},
   {"ConvertPathingType", ConvertPathingType, METH_VARARGS, "Game.base+0022BA80 (I)Hpathingtype;"},
   {"SetMapName", SetMapName, METH_VARARGS, "Game.base+00246230 (S)V"},
   {"SetMapDescription", SetMapDescription, METH_VARARGS, "Game.base+002461A0 (S)V"},
   {"SetTeams", SetTeams, METH_VARARGS, "Game.base+00246E80 (I)V"},
   {"SetPlayers", SetPlayers, METH_VARARGS, "Game.base+002467B0 (I)V"},
   {"SetGameTypeSupported", SetGameTypeSupported, METH_VARARGS, "Game.base+002459F0 (Hgametype;B)V"},
   {"SetMapFlag", SetMapFlag, METH_VARARGS, "Game.base+002461D0 (Hmapflag;B)V"},
   {"SetGameSpeed", SetGameSpeed, METH_VARARGS, "Game.base+002459D0 (Hgamespeed;)V"},
   {"SetGamePlacement", SetGamePlacement, METH_VARARGS, "Game.base+002459B0 (Hplacement;)V"},
   {"SetGameDifficulty", SetGameDifficulty, METH_VARARGS, "Game.base+00245990 (Hgamedifficulty;)V"},
   {"SetResourceDensity", SetResourceDensity, METH_VARARGS, "Game.base+00246940 (Hmapdensity;)V"},
   {"SetCreatureDensity", SetCreatureDensity, METH_VARARGS, "Game.base+00244BD0 (Hmapdensity;)V"},
   {"DefineStartLocation", DefineStartLocation, METH_VARARGS, "Game.base+0022F550 (IRR)V"},
   {"DefineStartLocationLoc", DefineStartLocationLoc, METH_VARARGS, "Game.base+0022F570 (IHlocation;)V"},
   {"SetStartLocPrioCount", SetStartLocPrioCount, METH_VARARGS, "Game.base+00246E50 (II)V"},
   {"SetStartLocPrio", SetStartLocPrio, METH_VARARGS, "Game.base+00246E10 (IIIHstartlocprio;)V"},
   {"GetStartLocPrioSlot", GetStartLocPrioSlot, METH_VARARGS, "Game.base+00235800 (II)I"},
   {"GetStartLocPrio", GetStartLocPrio, METH_VARARGS, "Game.base+002357D0 (II)Hstartlocprio;"},
   {"GetTeams", GetTeams, METH_NOARGS, "Game.base+00235B40 ()I"},
   {"GetPlayers", GetPlayers, METH_NOARGS, "Game.base+00234580 ()I"},
   {"IsGameTypeSupported", IsGameTypeSupported, METH_VARARGS, "Game.base+00237CC0 (Hgametype;)B"},
   {"IsMapFlagSet", IsMapFlagSet, METH_VARARGS, "Game.base+00238070 (Hmapflag;)B"},
   {"GetGameTypeSelected", GetGameTypeSelected, METH_NOARGS, "Game.base+002329C0 ()Hgametype;"},
   {"GetGamePlacement", GetGamePlacement, METH_NOARGS, "Game.base+002329A0 ()Hplacement;"},
   {"GetGameSpeed", GetGameSpeed, METH_NOARGS, "Game.base+002329B0 ()Hgamespeed;"},
   {"GetGameDifficulty", GetGameDifficulty, METH_NOARGS, "Game.base+00232990 ()Hgamedifficulty;"},
   {"GetResourceDensity", GetResourceDensity, METH_NOARGS, "Game.base+00234A30 ()Hmapdensity;"},
   {"GetCreatureDensity", GetCreatureDensity, METH_NOARGS, "Game.base+002320B0 ()Hmapdensity;"},
   {"GetStartLocationX", GetStartLocationX, METH_VARARGS, "Game.base+00235880 (I)R"},
   {"GetStartLocationY", GetStartLocationY, METH_VARARGS, "Game.base+002358A0 (I)R"},
   {"GetStartLocationLoc", GetStartLocationLoc, METH_VARARGS, "Game.base+00235830 (I)Hlocation;"},
   {"SetPlayerTeam", SetPlayerTeam, METH_VARARGS, "Game.base+002466F0 (Hplayer;I)V"},
   {"SetPlayerStartLocation", SetPlayerStartLocation, METH_VARARGS, "Game.base+00246610 (Hplayer;I)V"},
   {"ForcePlayerStartLocation", ForcePlayerStartLocation, METH_VARARGS, "Game.base+00231040 (Hplayer;I)V"},
   {"SetPlayerAlliance", SetPlayerAlliance, METH_VARARGS, "Game.base+00246340 (Hplayer;Hplayer;Halliancetype;B)V"},
   {"SetPlayerTaxRate", SetPlayerTaxRate, METH_VARARGS, "Game.base+00246690 (Hplayer;Hplayer;Hplayerstate;I)V"},
   {"SetPlayerRacePreference", SetPlayerRacePreference, METH_VARARGS, "Game.base+002465B0 (Hplayer;Hracepreference;)V"},
   {"SetPlayerRaceSelectable", SetPlayerRaceSelectable, METH_VARARGS, "Game.base+002465E0 (Hplayer;B)V"},
   {"SetPlayerController", SetPlayerController, METH_VARARGS, "Game.base+00246400 (Hplayer;Hmapcontrol;)V"},
   {"SetPlayerColor", SetPlayerColor, METH_VARARGS, "Game.base+002463E0 (Hplayer;Hplayercolor;)V"},
   {"SetPlayerOnScoreScreen", SetPlayerOnScoreScreen, METH_VARARGS, "Game.base+00246590 (Hplayer;B)V"},
   {"SetPlayerName", SetPlayerName, METH_VARARGS, "Game.base+00246550 (Hplayer;S)V"},
   {"GetPlayerTeam", GetPlayerTeam, METH_VARARGS, "Game.base+00234390 (Hplayer;)I"},
   {"GetPlayerName", GetPlayerName, METH_VARARGS, "Game.base+00233F70 (Hplayer;)S"},
   {"GetPlayerStartLocation", GetPlayerStartLocation, METH_VARARGS, "Game.base+00234230 (Hplayer;)I"},
   {"GetPlayerStartLocationX", GetPlayerStartLocationX, METH_VARARGS, "Game.base+00234250 (Hplayer;)R"},
   {"GetPlayerStartLocationY", GetPlayerStartLocationY, METH_VARARGS, "Game.base+00234280 (Hplayer;)R"},
   {"GetPlayerColor", GetPlayerColor, METH_VARARGS, "Game.base+00233ED0 (Hplayer;)Hplayercolor;"},
   {"GetPlayerSelectable", GetPlayerSelectable, METH_VARARGS, "Game.base+002341F0 (Hplayer;)B"},
   {"GetPlayerController", GetPlayerController, METH_VARARGS, "Game.base+00233EF0 (Hplayer;)Hmapcontrol;"},
   {"GetPlayerSlotState", GetPlayerSlotState, METH_VARARGS, "Game.base+00234210 (Hplayer;)Hplayerslotstate;"},
   {"GetPlayerTaxRate", GetPlayerTaxRate, METH_VARARGS, "Game.base+00234340 (Hplayer;Hplayer;Hplayerstate;)I"},
   {"IsPlayerRacePrefSet", IsPlayerRacePrefSet, METH_VARARGS, "Game.base+002383B0 (Hplayer;Hracepreference;)B"},
   {"Location", Location, METH_VARARGS, "Game.base+00240E20 (RR)Hlocation;"},
   {"RemoveLocation", RemoveLocation, METH_VARARGS, "Game.base+00243090 (Hlocation;)V"},
   {"MoveLocation", MoveLocation, METH_VARARGS, "Game.base+002410D0 (Hlocation;RR)V"},
   {"GetLocationX", GetLocationX, METH_VARARGS, "Game.base+00233470 (Hlocation;)R"},
   {"GetLocationY", GetLocationY, METH_VARARGS, "Game.base+00233490 (Hlocation;)R"},
   {"GetLocationZ", GetLocationZ, METH_VARARGS, "Game.base+002334B0 (Hlocation;)R"},
   {"CreateTimer", CreateTimer, METH_NOARGS, "Game.base+0022ED00 ()Htimer;"},
   {"DestroyTimer", DestroyTimer, METH_VARARGS, "Game.base+0022F9E0 (Htimer;)V"},
   {"TimerStart", TimerStart, METH_VARARGS, "Game.base+002492F0 (Htimer;RBC)V"},
   {"TimerGetTimeout", TimerGetTimeout, METH_VARARGS, "Game.base+002492C0 (Htimer;)R"},
   {"TimerGetElapsed", TimerGetElapsed, METH_VARARGS, "Game.base+00249260 (Htimer;)R"},
   {"TimerGetRemaining", TimerGetRemaining, METH_VARARGS, "Game.base+00249290 (Htimer;)R"},
   {"PauseTimer", PauseTimer, METH_VARARGS, "Game.base+00241D10 (Htimer;)V"},
   {"ResumeTimer", ResumeTimer, METH_VARARGS, "Game.base+002435F0 (Htimer;)V"},
   {"GetExpiredTimer", GetExpiredTimer, METH_NOARGS, "Game.base+00232660 ()Htimer;"},
   {"Condition", Condition, METH_VARARGS, "Game.base+0022B810 (C)Hconditionfunc;"},
   {"DestroyCondition", DestroyCondition, METH_VARARGS, "Game.base+0022F780 (Hconditionfunc;)V"},
   {"Filter", Filter, METH_VARARGS, "Game.base+00230970 (C)Hfilterfunc;"},
   {"DestroyFilter", DestroyFilter, METH_VARARGS, "Game.base+0022F820 (Hfilterfunc;)V"},
   {"DestroyBoolExpr", DestroyBoolExpr, METH_VARARGS, "Game.base+0022F760 (Hboolexpr;)V"},
   {"And", And, METH_VARARGS, "Game.base+0022A950 (Hboolexpr;Hboolexpr;)Hboolexpr;"},
   {"Or", Or, METH_VARARGS, "Game.base+002419B0 (Hboolexpr;Hboolexpr;)Hboolexpr;"},
   {"Not", Not, METH_VARARGS, "Game.base+00241810 (Hboolexpr;)Hboolexpr;"},
   {"CreateRegion", CreateRegion, METH_NOARGS, "Game.base+0022E8B0 ()Hregion;"},
   {"RemoveRegion", RemoveRegion, METH_VARARGS, "Game.base+00243100 (Hregion;)V"},
   {"RegionAddRect", RegionAddRect, METH_VARARGS, "Game.base+00242D10 (Hregion;Hrect;)V"},
   {"RegionClearRect", RegionClearRect, METH_VARARGS, "Game.base+00242DC0 (Hregion;Hrect;)V"},
   {"RegionAddCell", RegionAddCell, METH_VARARGS, "Game.base+00242CB0 (Hregion;RR)V"},
   {"RegionAddCellAtLoc", RegionAddCellAtLoc, METH_VARARGS, "Game.base+00242CD0 (Hregion;Hlocation;)V"},
   {"RegionClearCell", RegionClearCell, METH_VARARGS, "Game.base+00242D60 (Hregion;RR)V"},
   {"RegionClearCellAtLoc", RegionClearCellAtLoc, METH_VARARGS, "Game.base+00242D80 (Hregion;Hlocation;)V"},
   {"IsUnitInRegion", IsUnitInRegion, METH_VARARGS, "Game.base+00238C50 (Hregion;Hunit;)B"},
   {"IsPointInRegion", IsPointInRegion, METH_VARARGS, "Game.base+00238490 (Hregion;RR)B"},
   {"IsLocationInRegion", IsLocationInRegion, METH_VARARGS, "Game.base+00237F80 (Hregion;Hlocation;)B"},
   {"Rect", Rect, METH_VARARGS, "Game.base+0023F7C0 (RRRR)Hrect;"},
   {"RectFromLoc", RectFromLoc, METH_VARARGS, "Game.base+00242B30 (Hlocation;Hlocation;)Hrect;"},
   {"RemoveRect", RemoveRect, METH_VARARGS, "Game.base+002430E0 (Hrect;)V"},
   {"SetRect", SetRect, METH_VARARGS, "Game.base+0023F980 (Hrect;RRRR)V"},
   {"SetRectFromLoc", SetRectFromLoc, METH_VARARGS, "Game.base+002467F0 (Hrect;Hlocation;Hlocation;)V"},
   {"GetRectCenterX", GetRectCenterX, METH_VARARGS, "Game.base+00234700 (Hrect;)R"},
   {"GetRectCenterY", GetRectCenterY, METH_VARARGS, "Game.base+00234760 (Hrect;)R"},
   {"MoveRectTo", MoveRectTo, METH_VARARGS, "Game.base+00241100 (Hrect;RR)V"},
   {"MoveRectToLoc", MoveRectToLoc, METH_VARARGS, "Game.base+00241130 (Hrect;Hlocation;)V"},
   {"GetRectMinX", GetRectMinX, METH_VARARGS, "Game.base+00234800 (Hrect;)R"},
   {"GetRectMinY", GetRectMinY, METH_VARARGS, "Game.base+00234820 (Hrect;)R"},
   {"GetRectMaxX", GetRectMaxX, METH_VARARGS, "Game.base+002347C0 (Hrect;)R"},
   {"GetRectMaxY", GetRectMaxY, METH_VARARGS, "Game.base+002347E0 (Hrect;)R"},
   {"GetWorldBounds", GetWorldBounds, METH_NOARGS, "Game.base+00236A40 ()Hrect;"},
   {"SetFogStateRect", SetFogStateRect, METH_VARARGS, "Game.base+002458B0 (Hplayer;Hfogstate;Hrect;B)V"},
   {"SetFogStateRadius", SetFogStateRadius, METH_VARARGS, "Game.base+002457E0 (Hplayer;Hfogstate;RRRB)V"},
   {"SetFogStateRadiusLoc", SetFogStateRadiusLoc, METH_VARARGS, "Game.base+00245840 (Hplayer;Hfogstate;Hlocation;RB)V"},
   {"FogMaskEnable", FogMaskEnable, METH_VARARGS, "Game.base+00230DF0 (B)V"},
   {"IsFogMaskEnabled", IsFogMaskEnabled, METH_NOARGS, "Game.base+00237B90 ()B"},
   {"FogEnable", FogEnable, METH_VARARGS, "Game.base+00230DC0 (B)V"},
   {"IsFogEnabled", IsFogEnabled, METH_NOARGS, "Game.base+00237B80 ()B"},
   {"CreateFogModifierRect", CreateFogModifierRect, METH_VARARGS, "Game.base+0022E100 (Hplayer;Hfogstate;Hrect;BB)Hfogmodifier;"},
   {"CreateFogModifierRadius", CreateFogModifierRadius, METH_VARARGS, "Game.base+0022DF40 (Hplayer;Hfogstate;RRRBB)Hfogmodifier;"},
   {"CreateFogModifierRadiusLoc", CreateFogModifierRadiusLoc, METH_VARARGS, "Game.base+0022E020 (Hplayer;Hfogstate;Hlocation;RBB)Hfogmodifier;"},
   {"DestroyFogModifier", DestroyFogModifier, METH_VARARGS, "Game.base+0022F850 (Hfogmodifier;)V"},
   {"FogModifierStart", FogModifierStart, METH_VARARGS, "Game.base+00230E10 (Hfogmodifier;)V"},
   {"FogModifierStop", FogModifierStop, METH_VARARGS, "Game.base+00230E30 (Hfogmodifier;)V"},
   {"CreateTrigger", CreateTrigger, METH_NOARGS, "Game.base+0022EFF0 ()Htrigger;"},
   {"DestroyTrigger", DestroyTrigger, METH_VARARGS, "Game.base+0022FA20 (Htrigger;)V"},
   {"ResetTrigger", ResetTrigger, METH_VARARGS, "Game.base+00243450 (Htrigger;)V"},
   {"EnableTrigger", EnableTrigger, METH_VARARGS, "Game.base+00230260 (Htrigger;)V"},
   {"DisableTrigger", DisableTrigger, METH_VARARGS, "Game.base+0022FEA0 (Htrigger;)V"},
   {"IsTriggerEnabled", IsTriggerEnabled, METH_VARARGS, "Game.base+002386D0 (Htrigger;)B"},
   {"TriggerWaitOnSleeps", TriggerWaitOnSleeps, METH_VARARGS, "Game.base+0024A800 (Htrigger;B)V"},
   {"IsTriggerWaitOnSleeps", IsTriggerWaitOnSleeps, METH_VARARGS, "Game.base+002386F0 (Htrigger;)B"},
   {"TriggerRegisterVariableEvent", TriggerRegisterVariableEvent, METH_VARARGS, "Game.base+0024A660 (Htrigger;SHlimitop;R)Hevent;"},
   {"TriggerRegisterTimerEvent", TriggerRegisterTimerEvent, METH_VARARGS, "Game.base+0024A070 (Htrigger;RB)Hevent;"},
   {"TriggerRegisterTimerExpireEvent", TriggerRegisterTimerExpireEvent, METH_VARARGS, "Game.base+0024A130 (Htrigger;Htimer;)Hevent;"},
   {"TriggerRegisterGameStateEvent", TriggerRegisterGameStateEvent, METH_VARARGS, "Game.base+00249960 (Htrigger;Hgamestate;Hlimitop;R)Hevent;"},
   {"GetEventGameState", GetEventGameState, METH_NOARGS, "Game.base+00232500 ()Hgamestate;"},
   {"TriggerRegisterDialogEvent", TriggerRegisterDialogEvent, METH_VARARGS, "Game.base+002495E0 (Htrigger;Hdialog;)Hevent;"},
   {"TriggerRegisterDialogButtonEvent", TriggerRegisterDialogButtonEvent, METH_VARARGS, "Game.base+00249520 (Htrigger;Hbutton;)Hevent;"},
   {"GetClickedButton", GetClickedButton, METH_NOARGS, "Game.base+00231F20 ()Hbutton;"},
   {"GetClickedDialog", GetClickedDialog, METH_NOARGS, "Game.base+00231F70 ()Hdialog;"},
   {"GetTournamentFinishSoonTimeRemaining", GetTournamentFinishSoonTimeRemaining, METH_NOARGS, "Game.base+00235D40 ()R;"},
   {"GetTournamentFinishNowRule", GetTournamentFinishNowRule, METH_NOARGS, "Game.base+00235D10 ()I;"},
   {"GetTournamentFinishNowPlayer", GetTournamentFinishNowPlayer, METH_NOARGS, "Game.base+00235CB0 ()Hplayer;"},
   {"GetTournamentScore", GetTournamentScore, METH_VARARGS, "Game.base+00235D70 (Hplayer;)I"},
   {"GetSaveBasicFilename", GetSaveBasicFilename, METH_NOARGS, "Game.base+00234B50 ()S"},
   {"TriggerRegisterGameEvent", TriggerRegisterGameEvent, METH_VARARGS, "Game.base+00249880 (Htrigger;Hgameevent;)Hevent;"},
   {"GetWinningPlayer", GetWinningPlayer, METH_NOARGS, "Game.base+00236A10 ()Hplayer;"},
   {"TriggerRegisterPlayerStateEvent", TriggerRegisterPlayerStateEvent, METH_VARARGS, "Game.base+00249E50 (Htrigger;Hplayer;Hplayerstate;Hlimitop;R)Hevent;"},
   {"GetEventPlayerState", GetEventPlayerState, METH_NOARGS, "Game.base+002325A0 ()Hplayerstate;"},
   {"TriggerRegisterPlayerEvent", TriggerRegisterPlayerEvent, METH_VARARGS, "Game.base+00249D30 (Htrigger;Hplayer;Hplayerevent;)Hevent;"},
   {"TriggerRegisterPlayerUnitEvent", TriggerRegisterPlayerUnitEvent, METH_VARARGS, "Game.base+00249F70 (Htrigger;Hplayer;Hplayerunitevent;Hboolexpr;)Hevent;"},
   {"GetAttacker", GetAttacker, METH_NOARGS, "Game.base+00231900 ()Hunit;"},
   {"GetRescuer", GetRescuer, METH_NOARGS, "Game.base+00234860 ()Hunit;"},
   {"GetDyingUnit", GetDyingUnit, METH_NOARGS, "Game.base+00232360 ()Hunit;"},
   {"GetKillingUnit", GetKillingUnit, METH_NOARGS, "Game.base+00232FF0 ()Hunit;"},
   {"GetDecayingUnit", GetDecayingUnit, METH_NOARGS, "Game.base+00232120 ()Hunit;"},
   {"GetConstructingStructure", GetConstructingStructure, METH_NOARGS, "Game.base+00232000 ()Hunit;"},
   {"GetCancelledStructure", GetCancelledStructure, METH_NOARGS, "Game.base+00231DF0 ()Hunit;"},
   {"GetConstructedStructure", GetConstructedStructure, METH_NOARGS, "Game.base+00231FE0 ()Hunit;"},
   {"GetTrainedUnitType", GetTrainedUnitType, METH_NOARGS, "Game.base+00235E20 ()I"},
   {"GetResearchingUnit", GetResearchingUnit, METH_NOARGS, "Game.base+00234980 ()Hunit;"},
   {"GetResearched", GetResearched, METH_NOARGS, "Game.base+002348E0 ()I"},
   {"GetTrainedUnit", GetTrainedUnit, METH_NOARGS, "Game.base+00235DA0 ()Hunit;"},
   {"GetSellingUnit", GetSellingUnit, METH_NOARGS, "Game.base+00234BE0 ()Hunit;"},
   {"GetSoldUnit", GetSoldUnit, METH_NOARGS, "Game.base+00234D90 ()Hunit;"},
   {"GetBuyingUnit", GetBuyingUnit, METH_NOARGS, "Game.base+00231980 ()Hunit;"},
   {"GetSoldItem", GetSoldItem, METH_NOARGS, "Game.base+00234D00 ()Hitem;"},
   {"GetChangingUnit", GetChangingUnit, METH_NOARGS, "Game.base+00231E10 ()Hunit;"},
   {"GetChangingUnitPrevOwner", GetChangingUnitPrevOwner, METH_NOARGS, "Game.base+00231E90 ()Hplayer;"},
   {"GetDetectedUnit", GetDetectedUnit, METH_NOARGS, "Game.base+00232320 ()Hunit;"},
   {"GetOrderedUnit", GetOrderedUnit, METH_NOARGS, "Game.base+00233D50 ()Hunit;"},
   {"OrderId", OrderId, METH_VARARGS, "Game.base+00241AE0 (S)I"},
   {"OrderId2String", OrderId2String, METH_VARARGS, "Game.base+00241AB0 (I)S"},
   {"AbilityId", AbilityId, METH_VARARGS, "Game.base+00229DB0 (S)I"},
   {"AbilityId2String", AbilityId2String, METH_VARARGS, "Game.base+00229D80 (I)S"},
   {"UnitId", UnitId, METH_VARARGS, "Game.base+0024B120 (S)I"},
   {"UnitId2String", UnitId2String, METH_VARARGS, "Game.base+0024B0F0 (I)S"},
   {"GetObjectName", GetObjectName, METH_VARARGS, "Game.base+002336D0 (I)S"},
   {"GetIssuedOrderId", GetIssuedOrderId, METH_NOARGS, "Game.base+00232D90 ()I"},
   {"GetOrderPointX", GetOrderPointX, METH_NOARGS, "Game.base+002337F0 ()R"},
   {"GetOrderPointY", GetOrderPointY, METH_NOARGS, "Game.base+00233840 ()R"},
   {"GetOrderPointLoc", GetOrderPointLoc, METH_NOARGS, "Game.base+00233750 ()Hlocation;"},
   {"GetOrderTarget", GetOrderTarget, METH_NOARGS, "Game.base+00233890 ()Hwidget;"},
   {"GetOrderTargetDestructable", GetOrderTargetDestructable, METH_NOARGS, "Game.base+002339F0 ()Hdestructable;"},
   {"GetOrderTargetItem", GetOrderTargetItem, METH_NOARGS, "Game.base+00233B10 ()Hitem;"},
   {"GetOrderTargetUnit", GetOrderTargetUnit, METH_NOARGS, "Game.base+00233C30 ()Hunit;"},
   {"GetSpellAbilityUnit", GetSpellAbilityUnit, METH_NOARGS, "Game.base+00235070 ()Hunit;"},
   {"GetSpellAbilityId", GetSpellAbilityId, METH_NOARGS, "Game.base+00235000 ()I"},
   {"GetSpellAbility", GetSpellAbility, METH_NOARGS, "Game.base+00234EB0 ()Hability;"},
   {"GetSpellTargetLoc", GetSpellTargetLoc, METH_NOARGS, "Game.base+002353F0 ()Hlocation;"},
   {"GetSpellTargetX", GetSpellTargetX, METH_NOARGS, "Game.base+00235610 ()R"},
   {"GetSpellTargetY", GetSpellTargetY, METH_NOARGS, "Game.base+002356F0 ()R"},
   {"GetSpellTargetDestructable", GetSpellTargetDestructable, METH_NOARGS, "Game.base+00235190 ()Hdestructable;"},
   {"GetSpellTargetItem", GetSpellTargetItem, METH_NOARGS, "Game.base+002352C0 ()Hitem;"},
   {"GetSpellTargetUnit", GetSpellTargetUnit, METH_NOARGS, "Game.base+002354E0 ()Hunit;"},
   {"GetLevelingUnit", GetLevelingUnit, METH_NOARGS, "Game.base+00233180 ()Hunit;"},
   {"GetLearningUnit", GetLearningUnit, METH_NOARGS, "Game.base+002330E0 ()Hunit;"},
   {"GetLearnedSkill", GetLearnedSkill, METH_NOARGS, "Game.base+00233060 ()I"},
   {"GetLearnedSkillLevel", GetLearnedSkillLevel, METH_NOARGS, "Game.base+002330A0 ()I"},
   {"GetRevivableUnit", GetRevivableUnit, METH_NOARGS, "Game.base+00234A40 ()Hunit;"},
   {"GetRevivingUnit", GetRevivingUnit, METH_NOARGS, "Game.base+00234AA0 ()Hunit;"},
   {"GetSummoningUnit", GetSummoningUnit, METH_NOARGS, "Game.base+00235AD0 ()Hunit;"},
   {"GetSummonedUnit", GetSummonedUnit, METH_NOARGS, "Game.base+00235A50 ()Hunit;"},
   {"GetTransportUnit", GetTransportUnit, METH_NOARGS, "Game.base+00235EE0 ()Hunit;"},
   {"GetLoadedUnit", GetLoadedUnit, METH_NOARGS, "Game.base+00233320 ()Hunit;"},
   {"GetManipulatingUnit", GetManipulatingUnit, METH_NOARGS, "Game.base+002335B0 ()Hunit;"},
   {"GetManipulatedItem", GetManipulatedItem, METH_NOARGS, "Game.base+00233510 ()Hitem;"},
   {"TriggerRegisterPlayerAllianceChange", TriggerRegisterPlayerAllianceChange, METH_VARARGS, "Game.base+00249B90 (Htrigger;Hplayer;Halliancetype;)Hevent;"},
   {"TriggerRegisterPlayerChatEvent", TriggerRegisterPlayerChatEvent, METH_VARARGS, "Game.base+00249C60 (Htrigger;Hplayer;SB)Hevent;"},
   {"GetEventPlayerChatString", GetEventPlayerChatString, METH_NOARGS, "Game.base+00232530 ()S"},
   {"GetEventPlayerChatStringMatched", GetEventPlayerChatStringMatched, METH_NOARGS, "Game.base+00232570 ()S"},
   {"TriggerRegisterUnitStateEvent", TriggerRegisterUnitStateEvent, METH_VARARGS, "Game.base+0024A570 (Htrigger;Hunit;Hunitstate;Hlimitop;R)Hevent;"},
   {"GetEventUnitState", GetEventUnitState, METH_NOARGS, "Game.base+00232620 ()Hunitstate;"},
   {"TriggerRegisterDeathEvent", TriggerRegisterDeathEvent, METH_VARARGS, "Game.base+00249450 (Htrigger;Hwidget;)Hevent;"},
   {"TriggerRegisterUnitEvent", TriggerRegisterUnitEvent, METH_VARARGS, "Game.base+0024A370 (Htrigger;Hunit;Hunitevent;)Hevent;"},
   {"GetEventDamage", GetEventDamage, METH_NOARGS, "Game.base+00232420 ()R"},
   {"GetEventDamageSource", GetEventDamageSource, METH_NOARGS, "Game.base+00232440 ()Hunit;"},
   {"GetEventDetectingPlayer", GetEventDetectingPlayer, METH_NOARGS, "Game.base+002324B0 ()Hplayer;"},
   {"GetEventTargetUnit", GetEventTargetUnit, METH_NOARGS, "Game.base+002325D0 ()Hunit;"},
   {"TriggerRegisterFilterUnitEvent", TriggerRegisterFilterUnitEvent, METH_VARARGS, "Game.base+00249780 (Htrigger;Hunit;Hunitevent;Hboolexpr;)Hevent;"},
   {"TriggerRegisterUnitInRange", TriggerRegisterUnitInRange, METH_VARARGS, "Game.base+0024A480 (Htrigger;Hunit;RHboolexpr;)Hevent;"},
   {"TriggerRegisterEnterRegion", TriggerRegisterEnterRegion, METH_VARARGS, "Game.base+002496A0 (Htrigger;Hregion;Hboolexpr;)Hevent;"},
   {"TriggerRegisterLeaveRegion", TriggerRegisterLeaveRegion, METH_VARARGS, "Game.base+00249AB0 (Htrigger;Hregion;Hboolexpr;)Hevent;"},
   {"GetTriggeringRegion", GetTriggeringRegion, METH_NOARGS, "Game.base+00236080 ()Hregion;"},
   {"GetEnteringUnit", GetEnteringUnit, METH_NOARGS, "Game.base+00232380 ()Hunit;"},
   {"GetLeavingUnit", GetLeavingUnit, METH_NOARGS, "Game.base+00233140 ()Hunit;"},
   {"TriggerAddCondition", TriggerAddCondition, METH_VARARGS, "Game.base+00249360 (Htrigger;Hboolexpr;)Htriggercondition;"},
   {"TriggerRemoveCondition", TriggerRemoveCondition, METH_VARARGS, "Game.base+0024A760 (Htrigger;Htriggercondition;)V"},
   {"TriggerClearConditions", TriggerClearConditions, METH_VARARGS, "Game.base+002493D0 (Htrigger;)V"},
   {"TriggerAddAction", TriggerAddAction, METH_VARARGS, "Game.base+00249320 (Htrigger;C)Htriggeraction;"},
   {"TriggerRemoveAction", TriggerRemoveAction, METH_VARARGS, "Game.base+0024A730 (Htrigger;Htriggeraction;)V"},
   {"TriggerClearActions", TriggerClearActions, METH_VARARGS, "Game.base+002493B0 (Htrigger;)V"},
   {"TriggerSleepAction", TriggerSleepAction, METH_VARARGS, "Game.base+0024A790 (R)V"},
   {"TriggerWaitForSound", TriggerWaitForSound, METH_VARARGS, "Game.base+0024A7E0 (Hsound;R)V"},
   {"TriggerExecute", TriggerExecute, METH_VARARGS, "Game.base+00249410 (Htrigger;)V"},
   {"TriggerExecuteWait", TriggerExecuteWait, METH_VARARGS, "Game.base+00249430 (Htrigger;)V"},
   {"TriggerEvaluate", TriggerEvaluate, METH_VARARGS, "Game.base+002493F0 (Htrigger;)B"},
   {"TriggerSyncStart", TriggerSyncStart, METH_NOARGS, "Game.base+0024A7D0 ()V"},
   {"TriggerSyncReady", TriggerSyncReady, METH_NOARGS, "Game.base+0024A7A0 ()V"},
   {"GetTriggerWidget", GetTriggerWidget, METH_NOARGS, "Game.base+00236060 ()Hwidget;"},
   {"GetTriggerDestructable", GetTriggerDestructable, METH_NOARGS, "Game.base+00235F60 ()Hdestructable;"},
   {"GetTriggerUnit", GetTriggerUnit, METH_NOARGS, "Game.base+00236040 ()Hunit;"},
   {"GetTriggerPlayer", GetTriggerPlayer, METH_NOARGS, "Game.base+00236020 ()Hplayer;"},
   {"GetTriggeringTrigger", GetTriggeringTrigger, METH_NOARGS, "Game.base+00236100 ()Htrigger;"},
   {"GetTriggerEventId", GetTriggerEventId, METH_NOARGS, "Game.base+00235FC0 ()Heventid;"},
   {"GetTriggerEvalCount", GetTriggerEvalCount, METH_VARARGS, "Game.base+00235F80 (Htrigger;)I"},
   {"GetTriggerExecCount", GetTriggerExecCount, METH_VARARGS, "Game.base+00236000 (Htrigger;)I"},
   {"GetFilterUnit", GetFilterUnit, METH_NOARGS, "Game.base+00232720 ()Hunit;"},
   {"GetEnumUnit", GetEnumUnit, METH_NOARGS, "Game.base+00232400 ()Hunit;"},
   {"GetEnumPlayer", GetEnumPlayer, METH_NOARGS, "Game.base+002323E0 ()Hplayer;"},
   {"GetFilterPlayer", GetFilterPlayer, METH_NOARGS, "Game.base+00232700 ()Hplayer;"},
   {"GetFilterDestructable", GetFilterDestructable, METH_NOARGS, "Game.base+002326C0 ()Hdestructable;"},
   {"GetEnumDestructable", GetEnumDestructable, METH_NOARGS, "Game.base+002323A0 ()Hdestructable;"},
   {"GetFilterItem", GetFilterItem, METH_NOARGS, "Game.base+002326E0 ()Hitem;"},
   {"GetEnumItem", GetEnumItem, METH_NOARGS, "Game.base+002323C0 ()Hitem;"},
   {"CreateGroup", CreateGroup, METH_NOARGS, "Game.base+0022E2D0 ()Hgroup;"},
   {"DestroyGroup", DestroyGroup, METH_VARARGS, "Game.base+0022F890 (Hgroup;)V"},
   {"GroupAddUnit", GroupAddUnit, METH_VARARGS, "Game.base+00236B40 (Hgroup;Hunit;)V"},
   {"GroupRemoveUnit", GroupRemoveUnit, METH_VARARGS, "Game.base+00237060 (Hgroup;Hunit;)V"},
   {"GroupClear", GroupClear, METH_VARARGS, "Game.base+00236B70 (Hgroup;)V"},
   {"GroupEnumUnitsOfType", GroupEnumUnitsOfType, METH_VARARGS, "Game.base+00236D80 (Hgroup;SHboolexpr;)V"},
   {"GroupEnumUnitsOfTypeCounted", GroupEnumUnitsOfTypeCounted, METH_VARARGS, "Game.base+00236DD0 (Hgroup;SHboolexpr;I)V"},
   {"GroupEnumUnitsInRect", GroupEnumUnitsInRect, METH_VARARGS, "Game.base+00236C80 (Hgroup;Hrect;Hboolexpr;)V"},
   {"GroupEnumUnitsInRectCounted", GroupEnumUnitsInRectCounted, METH_VARARGS, "Game.base+00236CE0 (Hgroup;Hrect;Hboolexpr;I)V"},
   {"GroupEnumUnitsOfPlayer", GroupEnumUnitsOfPlayer, METH_VARARGS, "Game.base+00236D40 (Hgroup;Hplayer;Hboolexpr;)V"},
   {"GroupEnumUnitsInRange", GroupEnumUnitsInRange, METH_VARARGS, "Game.base+00236B90 (Hgroup;RRRHboolexpr;)V"},
   {"GroupEnumUnitsInRangeOfLoc", GroupEnumUnitsInRangeOfLoc, METH_VARARGS, "Game.base+00236C00 (Hgroup;Hlocation;RHboolexpr;)V"},
   {"GroupEnumUnitsInRangeCounted", GroupEnumUnitsInRangeCounted, METH_VARARGS, "Game.base+00236BC0 (Hgroup;RRRHboolexpr;I)V"},
   {"GroupEnumUnitsInRangeOfLocCounted", GroupEnumUnitsInRangeOfLocCounted, METH_VARARGS, "Game.base+00236C40 (Hgroup;Hlocation;RHboolexpr;I)V"},
   {"GroupEnumUnitsSelected", GroupEnumUnitsSelected, METH_VARARGS, "Game.base+00236E20 (Hgroup;Hplayer;Hboolexpr;)V"},
   {"GroupImmediateOrder", GroupImmediateOrder, METH_VARARGS, "Game.base+00236F70 (Hgroup;S)B"},
   {"GroupImmediateOrderById", GroupImmediateOrderById, METH_VARARGS, "Game.base+00236F90 (Hgroup;I)B"},
   {"GroupPointOrder", GroupPointOrder, METH_VARARGS, "Game.base+00236FB0 (Hgroup;SRR)B"},
   {"GroupPointOrderLoc", GroupPointOrderLoc, METH_VARARGS, "Game.base+00237040 (Hgroup;SHlocation;)B"},
   {"GroupPointOrderById", GroupPointOrderById, METH_VARARGS, "Game.base+00236FD0 (Hgroup;IRR)B"},
   {"GroupPointOrderByIdLoc", GroupPointOrderByIdLoc, METH_VARARGS, "Game.base+00237000 (Hgroup;IHlocation;)B"},
   {"GroupTargetOrder", GroupTargetOrder, METH_VARARGS, "Game.base+00237090 (Hgroup;SHwidget;)B"},
   {"GroupTargetOrderById", GroupTargetOrderById, METH_VARARGS, "Game.base+002370B0 (Hgroup;IHwidget;)B"},
   {"ForGroup", ForGroup, METH_VARARGS, "Game.base+00230EA0 (Hgroup;C)V"},
   {"FirstOfGroup", FirstOfGroup, METH_VARARGS, "Game.base+00230AA0 (Hgroup;)Hunit;"},
   {"CreateForce", CreateForce, METH_NOARGS, "Game.base+0022E1F0 ()Hforce;"},
   {"DestroyForce", DestroyForce, METH_VARARGS, "Game.base+0022F870 (Hforce;)V"},
   {"ForceAddPlayer", ForceAddPlayer, METH_VARARGS, "Game.base+00230EC0 (Hforce;Hplayer;)V"},
   {"ForceRemovePlayer", ForceRemovePlayer, METH_VARARGS, "Game.base+002310A0 (Hforce;Hplayer;)V"},
   {"ForceClear", ForceClear, METH_VARARGS, "Game.base+00230F40 (Hforce;)V"},
   {"ForceEnumPlayers", ForceEnumPlayers, METH_VARARGS, "Game.base+00230FE0 (Hforce;Hboolexpr;)V"},
   {"ForceEnumPlayersCounted", ForceEnumPlayersCounted, METH_VARARGS, "Game.base+00231010 (Hforce;Hboolexpr;I)V"},
   {"ForceEnumAllies", ForceEnumAllies, METH_VARARGS, "Game.base+00230F60 (Hforce;Hplayer;Hboolexpr;)V"},
   {"ForceEnumEnemies", ForceEnumEnemies, METH_VARARGS, "Game.base+00230FA0 (Hforce;Hplayer;Hboolexpr;)V"},
   {"ForForce", ForForce, METH_VARARGS, "Game.base+00230E80 (Hforce;C)V"},
   {"GetWidgetLife", GetWidgetLife, METH_VARARGS, "Game.base+00236960 (Hwidget;)R"},
   {"SetWidgetLife", SetWidgetLife, METH_VARARGS, "Game.base+002480C0 (Hwidget;R)V"},
   {"GetWidgetX", GetWidgetX, METH_VARARGS, "Game.base+00236990 (Hwidget;)R"},
   {"GetWidgetY", GetWidgetY, METH_VARARGS, "Game.base+002369D0 (Hwidget;)R"},
   {"CreateDestructable", CreateDestructable, METH_VARARGS, "Game.base+0022DEA0 (IRRRRI)Hdestructable;"},
   {"CreateDestructableZ", CreateDestructableZ, METH_VARARGS, "Game.base+0022DEF0 (IRRRRRI)Hdestructable;"},
   {"CreateDeadDestructable", CreateDeadDestructable, METH_VARARGS, "Game.base+0022DDB0 (IRRRRI)Hdestructable;"},
   {"CreateDeadDestructableZ", CreateDeadDestructableZ, METH_VARARGS, "Game.base+0022DE00 (IRRRRRI)Hdestructable;"},
   {"RemoveDestructable", RemoveDestructable, METH_VARARGS, "Game.base+00242FD0 (Hdestructable;)V"},
   {"KillDestructable", KillDestructable, METH_VARARGS, "Game.base+0023FEC0 (Hdestructable;)V"},
   {"SetDestructableInvulnerable", SetDestructableInvulnerable, METH_VARARGS, "Game.base+00244E10 (Hdestructable;B)V"},
   {"IsDestructableInvulnerable", IsDestructableInvulnerable, METH_VARARGS, "Game.base+00237A90 (Hdestructable;)B"},
   {"EnumDestructablesInRect", EnumDestructablesInRect, METH_VARARGS, "Game.base+00230390 (Hrect;Hboolexpr;C)V"},
   {"GetDestructableTypeId", GetDestructableTypeId, METH_VARARGS, "Game.base+00232280 (Hdestructable;)I"},
   {"GetDestructableX", GetDestructableX, METH_VARARGS, "Game.base+002322A0 (Hdestructable;)R"},
   {"GetDestructableY", GetDestructableY, METH_VARARGS, "Game.base+002322E0 (Hdestructable;)R"},
   {"SetDestructableLife", SetDestructableLife, METH_VARARGS, "Game.base+00244E30 (Hdestructable;R)V"},
   {"GetDestructableLife", GetDestructableLife, METH_VARARGS, "Game.base+002321C0 (Hdestructable;)R"},
   {"SetDestructableMaxLife", SetDestructableMaxLife, METH_VARARGS, "Game.base+00244E50 (Hdestructable;R)V"},
   {"GetDestructableMaxLife", GetDestructableMaxLife, METH_VARARGS, "Game.base+00232200 (Hdestructable;)R"},
   {"DestructableRestoreLife", DestructableRestoreLife, METH_VARARGS, "Game.base+0022FBD0 (Hdestructable;RB)V"},
   {"QueueDestructableAnimation", QueueDestructableAnimation, METH_VARARGS, "Game.base+002429E0 (Hdestructable;S)V"},
   {"SetDestructableAnimation", SetDestructableAnimation, METH_VARARGS, "Game.base+00244D20 (Hdestructable;S)V"},
   {"SetDestructableAnimationSpeed", SetDestructableAnimationSpeed, METH_VARARGS, "Game.base+00244DE0 (Hdestructable;R)V"},
   {"ShowDestructable", ShowDestructable, METH_VARARGS, "Game.base+002480E0 (Hdestructable;B)V"},
   {"GetDestructableOccluderHeight", GetDestructableOccluderHeight, METH_VARARGS, "Game.base+00232260 (Hdestructable;)R"},
   {"SetDestructableOccluderHeight", SetDestructableOccluderHeight, METH_VARARGS, "Game.base+00244EA0 (Hdestructable;R)V"},
   {"GetDestructableName", GetDestructableName, METH_VARARGS, "Game.base+00232230 (Hdestructable;)S"},
   {"CreateUnit", CreateUnit, METH_VARARGS, "Game.base+0022F140 (Hplayer;IRRR)Hunit;"},
   {"CreateUnitByName", CreateUnitByName, METH_VARARGS, "Game.base+0022F220 (Hplayer;SRRR)Hunit;"},
   {"CreateUnitAtLoc", CreateUnitAtLoc, METH_VARARGS, "Game.base+0022F1A0 (Hplayer;IHlocation;R)Hunit;"},
   {"CreateUnitAtLocByName", CreateUnitAtLocByName, METH_VARARGS, "Game.base+0022F1F0 (Hplayer;SHlocation;R)Hunit;"},
   {"CreateCorpse", CreateCorpse, METH_VARARGS, "Game.base+0022DD00 (Hplayer;IRRR)Hunit;"},
   {"GetUnitState", GetUnitState, METH_VARARGS, "Game.base+00236830 (Hunit;Hunitstate;)R"},
   {"GetUnitFoodUsed", GetUnitFoodUsed, METH_VARARGS, "Game.base+00236410 (Hunit;)I"},
   {"GetUnitFoodMade", GetUnitFoodMade, METH_VARARGS, "Game.base+002363F0 (Hunit;)I"},
   {"GetFoodMade", GetFoodMade, METH_VARARGS, "Game.base+002327B0 (I)I"},
   {"GetFoodUsed", GetFoodUsed, METH_VARARGS, "Game.base+002327C0 (I)I"},
   {"SetUnitUseFood", SetUnitUseFood, METH_VARARGS, "Game.base+00247E50 (Hunit;B)V"},
   {"GetUnitX", GetUnitX, METH_VARARGS, "Game.base+002368E0 (Hunit;)R"},
   {"GetUnitY", GetUnitY, METH_VARARGS, "Game.base+00236920 (Hunit;)R"},
   {"GetUnitLoc", GetUnitLoc, METH_VARARGS, "Game.base+002364B0 (Hunit;)Hlocation;"},
   {"GetUnitRallyPoint", GetUnitRallyPoint, METH_VARARGS, "Game.base+002366F0 (Hunit;)Hlocation;"},
   {"GetUnitRallyUnit", GetUnitRallyUnit, METH_VARARGS, "Game.base+00236760 (Hunit;)Hunit;"},
   {"GetUnitRallyDestructable", GetUnitRallyDestructable, METH_VARARGS, "Game.base+00236620 (Hunit;)Hdestructable;"},
   {"GetUnitFacing", GetUnitFacing, METH_VARARGS, "Game.base+00236360 (Hunit;)R"},
   {"GetUnitMoveSpeed", GetUnitMoveSpeed, METH_VARARGS, "Game.base+00236510 (Hunit;)R"},
   {"GetUnitDefaultMoveSpeed", GetUnitDefaultMoveSpeed, METH_VARARGS, "Game.base+00236270 (Hunit;)R"},
   {"GetUnitTypeId", GetUnitTypeId, METH_VARARGS, "Game.base+002368A0 (Hunit;)I"},
   {"GetUnitRace", GetUnitRace, METH_VARARGS, "Game.base+00236600 (Hunit;)Hrace;"},
   {"GetUnitName", GetUnitName, METH_VARARGS, "Game.base+00236570 (Hunit;)S"},
   {"GetUnitPointValue", GetUnitPointValue, METH_VARARGS, "Game.base+002365A0 (Hunit;)I"},
   {"GetUnitPointValueByType", GetUnitPointValueByType, METH_VARARGS, "Game.base+002365C0 (I)I"},
   {"SetUnitX", SetUnitX, METH_VARARGS, "Game.base+00247F80 (Hunit;R)V"},
   {"SetUnitY", SetUnitY, METH_VARARGS, "Game.base+00247FE0 (Hunit;R)V"},
   {"SetUnitPosition", SetUnitPosition, METH_VARARGS, "Game.base+00247C40 (Hunit;RR)V"},
   {"SetUnitPositionLoc", SetUnitPositionLoc, METH_VARARGS, "Game.base+00247CA0 (Hunit;Hlocation;)V"},
   {"SetUnitFacing", SetUnitFacing, METH_VARARGS, "Game.base+002477F0 (Hunit;R)V"},
   {"SetUnitFacingTimed", SetUnitFacingTimed, METH_VARARGS, "Game.base+00247830 (Hunit;RR)V"},
   {"SetUnitFlyHeight", SetUnitFlyHeight, METH_VARARGS, "Game.base+00247940 (Hunit;RR)V"},
   {"SetUnitMoveSpeed", SetUnitMoveSpeed, METH_VARARGS, "Game.base+00247B60 (Hunit;R)V"},
   {"SetUnitTurnSpeed", SetUnitTurnSpeed, METH_VARARGS, "Game.base+00247DF0 (Hunit;R)V"},
   {"SetUnitPropWindow", SetUnitPropWindow, METH_VARARGS, "Game.base+00247CE0 (Hunit;R)V"},
   {"SetUnitCreepGuard", SetUnitCreepGuard, METH_VARARGS, "Game.base+00247760 (Hunit;B)V"},
   {"GetUnitAcquireRange", GetUnitAcquireRange, METH_VARARGS, "Game.base+00236180 (Hunit;)R"},
   {"GetUnitTurnSpeed", GetUnitTurnSpeed, METH_VARARGS, "Game.base+00236870 (Hunit;)R"},
   {"GetUnitPropWindow", GetUnitPropWindow, METH_VARARGS, "Game.base+002365D0 (Hunit;)R"},
   {"GetUnitFlyHeight", GetUnitFlyHeight, METH_VARARGS, "Game.base+002363D0 (Hunit;)R"},
   {"GetUnitDefaultAcquireRange", GetUnitDefaultAcquireRange, METH_VARARGS, "Game.base+00236210 (Hunit;)R"},
   {"GetUnitDefaultTurnSpeed", GetUnitDefaultTurnSpeed, METH_VARARGS, "Game.base+00236330 (Hunit;)R"},
   {"GetUnitDefaultPropWindow", GetUnitDefaultPropWindow, METH_VARARGS, "Game.base+00236300 (Hunit;)R"},
   {"GetUnitDefaultFlyHeight", GetUnitDefaultFlyHeight, METH_VARARGS, "Game.base+00236240 (Hunit;)R"},
   {"SetUnitAcquireRange", SetUnitAcquireRange, METH_VARARGS, "Game.base+00247520 (Hunit;R)V"},
   {"SetUnitState", SetUnitState, METH_VARARGS, "Game.base+00247D90 (Hunit;Hunitstate;R)V"},
   {"SetUnitOwner", SetUnitOwner, METH_VARARGS, "Game.base+00247B80 (Hunit;Hplayer;B)V"},
   {"SetUnitRescuable", SetUnitRescuable, METH_VARARGS, "Game.base+00247D00 (Hunit;Hplayer;B)V"},
   {"SetUnitRescueRange", SetUnitRescueRange, METH_VARARGS, "Game.base+00247D30 (Hunit;R)V"},
   {"SetUnitColor", SetUnitColor, METH_VARARGS, "Game.base+00247720 (Hunit;Hplayercolor;)V"},
   {"QueueUnitAnimation", QueueUnitAnimation, METH_VARARGS, "Game.base+00242A00 (Hunit;S)V"},
   {"SetUnitAnimation", SetUnitAnimation, METH_VARARGS, "Game.base+00247540 (Hunit;S)V"},
   {"SetUnitAnimationWithRarity", SetUnitAnimationWithRarity, METH_VARARGS, "Game.base+002476D0 (Hunit;SHraritycontrol;)V"},
   {"SetUnitAnimationByIndex", SetUnitAnimationByIndex, METH_VARARGS, "Game.base+00247560 (Hunit;I)V"},
   {"AddUnitAnimationProperties", AddUnitAnimationProperties, METH_VARARGS, "Game.base+0022A790 (Hunit;SB)V"},
   {"SetUnitScale", SetUnitScale, METH_VARARGS, "Game.base+00247D50 (Hunit;RRR)V"},
   {"SetUnitTimeScale", SetUnitTimeScale, METH_VARARGS, "Game.base+00247DC0 (Hunit;R)V"},
   {"SetUnitBlendTime", SetUnitBlendTime, METH_VARARGS, "Game.base+002476F0 (Hunit;R)V"},
   {"SetUnitVertexColor", SetUnitVertexColor, METH_VARARGS, "Game.base+00247EE0 (Hunit;IIII)V"},
   {"SetUnitLookAt", SetUnitLookAt, METH_VARARGS, "Game.base+002479F0 (Hunit;SHunit;RRR)V"},
   {"SetUnitPathing", SetUnitPathing, METH_VARARGS, "Game.base+00247BC0 (Hunit;B)V"},
   {"ResetUnitLookAt", ResetUnitLookAt, METH_VARARGS, "Game.base+00243490 (Hunit;)V"},
   {"SetHeroStr", SetHeroStr, METH_VARARGS, "Game.base+00245BA0 (Hunit;IB)V"},
   {"SetHeroAgi", SetHeroAgi, METH_VARARGS, "Game.base+00245A30 (Hunit;IB)V"},
   {"SetHeroInt", SetHeroInt, METH_VARARGS, "Game.base+00245A90 (Hunit;IB)V"},
   {"GetHeroStr", GetHeroStr, METH_VARARGS, "Game.base+00232C00 (Hunit;B)I"},
   {"GetHeroAgi", GetHeroAgi, METH_VARARGS, "Game.base+002329E0 (Hunit;B)I"},
   {"GetHeroInt", GetHeroInt, METH_VARARGS, "Game.base+00232A40 (Hunit;B)I"},
   {"GetHeroSkillPoints", GetHeroSkillPoints, METH_VARARGS, "Game.base+00232BA0 (Hunit;)I"},
   {"UnitStripHeroLevel", UnitStripHeroLevel, METH_VARARGS, "Game.base+0024B680 (Hunit;I)B"},
   {"UnitModifySkillPoints", UnitModifySkillPoints, METH_VARARGS, "Game.base+0024B300 (Hunit;I)B"},
   {"GetHeroXP", GetHeroXP, METH_VARARGS, "Game.base+00232C60 (Hunit;)I"},
   {"SetHeroXP", SetHeroXP, METH_VARARGS, "Game.base+00245C00 (Hunit;IB)V"},
   {"AddHeroXP", AddHeroXP, METH_VARARGS, "Game.base+00229FF0 (Hunit;IB)V"},
   {"SetHeroLevel", SetHeroLevel, METH_VARARGS, "Game.base+00245AF0 (Hunit;IB)V"},
   {"GetHeroLevel", GetHeroLevel, METH_VARARGS, "Game.base+00232AA0 (Hunit;)I"},
   {"GetUnitLevel", GetUnitLevel, METH_VARARGS, "Game.base+00236440 (Hunit;)I"},
   {"GetHeroProperName", GetHeroProperName, METH_VARARGS, "Game.base+00232B00 (Hunit;)S"},
   {"SuspendHeroXP", SuspendHeroXP, METH_VARARGS, "Game.base+00248B20 (Hunit;B)V"},
   {"IsSuspendedXP", IsSuspendedXP, METH_VARARGS, "Game.base+00238600 (Hunit;)B"},
   {"SelectHeroSkill", SelectHeroSkill, METH_VARARGS, "Game.base+00243FC0 (Hunit;I)V"},
   {"GetUnitAbilityLevel", GetUnitAbilityLevel, METH_VARARGS, "Game.base+00236120 (Hunit;I)I"},
   {"ReviveHero", ReviveHero, METH_VARARGS, "Game.base+00243610 (Hunit;RRB)B"},
   {"ReviveHeroLoc", ReviveHeroLoc, METH_VARARGS, "Game.base+00243690 (Hunit;Hlocation;B)B"},
   {"SetUnitExploded", SetUnitExploded, METH_VARARGS, "Game.base+00247790 (Hunit;B)V"},
   {"SetUnitInvulnerable", SetUnitInvulnerable, METH_VARARGS, "Game.base+002479A0 (Hunit;B)V"},
   {"PauseUnit", PauseUnit, METH_VARARGS, "Game.base+00241D30 (Hunit;B)V"},
   {"IsUnitPaused", IsUnitPaused, METH_VARARGS, "Game.base+00238DE0 (Hunit;)B"},
   {"UnitAddItem", UnitAddItem, METH_VARARGS, "Game.base+0024A920 (Hunit;Hitem;)B"},
   {"UnitAddItemById", UnitAddItemById, METH_VARARGS, "Game.base+0024AA10 (Hunit;I)Hitem;"},
   {"UnitAddItemToSlotById", UnitAddItemToSlotById, METH_VARARGS, "Game.base+0024AAC0 (Hunit;II)B"},
   {"UnitRemoveItem", UnitRemoveItem, METH_VARARGS, "Game.base+0024B480 (Hunit;Hitem;)V"},
   {"UnitRemoveItemFromSlot", UnitRemoveItemFromSlot, METH_VARARGS, "Game.base+0024B4C0 (Hunit;I)Hitem;"},
   {"UnitHasItem", UnitHasItem, METH_VARARGS, "Game.base+0024B0A0 (Hunit;Hitem;)B"},
   {"UnitItemInSlot", UnitItemInSlot, METH_VARARGS, "Game.base+0024B260 (Hunit;I)Hitem;"},
   {"UnitInventorySize", UnitInventorySize, METH_VARARGS, "Game.base+0024B1F0 (Hunit;)I"},
   {"UnitDropItemPoint", UnitDropItemPoint, METH_VARARGS, "Game.base+0024AF30 (Hunit;Hitem;RR)B"},
   {"UnitDropItemSlot", UnitDropItemSlot, METH_VARARGS, "Game.base+0024AF90 (Hunit;Hitem;I)B"},
   {"UnitDropItemTarget", UnitDropItemTarget, METH_VARARGS, "Game.base+0024B000 (Hunit;Hitem;Hwidget;)B"},
   {"UnitUseItem", UnitUseItem, METH_VARARGS, "Game.base+0024B740 (Hunit;Hitem;)B"},
   {"UnitUseItemPoint", UnitUseItemPoint, METH_VARARGS, "Game.base+0024B7B0 (Hunit;Hitem;RR)B"},
   {"UnitUseItemTarget", UnitUseItemTarget, METH_VARARGS, "Game.base+0024B820 (Hunit;Hitem;Hwidget;)B"},
   {"GetUnitCurrentOrder", GetUnitCurrentOrder, METH_VARARGS, "Game.base+002361B0 (Hunit;)I"},
   {"SetResourceAmount", SetResourceAmount, METH_VARARGS, "Game.base+002468F0 (Hunit;I)V"},
   {"AddResourceAmount", AddResourceAmount, METH_VARARGS, "Game.base+0022A440 (Hunit;I)V"},
   {"GetResourceAmount", GetResourceAmount, METH_VARARGS, "Game.base+002349E0 (Hunit;)I"},
   {"SelectUnit", SelectUnit, METH_VARARGS, "Game.base+00244020 (Hunit;B)V"},
   {"ClearSelection", ClearSelection, METH_NOARGS, "Game.base+0022B560 ()V"},
   {"UnitAddIndicator", UnitAddIndicator, METH_VARARGS, "Game.base+0024A890 (Hunit;IIII)V"},
   {"AddIndicator", AddIndicator, METH_VARARGS, "Game.base+0022A060 (Hwidget;IIII)V"},
   {"KillUnit", KillUnit, METH_VARARGS, "Game.base+0023FF00 (Hunit;)V"},
   {"RemoveUnit", RemoveUnit, METH_VARARGS, "Game.base+00243290 (Hunit;)V"},
   {"ShowUnit", ShowUnit, METH_VARARGS, "Game.base+00248180 (Hunit;B)V"},
   {"IsUnitInForce", IsUnitInForce, METH_VARARGS, "Game.base+00238B00 (Hunit;Hforce;)B"},
   {"IsUnitInGroup", IsUnitInGroup, METH_VARARGS, "Game.base+00238B40 (Hunit;Hgroup;)B"},
   {"IsUnitOwnedByPlayer", IsUnitOwnedByPlayer, METH_VARARGS, "Game.base+00238DA0 (Hunit;Hplayer;)B"},
   {"IsUnitAlly", IsUnitAlly, METH_VARARGS, "Game.base+00238740 (Hunit;Hplayer;)B"},
   {"IsUnitEnemy", IsUnitEnemy, METH_VARARGS, "Game.base+002387E0 (Hunit;Hplayer;)B"},
   {"IsUnitVisible", IsUnitVisible, METH_VARARGS, "Game.base+002390A0 (Hunit;Hplayer;)B"},
   {"IsUnitDetected", IsUnitDetected, METH_VARARGS, "Game.base+002387A0 (Hunit;Hplayer;)B"},
   {"IsUnitInvisible", IsUnitInvisible, METH_VARARGS, "Game.base+00238CC0 (Hunit;Hplayer;)B"},
   {"IsUnitFogged", IsUnitFogged, METH_VARARGS, "Game.base+00238860 (Hunit;Hplayer;)B"},
   {"IsUnitMasked", IsUnitMasked, METH_VARARGS, "Game.base+00238D20 (Hunit;Hplayer;)B"},
   {"IsUnitSelected", IsUnitSelected, METH_VARARGS, "Game.base+00238E60 (Hunit;Hplayer;)B"},
   {"IsUnitRace", IsUnitRace, METH_VARARGS, "Game.base+00238E30 (Hunit;Hrace;)B"},
   {"IsUnitType", IsUnitType, METH_VARARGS, "Game.base+00238EE0 (Hunit;Hunittype;)B"},
   {"IsUnit", IsUnit, METH_VARARGS, "Game.base+00238710 (Hunit;Hunit;)B"},
   {"IsUnitInRange", IsUnitInRange, METH_VARARGS, "Game.base+00238B70 (Hunit;Hunit;R)B"},
   {"IsUnitInRangeXY", IsUnitInRangeXY, METH_VARARGS, "Game.base+00238C00 (Hunit;RRR)B"},
   {"IsUnitInRangeLoc", IsUnitInRangeLoc, METH_VARARGS, "Game.base+00238BC0 (Hunit;Hlocation;R)B"},
   {"IsUnitHidden", IsUnitHidden, METH_VARARGS, "Game.base+002388E0 (Hunit;)B"},
   {"IsUnitIllusion", IsUnitIllusion, METH_VARARGS, "Game.base+00238AE0 (Hunit;)B"},
   {"IsUnitInTransport", IsUnitInTransport, METH_VARARGS, "Game.base+00238C90 (Hunit;Hunit;)B"},
   {"IsUnitLoaded", IsUnitLoaded, METH_VARARGS, "Game.base+00238D00 (Hunit;)B"},
   {"IsHeroUnitId", IsHeroUnitId, METH_VARARGS, "Game.base+00237D70 (I)B"},
   {"IsUnitIdType", IsUnitIdType, METH_VARARGS, "Game.base+00238900 (IHunittype;)B"},
   {"GetOwningPlayer", GetOwningPlayer, METH_VARARGS, "Game.base+00233DD0 (Hunit;)Hplayer;"},
   {"UnitShareVision", UnitShareVision, METH_VARARGS, "Game.base+0024B650 (Hunit;Hplayer;B)V"},
   {"UnitSuspendDecay", UnitSuspendDecay, METH_VARARGS, "Game.base+0024B6E0 (Hunit;B)V"},
   {"UnitAddType", UnitAddType, METH_VARARGS, "Game.base+0024AC00 (Hunit;Hunittype;)B"},
   {"UnitRemoveType", UnitRemoveType, METH_VARARGS, "Game.base+0024B520 (Hunit;Hunittype;)B"},
   {"UnitAddAbility", UnitAddAbility, METH_VARARGS, "Game.base+0024A820 (Hunit;I)B"},
   {"UnitRemoveAbility", UnitRemoveAbility, METH_VARARGS, "Game.base+0024B3C0 (Hunit;I)B"},
   {"UnitMakeAbilityPermanent", UnitMakeAbilityPermanent, METH_VARARGS, "Game.base+0024B2B0 (Hunit;BI)B"},
   {"UnitHasBuffsEx", UnitHasBuffsEx, METH_VARARGS, "Game.base+0024B060 (Hunit;BBBBBBB)B"},
   {"UnitCountBuffsEx", UnitCountBuffsEx, METH_VARARGS, "Game.base+0024AD50 (Hunit;BBBBBBB)I"},
   {"UnitRemoveBuffs", UnitRemoveBuffs, METH_VARARGS, "Game.base+0024B410 (Hunit;BB)V"},
   {"UnitRemoveBuffsEx", UnitRemoveBuffsEx, METH_VARARGS, "Game.base+0024B440 (Hunit;BBBBBBB)V"},
   {"UnitAddSleep", UnitAddSleep, METH_VARARGS, "Game.base+0024AB60 (Hunit;B)V"},
   {"UnitCanSleep", UnitCanSleep, METH_VARARGS, "Game.base+0024ACD0 (Hunit;)B"},
   {"UnitAddSleepPerm", UnitAddSleepPerm, METH_VARARGS, "Game.base+0024ABB0 (Hunit;B)V"},
   {"UnitCanSleepPerm", UnitCanSleepPerm, METH_VARARGS, "Game.base+0024AD10 (Hunit;)B"},
   {"UnitIsSleeping", UnitIsSleeping, METH_VARARGS, "Game.base+0024B220 (Hunit;)B"},
   {"UnitWakeUp", UnitWakeUp, METH_VARARGS, "Game.base+0024B8A0 (Hunit;)V"},
   {"UnitApplyTimedLife", UnitApplyTimedLife, METH_VARARGS, "Game.base+0024AC60 (Hunit;IR)V"},
   {"UnitIgnoreAlarm", UnitIgnoreAlarm, METH_VARARGS, "Game.base+0024B150 (Hunit;B)B"},
   {"UnitIgnoreAlarmToggled", UnitIgnoreAlarmToggled, METH_VARARGS, "Game.base+0024B1B0 (Hunit;)B"},
   {"UnitDamagePoint", UnitDamagePoint, METH_VARARGS, "Game.base+0024AD90 (Hunit;RRRRRBBHattacktype;Hdamagetype;Hweapontype;)B"},
   {"UnitDamageTarget", UnitDamageTarget, METH_VARARGS, "Game.base+0024AE80 (Hunit;Hwidget;RBBHattacktype;Hdamagetype;Hweapontype;)B"},
   {"DecUnitAbilityLevel", DecUnitAbilityLevel, METH_VARARGS, "Game.base+0022F400 (Hunit;I)I"},
   {"IncUnitAbilityLevel", IncUnitAbilityLevel, METH_VARARGS, "Game.base+00237570 (Hunit;I)I"},
   {"SetUnitAbilityLevel", SetUnitAbilityLevel, METH_VARARGS, "Game.base+00247450 (Hunit;II)I"},
   {"UnitResetCooldown", UnitResetCooldown, METH_VARARGS, "Game.base+0024B580 (Hunit;)V"},
   {"UnitSetConstructionProgress", UnitSetConstructionProgress, METH_VARARGS, "Game.base+0024B5A0 (Hunit;I)V"},
   {"UnitSetUpgradeProgress", UnitSetUpgradeProgress, METH_VARARGS, "Game.base+0024B5E0 (Hunit;I)V"},
   {"UnitPauseTimedLife", UnitPauseTimedLife, METH_VARARGS, "Game.base+0024B360 (Hunit;B)V"},
   {"UnitSetUsesAltIcon", UnitSetUsesAltIcon, METH_VARARGS, "Game.base+0024B620 (Hunit;B)V"},
   {"IssueImmediateOrderById", IssueImmediateOrderById, METH_VARARGS, "Game.base+002392C0 (Hunit;I)B"},
   {"IssuePointOrderById", IssuePointOrderById, METH_VARARGS, "Game.base+00239690 (Hunit;IRR)B"},
   {"IssuePointOrderByIdLoc", IssuePointOrderByIdLoc, METH_VARARGS, "Game.base+00239830 (Hunit;IHlocation;)B"},
   {"IssueTargetOrderById", IssueTargetOrderById, METH_VARARGS, "Game.base+002398E0 (Hunit;IHwidget;)B"},
   {"IssueInstantPointOrderById", IssueInstantPointOrderById, METH_VARARGS, "Game.base+00239360 (Hunit;IRRHwidget;)B"},
   {"IssueInstantTargetOrderById", IssueInstantTargetOrderById, METH_VARARGS, "Game.base+00239410 (Hunit;IHwidget;Hwidget;)B"},
   {"IssueBuildOrderById", IssueBuildOrderById, METH_VARARGS, "Game.base+002391F0 (Hunit;IRR)B"},
   {"IssueNeutralImmediateOrderById", IssueNeutralImmediateOrderById, METH_VARARGS, "Game.base+00239550 (Hplayer;Hunit;I)B"},
   {"IssueNeutralPointOrderById", IssueNeutralPointOrderById, METH_VARARGS, "Game.base+002395B0 (Hplayer;Hunit;IRR)B"},
   {"IssueNeutralTargetOrderById", IssueNeutralTargetOrderById, METH_VARARGS, "Game.base+00239620 (Hplayer;Hunit;IHwidget;)B"},
   {"IssueImmediateOrder", IssueImmediateOrder, METH_VARARGS, "Game.base+002392A0 (Hunit;S)B"},
   {"IssuePointOrder", IssuePointOrder, METH_VARARGS, "Game.base+00239670 (Hunit;SRR)B"},
   {"IssuePointOrderLoc", IssuePointOrderLoc, METH_VARARGS, "Game.base+00239870 (Hunit;SHlocation;)B"},
   {"IssueTargetOrder", IssueTargetOrder, METH_VARARGS, "Game.base+002398C0 (Hunit;SHwidget;)B"},
   {"IssueInstantPointOrder", IssueInstantPointOrder, METH_VARARGS, "Game.base+00239340 (Hunit;SRRHwidget;)B"},
   {"IssueInstantTargetOrder", IssueInstantTargetOrder, METH_VARARGS, "Game.base+002393F0 (Hunit;SHwidget;Hwidget;)B"},
   {"IssueBuildOrder", IssueBuildOrder, METH_VARARGS, "Game.base+002391D0 (Hunit;SRR)B"},
   {"IssueNeutralImmediateOrder", IssueNeutralImmediateOrder, METH_VARARGS, "Game.base+00239530 (Hplayer;Hunit;S)B"},
   {"IssueNeutralPointOrder", IssueNeutralPointOrder, METH_VARARGS, "Game.base+00239590 (Hplayer;Hunit;SRR)B"},
   {"IssueNeutralTargetOrder", IssueNeutralTargetOrder, METH_VARARGS, "Game.base+00239600 (Hplayer;Hunit;SHwidget;)B"},
   {"WaygateGetDestinationX", WaygateGetDestinationX, METH_VARARGS, "Game.base+0024BAA0 (Hunit;)R"},
   {"WaygateGetDestinationY", WaygateGetDestinationY, METH_VARARGS, "Game.base+0024BAF0 (Hunit;)R"},
   {"WaygateSetDestination", WaygateSetDestination, METH_VARARGS, "Game.base+0024BB80 (Hunit;RR)V"},
   {"WaygateActivate", WaygateActivate, METH_VARARGS, "Game.base+0024BA60 (Hunit;B)V"},
   {"WaygateIsActive", WaygateIsActive, METH_VARARGS, "Game.base+0024BB40 (Hunit;)B"},
   {"AddItemToAllStock", AddItemToAllStock, METH_VARARGS, "Game.base+0022A200 (III)V"},
   {"AddItemToStock", AddItemToStock, METH_VARARGS, "Game.base+0022A220 (Hunit;III)V"},
   {"AddUnitToAllStock", AddUnitToAllStock, METH_VARARGS, "Game.base+0022A840 (III)V"},
   {"AddUnitToStock", AddUnitToStock, METH_VARARGS, "Game.base+0022A860 (Hunit;III)V"},
   {"RemoveItemFromAllStock", RemoveItemFromAllStock, METH_VARARGS, "Game.base+00243040 (I)V"},
   {"RemoveItemFromStock", RemoveItemFromStock, METH_VARARGS, "Game.base+00243050 (Hunit;I)V"},
   {"RemoveUnitFromAllStock", RemoveUnitFromAllStock, METH_VARARGS, "Game.base+002432C0 (I)V"},
   {"RemoveUnitFromStock", RemoveUnitFromStock, METH_VARARGS, "Game.base+002432D0 (Hunit;I)V"},
   {"SetAllItemTypeSlots", SetAllItemTypeSlots, METH_VARARGS, "Game.base+00244170 (I)V"},
   {"SetAllUnitTypeSlots", SetAllUnitTypeSlots, METH_VARARGS, "Game.base+00244180 (I)V"},
   {"SetItemTypeSlots", SetItemTypeSlots, METH_VARARGS, "Game.base+00246040 (Hunit;I)V"},
   {"SetUnitTypeSlots", SetUnitTypeSlots, METH_VARARGS, "Game.base+00247E10 (Hunit;I)V"},
   {"GetUnitUserData", GetUnitUserData, METH_VARARGS, "Game.base+002368C0 (Hunit;)I"},
   {"SetUnitUserData", SetUnitUserData, METH_VARARGS, "Game.base+00247EC0 (Hunit;I)V"},
   {"CreateItem", CreateItem, METH_VARARGS, "Game.base+0022E450 (IRR)Hitem;"},
   {"RemoveItem", RemoveItem, METH_VARARGS, "Game.base+00243010 (Hitem;)V"},
   {"GetItemPlayer", GetItemPlayer, METH_VARARGS, "Game.base+00232E80 (Hitem;)Hplayer;"},
   {"GetItemTypeId", GetItemTypeId, METH_VARARGS, "Game.base+00232EF0 (Hitem;)I"},
   {"GetItemX", GetItemX, METH_VARARGS, "Game.base+00232F30 (Hitem;)R"},
   {"GetItemY", GetItemY, METH_VARARGS, "Game.base+00232F70 (Hitem;)R"},
   {"SetItemPosition", SetItemPosition, METH_VARARGS, "Game.base+00245FC0 (Hitem;RR)V"},
   {"SetItemDropOnDeath", SetItemDropOnDeath, METH_VARARGS, "Game.base+00245EE0 (Hitem;B)V"},
   {"SetItemDroppable", SetItemDroppable, METH_VARARGS, "Game.base+00245F10 (Hitem;B)V"},
   {"SetItemPawnable", SetItemPawnable, METH_VARARGS, "Game.base+00245F60 (Hitem;B)V"},
   {"SetItemPlayer", SetItemPlayer, METH_VARARGS, "Game.base+00245F90 (Hitem;Hplayer;B)V"},
   {"SetItemInvulnerable", SetItemInvulnerable, METH_VARARGS, "Game.base+00245F40 (Hitem;B)V"},
   {"IsItemInvulnerable", IsItemInvulnerable, METH_VARARGS, "Game.base+00237E30 (Hitem;)B"},
   {"GetItemLevel", GetItemLevel, METH_VARARGS, "Game.base+00232E30 (Hitem;)I"},
   {"GetItemType", GetItemType, METH_VARARGS, "Game.base+00232ED0 (Hitem;)Hitemtype;"},
   {"SetItemVisible", SetItemVisible, METH_VARARGS, "Game.base+002460A0 (Hitem;B)V"},
   {"IsItemVisible", IsItemVisible, METH_VARARGS, "Game.base+00237EF0 (Hitem;)B"},
   {"EnumItemsInRect", EnumItemsInRect, METH_VARARGS, "Game.base+00230480 (Hrect;Hboolexpr;C)V"},
   {"IsItemOwned", IsItemOwned, METH_VARARGS, "Game.base+00237E50 (Hitem;)B"},
   {"IsItemPowerup", IsItemPowerup, METH_VARARGS, "Game.base+00237EB0 (Hitem;)B"},
   {"IsItemSellable", IsItemSellable, METH_VARARGS, "Game.base+00237ED0 (Hitem;)B"},
   {"IsItemPawnable", IsItemPawnable, METH_VARARGS, "Game.base+00237E90 (Hitem;)B"},
   {"IsItemIdPowerup", IsItemIdPowerup, METH_VARARGS, "Game.base+00237E10 (I)B"},
   {"IsItemIdSellable", IsItemIdSellable, METH_VARARGS, "Game.base+00237E20 (I)B"},
   {"IsItemIdPawnable", IsItemIdPawnable, METH_VARARGS, "Game.base+00237E00 (I)B"},
   {"SetItemDropID", SetItemDropID, METH_VARARGS, "Game.base+00245EC0 (Hitem;I)V"},
   {"GetItemName", GetItemName, METH_VARARGS, "Game.base+00232E50 (Hitem;)S"},
   {"GetItemCharges", GetItemCharges, METH_VARARGS, "Game.base+00232E10 (Hitem;)I"},
   {"SetItemCharges", SetItemCharges, METH_VARARGS, "Game.base+00245E60 (Hitem;I)V"},
   {"GetItemUserData", GetItemUserData, METH_VARARGS, "Game.base+00232F10 (Hitem;)I"},
   {"SetItemUserData", SetItemUserData, METH_VARARGS, "Game.base+00246080 (Hitem;I)V"},
   {"Player", Player, METH_VARARGS, "Game.base+00242080 (I)Hplayer;"},
   {"GetLocalPlayer", GetLocalPlayer, METH_NOARGS, "Game.base+00233380 ()Hplayer;"},
   {"IsPlayerAlly", IsPlayerAlly, METH_VARARGS, "Game.base+00238260 (Hplayer;Hplayer;)B"},
   {"IsPlayerEnemy", IsPlayerEnemy, METH_VARARGS, "Game.base+002382B0 (Hplayer;Hplayer;)B"},
   {"IsPlayerInForce", IsPlayerInForce, METH_VARARGS, "Game.base+00238360 (Hplayer;Hforce;)B"},
   {"IsPlayerObserver", IsPlayerObserver, METH_VARARGS, "Game.base+00238390 (Hplayer;)B"},
   {"GetPlayerRace", GetPlayerRace, METH_VARARGS, "Game.base+00233FA0 (Hplayer;)Hrace;"},
   {"GetPlayerId", GetPlayerId, METH_VARARGS, "Game.base+00233F50 (Hplayer;)I"},
   {"SetPlayerTechMaxAllowed", SetPlayerTechMaxAllowed, METH_VARARGS, "Game.base+00246720 (Hplayer;II)V"},
   {"GetPlayerTechMaxAllowed", GetPlayerTechMaxAllowed, METH_VARARGS, "Game.base+002343F0 (Hplayer;I)I"},
   {"AddPlayerTechResearched", AddPlayerTechResearched, METH_VARARGS, "Game.base+0022A3E0 (Hplayer;II)V"},
   {"SetPlayerTechResearched", SetPlayerTechResearched, METH_VARARGS, "Game.base+00246750 (Hplayer;II)V"},
   {"GetPlayerTechResearched", GetPlayerTechResearched, METH_VARARGS, "Game.base+00234430 (Hplayer;IB)B"},
   {"GetPlayerTechCount", GetPlayerTechCount, METH_VARARGS, "Game.base+002343C0 (Hplayer;IB)I"},
   {"SetPlayerAbilityAvailable", SetPlayerAbilityAvailable, METH_VARARGS, "Game.base+00246310 (Hplayer;IB)V"},
   {"GetPlayerUnitCount", GetPlayerUnitCount, METH_VARARGS, "Game.base+002344D0 (Hplayer;B)I"},
   {"GetPlayerTypedUnitCount", GetPlayerTypedUnitCount, METH_VARARGS, "Game.base+00234460 (Hplayer;SBB)I"},
   {"GetPlayerStructureCount", GetPlayerStructureCount, METH_VARARGS, "Game.base+00234310 (Hplayer;B)I"},
   {"IsVisibleToPlayer", IsVisibleToPlayer, METH_VARARGS, "Game.base+00239170 (RRHplayer;)B"},
   {"IsLocationVisibleToPlayer", IsLocationVisibleToPlayer, METH_VARARGS, "Game.base+00238000 (Hlocation;Hplayer;)B"},
   {"IsFoggedToPlayer", IsFoggedToPlayer, METH_VARARGS, "Game.base+00237C30 (RRHplayer;)B"},
   {"IsLocationFoggedToPlayer", IsLocationFoggedToPlayer, METH_VARARGS, "Game.base+00237F40 (Hlocation;Hplayer;)B"},
   {"IsMaskedToPlayer", IsMaskedToPlayer, METH_VARARGS, "Game.base+00238110 (RRHplayer;)B"},
   {"IsLocationMaskedToPlayer", IsLocationMaskedToPlayer, METH_VARARGS, "Game.base+00237FC0 (Hlocation;Hplayer;)B"},
   {"SetPlayerState", SetPlayerState, METH_VARARGS, "Game.base+00246630 (Hplayer;Hplayerstate;I)V"},
   {"GetPlayerState", GetPlayerState, METH_VARARGS, "Game.base+002342B0 (Hplayer;Hplayerstate;)I"},
   {"GetPlayerScore", GetPlayerScore, METH_VARARGS, "Game.base+00233FC0 (Hplayer;Hplayerscore;)I"},
   {"GetPlayerAlliance", GetPlayerAlliance, METH_VARARGS, "Game.base+00233E80 (Hplayer;Hplayer;Halliancetype;)B"},
   {"RemovePlayer", RemovePlayer, METH_VARARGS, "Game.base+002430C0 (Hplayer;Hplayergameresult;)V"},
   {"CachePlayerHeroData", CachePlayerHeroData, METH_VARARGS, "Game.base+0022ABC0 (Hplayer;)V"},
   {"GetPlayerHandicap", GetPlayerHandicap, METH_VARARGS, "Game.base+00233F10 (Hplayer;)R"},
   {"SetPlayerHandicap", SetPlayerHandicap, METH_VARARGS, "Game.base+00246430 (Hplayer;R)V"},
   {"GetPlayerHandicapXP", GetPlayerHandicapXP, METH_VARARGS, "Game.base+00233F30 (Hplayer;)R"},
   {"SetPlayerHandicapXP", SetPlayerHandicapXP, METH_VARARGS, "Game.base+002464F0 (Hplayer;R)V"},
   {"SetPlayerUnitsOwner", SetPlayerUnitsOwner, METH_VARARGS, "Game.base+00246790 (Hplayer;I)V"},
   {"CripplePlayer", CripplePlayer, METH_VARARGS, "Game.base+0022F350 (Hplayer;Hforce;B)V"},
   {"VersionGet", VersionGet, METH_NOARGS, "Game.base+0024B9E0 ()Hversion;"},
   {"VersionCompatible", VersionCompatible, METH_VARARGS, "Game.base+0024B9D0 (Hversion;)B"},
   {"VersionSupported", VersionSupported, METH_VARARGS, "Game.base+0024B9F0 (Hversion;)B"},
   {"EndGame", EndGame, METH_VARARGS, "Game.base+00230350 (B)V"},
   {"ChangeLevel", ChangeLevel, METH_VARARGS, "Game.base+0022B1F0 (SB)V"},
   {"RestartGame", RestartGame, METH_VARARGS, "Game.base+002434F0 (B)V"},
   {"ReloadGame", ReloadGame, METH_NOARGS, "Game.base+00242F30 ()V"},
   {"LoadGame", LoadGame, METH_VARARGS, "Game.base+00240860 (SB)V"},
   {"SaveGame", SaveGame, METH_VARARGS, "Game.base+002439E0 (S)V"},
   {"RenameSaveDirectory", RenameSaveDirectory, METH_VARARGS, "Game.base+00243320 (SS)B"},
   {"RemoveSaveDirectory", RemoveSaveDirectory, METH_VARARGS, "Game.base+00243120 (S)B"},
   {"CopySaveGame", CopySaveGame, METH_VARARGS, "Game.base+0022BC40 (SS)B"},
   {"SaveGameExists", SaveGameExists, METH_VARARGS, "Game.base+00243AD0 (S)B"},
   {"SetFloatGameState", SetFloatGameState, METH_VARARGS, "Game.base+002450B0 (Hfgamestate;R)V"},
   {"GetFloatGameState", GetFloatGameState, METH_VARARGS, "Game.base+00232750 (Hfgamestate;)R"},
   {"SetIntegerGameState", SetIntegerGameState, METH_VARARGS, "Game.base+00245DD0 (Higamestate;I)V"},
   {"GetIntegerGameState", GetIntegerGameState, METH_VARARGS, "Game.base+00232D60 (Higamestate;)I"},
   {"SyncSelections", SyncSelections, METH_NOARGS, "Game.base+00248BB0 ()V"},
   {"DialogCreate", DialogCreate, METH_NOARGS, "Game.base+0022FCB0 ()Hdialog;"},
   {"DialogDestroy", DialogDestroy, METH_VARARGS, "Game.base+0022FDA0 (Hdialog;)V"},
   {"DialogSetAsync", DialogSetAsync, METH_VARARGS, "Game.base+0022FE10 (Hdialog;)V"},
   {"DialogClear", DialogClear, METH_VARARGS, "Game.base+0022FC90 (Hdialog;)V"},
   {"DialogSetMessage", DialogSetMessage, METH_VARARGS, "Game.base+0022FE30 (Hdialog;S)V"},
   {"DialogAddButton", DialogAddButton, METH_VARARGS, "Game.base+0022FBF0 (Hdialog;SI)Hbutton;"},
   {"DialogAddQuitButton", DialogAddQuitButton, METH_VARARGS, "Game.base+0022FC40 (Hdialog;BSI)Hbutton;"},
   {"DialogDisplay", DialogDisplay, METH_VARARGS, "Game.base+0022FDC0 (Hplayer;Hdialog;B)V"},
   {"SetMissionAvailable", SetMissionAvailable, METH_VARARGS, "Game.base+00246260 (IIB)V"},
   {"SetCampaignAvailable", SetCampaignAvailable, METH_VARARGS, "Game.base+00244660 (IB)V"},
   {"SetCampaignMenuRace", SetCampaignMenuRace, METH_VARARGS, "Game.base+00244690 (Hrace;)V"},
   {"SetCampaignMenuRaceEx", SetCampaignMenuRaceEx, METH_VARARGS, "Game.base+002446C0 (I)V"},
   {"ForceCampaignSelectScreen", ForceCampaignSelectScreen, METH_NOARGS, "Game.base+00230EF0 ()V"},
   {"SetOpCinematicAvailable", SetOpCinematicAvailable, METH_VARARGS, "Game.base+002462E0 (IB)V"},
   {"SetEdCinematicAvailable", SetEdCinematicAvailable, METH_VARARGS, "Game.base+00244FF0 (IB)V"},
   {"SetTutorialCleared", SetTutorialCleared, METH_VARARGS, "Game.base+002473E0 (B)V"},
   {"GetDefaultDifficulty", GetDefaultDifficulty, METH_NOARGS, "Game.base+00232160 ()Hgamedifficulty;"},
   {"SetDefaultDifficulty", SetDefaultDifficulty, METH_VARARGS, "Game.base+00244C90 (Hgamedifficulty;)V"},
   {"ReloadGameCachesFromDisk", ReloadGameCachesFromDisk, METH_NOARGS, "Game.base+00242F50 ()B"},
   {"SetCustomCampaignButtonVisible", SetCustomCampaignButtonVisible, METH_VARARGS, "Game.base+00244C30 (IB)V"},
   {"GetCustomCampaignButtonVisible", GetCustomCampaignButtonVisible, METH_VARARGS, "Game.base+002320F0 (I)B"},
   {"DoNotSaveReplay", DoNotSaveReplay, METH_NOARGS, "Game.base+00230130 ()V"},
   {"InitGameCache", InitGameCache, METH_VARARGS, "Game.base+002375F0 (S)Hgamecache;"},
   {"SaveGameCache", SaveGameCache, METH_VARARGS, "Game.base+00243AA0 (Hgamecache;)B"},
   {"StoreInteger", StoreInteger, METH_VARARGS, "Game.base+00248590 (Hgamecache;SSI)V"},
   {"StoreReal", StoreReal, METH_VARARGS, "Game.base+002485E0 (Hgamecache;SSR)V"},
   {"StoreBoolean", StoreBoolean, METH_VARARGS, "Game.base+00248530 (Hgamecache;SSB)V"},
   {"StoreUnit", StoreUnit, METH_VARARGS, "Game.base+00248690 (Hgamecache;SSHunit;)B"},
   {"StoreString", StoreString, METH_VARARGS, "Game.base+00248630 (Hgamecache;SSS)B"},
   {"SaveInteger", SaveInteger, METH_VARARGS, "Game.base+00243BA0 (Hhashtable;III)V"},
   {"SaveReal", SaveReal, METH_VARARGS, "Game.base+00243D20 (Hhashtable;IIR)V"},
   {"SaveBoolean", SaveBoolean, METH_VARARGS, "Game.base+00243880 (Hhashtable;IIB)V"},
   {"SaveStr", SaveStr, METH_VARARGS, "Game.base+00243E00 (Hhashtable;IIS)B"},
   {"SavePlayerHandle", SavePlayerHandle, METH_VARARGS, "Game.base+00243CC0 (Hhashtable;IIHplayer;)B"},
   {"SaveWidgetHandle", SaveWidgetHandle, METH_VARARGS, "Game.base+00243FA0 (Hhashtable;IIHwidget;)B"},
   {"SaveDestructableHandle", SaveDestructableHandle, METH_VARARGS, "Game.base+00243920 (Hhashtable;IIHdestructable;)B"},
   {"SaveItemHandle", SaveItemHandle, METH_VARARGS, "Game.base+00243BE0 (Hhashtable;IIHitem;)B"},
   {"SaveUnitHandle", SaveUnitHandle, METH_VARARGS, "Game.base+00243F60 (Hhashtable;IIHunit;)B"},
   {"SaveAbilityHandle", SaveAbilityHandle, METH_VARARGS, "Game.base+00243840 (Hhashtable;IIHability;)B"},
   {"SaveTimerHandle", SaveTimerHandle, METH_VARARGS, "Game.base+00243E80 (Hhashtable;IIHtimer;)B"},
   {"SaveRegionHandle", SaveRegionHandle, METH_VARARGS, "Game.base+00243D80 (Hhashtable;IIHregion;)B"},
   {"SaveTriggerHandle", SaveTriggerHandle, METH_VARARGS, "Game.base+00243F20 (Hhashtable;IIHtrigger;)B"},
   {"SaveTriggerConditionHandle", SaveTriggerConditionHandle, METH_VARARGS, "Game.base+00243EE0 (Hhashtable;IIHtriggercondition;)B"},
   {"SaveTriggerActionHandle", SaveTriggerActionHandle, METH_VARARGS, "Game.base+00243EC0 (Hhashtable;IIHtriggeraction;)B"},
   {"SaveTriggerEventHandle", SaveTriggerEventHandle, METH_VARARGS, "Game.base+00243F00 (Hhashtable;IIHevent;)B"},
   {"SaveForceHandle", SaveForceHandle, METH_VARARGS, "Game.base+002439C0 (Hhashtable;IIHforce;)B"},
   {"SaveGroupHandle", SaveGroupHandle, METH_VARARGS, "Game.base+00243B40 (Hhashtable;IIHgroup;)B"},
   {"SaveLocationHandle", SaveLocationHandle, METH_VARARGS, "Game.base+00243C60 (Hhashtable;IIHlocation;)B"},
   {"SaveRectHandle", SaveRectHandle, METH_VARARGS, "Game.base+00243D60 (Hhashtable;IIHrect;)B"},
   {"SaveBooleanExprHandle", SaveBooleanExprHandle, METH_VARARGS, "Game.base+002438C0 (Hhashtable;IIHboolexpr;)B"},
   {"SaveSoundHandle", SaveSoundHandle, METH_VARARGS, "Game.base+00243DE0 (Hhashtable;IIHsound;)B"},
   {"SaveEffectHandle", SaveEffectHandle, METH_VARARGS, "Game.base+00243960 (Hhashtable;IIHeffect;)B"},
   {"SaveUnitPoolHandle", SaveUnitPoolHandle, METH_VARARGS, "Game.base+00243F80 (Hhashtable;IIHunitpool;)B"},
   {"SaveItemPoolHandle", SaveItemPoolHandle, METH_VARARGS, "Game.base+00243C00 (Hhashtable;IIHitempool;)B"},
   {"SaveQuestHandle", SaveQuestHandle, METH_VARARGS, "Game.base+00243CE0 (Hhashtable;IIHquest;)B"},
   {"SaveQuestItemHandle", SaveQuestItemHandle, METH_VARARGS, "Game.base+00243D00 (Hhashtable;IIHquestitem;)B"},
   {"SaveDefeatConditionHandle", SaveDefeatConditionHandle, METH_VARARGS, "Game.base+00243900 (Hhashtable;IIHdefeatcondition;)B"},
   {"SaveTimerDialogHandle", SaveTimerDialogHandle, METH_VARARGS, "Game.base+00243E60 (Hhashtable;IIHtimerdialog;)B"},
   {"SaveLeaderboardHandle", SaveLeaderboardHandle, METH_VARARGS, "Game.base+00243C20 (Hhashtable;IIHleaderboard;)B"},
   {"SaveMultiboardHandle", SaveMultiboardHandle, METH_VARARGS, "Game.base+00243C80 (Hhashtable;IIHmultiboard;)B"},
   {"SaveMultiboardItemHandle", SaveMultiboardItemHandle, METH_VARARGS, "Game.base+00243CA0 (Hhashtable;IIHmultiboarditem;)B"},
   {"SaveTrackableHandle", SaveTrackableHandle, METH_VARARGS, "Game.base+00243EA0 (Hhashtable;IIHtrackable;)B"},
   {"SaveDialogHandle", SaveDialogHandle, METH_VARARGS, "Game.base+00243940 (Hhashtable;IIHdialog;)B"},
   {"SaveButtonHandle", SaveButtonHandle, METH_VARARGS, "Game.base+002438E0 (Hhashtable;IIHbutton;)B"},
   {"SaveTextTagHandle", SaveTextTagHandle, METH_VARARGS, "Game.base+00243E40 (Hhashtable;IIHtexttag;)B"},
   {"SaveLightningHandle", SaveLightningHandle, METH_VARARGS, "Game.base+00243C40 (Hhashtable;IIHlightning;)B"},
   {"SaveImageHandle", SaveImageHandle, METH_VARARGS, "Game.base+00243B80 (Hhashtable;IIHimage;)B"},
   {"SaveUbersplatHandle", SaveUbersplatHandle, METH_VARARGS, "Game.base+00243F40 (Hhashtable;IIHubersplat;)B"},
   {"SaveFogStateHandle", SaveFogStateHandle, METH_VARARGS, "Game.base+002439A0 (Hhashtable;IIHfogstate;)B"},
   {"SaveFogModifierHandle", SaveFogModifierHandle, METH_VARARGS, "Game.base+00243980 (Hhashtable;IIHfogmodifier;)B"},
   {"SaveAgentHandle", SaveAgentHandle, METH_VARARGS, "Game.base+00243860 (Hhashtable;IIHagent;)B"},
   {"SaveHashtableHandle", SaveHashtableHandle, METH_VARARGS, "Game.base+00243B60 (Hhashtable;IIHhashtable;)B"},
   {"SyncStoredInteger", SyncStoredInteger, METH_VARARGS, "Game.base+00248C50 (Hgamecache;SS)V"},
   {"SyncStoredReal", SyncStoredReal, METH_VARARGS, "Game.base+00248CB0 (Hgamecache;SS)V"},
   {"SyncStoredBoolean", SyncStoredBoolean, METH_VARARGS, "Game.base+00248BF0 (Hgamecache;SS)V"},
   {"SyncStoredUnit", SyncStoredUnit, METH_VARARGS, "Game.base+00248D70 (Hgamecache;SS)V"},
   {"SyncStoredString", SyncStoredString, METH_VARARGS, "Game.base+00248D10 (Hgamecache;SS)V"},
   {"GetStoredInteger", GetStoredInteger, METH_VARARGS, "Game.base+00235940 (Hgamecache;SS)I"},
   {"GetStoredReal", GetStoredReal, METH_VARARGS, "Game.base+00235990 (Hgamecache;SS)R"},
   {"GetStoredBoolean", GetStoredBoolean, METH_VARARGS, "Game.base+002358F0 (Hgamecache;SS)B"},
   {"RestoreUnit", RestoreUnit, METH_VARARGS, "Game.base+00243520 (Hgamecache;SSHplayer;RRR)Hunit;"},
   {"GetStoredString", GetStoredString, METH_VARARGS, "Game.base+002359F0 (Hgamecache;SS)S"},
   {"HaveStoredInteger", HaveStoredInteger, METH_VARARGS, "Game.base+00237320 (Hgamecache;SS)B"},
   {"HaveStoredReal", HaveStoredReal, METH_VARARGS, "Game.base+00237370 (Hgamecache;SS)B"},
   {"HaveStoredBoolean", HaveStoredBoolean, METH_VARARGS, "Game.base+002372D0 (Hgamecache;SS)B"},
   {"HaveStoredUnit", HaveStoredUnit, METH_VARARGS, "Game.base+00237410 (Hgamecache;SS)B"},
   {"HaveStoredString", HaveStoredString, METH_VARARGS, "Game.base+002373C0 (Hgamecache;SS)B"},
   {"FlushGameCache", FlushGameCache, METH_VARARGS, "Game.base+00230B70 (Hgamecache;)V"},
   {"FlushStoredMission", FlushStoredMission, METH_VARARGS, "Game.base+00230C90 (Hgamecache;S)V"},
   {"FlushStoredInteger", FlushStoredInteger, METH_VARARGS, "Game.base+00230C40 (Hgamecache;SS)V"},
   {"FlushStoredReal", FlushStoredReal, METH_VARARGS, "Game.base+00230CD0 (Hgamecache;SS)V"},
   {"FlushStoredBoolean", FlushStoredBoolean, METH_VARARGS, "Game.base+00230BF0 (Hgamecache;SS)V"},
   {"FlushStoredUnit", FlushStoredUnit, METH_VARARGS, "Game.base+00230D70 (Hgamecache;SS)V"},
   {"FlushStoredString", FlushStoredString, METH_VARARGS, "Game.base+00230D20 (Hgamecache;SS)V"},
   {"InitHashtable", InitHashtable, METH_NOARGS, "Game.base+00237700 ()Hhashtable;"},
   {"LoadInteger", LoadInteger, METH_VARARGS, "Game.base+00240940 (Hhashtable;II)I;"},
   {"LoadReal", LoadReal, METH_VARARGS, "Game.base+00240AC0 (Hhashtable;II)R;"},
   {"LoadBoolean", LoadBoolean, METH_VARARGS, "Game.base+00240700 (Hhashtable;II)B;"},
   {"LoadStr", LoadStr, METH_VARARGS, "Game.base+00240C60 (Hhashtable;II)S;"},
   {"LoadPlayerHandle", LoadPlayerHandle, METH_VARARGS, "Game.base+00240A60 (Hhashtable;II)Hplayer;"},
   {"LoadWidgetHandle", LoadWidgetHandle, METH_VARARGS, "Game.base+00240E00 (Hhashtable;II)Hwidget;"},
   {"LoadDestructableHandle", LoadDestructableHandle, METH_VARARGS, "Game.base+002407A0 (Hhashtable;II)Hdestructable;"},
   {"LoadItemHandle", LoadItemHandle, METH_VARARGS, "Game.base+00240980 (Hhashtable;II)Hitem;"},
   {"LoadUnitHandle", LoadUnitHandle, METH_VARARGS, "Game.base+00240DC0 (Hhashtable;II)Hunit;"},
   {"LoadAbilityHandle", LoadAbilityHandle, METH_VARARGS, "Game.base+002406E0 (Hhashtable;II)Hability;"},
   {"LoadTimerHandle", LoadTimerHandle, METH_VARARGS, "Game.base+00240CE0 (Hhashtable;II)Htimer;"},
   {"LoadRegionHandle", LoadRegionHandle, METH_VARARGS, "Game.base+00240B20 (Hhashtable;II)Hregion;"},
   {"LoadTriggerHandle", LoadTriggerHandle, METH_VARARGS, "Game.base+00240D80 (Hhashtable;II)Htrigger;"},
   {"LoadTriggerConditionHandle", LoadTriggerConditionHandle, METH_VARARGS, "Game.base+00240D40 (Hhashtable;II)Htriggercondition;"},
   {"LoadTriggerActionHandle", LoadTriggerActionHandle, METH_VARARGS, "Game.base+00240D20 (Hhashtable;II)Htriggeraction;"},
   {"LoadTriggerEventHandle", LoadTriggerEventHandle, METH_VARARGS, "Game.base+00240D60 (Hhashtable;II)Hevent;"},
   {"LoadForceHandle", LoadForceHandle, METH_VARARGS, "Game.base+00240840 (Hhashtable;II)Hforce;"},
   {"LoadGroupHandle", LoadGroupHandle, METH_VARARGS, "Game.base+002408E0 (Hhashtable;II)Hgroup;"},
   {"LoadLocationHandle", LoadLocationHandle, METH_VARARGS, "Game.base+00240A00 (Hhashtable;II)Hlocation;"},
   {"LoadRectHandle", LoadRectHandle, METH_VARARGS, "Game.base+00240B00 (Hhashtable;II)Hrect;"},
   {"LoadBooleanExprHandle", LoadBooleanExprHandle, METH_VARARGS, "Game.base+00240740 (Hhashtable;II)Hboolexpr;"},
   {"LoadSoundHandle", LoadSoundHandle, METH_VARARGS, "Game.base+00240C40 (Hhashtable;II)Hsound;"},
   {"LoadEffectHandle", LoadEffectHandle, METH_VARARGS, "Game.base+002407E0 (Hhashtable;II)Heffect;"},
   {"LoadUnitPoolHandle", LoadUnitPoolHandle, METH_VARARGS, "Game.base+00240DE0 (Hhashtable;II)Hunitpool;"},
   {"LoadItemPoolHandle", LoadItemPoolHandle, METH_VARARGS, "Game.base+002409A0 (Hhashtable;II)Hitempool;"},
   {"LoadQuestHandle", LoadQuestHandle, METH_VARARGS, "Game.base+00240A80 (Hhashtable;II)Hquest;"},
   {"LoadQuestItemHandle", LoadQuestItemHandle, METH_VARARGS, "Game.base+00240AA0 (Hhashtable;II)Hquestitem;"},
   {"LoadDefeatConditionHandle", LoadDefeatConditionHandle, METH_VARARGS, "Game.base+00240780 (Hhashtable;II)Hdefeatcondition;"},
   {"LoadTimerDialogHandle", LoadTimerDialogHandle, METH_VARARGS, "Game.base+00240CC0 (Hhashtable;II)Htimerdialog;"},
   {"LoadLeaderboardHandle", LoadLeaderboardHandle, METH_VARARGS, "Game.base+002409C0 (Hhashtable;II)Hleaderboard;"},
   {"LoadMultiboardHandle", LoadMultiboardHandle, METH_VARARGS, "Game.base+00240A20 (Hhashtable;II)Hmultiboard;"},
   {"LoadMultiboardItemHandle", LoadMultiboardItemHandle, METH_VARARGS, "Game.base+00240A40 (Hhashtable;II)Hmultiboarditem;"},
   {"LoadTrackableHandle", LoadTrackableHandle, METH_VARARGS, "Game.base+00240D00 (Hhashtable;II)Htrackable;"},
   {"LoadDialogHandle", LoadDialogHandle, METH_VARARGS, "Game.base+002407C0 (Hhashtable;II)Hdialog;"},
   {"LoadButtonHandle", LoadButtonHandle, METH_VARARGS, "Game.base+00240760 (Hhashtable;II)Hbutton;"},
   {"LoadTextTagHandle", LoadTextTagHandle, METH_VARARGS, "Game.base+00240CA0 (Hhashtable;II)Htexttag;"},
   {"LoadLightningHandle", LoadLightningHandle, METH_VARARGS, "Game.base+002409E0 (Hhashtable;II)Hlightning;"},
   {"LoadImageHandle", LoadImageHandle, METH_VARARGS, "Game.base+00240920 (Hhashtable;II)Himage;"},
   {"LoadUbersplatHandle", LoadUbersplatHandle, METH_VARARGS, "Game.base+00240DA0 (Hhashtable;II)Hubersplat;"},
   {"LoadFogStateHandle", LoadFogStateHandle, METH_VARARGS, "Game.base+00240820 (Hhashtable;II)Hfogstate;"},
   {"LoadFogModifierHandle", LoadFogModifierHandle, METH_VARARGS, "Game.base+00240800 (Hhashtable;II)Hfogmodifier;"},
   {"LoadHashtableHandle", LoadHashtableHandle, METH_VARARGS, "Game.base+00240900 (Hhashtable;II)Hhashtable;"},
   {"HaveSavedInteger", HaveSavedInteger, METH_VARARGS, "Game.base+00237210 (Hhashtable;II)B"},
   {"HaveSavedReal", HaveSavedReal, METH_VARARGS, "Game.base+00237250 (Hhashtable;II)B"},
   {"HaveSavedBoolean", HaveSavedBoolean, METH_VARARGS, "Game.base+00237190 (Hhashtable;II)B"},
   {"HaveSavedString", HaveSavedString, METH_VARARGS, "Game.base+00237290 (Hhashtable;II)B"},
   {"HaveSavedHandle", HaveSavedHandle, METH_VARARGS, "Game.base+002371D0 (Hhashtable;II)B"},
   {"RemoveSavedInteger", RemoveSavedInteger, METH_VARARGS, "Game.base+00243200 (Hhashtable;II)V"},
   {"RemoveSavedReal", RemoveSavedReal, METH_VARARGS, "Game.base+00243230 (Hhashtable;II)V"},
   {"RemoveSavedBoolean", RemoveSavedBoolean, METH_VARARGS, "Game.base+002431A0 (Hhashtable;II)V"},
   {"RemoveSavedString", RemoveSavedString, METH_VARARGS, "Game.base+00243260 (Hhashtable;II)V"},
   {"RemoveSavedHandle", RemoveSavedHandle, METH_VARARGS, "Game.base+002431D0 (Hhashtable;II)V"},
   {"FlushParentHashtable", FlushParentHashtable, METH_VARARGS, "Game.base+00230BB0 (Hhashtable;)V"},
   {"FlushChildHashtable", FlushChildHashtable, METH_VARARGS, "Game.base+00230B40 (Hhashtable;I)V"},
   {"GetRandomInt", GetRandomInt, METH_VARARGS, "Game.base+00234610 (II)I"},
   {"GetRandomReal", GetRandomReal, METH_VARARGS, "Game.base+00234650 (RR)R"},
   {"CreateUnitPool", CreateUnitPool, METH_NOARGS, "Game.base+0022F250 ()Hunitpool;"},
   {"DestroyUnitPool", DestroyUnitPool, METH_VARARGS, "Game.base+0022FA60 (Hunitpool;)V"},
   {"UnitPoolAddUnitType", UnitPoolAddUnitType, METH_VARARGS, "Game.base+0024B380 (Hunitpool;IR)V"},
   {"UnitPoolRemoveUnitType", UnitPoolRemoveUnitType, METH_VARARGS, "Game.base+0024B3A0 (Hunitpool;I)V"},
   {"PlaceRandomUnit", PlaceRandomUnit, METH_VARARGS, "Game.base+00241F10 (Hunitpool;Hplayer;RRR)Hunit;"},
   {"CreateItemPool", CreateItemPool, METH_NOARGS, "Game.base+0022E480 ()Hitempool;"},
   {"DestroyItemPool", DestroyItemPool, METH_VARARGS, "Game.base+0022F8D0 (Hitempool;)V"},
   {"ItemPoolAddItemType", ItemPoolAddItemType, METH_VARARGS, "Game.base+00239BA0 (Hitempool;IR)V"},
   {"ItemPoolRemoveItemType", ItemPoolRemoveItemType, METH_VARARGS, "Game.base+00239BC0 (Hitempool;I)V"},
   {"PlaceRandomItem", PlaceRandomItem, METH_VARARGS, "Game.base+00241ED0 (Hitempool;RR)Hitem;"},
   {"ChooseRandomCreep", ChooseRandomCreep, METH_VARARGS, "Game.base+0022B2F0 (I)I"},
   {"ChooseRandomNPBuilding", ChooseRandomNPBuilding, METH_NOARGS, "Game.base+0022B350 ()I"},
   {"ChooseRandomItem", ChooseRandomItem, METH_VARARGS, "Game.base+0022B310 (I)I"},
   {"ChooseRandomItemEx", ChooseRandomItemEx, METH_VARARGS, "Game.base+0022B330 (Hitemtype;I)I"},
   {"SetRandomSeed", SetRandomSeed, METH_VARARGS, "Game.base+002467C0 (I)V"},
   {"DisplayTextToPlayer", DisplayTextToPlayer, METH_VARARGS, "Game.base+0022FF30 (Hplayer;RRS)V"},
   {"DisplayTimedTextToPlayer", DisplayTimedTextToPlayer, METH_VARARGS, "Game.base+002300C0 (Hplayer;RRRS)V"},
   {"DisplayTimedTextFromPlayer", DisplayTimedTextFromPlayer, METH_VARARGS, "Game.base+0022FFE0 (Hplayer;RRRS)V"},
   {"ClearTextMessages", ClearTextMessages, METH_NOARGS, "Game.base+0022B770 ()V"},
   {"EnableUserControl", EnableUserControl, METH_VARARGS, "Game.base+00230280 (B)V"},
   {"EnableUserUI", EnableUserUI, METH_VARARGS, "Game.base+002302B0 (B)V"},
   {"DisableRestartMission", DisableRestartMission, METH_VARARGS, "Game.base+0022FE80 (B)V"},
   {"ForceUIKey", ForceUIKey, METH_VARARGS, "Game.base+00231150 (S)V"},
   {"ForceUICancel", ForceUICancel, METH_NOARGS, "Game.base+002310D0 ()V"},
   {"DisplayLoadDialog", DisplayLoadDialog, METH_NOARGS, "Game.base+0022FF10 ()V"},
   {"SetTerrainFog", SetTerrainFog, METH_VARARGS, "Game.base+00246EB0 (RRRRR)V"},
   {"SetUnitFog", SetUnitFog, METH_VARARGS, "Game.base+00247990 (RRRRR)V"},
   {"SetTerrainFogEx", SetTerrainFogEx, METH_VARARGS, "Game.base+00246EC0 (IRRRRRR)V"},
   {"ResetTerrainFog", ResetTerrainFog, METH_NOARGS, "Game.base+00243400 ()V"},
   {"SetDayNightModels", SetDayNightModels, METH_VARARGS, "Game.base+00244C50 (SS)V"},
   {"SetSkyModel", SetSkyModel, METH_VARARGS, "Game.base+00246960 (S)V"},
   {"SuspendTimeOfDay", SuspendTimeOfDay, METH_VARARGS, "Game.base+00248B80 (B)V"},
   {"SetTimeOfDayScale", SetTimeOfDayScale, METH_VARARGS, "Game.base+00247370 (R)V"},
   {"GetTimeOfDayScale", GetTimeOfDayScale, METH_NOARGS, "Game.base+00235C80 ()R"},
   {"ShowInterface", ShowInterface, METH_VARARGS, "Game.base+00248130 (BR)V"},
   {"PauseGame", PauseGame, METH_VARARGS, "Game.base+00241CE0 (B)V"},
   {"PingMinimap", PingMinimap, METH_VARARGS, "Game.base+00241DE0 (RRR)V"},
   {"PingMinimapEx", PingMinimapEx, METH_VARARGS, "Game.base+00241E40 (RRRIIIB)V"},
   {"SetIntroShotText", SetIntroShotText, METH_VARARGS, "Game.base+00245E30 (S)V"},
   {"SetIntroShotModel", SetIntroShotModel, METH_VARARGS, "Game.base+00245E10 (S)V"},
   {"EnableOcclusion", EnableOcclusion, METH_VARARGS, "Game.base+002301F0 (B)V"},
   {"EnableWorldFogBoundary", EnableWorldFogBoundary, METH_VARARGS, "Game.base+002302F0 (B)V"},
   {"PlayModelCinematic", PlayModelCinematic, METH_VARARGS, "Game.base+00241FC0 (S)V"},
   {"PlayCinematic", PlayCinematic, METH_VARARGS, "Game.base+00241FA0 (S)V"},
   {"SetAltMinimapIcon", SetAltMinimapIcon, METH_VARARGS, "Game.base+002441C0 (S)V"},
   {"CreateTextTag", CreateTextTag, METH_NOARGS, "Game.base+0022ECE0 ()Htexttag;"},
   {"DestroyTextTag", DestroyTextTag, METH_VARARGS, "Game.base+0022F9B0 (Htexttag;)V"},
   {"SetTextTagText", SetTextTagText, METH_VARARGS, "Game.base+00247280 (Htexttag;SR)V"},
   {"SetTextTagPos", SetTextTagPos, METH_VARARGS, "Game.base+00247140 (Htexttag;RRR)V"},
   {"SetTextTagPosUnit", SetTextTagPosUnit, METH_VARARGS, "Game.base+002471E0 (Htexttag;Hunit;R)V"},
   {"SetTextTagColor", SetTextTagColor, METH_VARARGS, "Game.base+00247040 (Htexttag;IIII)V"},
   {"SetTextTagVelocity", SetTextTagVelocity, METH_VARARGS, "Game.base+002472D0 (Htexttag;RR)V"},
   {"SetTextTagVisibility", SetTextTagVisibility, METH_VARARGS, "Game.base+00247330 (Htexttag;B)V"},
   {"SetTextTagSuspended", SetTextTagSuspended, METH_VARARGS, "Game.base+00247250 (Htexttag;B)V"},
   {"SetTextTagPermanent", SetTextTagPermanent, METH_VARARGS, "Game.base+00247110 (Htexttag;B)V"},
   {"SetTextTagAge", SetTextTagAge, METH_VARARGS, "Game.base+00247000 (Htexttag;R)V"},
   {"SetTextTagLifespan", SetTextTagLifespan, METH_VARARGS, "Game.base+002470D0 (Htexttag;R)V"},
   {"SetTextTagFadepoint", SetTextTagFadepoint, METH_VARARGS, "Game.base+00247090 (Htexttag;R)V"},
   {"SetReservedLocalHeroButtons", SetReservedLocalHeroButtons, METH_VARARGS, "Game.base+002468D0 (I)V"},
   {"GetAllyColorFilterState", GetAllyColorFilterState, METH_NOARGS, "Game.base+002318D0 ()I"},
   {"SetAllyColorFilterState", SetAllyColorFilterState, METH_VARARGS, "Game.base+00244190 (I)V"},
   {"GetCreepCampFilterState", GetCreepCampFilterState, METH_NOARGS, "Game.base+002320C0 ()B"},
   {"SetCreepCampFilterState", SetCreepCampFilterState, METH_VARARGS, "Game.base+00244BF0 (B)V"},
   {"EnableMinimapFilterButtons", EnableMinimapFilterButtons, METH_VARARGS, "Game.base+002301B0 (BB)V"},
   {"EnableDragSelect", EnableDragSelect, METH_VARARGS, "Game.base+00230190 (BB)V"},
   {"EnablePreSelect", EnablePreSelect, METH_VARARGS, "Game.base+00230220 (BB)V"},
   {"EnableSelect", EnableSelect, METH_VARARGS, "Game.base+00230240 (BB)V"},
   {"CreateTrackable", CreateTrackable, METH_VARARGS, "Game.base+0022EEE0 (SRRR)Htrackable;"},
   {"TriggerRegisterTrackableHitEvent", TriggerRegisterTrackableHitEvent, METH_VARARGS, "Game.base+0024A1F0 (Htrigger;Htrackable;)Hevent;"},
   {"TriggerRegisterTrackableTrackEvent", TriggerRegisterTrackableTrackEvent, METH_VARARGS, "Game.base+0024A2B0 (Htrigger;Htrackable;)Hevent;"},
   {"GetTriggeringTrackable", GetTriggeringTrackable, METH_NOARGS, "Game.base+002360C0 ()Htrackable;"},
   {"CreateQuest", CreateQuest, METH_NOARGS, "Game.base+0022E840 ()Hquest;"},
   {"DestroyQuest", DestroyQuest, METH_VARARGS, "Game.base+0022F960 (Hquest;)V"},
   {"QuestSetTitle", QuestSetTitle, METH_VARARGS, "Game.base+002429B0 (Hquest;S)V"},
   {"QuestSetDescription", QuestSetDescription, METH_VARARGS, "Game.base+00242890 (Hquest;S)V"},
   {"QuestSetIconPath", QuestSetIconPath, METH_VARARGS, "Game.base+00242950 (Hquest;S)V"},
   {"QuestSetRequired", QuestSetRequired, METH_VARARGS, "Game.base+00242980 (Hquest;B)V"},
   {"QuestSetCompleted", QuestSetCompleted, METH_VARARGS, "Game.base+00242860 (Hquest;B)V"},
   {"QuestSetDiscovered", QuestSetDiscovered, METH_VARARGS, "Game.base+002428C0 (Hquest;B)V"},
   {"QuestSetFailed", QuestSetFailed, METH_VARARGS, "Game.base+00242920 (Hquest;B)V"},
   {"QuestSetEnabled", QuestSetEnabled, METH_VARARGS, "Game.base+002428F0 (Hquest;B)V"},
   {"IsQuestRequired", IsQuestRequired, METH_VARARGS, "Game.base+00238550 (Hquest;)B"},
   {"IsQuestCompleted", IsQuestCompleted, METH_VARARGS, "Game.base+002384B0 (Hquest;)B"},
   {"IsQuestDiscovered", IsQuestDiscovered, METH_VARARGS, "Game.base+002384D0 (Hquest;)B"},
   {"IsQuestFailed", IsQuestFailed, METH_VARARGS, "Game.base+00238510 (Hquest;)B"},
   {"IsQuestEnabled", IsQuestEnabled, METH_VARARGS, "Game.base+002384F0 (Hquest;)B"},
   {"QuestCreateItem", QuestCreateItem, METH_VARARGS, "Game.base+00242730 (Hquest;)Hquestitem;"},
   {"QuestItemSetDescription", QuestItemSetDescription, METH_VARARGS, "Game.base+00242810 (Hquestitem;S)V"},
   {"QuestItemSetCompleted", QuestItemSetCompleted, METH_VARARGS, "Game.base+002427E0 (Hquestitem;B)V"},
   {"IsQuestItemCompleted", IsQuestItemCompleted, METH_VARARGS, "Game.base+00238530 (Hquestitem;)B"},
   {"CreateDefeatCondition", CreateDefeatCondition, METH_NOARGS, "Game.base+0022DE50 ()Hdefeatcondition;"},
   {"DestroyDefeatCondition", DestroyDefeatCondition, METH_VARARGS, "Game.base+0022F7B0 (Hdefeatcondition;)V"},
   {"DefeatConditionSetDescription", DefeatConditionSetDescription, METH_VARARGS, "Game.base+0022F520 (Hdefeatcondition;S)V"},
   {"FlashQuestDialogButton", FlashQuestDialogButton, METH_NOARGS, "Game.base+00230AF0 ()V"},
   {"ForceQuestDialogUpdate", ForceQuestDialogUpdate, METH_NOARGS, "Game.base+00231070 ()V"},
   {"CreateTimerDialog", CreateTimerDialog, METH_VARARGS, "Game.base+0022EDE0 (Htimer;)Htimerdialog;"},
   {"DestroyTimerDialog", DestroyTimerDialog, METH_VARARGS, "Game.base+0022FA00 (Htimerdialog;)V"},
   {"TimerDialogSetTitle", TimerDialogSetTitle, METH_VARARGS, "Game.base+002491D0 (Htimerdialog;S)V"},
   {"TimerDialogSetTitleColor", TimerDialogSetTitleColor, METH_VARARGS, "Game.base+00249200 (Htimerdialog;IIII)V"},
   {"TimerDialogSetTimeColor", TimerDialogSetTimeColor, METH_VARARGS, "Game.base+00249170 (Htimerdialog;IIII)V"},
   {"TimerDialogSetSpeed", TimerDialogSetSpeed, METH_VARARGS, "Game.base+00249140 (Htimerdialog;R)V"},
   {"TimerDialogDisplay", TimerDialogDisplay, METH_VARARGS, "Game.base+002490F0 (Htimerdialog;B)V"},
   {"IsTimerDialogDisplayed", IsTimerDialogDisplayed, METH_VARARGS, "Game.base+00238690 (Htimerdialog;)B"},
   {"TimerDialogSetRealTimeRemaining", TimerDialogSetRealTimeRemaining, METH_VARARGS, "Game.base+00249110 (Htimerdialog;R)V"},
   {"CreateLeaderboard", CreateLeaderboard, METH_NOARGS, "Game.base+0022E560 ()Hleaderboard;"},
   {"DestroyLeaderboard", DestroyLeaderboard, METH_VARARGS, "Game.base+0022F8F0 (Hleaderboard;)V"},
   {"LeaderboardGetItemCount", LeaderboardGetItemCount, METH_VARARGS, "Game.base+0023FFF0 (Hleaderboard;)I"},
   {"LeaderboardSetSizeByItemCount", LeaderboardSetSizeByItemCount, METH_VARARGS, "Game.base+00240390 (Hleaderboard;I)V"},
   {"LeaderboardAddItem", LeaderboardAddItem, METH_VARARGS, "Game.base+0023FF20 (Hleaderboard;SIHplayer;)V"},
   {"LeaderboardRemoveItem", LeaderboardRemoveItem, METH_VARARGS, "Game.base+00240110 (Hleaderboard;I)V"},
   {"LeaderboardRemovePlayerItem", LeaderboardRemovePlayerItem, METH_VARARGS, "Game.base+00240140 (Hleaderboard;Hplayer;)V"},
   {"LeaderboardSortItemsByValue", LeaderboardSortItemsByValue, METH_VARARGS, "Game.base+002404D0 (Hleaderboard;B)V"},
   {"LeaderboardSortItemsByPlayer", LeaderboardSortItemsByPlayer, METH_VARARGS, "Game.base+002404A0 (Hleaderboard;B)V"},
   {"LeaderboardSortItemsByLabel", LeaderboardSortItemsByLabel, METH_VARARGS, "Game.base+00240470 (Hleaderboard;B)V"},
   {"LeaderboardClear", LeaderboardClear, METH_VARARGS, "Game.base+0023FF70 (Hleaderboard;)V"},
   {"LeaderboardDisplay", LeaderboardDisplay, METH_VARARGS, "Game.base+0023FFA0 (Hleaderboard;B)V"},
   {"IsLeaderboardDisplayed", IsLeaderboardDisplayed, METH_VARARGS, "Game.base+00237F10 (Hleaderboard;)B"},
   {"LeaderboardGetLabelText", LeaderboardGetLabelText, METH_VARARGS, "Game.base+00240020 (Hleaderboard;)S"},
   {"PlayerSetLeaderboard", PlayerSetLeaderboard, METH_VARARGS, "Game.base+00242110 (Hplayer;Hleaderboard;)V"},
   {"PlayerGetLeaderboard", PlayerGetLeaderboard, METH_VARARGS, "Game.base+002420B0 (Hplayer;)Hleaderboard;"},
   {"LeaderboardHasPlayerItem", LeaderboardHasPlayerItem, METH_VARARGS, "Game.base+002400C0 (Hleaderboard;Hplayer;)B"},
   {"LeaderboardGetPlayerIndex", LeaderboardGetPlayerIndex, METH_VARARGS, "Game.base+00240070 (Hleaderboard;Hplayer;)I"},
   {"LeaderboardSetLabel", LeaderboardSetLabel, METH_VARARGS, "Game.base+00240300 (Hleaderboard;S)V"},
   {"LeaderboardSetLabelColor", LeaderboardSetLabelColor, METH_VARARGS, "Game.base+00240330 (Hleaderboard;IIII)V"},
   {"LeaderboardSetValueColor", LeaderboardSetValueColor, METH_VARARGS, "Game.base+00240410 (Hleaderboard;IIII)V"},
   {"LeaderboardSetStyle", LeaderboardSetStyle, METH_VARARGS, "Game.base+002403C0 (Hleaderboard;BBBB)V"},
   {"LeaderboardSetItemValue", LeaderboardSetItemValue, METH_VARARGS, "Game.base+00240270 (Hleaderboard;II)V"},
   {"LeaderboardSetItemLabel", LeaderboardSetItemLabel, METH_VARARGS, "Game.base+00240180 (Hleaderboard;IS)V"},
   {"LeaderboardSetItemStyle", LeaderboardSetItemStyle, METH_VARARGS, "Game.base+00240220 (Hleaderboard;IBBB)V"},
   {"LeaderboardSetItemLabelColor", LeaderboardSetItemLabelColor, METH_VARARGS, "Game.base+002401C0 (Hleaderboard;IIIII)V"},
   {"LeaderboardSetItemValueColor", LeaderboardSetItemValueColor, METH_VARARGS, "Game.base+002402A0 (Hleaderboard;IIIII)V"},
   {"CreateMultiboard", CreateMultiboard, METH_NOARGS, "Game.base+0022E750 ()Hmultiboard;"},
   {"DestroyMultiboard", DestroyMultiboard, METH_VARARGS, "Game.base+0022F940 (Hmultiboard;)V"},
   {"MultiboardDisplay", MultiboardDisplay, METH_VARARGS, "Game.base+00241270 (Hmultiboard;B)V"},
   {"MultiboardMinimize", MultiboardMinimize, METH_VARARGS, "Game.base+002413B0 (Hmultiboard;B)V"},
   {"IsMultiboardDisplayed", IsMultiboardDisplayed, METH_VARARGS, "Game.base+00238190 (Hmultiboard;)B"},
   {"IsMultiboardMinimized", IsMultiboardMinimized, METH_VARARGS, "Game.base+002381B0 (Hmultiboard;)B"},
   {"MultiboardClear", MultiboardClear, METH_VARARGS, "Game.base+00241240 (Hmultiboard;)V"},
   {"MultiboardSetTitleText", MultiboardSetTitleText, METH_VARARGS, "Game.base+00241660 (Hmultiboard;S)V"},
   {"MultiboardGetTitleText", MultiboardGetTitleText, METH_VARARGS, "Game.base+00241390 (Hmultiboard;)S"},
   {"MultiboardSetTitleTextColor", MultiboardSetTitleTextColor, METH_VARARGS, "Game.base+00241690 (Hmultiboard;IIII)V"},
   {"MultiboardGetRowCount", MultiboardGetRowCount, METH_VARARGS, "Game.base+00241370 (Hmultiboard;)I"},
   {"MultiboardGetColumnCount", MultiboardGetColumnCount, METH_VARARGS, "Game.base+00241290 (Hmultiboard;)I"},
   {"MultiboardSetColumnCount", MultiboardSetColumnCount, METH_VARARGS, "Game.base+002413F0 (Hmultiboard;I)V"},
   {"MultiboardSetRowCount", MultiboardSetRowCount, METH_VARARGS, "Game.base+00241640 (Hmultiboard;I)V"},
   {"MultiboardSetItemsStyle", MultiboardSetItemsStyle, METH_VARARGS, "Game.base+00241540 (Hmultiboard;BB)V"},
   {"MultiboardSetItemsValueColor", MultiboardSetItemsValueColor, METH_VARARGS, "Game.base+002415B0 (Hmultiboard;IIII)V"},
   {"MultiboardSetItemsValue", MultiboardSetItemsValue, METH_VARARGS, "Game.base+00241580 (Hmultiboard;S)V"},
   {"MultiboardSetItemsWidth", MultiboardSetItemsWidth, METH_VARARGS, "Game.base+00241610 (Hmultiboard;R)V"},
   {"MultiboardSetItemsIcon", MultiboardSetItemsIcon, METH_VARARGS, "Game.base+00241510 (Hmultiboard;S)V"},
   {"MultiboardGetItem", MultiboardGetItem, METH_VARARGS, "Game.base+002412B0 (Hmultiboard;II)Hmultiboarditem;"},
   {"MultiboardReleaseItem", MultiboardReleaseItem, METH_VARARGS, "Game.base+002413D0 (Hmultiboarditem;)V"},
   {"MultiboardSetItemStyle", MultiboardSetItemStyle, METH_VARARGS, "Game.base+00241440 (Hmultiboarditem;BB)V"},
   {"MultiboardSetItemValue", MultiboardSetItemValue, METH_VARARGS, "Game.base+00241460 (Hmultiboarditem;S)V"},
   {"MultiboardSetItemValueColor", MultiboardSetItemValueColor, METH_VARARGS, "Game.base+00241490 (Hmultiboarditem;IIII)V"},
   {"MultiboardSetItemWidth", MultiboardSetItemWidth, METH_VARARGS, "Game.base+002414E0 (Hmultiboarditem;R)V"},
   {"MultiboardSetItemIcon", MultiboardSetItemIcon, METH_VARARGS, "Game.base+00241410 (Hmultiboarditem;S)V"},
   {"MultiboardSuppressDisplay", MultiboardSuppressDisplay, METH_VARARGS, "Game.base+002416E0 (B)V"},
   {"SetCameraBounds", SetCameraBounds, METH_VARARGS, "Game.base+002443A0 (RRRRRRRR)V"},
   {"SetCameraPosition", SetCameraPosition, METH_VARARGS, "Game.base+00244510 (RR)V"},
   {"SetCameraQuickPosition", SetCameraQuickPosition, METH_VARARGS, "Game.base+00244560 (RR)V"},
   {"ResetToGameCamera", ResetToGameCamera, METH_VARARGS, "Game.base+00243420 (R)V"},
   {"StopCamera", StopCamera, METH_NOARGS, "Game.base+002484E0 ()V"},
   {"PanCameraTo", PanCameraTo, METH_VARARGS, "Game.base+00241B60 (RR)V"},
   {"PanCameraToTimed", PanCameraToTimed, METH_VARARGS, "Game.base+00241BB0 (RRR)V"},
   {"PanCameraToWithZ", PanCameraToWithZ, METH_VARARGS, "Game.base+00241C70 (RRR)V"},
   {"PanCameraToTimedWithZ", PanCameraToTimedWithZ, METH_VARARGS, "Game.base+00241C10 (RRRR)V"},
   {"SetCinematicCamera", SetCinematicCamera, METH_VARARGS, "Game.base+00244B30 (S)V"},
   {"SetCameraField", SetCameraField, METH_VARARGS, "Game.base+00244480 (Hcamerafield;RR)V"},
   {"AdjustCameraField", AdjustCameraField, METH_VARARGS, "Game.base+0022A910 (Hcamerafield;RR)V"},
   {"SetCameraTargetController", SetCameraTargetController, METH_VARARGS, "Game.base+00244600 (Hunit;RRB)V"},
   {"SetCameraOrientController", SetCameraOrientController, METH_VARARGS, "Game.base+002444C0 (Hunit;RR)V"},
   {"SetCameraRotateMode", SetCameraRotateMode, METH_VARARGS, "Game.base+002445A0 (RRRR)V"},
   {"CreateCameraSetup", CreateCameraSetup, METH_NOARGS, "Game.base+0022DC10 ()Hcamerasetup;"},
   {"CameraSetupSetField", CameraSetupSetField, METH_VARARGS, "Game.base+0022B170 (Hcamerasetup;Hcamerafield;RR)V"},
   {"CameraSetupGetField", CameraSetupGetField, METH_VARARGS, "Game.base+0022B0E0 (Hcamerasetup;Hcamerafield;)R"},
   {"CameraSetupSetDestPosition", CameraSetupSetDestPosition, METH_VARARGS, "Game.base+0022B120 (Hcamerasetup;RRR)V"},
   {"CameraSetupGetDestPositionLoc", CameraSetupGetDestPositionLoc, METH_VARARGS, "Game.base+0022B040 (Hcamerasetup;)Hlocation;"},
   {"CameraSetupGetDestPositionX", CameraSetupGetDestPositionX, METH_VARARGS, "Game.base+0022B090 (Hcamerasetup;)R"},
   {"CameraSetupGetDestPositionY", CameraSetupGetDestPositionY, METH_VARARGS, "Game.base+0022B0C0 (Hcamerasetup;)R"},
   {"CameraSetupApply", CameraSetupApply, METH_VARARGS, "Game.base+0022AF80 (Hcamerasetup;BB)V"},
   {"CameraSetupApplyWithZ", CameraSetupApplyWithZ, METH_VARARGS, "Game.base+0022B010 (Hcamerasetup;R)V"},
   {"CameraSetupApplyForceDuration", CameraSetupApplyForceDuration, METH_VARARGS, "Game.base+0022AFB0 (Hcamerasetup;BR)V"},
   {"CameraSetupApplyForceDurationWithZ", CameraSetupApplyForceDurationWithZ, METH_VARARGS, "Game.base+0022AFE0 (Hcamerasetup;RR)V"},
   {"CameraSetTargetNoise", CameraSetTargetNoise, METH_VARARGS, "Game.base+0022AE20 (RR)V"},
   {"CameraSetSourceNoise", CameraSetSourceNoise, METH_VARARGS, "Game.base+0022ACE0 (RR)V"},
   {"CameraSetTargetNoiseEx", CameraSetTargetNoiseEx, METH_VARARGS, "Game.base+0022AED0 (RRB)V"},
   {"CameraSetSourceNoiseEx", CameraSetSourceNoiseEx, METH_VARARGS, "Game.base+0022AD80 (RRB)V"},
   {"CameraSetSmoothingFactor", CameraSetSmoothingFactor, METH_VARARGS, "Game.base+0022ACB0 (R)V"},
   {"GetCameraMargin", GetCameraMargin, METH_VARARGS, "Game.base+00231C70 (I)R"},
   {"GetCameraBoundMinX", GetCameraBoundMinX, METH_NOARGS, "Game.base+00231AC0 ()R"},
   {"GetCameraBoundMinY", GetCameraBoundMinY, METH_NOARGS, "Game.base+00231AF0 ()R"},
   {"GetCameraBoundMaxX", GetCameraBoundMaxX, METH_NOARGS, "Game.base+00231A60 ()R"},
   {"GetCameraBoundMaxY", GetCameraBoundMaxY, METH_NOARGS, "Game.base+00231A90 ()R"},
   {"GetCameraField", GetCameraField, METH_VARARGS, "Game.base+00231C40 (Hcamerafield;)R"},
   {"GetCameraTargetPositionX", GetCameraTargetPositionX, METH_NOARGS, "Game.base+00231D30 ()R"},
   {"GetCameraTargetPositionY", GetCameraTargetPositionY, METH_NOARGS, "Game.base+00231D70 ()R"},
   {"GetCameraTargetPositionZ", GetCameraTargetPositionZ, METH_NOARGS, "Game.base+00231DB0 ()R"},
   {"GetCameraTargetPositionLoc", GetCameraTargetPositionLoc, METH_NOARGS, "Game.base+00231CE0 ()Hlocation;"},
   {"GetCameraEyePositionX", GetCameraEyePositionX, METH_NOARGS, "Game.base+00231B80 ()R"},
   {"GetCameraEyePositionY", GetCameraEyePositionY, METH_NOARGS, "Game.base+00231BC0 ()R"},
   {"GetCameraEyePositionZ", GetCameraEyePositionZ, METH_NOARGS, "Game.base+00231C00 ()R"},
   {"GetCameraEyePositionLoc", GetCameraEyePositionLoc, METH_NOARGS, "Game.base+00231B30 ()Hlocation;"},
   {"SetCineFilterTexture", SetCineFilterTexture, METH_VARARGS, "Game.base+00244B00 (S)V"},
   {"SetCineFilterBlendMode", SetCineFilterBlendMode, METH_VARARGS, "Game.base+002446E0 (Hblendmode;)V"},
   {"SetCineFilterTexMapFlags", SetCineFilterTexMapFlags, METH_VARARGS, "Game.base+00244AC0 (Htexmapflags;)V"},
   {"SetCineFilterStartUV", SetCineFilterStartUV, METH_VARARGS, "Game.base+00244A30 (RRRR)V"},
   {"SetCineFilterEndUV", SetCineFilterEndUV, METH_VARARGS, "Game.base+002448A0 (RRRR)V"},
   {"SetCineFilterStartColor", SetCineFilterStartColor, METH_VARARGS, "Game.base+00244930 (IIII)V"},
   {"SetCineFilterEndColor", SetCineFilterEndColor, METH_VARARGS, "Game.base+002447A0 (IIII)V"},
   {"SetCineFilterDuration", SetCineFilterDuration, METH_VARARGS, "Game.base+00244780 (R)V"},
   {"DisplayCineFilter", DisplayCineFilter, METH_VARARGS, "Game.base+0022FEE0 (B)V"},
   {"IsCineFilterDisplayed", IsCineFilterDisplayed, METH_NOARGS, "Game.base+00237A40 ()B"},
   {"SetCinematicScene", SetCinematicScene, METH_VARARGS, "Game.base+00244B70 (IHplayercolor;SSRR)V"},
   {"EndCinematicScene", EndCinematicScene, METH_NOARGS, "Game.base+00230330 ()V"},
   {"ForceCinematicSubtitles", ForceCinematicSubtitles, METH_VARARGS, "Game.base+00230F20 (B)V"},
   {"NewSoundEnvironment", NewSoundEnvironment, METH_VARARGS, "Game.base+002417C0 (S)V"},
   {"CreateSound", CreateSound, METH_VARARGS, "Game.base+0022E990 (SBBBIIS)Hsound;"},
   {"CreateSoundFilenameWithLabel", CreateSoundFilenameWithLabel, METH_VARARGS, "Game.base+0022EAB0 (SBBBIIS)Hsound;"},
   {"CreateSoundFromLabel", CreateSoundFromLabel, METH_VARARGS, "Game.base+0022EBD0 (SBBBII)Hsound;"},
   {"CreateMIDISound", CreateMIDISound, METH_VARARGS, "Game.base+0022E650 (SII)Hsound;"},
   {"SetStackedSound", SetStackedSound, METH_VARARGS, "Game.base+00246C70 (SRR)V"},
   {"ClearStackedSound", ClearStackedSound, METH_VARARGS, "Game.base+0022B5F0 (SRR)V"},
   {"SetStackedSoundRect", SetStackedSoundRect, METH_VARARGS, "Game.base+00246CD0 (SHrect;)V"},
   {"ClearStackedSoundRect", ClearStackedSoundRect, METH_VARARGS, "Game.base+0022B640 (SHrect;)V"},
   {"SetSoundParamsFromLabel", SetSoundParamsFromLabel, METH_VARARGS, "Game.base+00246B10 (Hsound;S)V"},
   {"SetSoundChannel", SetSoundChannel, METH_VARARGS, "Game.base+002469A0 (Hsound;I)V"},
   {"SetSoundVolume", SetSoundVolume, METH_VARARGS, "Game.base+00246C50 (Hsound;I)V"},
   {"SetSoundPitch", SetSoundPitch, METH_VARARGS, "Game.base+00246B40 (Hsound;R)V"},
   {"SetSoundPlayPosition", SetSoundPlayPosition, METH_VARARGS, "Game.base+00246B70 (Hsound;I)V"},
   {"SetSoundDistances", SetSoundDistances, METH_VARARGS, "Game.base+00246AA0 (Hsound;RR)V"},
   {"SetSoundDistanceCutoff", SetSoundDistanceCutoff, METH_VARARGS, "Game.base+00246A70 (Hsound;R)V"},
   {"SetSoundConeAngles", SetSoundConeAngles, METH_VARARGS, "Game.base+002469C0 (Hsound;RRI)V"},
   {"SetSoundConeOrientation", SetSoundConeOrientation, METH_VARARGS, "Game.base+00246A10 (Hsound;RRR)V"},
   {"SetSoundPosition", SetSoundPosition, METH_VARARGS, "Game.base+00246B90 (Hsound;RRR)V"},
   {"SetSoundVelocity", SetSoundVelocity, METH_VARARGS, "Game.base+00246BF0 (Hsound;RRR)V"},
   {"AttachSoundToUnit", AttachSoundToUnit, METH_VARARGS, "Game.base+0022AB40 (Hsound;Hunit;)V"},
   {"StartSound", StartSound, METH_VARARGS, "Game.base+00248490 (Hsound;)V"},
   {"StopSound", StopSound, METH_VARARGS, "Game.base+00248510 (Hsound;BB)V"},
   {"KillSoundWhenDone", KillSoundWhenDone, METH_VARARGS, "Game.base+0023FEE0 (Hsound;)V"},
   {"SetMapMusic", SetMapMusic, METH_VARARGS, "Game.base+00246200 (SBI)V"},
   {"ClearMapMusic", ClearMapMusic, METH_NOARGS, "Game.base+0022B470 ()V"},
   {"PlayMusic", PlayMusic, METH_VARARGS, "Game.base+00241FE0 (S)V"},
   {"PlayMusicEx", PlayMusicEx, METH_VARARGS, "Game.base+00242010 (SII)V"},
   {"StopMusic", StopMusic, METH_VARARGS, "Game.base+00248500 (B)V"},
   {"ResumeMusic", ResumeMusic, METH_NOARGS, "Game.base+002435E0 ()V"},
   {"PlayThematicMusic", PlayThematicMusic, METH_VARARGS, "Game.base+00242040 (S)V"},
   {"PlayThematicMusicEx", PlayThematicMusicEx, METH_VARARGS, "Game.base+00242060 (SI)V"},
   {"EndThematicMusic", EndThematicMusic, METH_NOARGS, "Game.base+00230380 ()V"},
   {"SetMusicVolume", SetMusicVolume, METH_VARARGS, "Game.base+002462A0 (I)V"},
   {"SetMusicPlayPosition", SetMusicPlayPosition, METH_VARARGS, "Game.base+00246290 (I)V"},
   {"SetThematicMusicPlayPosition", SetThematicMusicPlayPosition, METH_VARARGS, "Game.base+00247360 (I)V"},
   {"SetSoundDuration", SetSoundDuration, METH_VARARGS, "Game.base+00246AE0 (Hsound;I)V"},
   {"GetSoundDuration", GetSoundDuration, METH_VARARGS, "Game.base+00234E10 (Hsound;)I"},
   {"GetSoundFileDuration", GetSoundFileDuration, METH_VARARGS, "Game.base+00234E30 (S)I"},
   {"VolumeGroupSetVolume", VolumeGroupSetVolume, METH_VARARGS, "Game.base+0024BA10 (Hvolumegroup;R)V"},
   {"VolumeGroupReset", VolumeGroupReset, METH_NOARGS, "Game.base+0024BA00 ()V"},
   {"GetSoundIsPlaying", GetSoundIsPlaying, METH_VARARGS, "Game.base+00234E70 (Hsound;)B"},
   {"GetSoundIsLoading", GetSoundIsLoading, METH_VARARGS, "Game.base+00234E50 (Hsound;)B"},
   {"RegisterStackedSound", RegisterStackedSound, METH_VARARGS, "Game.base+00242EF0 (Hsound;BRR)V"},
   {"UnregisterStackedSound", UnregisterStackedSound, METH_VARARGS, "Game.base+0024B990 (Hsound;BRR)V"},
   {"AddWeatherEffect", AddWeatherEffect, METH_VARARGS, "Game.base+0022A8A0 (Hrect;I)Hweathereffect;"},
   {"RemoveWeatherEffect", RemoveWeatherEffect, METH_VARARGS, "Game.base+00243310 (Hweathereffect;)V"},
   {"EnableWeatherEffect", EnableWeatherEffect, METH_VARARGS, "Game.base+002302E0 (Hweathereffect;B)V"},
   {"TerrainDeformCrater", TerrainDeformCrater, METH_VARARGS, "Game.base+00248E10 (RRRRIB)Hterraindeformation;"},
   {"TerrainDeformRipple", TerrainDeformRipple, METH_VARARGS, "Game.base+00248ED0 (RRRRIIRRRB)Hterraindeformation;"},
   {"TerrainDeformWave", TerrainDeformWave, METH_VARARGS, "Game.base+00248F70 (RRRRRRRRII)Hterraindeformation;"},
   {"TerrainDeformRandom", TerrainDeformRandom, METH_VARARGS, "Game.base+00248E70 (RRRRRII)Hterraindeformation;"},
   {"TerrainDeformStop", TerrainDeformStop, METH_VARARGS, "Game.base+00248F50 (Hterraindeformation;I)V"},
   {"TerrainDeformStopAll", TerrainDeformStopAll, METH_NOARGS, "Game.base+00248F60 ()V"},
   {"DestroyEffect", DestroyEffect, METH_VARARGS, "Game.base+0022F800 (Heffect;)V"},
   {"AddSpecialEffect", AddSpecialEffect, METH_VARARGS, "Game.base+0022A490 (SRR)Heffect;"},
   {"AddSpecialEffectLoc", AddSpecialEffectLoc, METH_VARARGS, "Game.base+0022A4B0 (SHlocation;)Heffect;"},
   {"AddSpecialEffectTarget", AddSpecialEffectTarget, METH_VARARGS, "Game.base+0022A4F0 (SHwidget;S)Heffect;"},
   {"AddSpellEffect", AddSpellEffect, METH_VARARGS, "Game.base+0022A520 (SHeffecttype;RR)Heffect;"},
   {"AddSpellEffectLoc", AddSpellEffectLoc, METH_VARARGS, "Game.base+0022A5B0 (SHeffecttype;Hlocation;)Heffect;"},
   {"AddSpellEffectById", AddSpellEffectById, METH_VARARGS, "Game.base+0022A540 (IHeffecttype;RR)Heffect;"},
   {"AddSpellEffectByIdLoc", AddSpellEffectByIdLoc, METH_VARARGS, "Game.base+0022A570 (IHeffecttype;Hlocation;)Heffect;"},
   {"AddSpellEffectTarget", AddSpellEffectTarget, METH_VARARGS, "Game.base+0022A610 (SHeffecttype;Hwidget;S)Heffect;"},
   {"AddSpellEffectTargetById", AddSpellEffectTargetById, METH_VARARGS, "Game.base+0022A630 (IHeffecttype;Hwidget;S)Heffect;"},
   {"AddLightning", AddLightning, METH_VARARGS, "Game.base+0022A260 (SBRRRR)Hlightning;"},
   {"AddLightningEx", AddLightningEx, METH_VARARGS, "Game.base+0022A2E0 (SBRRRRRR)Hlightning;"},
   {"DestroyLightning", DestroyLightning, METH_VARARGS, "Game.base+0022F920 (Hlightning;)B"},
   {"GetLightningColorA", GetLightningColorA, METH_VARARGS, "Game.base+002331E0 (Hlightning;)R"},
   {"GetLightningColorR", GetLightningColorR, METH_VARARGS, "Game.base+002332D0 (Hlightning;)R"},
   {"GetLightningColorG", GetLightningColorG, METH_VARARGS, "Game.base+00233280 (Hlightning;)R"},
   {"GetLightningColorB", GetLightningColorB, METH_VARARGS, "Game.base+00233230 (Hlightning;)R"},
   {"MoveLightning", MoveLightning, METH_VARARGS, "Game.base+00240F70 (Hlightning;BRRRR)B"},
   {"MoveLightningEx", MoveLightningEx, METH_VARARGS, "Game.base+00240FF0 (Hlightning;BRRRRRR)B"},
   {"SetLightningColor", SetLightningColor, METH_VARARGS, "Game.base+00246110 (Hlightning;RRRR)B"},
   {"GetAbilityEffect", GetAbilityEffect, METH_VARARGS, "Game.base+002317F0 (SHeffecttype;I)S"},
   {"GetAbilityEffectById", GetAbilityEffectById, METH_VARARGS, "Game.base+00231820 (IHeffecttype;I)S"},
   {"GetAbilitySound", GetAbilitySound, METH_VARARGS, "Game.base+00231840 (SHsoundtype;)S"},
   {"GetAbilitySoundById", GetAbilitySoundById, METH_VARARGS, "Game.base+00231880 (IHsoundtype;)S"},
   {"GetTerrainCliffLevel", GetTerrainCliffLevel, METH_VARARGS, "Game.base+00235B50 (RR)I"},
   {"SetWaterBaseColor", SetWaterBaseColor, METH_VARARGS, "Game.base+00248070 (IIII)V"},
   {"SetWaterDeforms", SetWaterDeforms, METH_VARARGS, "Game.base+002480B0 (B)V"},
   {"GetTerrainType", GetTerrainType, METH_VARARGS, "Game.base+00235BF0 (RR)I"},
   {"GetTerrainVariance", GetTerrainVariance, METH_VARARGS, "Game.base+00235C40 (RR)I"},
   {"SetTerrainType", SetTerrainType, METH_VARARGS, "Game.base+00246FA0 (RRIIII)V"},
   {"IsTerrainPathable", IsTerrainPathable, METH_VARARGS, "Game.base+00238660 (RRHpathingtype;)B"},
   {"SetTerrainPathable", SetTerrainPathable, METH_VARARGS, "Game.base+00246F70 (RRHpathingtype;B)V"},
   {"CreateImage", CreateImage, METH_VARARGS, "Game.base+0022E3B0 (SRRRRRRRRRI)Himage;"},
   {"DestroyImage", DestroyImage, METH_VARARGS, "Game.base+0022F8B0 (Himage;)V"},
   {"ShowImage", ShowImage, METH_VARARGS, "Game.base+00248110 (Himage;B)V"},
   {"SetImageConstantHeight", SetImageConstantHeight, METH_VARARGS, "Game.base+00245D00 (Himage;BR)V"},
   {"SetImagePosition", SetImagePosition, METH_VARARGS, "Game.base+00245D30 (Himage;RRR)V"},
   {"SetImageColor", SetImageColor, METH_VARARGS, "Game.base+00245CC0 (Himage;IIII)V"},
   {"SetImageRender", SetImageRender, METH_VARARGS, "Game.base+00245D70 (Himage;B)V"},
   {"SetImageRenderAlways", SetImageRenderAlways, METH_VARARGS, "Game.base+00245D90 (Himage;B)V"},
   {"SetImageAboveWater", SetImageAboveWater, METH_VARARGS, "Game.base+00245CA0 (Himage;BB)V"},
   {"SetImageType", SetImageType, METH_VARARGS, "Game.base+00245DB0 (Himage;I)V"},
   {"CreateUbersplat", CreateUbersplat, METH_VARARGS, "Game.base+0022F0D0 (RRSIIIIBB)Hubersplat;"},
   {"DestroyUbersplat", DestroyUbersplat, METH_VARARGS, "Game.base+0022FA40 (Hubersplat;)V"},
   {"ResetUbersplat", ResetUbersplat, METH_VARARGS, "Game.base+00243470 (Hubersplat;)V"},
   {"FinishUbersplat", FinishUbersplat, METH_VARARGS, "Game.base+00230A80 (Hubersplat;)V"},
   {"ShowUbersplat", ShowUbersplat, METH_VARARGS, "Game.base+00248160 (Hubersplat;B)V"},
   {"SetUbersplatRender", SetUbersplatRender, METH_VARARGS, "Game.base+00247410 (Hubersplat;B)V"},
   {"SetUbersplatRenderAlways", SetUbersplatRenderAlways, METH_VARARGS, "Game.base+00247430 (Hubersplat;B)V"},
   {"SetBlight", SetBlight, METH_VARARGS, "Game.base+00244230 (Hplayer;RRRB)V"},
   {"SetBlightLoc", SetBlightLoc, METH_VARARGS, "Game.base+00244290 (Hplayer;Hlocation;RB)V"},
   {"SetBlightRect", SetBlightRect, METH_VARARGS, "Game.base+00244340 (Hplayer;Hrect;B)V"},
   {"SetBlightPoint", SetBlightPoint, METH_VARARGS, "Game.base+002442F0 (Hplayer;RRB)V"},
   {"CreateBlightedGoldmine", CreateBlightedGoldmine, METH_VARARGS, "Game.base+0022DB50 (Hplayer;RRR)Hunit;"},
   {"IsPointBlighted", IsPointBlighted, METH_VARARGS, "Game.base+00238470 (RR)B"},
   {"SetDoodadAnimation", SetDoodadAnimation, METH_VARARGS, "Game.base+00244EF0 (RRRIBSB)V"},
   {"SetDoodadAnimationRect", SetDoodadAnimationRect, METH_VARARGS, "Game.base+00244F50 (Hrect;ISB)V"},
   {"StartMeleeAI", StartMeleeAI, METH_VARARGS, "Game.base+00248460 (Hplayer;S)V"},
   {"StartCampaignAI", StartCampaignAI, METH_VARARGS, "Game.base+00248410 (Hplayer;S)V"},
   {"CommandAI", CommandAI, METH_VARARGS, "Game.base+0022B7A0 (Hplayer;II)V"},
   {"PauseCompAI", PauseCompAI, METH_VARARGS, "Game.base+00241CC0 (Hplayer;B)V"},
   {"GetAIDifficulty", GetAIDifficulty, METH_VARARGS, "Game.base+00231750 (Hplayer;)Haidifficulty;"},
   {"RemoveGuardPosition", RemoveGuardPosition, METH_VARARGS, "Game.base+00242FF0 (Hunit;)V"},
   {"RecycleGuardPosition", RecycleGuardPosition, METH_VARARGS, "Game.base+00242C90 (Hunit;)V"},
   {"RemoveAllGuardPositions", RemoveAllGuardPositions, METH_VARARGS, "Game.base+00242F90 (Hplayer;)V"},
   {"ExecuteFunc", ExecuteFunc, METH_VARARGS, "Game.base+002308A0 (S)V"},
   {"Cheat", Cheat, METH_VARARGS, "Game.base+0022B230 (S)V"},
   {"IsNoVictoryCheat", IsNoVictoryCheat, METH_NOARGS, "Game.base+00238200 ()B"},
   {"IsNoDefeatCheat", IsNoDefeatCheat, METH_NOARGS, "Game.base+002381D0 ()B"},
   {"Preload", Preload, METH_VARARGS, "Game.base+00242230 (S)V"},
   {"PreloadEnd", PreloadEnd, METH_VARARGS, "Game.base+00242260 (R)V"},
   {"PreloadStart", PreloadStart, METH_NOARGS, "Game.base+00242380 ()V"},
   {"PreloadRefresh", PreloadRefresh, METH_NOARGS, "Game.base+00242370 ()V"},
   {"PreloadEndEx", PreloadEndEx, METH_NOARGS, "Game.base+002422B0 ()V"},
   {"PreloadGenStart", PreloadGenStart, METH_NOARGS, "Game.base+00242350 ()V"},
   {"PreloadGenClear", PreloadGenClear, METH_NOARGS, "Game.base+00242300 ()V"},
   {"PreloadGenEnd", PreloadGenEnd, METH_VARARGS, "Game.base+00242320 (S)V"},
   {"Preloader", Preloader, METH_VARARGS, "Game.base+002423A0 (S)V"},
   {"DebugS", DebugS, METH_VARARGS, "Game.base+0096E660 (S)V"},
   {"DebugFI", DebugFI, METH_VARARGS, "Game.base+0096E650 (SI)V"},
   {"DebugUnitID", DebugUnitID, METH_VARARGS, "Game.base+0096E670 (SI)V"},
   {"DisplayText", DisplayText, METH_VARARGS, "Game.base+0096E810 (IS)V"},
   {"DisplayTextI", DisplayTextI, METH_VARARGS, "Game.base+0096E820 (ISI)V"},
   {"DisplayTextII", DisplayTextII, METH_VARARGS, "Game.base+0096E830 (ISII)V"},
   {"DisplayTextIII", DisplayTextIII, METH_VARARGS, "Game.base+0096E840 (ISIII)V"},
   {"SuicideUnit", SuicideUnit, METH_VARARGS, "Game.base+00975390 (II)V"},
   {"SuicideUnitEx", SuicideUnitEx, METH_VARARGS, "Game.base+009753E0 (III)V"},
   {"Sleep", Sleep, METH_VARARGS, "Game.base+00975090 (R)V"},
   {"StartThread", StartThread, METH_VARARGS, "Game.base+00975150 (C)V"},
   {"GetAiPlayer", GetAiPlayer, METH_NOARGS, "Game.base+0096F310 ()I"},
   {"DoAiScriptDebug", DoAiScriptDebug, METH_NOARGS, "Game.base+0096E850 ()B"},
   {"GetHeroId", GetHeroId, METH_NOARGS, "Game.base+0096FE60 ()I"},
   {"GetHeroLevelAI", GetHeroLevelAI, METH_NOARGS, "Game.base+0096FEE0 ()I"},
   {"SetHeroLevels", SetHeroLevels, METH_VARARGS, "Game.base+00974700 (C)V"},
   {"SetNewHeroes", SetNewHeroes, METH_VARARGS, "Game.base+00974920 (B)V"},
   {"GetUnitCount", GetUnitCount, METH_VARARGS, "Game.base+009707E0 (I)I"},
   {"GetPlayerUnitTypeCount", GetPlayerUnitTypeCount, METH_VARARGS, "Game.base+00970660 (Hplayer;I)I"},
   {"GetTownUnitCount", GetTownUnitCount, METH_VARARGS, "Game.base+00970710 (IIB)I"},
   {"GetUnitCountDone", GetUnitCountDone, METH_VARARGS, "Game.base+00970850 (I)I"},
   {"GetUpgradeLevel", GetUpgradeLevel, METH_VARARGS, "Game.base+00970970 (I)I"},
   {"GetUnitGoldCost", GetUnitGoldCost, METH_VARARGS, "Game.base+00970890 (I)I"},
   {"GetUnitWoodCost", GetUnitWoodCost, METH_VARARGS, "Game.base+009708F0 (I)I"},
   {"GetUnitBuildTime", GetUnitBuildTime, METH_VARARGS, "Game.base+00970790 (I)I"},
   {"GetUpgradeGoldCost", GetUpgradeGoldCost, METH_VARARGS, "Game.base+00970950 (I)I"},
   {"GetUpgradeWoodCost", GetUpgradeWoodCost, METH_VARARGS, "Game.base+009709D0 (I)I"},
   {"GetEnemyPower", GetEnemyPower, METH_NOARGS, "Game.base+0096FC20 ()I"},
   {"GetMinesOwned", GetMinesOwned, METH_NOARGS, "Game.base+00970120 ()I"},
   {"GetGoldOwned", GetGoldOwned, METH_NOARGS, "Game.base+0096FE30 ()I"},
   {"TownWithMine", TownWithMine, METH_NOARGS, "Game.base+00975800 ()I"},
   {"TownHasMine", TownHasMine, METH_VARARGS, "Game.base+00975770 (I)B"},
   {"TownHasHall", TownHasHall, METH_VARARGS, "Game.base+00975730 (I)B"},
   {"GetNextExpansion", GetNextExpansion, METH_NOARGS, "Game.base+00970170 ()I"},
   {"GetExpansionPeon", GetExpansionPeon, METH_NOARGS, "Game.base+0096FCE0 ()Hunit;"},
   {"GetEnemyExpansion", GetEnemyExpansion, METH_NOARGS, "Game.base+0096FBE0 ()Hunit;"},
   {"SetExpansion", SetExpansion, METH_VARARGS, "Game.base+00974470 (Hunit;I)B"},
   {"GetBuilding", GetBuilding, METH_VARARGS, "Game.base+0096F4B0 (Hplayer;)Hunit;"},
   {"SetAllianceTarget", SetAllianceTarget, METH_VARARGS, "Game.base+009741E0 (Hunit;)V"},
   {"GetAllianceTarget", GetAllianceTarget, METH_NOARGS, "Game.base+0096F340 ()Hunit;"},
   {"SetProduce", SetProduce, METH_VARARGS, "Game.base+009749F0 (III)B"},
   {"MergeUnits", MergeUnits, METH_VARARGS, "Game.base+00971FB0 (IIII)B"},
   {"ConvertUnits", ConvertUnits, METH_VARARGS, "Game.base+0096E3E0 (II)B"},
   {"SetUpgrade", SetUpgrade, METH_VARARGS, "Game.base+00974D70 (I)B"},
   {"Unsummon", Unsummon, METH_VARARGS, "Game.base+00975BC0 (Hunit;)V"},
   {"ClearHarvestAI", ClearHarvestAI, METH_NOARGS, "Game.base+0096DE70 ()V"},
   {"HarvestGold", HarvestGold, METH_VARARGS, "Game.base+00970D40 (II)V"},
   {"HarvestWood", HarvestWood, METH_VARARGS, "Game.base+00970DB0 (II)V"},
   {"StopGathering", StopGathering, METH_NOARGS, "Game.base+00975240 ()V"},
   {"AddGuardPost", AddGuardPost, METH_VARARGS, "Game.base+0096CBC0 (IRR)V"},
   {"FillGuardPosts", FillGuardPosts, METH_NOARGS, "Game.base+0096EAE0 ()V"},
   {"ReturnGuardPosts", ReturnGuardPosts, METH_NOARGS, "Game.base+00973E40 ()V"},
   {"CreateCaptains", CreateCaptains, METH_NOARGS, "Game.base+0096E5C0 ()V"},
   {"SetCaptainHome", SetCaptainHome, METH_VARARGS, "Game.base+009743B0 (IRR)V"},
   {"ResetCaptainLocs", ResetCaptainLocs, METH_NOARGS, "Game.base+00973E00 ()V"},
   {"ShiftTownSpot", ShiftTownSpot, METH_VARARGS, "Game.base+00975050 (RR)V"},
   {"SetCaptainChanges", SetCaptainChanges, METH_VARARGS, "Game.base+00974340 (B)V"},
   {"TeleportCaptain", TeleportCaptain, METH_VARARGS, "Game.base+00975430 (RR)V"},
   {"ClearCaptainTargets", ClearCaptainTargets, METH_NOARGS, "Game.base+0096DE10 ()V"},
   {"CaptainVsUnits", CaptainVsUnits, METH_VARARGS, "Game.base+0096DBB0 (Hplayer;)V"},
   {"CaptainVsPlayer", CaptainVsPlayer, METH_VARARGS, "Game.base+0096DB20 (Hplayer;)V"},
   {"CaptainAttack", CaptainAttack, METH_VARARGS, "Game.base+0096D880 (RR)V"},
   {"GroupTimedLife", GroupTimedLife, METH_VARARGS, "Game.base+00970B20 (B)V"},
   {"CaptainGoHome", CaptainGoHome, METH_NOARGS, "Game.base+0096D8C0 ()V"},
   {"CaptainIsHome", CaptainIsHome, METH_NOARGS, "Game.base+0096D9F0 ()B"},
   {"CaptainRetreating", CaptainRetreating, METH_NOARGS, "Game.base+0096DAE0 ()B"},
   {"CaptainIsFull", CaptainIsFull, METH_NOARGS, "Game.base+0096D9B0 ()B"},
   {"CaptainIsEmpty", CaptainIsEmpty, METH_NOARGS, "Game.base+0096D970 ()B"},
   {"CaptainGroupSize", CaptainGroupSize, METH_NOARGS, "Game.base+0096D8F0 ()I"},
   {"CaptainReadiness", CaptainReadiness, METH_NOARGS, "Game.base+0096DA20 ()I"},
   {"CaptainReadinessHP", CaptainReadinessHP, METH_NOARGS, "Game.base+0096DA60 ()I"},
   {"CaptainReadinessMa", CaptainReadinessMa, METH_NOARGS, "Game.base+0096DAA0 ()I"},
   {"CaptainInCombat", CaptainInCombat, METH_VARARGS, "Game.base+0096D930 (B)B"},
   {"TownThreatened", TownThreatened, METH_NOARGS, "Game.base+009757B0 ()B"},
   {"CaptainAtGoal", CaptainAtGoal, METH_NOARGS, "Game.base+0096D850 ()B"},
   {"CreepsOnMap", CreepsOnMap, METH_NOARGS, "Game.base+0096E610 ()B"},
   {"RemoveInjuries", RemoveInjuries, METH_NOARGS, "Game.base+00973920 ()V"},
   {"RemoveSiege", RemoveSiege, METH_NOARGS, "Game.base+00973A00 ()V"},
   {"IsTowered", IsTowered, METH_VARARGS, "Game.base+00971370 (Hunit;)B"},
   {"DisablePathing", DisablePathing, METH_NOARGS, "Game.base+0096E7C0 ()V"},
   {"SetAmphibious", SetAmphibious, METH_NOARGS, "Game.base+009742A0 ()V"},
   {"InitAssault", InitAssault, METH_NOARGS, "Game.base+00971080 ()V"},
   {"AddAssault", AddAssault, METH_VARARGS, "Game.base+0096C930 (II)B"},
   {"AddDefenders", AddDefenders, METH_VARARGS, "Game.base+0096CB50 (II)B"},
   {"GetCreepCamp", GetCreepCamp, METH_VARARGS, "Game.base+0096FB60 (IIB)Hunit;"},
   {"StartGetEnemyBase", StartGetEnemyBase, METH_NOARGS, "Game.base+00975120 ()V"},
   {"WaitGetEnemyBase", WaitGetEnemyBase, METH_NOARGS, "Game.base+00975C80 ()B"},
   {"GetMegaTarget", GetMegaTarget, METH_NOARGS, "Game.base+009700E0 ()Hunit;"},
   {"GetEnemyBase", GetEnemyBase, METH_NOARGS, "Game.base+0096FBA0 ()Hunit;"},
   {"GetExpansionFoe", GetExpansionFoe, METH_NOARGS, "Game.base+0096FC30 ()Hunit;"},
   {"GetExpansionX", GetExpansionX, METH_NOARGS, "Game.base+0096FD20 ()I"},
   {"GetExpansionY", GetExpansionY, METH_NOARGS, "Game.base+0096FDA0 ()I"},
   {"SetStagePoint", SetStagePoint, METH_VARARGS, "Game.base+00974BB0 (RR)V"},
   {"AttackMoveKill", AttackMoveKill, METH_VARARGS, "Game.base+0096CFA0 (Hunit;)V"},
   {"AttackMoveXY", AttackMoveXY, METH_VARARGS, "Game.base+0096D070 (II)V"},
   {"LoadZepWave", LoadZepWave, METH_VARARGS, "Game.base+00971850 (II)V"},
   {"SuicidePlayer", SuicidePlayer, METH_VARARGS, "Game.base+00975270 (Hplayer;B)B"},
   {"SuicidePlayerUnits", SuicidePlayerUnits, METH_VARARGS, "Game.base+00975300 (Hplayer;B)B"},
   {"UnitAlive", UnitAlive, METH_VARARGS, "Game.base+00975970 (Hunit;)B"},
   {"UnitInvis", UnitInvis, METH_VARARGS, "Game.base+009759D0 (Hunit;)B"},
   {"IgnoredUnits", IgnoredUnits, METH_VARARGS, "Game.base+00971040 (I)I"},
   {"CommandsWaiting", CommandsWaiting, METH_NOARGS, "Game.base+0096E190 ()I"},
   {"GetLastCommand", GetLastCommand, METH_NOARGS, "Game.base+0096FF50 ()I"},
   {"GetLastData", GetLastData, METH_NOARGS, "Game.base+0096FF90 ()I"},
   {"PopLastCommand", PopLastCommand, METH_NOARGS, "Game.base+00972930 ()V"},
   {"SetCampaignAI", SetCampaignAI, METH_NOARGS, "Game.base+00974300 ()V"},
   {"SetMeleeAI", SetMeleeAI, METH_NOARGS, "Game.base+009748F0 ()V"},
   {"SetTargetHeroes", SetTargetHeroes, METH_VARARGS, "Game.base+00974BF0 (B)V"},
   {"SetHeroesFlee", SetHeroesFlee, METH_VARARGS, "Game.base+009747B0 (B)V"},
   {"SetHeroesBuyItems", SetHeroesBuyItems, METH_VARARGS, "Game.base+00974770 (B)V"},
   {"SetIgnoreInjured", SetIgnoreInjured, METH_VARARGS, "Game.base+00974880 (B)V"},
   {"SetPeonsRepair", SetPeonsRepair, METH_VARARGS, "Game.base+00974980 (B)V"},
   {"SetRandomPaths", SetRandomPaths, METH_VARARGS, "Game.base+00974A50 (B)V"},
   {"SetDefendPlayer", SetDefendPlayer, METH_VARARGS, "Game.base+00974400 (B)V"},
   {"SetHeroesTakeItems", SetHeroesTakeItems, METH_VARARGS, "Game.base+00974840 (B)V"},
   {"SetUnitsFlee", SetUnitsFlee, METH_VARARGS, "Game.base+00974D10 (B)V"},
   {"SetGroupsFlee", SetGroupsFlee, METH_VARARGS, "Game.base+009745B0 (B)V"},
   {"SetSlowChopping", SetSlowChopping, METH_VARARGS, "Game.base+00974B10 (B)V"},
   {"SetSmartArtillery", SetSmartArtillery, METH_VARARGS, "Game.base+00974B70 (B)V"},
   {"SetWatchMegaTargets", SetWatchMegaTargets, METH_VARARGS, "Game.base+00974DB0 (B)V"},
   {"SetReplacementCount", SetReplacementCount, METH_VARARGS, "Game.base+00974AD0 (I)V"},
   {"PurchaseZeppelin", PurchaseZeppelin, METH_NOARGS, "Game.base+009729C0 ()V"},
   {"MeleeDifficulty", MeleeDifficulty, METH_NOARGS, "Game.base+00971F00 ()I"},
   {"DebugBreak", DebugBreak, METH_VARARGS, "Game.base+0096E640 (I)V"},
   {NULL, NULL, 0, NULL}
};
