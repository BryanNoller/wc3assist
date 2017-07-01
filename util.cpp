#include "stdafx.h"

void Log(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    FILE* f;
	fopen_s(&f, LOGFILEPATH, "a+");
    vfprintf(f, fmt, args);
    fprintf(f, "\n");
    fclose(f);
    va_end(args);
}

void write_call(DWORD jmp_from, DWORD jmp_to) {
    DWORD dwOldProtect;
    if (VirtualProtect((void*)(jmp_from), 5, PAGE_EXECUTE_READWRITE, &dwOldProtect)) {
		*(unsigned char*)(jmp_from) = 0xE8;
		*(unsigned int*) (jmp_from + 0x1)  = (unsigned int)jmp_to - (jmp_from + 0x5);
		VirtualProtect((void*)(jmp_from), 5, dwOldProtect, NULL);
    } else {
        Log("%0.8x GetLastError after VirtualProtect", GetLastError());
    }
}

void write_jmp(DWORD jmp_from, DWORD jmp_to) {
    DWORD dwOldProtect;
    if (VirtualProtect((void*)(jmp_from), 5, PAGE_EXECUTE_READWRITE, &dwOldProtect)) {
        *(unsigned char*)(jmp_from) = 0xE9;
        *(unsigned int*) (jmp_from + 0x1)  = (unsigned int)jmp_to - (jmp_from + 0x5);
		VirtualProtect((void*)(jmp_from), 5, dwOldProtect, NULL);
    } else {
        Log("%0.8x GetLastError after VirtualProtect", GetLastError());
    }
}

void write_mem(DWORD offset, LPVOID data, DWORD data_len) {
    DWORD dwOldProtect;
    VirtualProtect((void*)(offset), data_len, PAGE_EXECUTE_READWRITE, &dwOldProtect);
    memcpy( (void*)offset, data, data_len );
    VirtualProtect((void*)(offset), data_len, dwOldProtect, NULL);
}
