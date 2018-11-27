// C:\diabpsx\SOURCE\SOUND.CPP

#include "types.h"

// address: 0x8006EB78
// line start: 106
// line end:   107
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x8006EB80
// line start: 113
// line end:   121
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x8006EBE8
// line start: 128
// line end:   130
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x8006EC08
// line start: 141
// line end:   158
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x8006EC68
// line start: 167
// line end:   194
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x8006ECF8
// line start: 209
// line end:   216
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x8006ED48
// line start: 227
// line end:   233
void music_stop__Fv() {
}


// address: 0x8006ED8C
// line start: 245
// line end:   251
void music_fade__Fv() {
}


// address: 0x8006EDCC
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


// address: 0x8006EE50
// line start: 284
// line end:   290
void music_hold__Fv() {
}


// address: 0x8006EEB0
// line start: 299
// line end:   305
void music_release__Fv() {
}


// address: 0x8006EF00
// line start: 314
// line end:   315
unsigned char snd_playing__Fi(int SFXNo) {
}


