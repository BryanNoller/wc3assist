#pragma once

void Log(const char* fmt, ...);
void write_call(DWORD jmp_from, DWORD jmp_to);
void write_jmp(DWORD jmp_from, DWORD jmp_to);
void write_mem(DWORD offset, LPVOID data, DWORD data_len);
