/*	ALive
	Author Prof1983 <prof1983@ya.ru>
	Created 28.08.2012
	LastMod 28.08.2012 */

#include <vcl.h>
//#pragma hdrstop
#include <tchar.h>
extern "C" {
#include "ACore.c"
#include "ALibraries.c"
#include "APluginsLibImp.h"
#include "ASystemLibImp.h"




}

WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	CoreLib_Open("ACore32.dll");

	APlugins_Boot(Lib);
	ASystem_Boot(Lib);

	ASystem_Prepare2A("ALive", "ALive", 0x00000000, "AReason", 12, "AiKernel.org",
		"(c) AiKernel.org 2012", "http://aikernel.org/", "A", "../Data/");

	ACore_Boot();
	ACore_Init();
	ACore_Run();
	ACore_Fin();

	CoreLib_Close();

	return 0;
}

