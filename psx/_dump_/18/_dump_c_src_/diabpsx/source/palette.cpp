// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x800779EC
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x800779F4
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x800779FC
void ResetPal__Fv() {
}


// address: 0x80077A04
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80077A34
bool GetFadeState__Fv() {
}


// address: 0x80077A40
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x80077B44
void SmearScreen__Fv() {
}


// address: 0x80077B4C
void DrawFadedScreen__Fv() {
}


// address: 0x80077BA0
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077C5C
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


// address: 0x80077D18
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80077D70
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


// address: 0x80077E4C
bool PaletteFadeOut__Fi(int fr) {
}


