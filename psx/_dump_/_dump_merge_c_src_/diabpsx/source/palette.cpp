// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x80077F54
// line start: 203
// line end:   215
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007762C
// line start: 236
// line end:   256
void DrawFadedScreen__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x80076734
// line start: 261
// line end:   266
void DrawFadedScreen__Fv_addr_80076734() {
}


// address: 0x80077E88
// line start: 186
// line end:   198
void DrawFadedScreen__Fv_addr_80077E88() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077E7C
// line start: 174
// line end:   175
bool GetFadeState__Fv() {
}


// address: 0x80077E34
// line start: 73
// line end:   95
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80077E3C
// line start: 100
// line end:   113
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80077BE8
// line start: 304
// line end:   332
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80076844
// line start: 304
// line end:   332
void PaletteFadeInTask__FP4TASK_addr_80076844(struct TASK *T) {
	// register: 17
	register int i;
	// register: 16
	register int lasttick;
	{
		// register: 16
		register int diff;
	}
}


// address: 0x80078010
// line start: 222
// line end:   245
void PaletteFadeInTask__FP4TASK_addr_80078010(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x80078094
// line start: 252
// line end:   259
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80077CD0
// line start: 354
// line end:   389
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80076958
// line start: 354
// line end:   389
void PaletteFadeOutTask__FP4TASK_addr_80076958(struct TASK *T) {
	// register: 17
	register int i;
	// register: 16
	register int lasttick;
	{
		// register: 16
		register int diff;
	}
}


// address: 0x800780EC
// line start: 267
// line end:   293
void PaletteFadeOutTask__FP4TASK_addr_800780EC(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x80078184
// line start: 300
// line end:   307
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x80077E44
// line start: 118
// line end:   124
void ResetPal__Fv() {
}


// address: 0x80077E4C
// line start: 132
// line end:   139
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80077528
// line start: 202
// line end:   226
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x800783CC
// line start: 203
// line end:   227
void SetPolyXY__FP8POLY_GT4PUc_addr_800783CC(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 6
	register unsigned char bright1;
	// register: 3
	register unsigned char bright2;
}


// address: 0x800781A4
// line start: 203
// line end:   227
void SetPolyXY__FP8POLY_GT4PUc_addr_800781A4(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright1;
	// register: 8
	register unsigned char bright2;
}


// address: 0x8007672C
// line start: 235
// line end:   258
void SmearScreen__Fv() {
}


