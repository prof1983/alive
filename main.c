/*  ALive
	Author Prof1983 <prof1983@ya.ru>
	Created 28.08.2012
	LastMod 28.08.2012
*/

#include "ACore.c"

int main(void)
{
	CoreLib_Open("ACore32.dll");

	ACore_Boot();
	ACore_Init();
	ACore_Run();
	ACore_Fin();

	CoreLib_Close();

	return 0;
}
