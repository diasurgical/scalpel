// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x80077BFC
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80077C04
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80077C0C
void ResetPal__Fv() {
}


// address: 0x80077C14
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80077C44
bool GetFadeState__Fv() {
}


// address: 0x80077C50
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x80077D54
void SmearScreen__Fv() {
}


// address: 0x80077D5C
void DrawFadedScreen__Fv() {
}


// address: 0x80077DB0
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077E6C
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80077EFC
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80077F54
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80078004
bool PaletteFadeOut__Fi(int fr) {
}


