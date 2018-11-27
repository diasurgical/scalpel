// C:\diabpsx\SOURCE\LANG.CPP

#include "types.h"

// address: 0x800731D0
// size: 0x4
// line start: 79
// line end:   80
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x800731DC
// line start: 87
// line end:   123
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


// address: 0x800732E0
// line start: 132
// line end:   152
char *GetStr__Fi(int StrId) {
}


// address: 0x80073348
// line start: 162
// line end:   188
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


// address: 0x8007344C
// line start: 200
// line end:   209
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x800734A4
// line start: 218
// line end:   220
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x800734B0
// line start: 230
// line end:   246
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x800735B8
// line start: 254
// line end:   280
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


