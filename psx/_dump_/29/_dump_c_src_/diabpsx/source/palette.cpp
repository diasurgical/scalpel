// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x800776C0
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x800776C8
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x800776D0
void ResetPal__Fv() {
}


// address: 0x800776D8
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80077708
bool GetFadeState__Fv() {
}


// address: 0x80077714
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x80077818
void SmearScreen__Fv() {
}


// address: 0x80077820
void DrawFadedScreen__Fv() {
}


// address: 0x80077874
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077930
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x800779C0
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80077A18
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80077AC8
bool PaletteFadeOut__Fi(int fr) {
}


