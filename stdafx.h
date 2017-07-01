#pragma once

#define PYTHONFILEPATH "wc3assist.py"
#define LOGFILEPATH "wc3assist.log"

#define ADDR(X,REG)\
    __asm MOV REG,DWORD PTR DS:[X]\
    __asm MOV REG,DWORD PTR DS:[REG]

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <tlhelp32.h>

#include <Python.h>
#include "util.h"
#include "offsets.h"
#include "game.h"
#include "wc3.h"
#include "jass.h"
