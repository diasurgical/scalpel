// C:\diabpsx\SOURCE\LANG.CPP

#include "types.h"

// address: 0x80073B30
// size: 0x4
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x80073B3C
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


// address: 0x80073C40
char *GetStr__Fi(int StrId) {
}


// address: 0x80073CA8
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


// address: 0x80073DAC
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x80073E04
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x80073E10
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x80073F18
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


