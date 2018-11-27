// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x80077884
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x8007788C
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80077894
void ResetPal__Fv() {
}


// address: 0x8007789C
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x800778CC
bool GetFadeState__Fv() {
}


// address: 0x800778D8
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x800779DC
void SmearScreen__Fv() {
}


// address: 0x800779E4
void DrawFadedScreen__Fv() {
}


// address: 0x80077A38
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077AF4
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80077B84
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80077BDC
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80077C8C
bool PaletteFadeOut__Fi(int fr) {
}


