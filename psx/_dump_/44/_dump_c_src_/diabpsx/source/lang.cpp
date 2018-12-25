// C:\diabpsx\SOURCE\LANG.CPP

#include "types.h"

// address: 0x800735CC
// size: 0x4
// line start: 83
// line end:   84
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x800735D8
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


// address: 0x80073758
// line start: 146
// line end:   166
char *GetStr__Fi(int StrId) {
}


// address: 0x800737C0
// line start: 172
// line end:   173
void LANG_ReloadMainTXT__Fv() {
}


// address: 0x800737E0
// line start: 184
// line end:   219
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


// address: 0x80073958
// line start: 231
// line end:   240
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x800739B0
// line start: 249
// line end:   251
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x800739BC
// line start: 261
// line end:   279
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x80073ADC
// line start: 287
// line end:   313
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


