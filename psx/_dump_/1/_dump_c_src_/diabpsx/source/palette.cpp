// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x80077E34
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80077E3C
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80077E44
void ResetPal__Fv() {
}


// address: 0x80077E4C
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80077E7C
bool GetFadeState__Fv() {
}


// address: 0x80077E88
void DrawFadedScreen__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077F54
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80078010
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x80078094
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x800780EC
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x80078184
bool PaletteFadeOut__Fi(int fr) {
}


