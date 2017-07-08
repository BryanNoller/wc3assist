import winappdbg

OFFSET = 0x9177D0 # 1.28.1
OFFSET = 0x917950 # 1.28.2
OFFSET = 0x8c1d40 # 1.28.4
OFFSET = 0x8c2070 # 1.28.5

methods = []

class Hook(object):
    def __init__(self):
        self.gamebase = 0

    def jass(self, event):
        process = event.get_process()
        thread  = event.get_thread()
        reg     = thread.get_context()

        ra, p1 = thread.read_stack_dwords(2)

        param = process.peek_string(p1)
        name = process.peek_string(reg['Edx'])
        offset = reg['Ecx'] - self.gamebase

        assert param.startswith("(")
        assert param.find(")")
        args, rets = param[1:param.find(")")].split(';'), param[param.find(")")+1:].split(';')
        rets = [retv for retv in rets if retv] # remove empty
        assert len(rets) < 2
        assert len(rets) == 1
        names = []
        i = 0
        keys = [
            "I",
            "B",
            "R",
            "S",
            "C",

            "Hhandle",
            "Hplayerunitevent",
            "Hplayerevent",
            "Hplayerstate",
            "Hplayercolor",
            "Hplayerscore",
            "Hplayergameresult",
            "Hplayer",
            "Hitemtype",
            "Hitempool",
            "Hitem",
            "Hunitevent",
            "Hunitstate",
            "Hunittype",
            "Hunitpool",
            "Hunit",
            "Htriggercondition",
            "Htriggeraction",
            "Htrigger",
            "Htimerdialog",
            "Htimer",
            "Hmultiboarditem",
            "Hmultiboard",
            "Hracepreference",
            "Hrace",
            "Hsoundtype",
            "Hsound",
            "Hquestitem",
            "Hquest",
            "Heffecttype",
            "Heffect",

            "Hability",
            "Hagent",
            "Halliancetype",
            "Hattacktype",
            "Hblendmode",
            "Hboolexpr",
            "Hbutton",
            "Hcamerafield",
            "Hcamerasetup",
            "Hconditionfunc",
            "Hdamagetype",
            "Hdefeatcondition",
            "Hdestructable",
            "Hdialog",
            "Hevent",
            "Hfgamestate",
            "Hfilterfunc",
            "Hfogmodifier",
            "Hfogstate",
            "Hforce",
            "Hgamecache",
            "Hgamedifficulty",
            "Hgameevent",
            "Hgamespeed",
            "Hgamestate",
            "Hgametype",
            "Hgroup",
            "Hhashtable",
            "Higamestate",
            "Himage",
            "Hleaderboard",
            "Hlightning",
            "Hlimitop",
            "Hlocation",
            "Hmapcontrol",
            "Hmapdensity",
            "Hmapflag",
            "Hpathingtype",
            "Hplacement",
            "Hraritycontrol",
            "Hrect",
            "Hregion",
            "Hstartlocprio",
            "Hterraindeformation",
            "Htexmapflags",
            "Htexttag",
            "Htrackable",
            "Hubersplat",
            "Hversion",
            "Hvolumegroup",
            "Hweapontype",
            "Hweathereffect",
            "Hwidget",
        ]
        prev = None
        for arg in args:
            if arg:
                while(len(arg)):
                    arg_name = None
                    for key in keys:
                        if arg and arg.startswith(key):
                            part, arg = arg[0:len(key)], arg[len(key):]
                            arg_name = "arg_%X_%s" % (i, part)
                            break
                    if arg_name:
                        names.append(arg_name)
                        i += 4
                    if not arg_name:
                        print "argument?", repr(arg)
                        arg = ""
                        import sys
                        sys.exit(0)
        args = names
        methods.append((name, offset, param, args, rets))

        with open('jass.cpp', 'a') as f:
            f.write("// %s %0.8x %s\n" % (name, offset, param));

            cargs = ""
            if not len(args):
                pass
            elif len(args) == 1:
                cargs = "DWORD %s" % args[0]
            elif len(args) > 1:
                for arg in args:
                    if not cargs:
                        cargs = "DWORD %s" % arg
                    else:
                        cargs += ", DWORD %s" % arg
            f.write("%s Jass_%s(%s)\n" % ("DWORD" if len(rets) else "VOID", name, cargs));

            f.write("{\n")
            if len(rets):
                f.write("   DWORD rt = 0;\n")
            f.write("   __asm {\n")
            if len(args):
                rev_args = list(args)
                rev_args.reverse()
                for arg in rev_args:
                    f.write("       mov eax, %s\n" % arg);
                    f.write("       push eax\n")
            f.write("       call [_Jass_%s]\n" % name)
            if len(args):
                f.write("       add esp, 0x%0.2x\n" % (len(args)*4))
            if len(rets):
                f.write("       mov rt, eax\n")
            f.write("   }\n")

            if len(rets):
                f.write("   return rt;\n")
            f.write("}\n")
            f.write("static PyObject* %s(PyObject *self, PyObject *args)\n" % name);
            f.write("{\n")

            if len(rets):
                f.write("   DWORD rt = 0;\n");

            if len(args):
                for arg in args:
                    f.write("   DWORD %s = 0;\n" % arg);
                f.write("   if (!PyArg_ParseTuple(args, \"" + ("I"*len(args)) + "\"" + "".join([", &%s" % arg for arg in args]) + "))\n");
                f.write("       Py_RETURN_NONE;\n");

            cargs = ""
            if not len(args):
                pass
            elif len(args) == 1:
                cargs = "%s" % args[0]
            elif len(args) > 1:
                for arg in args:
                    if not cargs:
                        cargs = "%s" % arg
                    else:
                        cargs += ", %s" % arg
            f.write("   rt = Jass_%s(%s);\n" % (name, cargs))

            if len(rets):
                if rets[0] == "S":
                    f.write("   return Py_BuildValue(\"s\", jstr2cstr(rt));\n")
                else:
                    f.write("   return Py_BuildValue(\"I\", rt);\n")
            else:
                f.write("   Py_RETURN_NONE;\n")
            
            f.write("}\n");
            f.write("\n");

class MyEventHandler(winappdbg.EventHandler):
    def exit_process(self, event):
        p = event.get_process()
        print "Process Terminated. War3.exe 0x%x (%d) 0x%0.8x" % (p.get_pid(), p.get_pid(), p.get_main_module().get_base())

    def load_dll( self, event ):
        process = event.get_process()
        module  = event.get_module()

        if module.match_name("Game.dll"):
            print "LoadLibrary %s" % module.get_name()
            self.hook.gamebase = module.get_base()
            event.debug.break_at(event.get_pid(), self.hook.gamebase + OFFSET, self.hook.jass)

    def create_process(self, event):
        p = event.get_process()
        print "War3.exe 0x%x (%d) 0x%0.8x" % (p.get_pid(), p.get_pid(), p.get_main_module().get_base())
        self.count = 0
        self.hook = Hook()

with winappdbg.Debug(MyEventHandler(), bKillOnExit=True) as debug:
    with open('jass.cpp', 'w') as f:
        f.write("#include \"stdafx.h\"\n")
        f.write("\n")
    try:
        debug.execv( [r"C:\Program Files (x86)\Warcraft III\Warcraft III.exe"], bFollow=True )
        debug.loop()
    except KeyboardInterrupt:
        debug.stop()

    with open('jass.cpp', 'a') as f:
        f.write("PyMethodDef JassMethods[] = {\n");
        for (name, offset, param, args, rets) in methods:
            ml_flags = "METH_VARARGS" if len(args) else "METH_NOARGS"
            f.write("   {\"%s\", %s, %s, \"Game.base+%0.8X %s\"},\n" % (name, name, ml_flags, offset, param));
        f.write("   {NULL, NULL, 0, NULL}\n");
        f.write("};\n");

    with open('jass.h', 'w') as f:
        f.write("#pragma once\n")
        f.write("\n")
        f.write("PyMethodDef JassMethods[];\n")
        f.write("\n")
        for (name, offset, param, args, rets) in methods:
            f.write("static DWORD _Jass_%s = GetGameBase() + 0x%0.8x; // %s\n" % (name, offset, param))
        for (name, offset, param, args, rets) in methods:
            cargs = ""
            if not len(args):
                pass
            elif len(args) == 1:
                cargs = "DWORD %s" % args[0]
            elif len(args) > 1:
                for arg in args:
                    if not cargs:
                        cargs = "DWORD %s" % arg
                    else:
                        cargs += ", DWORD %s" % arg
            f.write("%s Jass_%s(%s);\n" % ("DWORD" if len(rets) else "VOID", name, cargs));
