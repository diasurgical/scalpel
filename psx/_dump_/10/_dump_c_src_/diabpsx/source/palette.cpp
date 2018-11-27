// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x800774D4
// line start: 73
// line end:   95
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x800774DC
// line start: 100
// line end:   113
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x800774E4
// line start: 118
// line end:   124
void ResetPal__Fv() {
}


// address: 0x800774EC
// line start: 132
// line end:   139
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x8007751C
// line start: 174
// line end:   175
bool GetFadeState__Fv() {
}


// address: 0x80077528
// line start: 202
// line end:   226
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x8007762C
// line start: 236
// line end:   256
void DrawFadedScreen__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007776C
// line start: 282
// line end:   294
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077828
// line start: 301
// line end:   324
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x800778AC
// line start: 331
// line end:   338
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80077904
// line start: 346
// line end:   378
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x8007799C
// line start: 385
// line end:   392
bool PaletteFadeOut__Fi(int fr) {
}


