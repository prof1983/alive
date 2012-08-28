/*	ALive
	Author Prof1983 <prof1983@ya.ru>
	Created 28.08.2012
	LastMod 28.08.2012
*/

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
extern "C" {
#include "ACore.c"
}

//USEFORM("Unit1.cpp", Form1);

WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	CoreLib_Open("ACore32.dll");

	ACore_Boot();
	ACore_Init();
	ACore_Run();
	ACore_Fin();

	CoreLib_Close();

	/*
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	*/
	return 0;
}
//---------------------------------------------------------------------------
