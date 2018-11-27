// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x80077E9C
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80077EA4
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80077EAC
void ResetPal__Fv() {
}


// address: 0x80077EB4
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80077EE4
bool GetFadeState__Fv() {
}


// address: 0x80077EF0
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x80077FF4
void SmearScreen__Fv() {
}


// address: 0x80077FFC
void DrawFadedScreen__Fv() {
}


// address: 0x80078050
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007810C
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x8007819C
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x800781F4
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x800782A4
bool PaletteFadeOut__Fi(int fr) {
}


