// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x8007675C
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80076764
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x8007676C
void ResetPal__Fv() {
}


// address: 0x80076774
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x800767A4
bool GetFadeState__Fv() {
}


// address: 0x800767B0
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x800768B4
void SmearScreen__Fv() {
}


// address: 0x800768BC
void DrawFadedScreen__Fv() {
}


// address: 0x80076910
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x800769CC
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


// address: 0x80076A88
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80076AE0
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


// address: 0x80076BBC
bool PaletteFadeOut__Fi(int fr) {
}


