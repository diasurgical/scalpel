// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x80078378
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80078380
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80078388
void ResetPal__Fv() {
}


// address: 0x80078390
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x800783C0
bool GetFadeState__Fv() {
}


// address: 0x800783CC
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 6
	register unsigned char bright1;
	// register: 3
	register unsigned char bright2;
}


// address: 0x800784E8
void SmearScreen__Fv() {
}


// address: 0x800784F0
void DrawFadedScreen__Fv() {
}


// address: 0x80078544
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80078600
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80078690
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x800786E8
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80078798
bool PaletteFadeOut__Fi(int fr) {
}


