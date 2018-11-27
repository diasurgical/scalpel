// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x800765D4
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x800765DC
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x800765E4
void ResetPal__Fv() {
}


// address: 0x800765EC
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x8007661C
bool GetFadeState__Fv() {
}


// address: 0x80076628
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x8007672C
void SmearScreen__Fv() {
}


// address: 0x80076734
void DrawFadedScreen__Fv() {
}


// address: 0x80076788
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80076844
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 17
	register int i;
	// register: 16
	register int lasttick;
	{
		// register: 16
		register int diff;
	}
}


// address: 0x80076900
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80076958
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 17
	register int i;
	// register: 16
	register int lasttick;
	{
		// register: 16
		register int diff;
	}
}


// address: 0x80076A34
bool PaletteFadeOut__Fi(int fr) {
}


