// C:\diabpsx\SOURCE\LANG.CPP

#include "types.h"

// address: 0x8007391C
// size: 0x4
// line start: 83
// line end:   84
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x80073928
// line start: 91
// line end:   136
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


// address: 0x80073AA8
// line start: 146
// line end:   166
char *GetStr__Fi(int StrId) {
}


// address: 0x80073B10
// line start: 176
// line end:   211
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


// address: 0x80073C88
// line start: 223
// line end:   232
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x80073CE0
// line start: 241
// line end:   243
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x80073CEC
// line start: 253
// line end:   271
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x80073E0C
// line start: 279
// line end:   305
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


