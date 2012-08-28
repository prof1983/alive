/*	ALive
	Author Prof1983 <prof1983@ya.ru>
	Created 28.08.2012
	LastMod 28.08.2012
*/

#include <vcl.h>
//#pragma hdrstop
#include <tchar.h>
extern "C" {
#include "ACore.c"
#include "APlugins.h"
}

WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	CoreLib_Open("ACore32.dll");

	ACore_Boot();
	ACore_Init();
	ACore_Run();
	ACore_Fin();

	CoreLib_Close();

	return 0;
}

