#include "stdafx.h"

bool running;
PyObject* pyfnMainLoop;
ULONGLONG script_saved_time = 0;

VOID PythonCode()
{
	FILETIME ft;
	HANDLE hFile = CreateFileA(PYTHONFILEPATH, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
	if (hFile == INVALID_HANDLE_VALUE)
	{
		Log("CreateFile failed with error %d!", GetLastError());
		return;
	}
	if (!hFile)
	{
		Log("\"%s\" does not exists!", PYTHONFILEPATH);
		return;
	}
	if (GetFileTime(hFile, NULL, NULL, &ft))
	{
		ULONGLONG time = (((ULONGLONG)ft.dwHighDateTime) << 32) + ft.dwLowDateTime;
		if (time == script_saved_time)
		{
		}
		else
		{
			script_saved_time = time;
			Log("load %s", PYTHONFILEPATH);

            char *python_code = NULL;
            FILE *fp;
            fopen_s(&fp, PYTHONFILEPATH, "r");
            if (fp != NULL) {
                if (fseek(fp, 0L, SEEK_END) == 0) {
                    long bufsize = ftell(fp);
                    if (bufsize > 0)
                    {
                        python_code = (char*)malloc(sizeof(char) * (bufsize + 1));
                        if (fseek(fp, 0L, SEEK_SET) == 0)
                        {
                            size_t newLen = fread(python_code, sizeof(char), bufsize, fp);
                            python_code[newLen++] = '\0';
                        }
                    }
                }
                fclose(fp);
            }
            //Log("%0.8x fp", fp);

			PyObject* pCompiledFn = Py_CompileString(python_code, "", Py_file_input);
            //Log("%0.8x pCompiledFn", pCompiledFn);
            free(python_code);
			if (pCompiledFn == NULL)
			{
				PyErr_Print();
				ExitProcess(0);
			}

			PyObject* pModule = PyImport_ExecCodeModule("wc3assist", pCompiledFn);
            //Log("%0.8x pModule", pModule);
			if (pModule == NULL)
			{
				PyErr_Print();
				ExitProcess(0);
			}

			Py_XDECREF(pyfnMainLoop);
			pyfnMainLoop = PyObject_GetAttrString(pModule, "main");
            //Log("%0.8x pyfnMainLoop", pyfnMainLoop);
            if (pyfnMainLoop == NULL)
            {
                PyErr_Print();
                ExitProcess(0);
            }

			Py_DECREF(pModule);
			Py_DECREF(pCompiledFn);
		}
	}
	CloseHandle(hFile);
    if (PyCallable_Check(pyfnMainLoop))
        PyObject_CallObject(pyfnMainLoop, NULL);
}

DWORD WINAPI Wc3AssistantThread(LPVOID lpParam)
{
    GetTlsValue();
	Py_Initialize();
	Py_InitModule("wc3", wc3Methods);
	Py_InitModule("jass", JassMethods);
	PyRun_SimpleString(
		"import sys\n"
		"import time\n"
        "with open(\""LOGFILEPATH"\", \"w+\") as f:\n"
        "    f.write(\"Log started %s\\n\" % time.strftime(\"%Y-%m-%d %H:%M\"))\n"
		"class Logger(object):\n"
		"    def __init__(self, stdout, filename=\""LOGFILEPATH"\"):\n"
		"        self.stdout = stdout\n"
		"        self.filename = filename\n"
		"    def write(self, data):\n"
		"        with open(self.filename, \"a+\") as f:\n"
		"            f.write(data)\n"
		"        return self.stdout.write(data)\n"
		"    def __getattr__(self, attr):\n"
		"        return getattr(self.stdout, attr)\n"
		"sys.stdout = Logger(sys.stdout)\n"
		"sys.stderr = sys.stdout\n"
	);

    while(running)
    {
        DWORD gamestate = GetGameStateValue();
        if (gamestate != -1 && CurrentGameState != gamestate)
        {
            //Log("GameState %d -> %d", CurrentGameState, gamestate);
            if (gamestate == 4) // Game started
				script_saved_time = 0;
            CurrentGameState = gamestate;
        }
        if (CurrentGameState == 4) // In Game
            PythonCode();
        Sleep(10);
    }
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    HANDLE hThread = NULL;
	switch (ul_reason_for_call)
	{
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(hModule);
            write_mem(_maphack, "\xb8\xff\x00\x00\x00\x90\x90", 7);
            write_mem(_maphack2, "\xeb", 1);
            running = TRUE;
            hThread = CreateThread(NULL, 0, Wc3AssistantThread, NULL, 0, NULL);
            break;
        case DLL_PROCESS_DETACH:
            running = FALSE;
            if (Py_IsInitialized())
                Py_Finalize();
            break;
	}
	return TRUE;
}
