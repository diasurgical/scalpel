// C:\diabpsx\SOURCE\LANG.CPP

#include "types.h"

// address: 0x80073718
// size: 0x4
// line start: 83
// line end:   84
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x80073724
// line start: 91
// line end:   134
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


// address: 0x80073888
// line start: 142
// line end:   162
char *GetStr__Fi(int StrId) {
}


// address: 0x800738F0
// line start: 172
// line end:   207
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


// address: 0x800739F4
// line start: 219
// line end:   228
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x80073A4C
// line start: 237
// line end:   239
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x80073A58
// line start: 249
// line end:   267
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x80073B78
// line start: 275
// line end:   301
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


