// C:\diabpsx\SOURCE\LANG.CPP

#include "types.h"

// address: 0x800722D8
// size: 0x4
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x800722E4
void LANG_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	{
		{
			// address: 0xFFFFFFC0
			// size: 0x28
			auto char FileNameBuffer[40];
			// register: 16
			// size: 0x14
			register struct FileIO *FIO;
			{
				// register: 4
				register int f;
			}
		}
	}
}


// address: 0x800723E8
char *GetStr__Fi(int StrId) {
}


// address: 0x80072450
void LANG_SetLang__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
	{
		{
			// address: 0xFFFFFFC0
			// size: 0x28
			auto char FileNameBuffer[40];
			// register: 16
			// size: 0x14
			register struct FileIO *FIO;
			{
				// register: 4
				register int f;
			}
		}
	}
}


// address: 0x80072554
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x800725AC
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x800725B8
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x800726C0
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


