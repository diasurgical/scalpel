// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

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


// address: 0x80077E7C
// line start: 174
// line end:   175
bool GetFadeState__Fv() {
}


// address: 0x80077E88
// line start: 186
// line end:   198
void DrawFadedScreen__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077F54
// line start: 203
// line end:   215
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80078010
// line start: 222
// line end:   245
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x80078094
// line start: 252
// line end:   259
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x800780EC
// line start: 267
// line end:   293
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x80078184
// line start: 300
// line end:   307
bool PaletteFadeOut__Fi(int fr) {
}


