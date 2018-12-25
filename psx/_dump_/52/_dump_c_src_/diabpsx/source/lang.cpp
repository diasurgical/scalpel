// C:\diabpsx\SOURCE\LANG.CPP

#include "types.h"

// address: 0x80071E08
// size: 0x4
// line start: 84
// line end:   85
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x80071E14
// line start: 92
// line end:   137
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


// address: 0x80071F80
// line start: 147
// line end:   167
char *GetStr__Fi(int StrId) {
}


// address: 0x80071FE8
// line start: 173
// line end:   176
void LANG_ReloadMainTXT__Fv() {
}


// address: 0x8007201C
// line start: 187
// line end:   222
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


// address: 0x80072180
// line start: 234
// line end:   243
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x800721D8
// line start: 252
// line end:   254
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x800721E4
// line start: 264
// line end:   282
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x800722AC
// line start: 290
// line end:   316
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


