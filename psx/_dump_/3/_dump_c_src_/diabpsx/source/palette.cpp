// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x8007AFE4
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x8007AFEC
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x8007AFF4
void ResetPal__Fv() {
}


// address: 0x8007AFFC
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x8007B02C
bool GetFadeState__Fv() {
}


// address: 0x8007B038
void DrawFadedScreen__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007B104
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007B1C0
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x8007B244
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x8007B29C
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x8007B334
bool PaletteFadeOut__Fi(int fr) {
}


