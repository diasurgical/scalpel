// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x80076040
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80076048
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80076050
void ResetPal__Fv() {
}


// address: 0x80076058
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80076088
bool GetFadeState__Fv() {
}


// address: 0x80076094
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 6
	register unsigned char bright1;
	// register: 3
	register unsigned char bright2;
}


// address: 0x800761B0
void SmearScreen__Fv() {
}


// address: 0x800761B8
void DrawFadedScreen__Fv() {
}


// address: 0x8007620C
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x800762C8
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80076358
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x800763B0
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80076460
bool PaletteFadeOut__Fi(int fr) {
}


