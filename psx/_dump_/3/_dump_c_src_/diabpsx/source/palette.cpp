// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x8007AFE4
// line start: 73
// line end:   95
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x8007AFEC
// line start: 100
// line end:   113
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x8007AFF4
// line start: 118
// line end:   124
void ResetPal__Fv() {
}


// address: 0x8007AFFC
// line start: 132
// line end:   139
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x8007B02C
// line start: 174
// line end:   175
bool GetFadeState__Fv() {
}


// address: 0x8007B038
// line start: 186
// line end:   198
void DrawFadedScreen__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007B104
// line start: 203
// line end:   215
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007B1C0
// line start: 222
// line end:   245
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x8007B244
// line start: 252
// line end:   259
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x8007B29C
// line start: 267
// line end:   293
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x8007B334
// line start: 300
// line end:   307
bool PaletteFadeOut__Fi(int fr) {
}


