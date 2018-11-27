// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x80077EA0
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80077EA8
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80077EB0
void ResetPal__Fv() {
}


// address: 0x80077EB8
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80077EE8
bool GetFadeState__Fv() {
}


// address: 0x80077EF4
void DrawFadedScreen__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077FC0
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007807C
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x80078100
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80078158
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x800781F0
bool PaletteFadeOut__Fi(int fr) {
}


