// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x80078150
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80078158
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80078160
void ResetPal__Fv() {
}


// address: 0x80078168
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80078198
bool GetFadeState__Fv() {
}


// address: 0x800781A4
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright1;
	// register: 8
	register unsigned char bright2;
}


// address: 0x800782A4
void SmearScreen__Fv() {
}


// address: 0x800782AC
void DrawFadedScreen__Fv() {
}


// address: 0x80078300
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x800783BC
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x8007844C
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x800784A4
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80078554
bool PaletteFadeOut__Fi(int fr) {
}


