// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x80077D30
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80077D38
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80077D40
void ResetPal__Fv() {
}


// address: 0x80077D48
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80077D78
bool GetFadeState__Fv() {
}


// address: 0x80077D84
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x80077E88
void SmearScreen__Fv() {
}


// address: 0x80077E90
void DrawFadedScreen__Fv() {
}


// address: 0x80077EE4
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077FA0
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80078030
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80078088
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80078138
bool PaletteFadeOut__Fi(int fr) {
}


