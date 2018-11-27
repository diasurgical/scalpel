// C:\diabpsx\SOURCE\LANG.CPP

#include "types.h"

// address: 0x800735FC
// size: 0x4
// line start: 82
// line end:   83
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x80073608
// line start: 90
// line end:   148
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
				{
					{
						// register: 4
						register int f;
					}
				}
			}
		}
	}
}


// address: 0x800737E0
// line start: 158
// line end:   178
char *GetStr__Fi(int StrId) {
}


// address: 0x80073848
// line start: 188
// line end:   214
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


// address: 0x8007394C
// line start: 226
// line end:   235
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x800739A4
// line start: 244
// line end:   246
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x800739B0
// line start: 256
// line end:   274
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x80073AD0
// line start: 282
// line end:   308
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


