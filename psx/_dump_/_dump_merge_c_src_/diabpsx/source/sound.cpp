// C:\diabpsx\SOURCE\SOUND.CPP

#include "types.h"

// address: 0x8007141C
// line start: 245
// line end:   251
void music_fade__Fv() {
}


// address: 0x80070CB0
// line start: 284
// line end:   290
void music_hold__Fv() {
}


// address: 0x80070D10
// line start: 299
// line end:   305
void music_release__Fv() {
}


// address: 0x80070818
// line start: 261
// line end:   275
void music_start__Fi(int nTrack) {
	{
		{
			// register: 2
			register int MusicVolume;
		}
	}
}


// address: 0x8007145C
// line start: 260
// line end:   273
void music_start__Fi_addr_8007145C(int nTrack) {
}


// address: 0x80077BB8
// line start: 261
// line end:   276
void music_start__Fi_addr_80077BB8(int nTrack) {
	{
		{
			// register: 3
			register int MusicVolume;
		}
	}
}


// address: 0x80070868
// line start: 260
// line end:   274
void music_start__Fi_addr_80070868(int nTrack) {
	{
		{
			// register: 6
			register int MusicVolume;
		}
	}
}


// address: 0x800713D0
// line start: 227
// line end:   234
void music_stop__Fv() {
}


// address: 0x80072AD0
// line start: 113
// line end:   123
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
}


// address: 0x800711D4
// line start: 113
// line end:   121
void snd_get_volume__FPCcPl_addr_800711D4(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x80071368
// line start: 209
// line end:   216
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x800712CC
// line start: 167
// line end:   195
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x80077A88
// line start: 172
// line end:   201
void snd_play_msnd__FUsll_addr_80077A88(unsigned short pszName, long lVolume, long lPan) {
	// register: 18
	register int padj;
}


// address: 0x8007125C
// line start: 141
// line end:   158
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x80070B78
// line start: 141
// line end:   158
void snd_play_snd__FP4TSFXll_addr_80070B78(struct TSFX_dup_13 *pSnd, long lVolume, long lPan) {
}


// address: 0x80070E70
// line start: 314
// line end:   315
unsigned char snd_playing__Fi(int SFXNo) {
}


// address: 0x8007123C
// line start: 128
// line end:   130
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x80077A04
// line start: 132
// line end:   136
void snd_stop_snd__FP4TSnd_addr_80077A04(struct TSnd *pSnd) {
	{
		// register: 16
		register int v;
	}
}


// address: 0x800711CC
// line start: 106
// line end:   107
void snd_update__FUc(unsigned char bStopAll) {
}


