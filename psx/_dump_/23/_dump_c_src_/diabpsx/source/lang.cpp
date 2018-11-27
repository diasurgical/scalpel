// C:\diabpsx\SOURCE\LANG.CPP

#include "types.h"

// address: 0x80073494
// size: 0x4
// line start: 83
// line end:   84
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x800734A0
// line start: 91
// line end:   132
void LANG_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	{
		{
			// address: 0xFFFFFFC0
			// size: 0x28
			auto char FileNameBuffer[40];
			// register: 17
			// size: 0x14
			register struct FileIO *FIO;
			{
				// register: 4
				register int f;
			}
		}
	}
}


// address: 0x80073604
// line start: 142
// line end:   162
char *GetStr__Fi(int StrId) {
}


// address: 0x8007366C
// line start: 172
// line end:   198
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


// address: 0x80073770
// line start: 210
// line end:   219
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x800737C8
// line start: 228
// line end:   230
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x800737D4
// line start: 240
// line end:   258
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x800738F4
// line start: 266
// line end:   292
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


