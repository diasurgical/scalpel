// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x800774D4
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x800774DC
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x800774E4
void ResetPal__Fv() {
}


// address: 0x800774EC
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x8007751C
bool GetFadeState__Fv() {
}


// address: 0x80077528
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x8007762C
void DrawFadedScreen__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007776C
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077828
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x800778AC
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80077904
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x8007799C
bool PaletteFadeOut__Fi(int fr) {
}


