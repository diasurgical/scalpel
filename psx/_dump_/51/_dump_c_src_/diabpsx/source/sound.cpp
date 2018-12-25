// C:\diabpsx\SOURCE\SOUND.CPP

#include "types.h"

// address: 0x800728FC
// line start: 106
// line end:   107
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80072904
// line start: 113
// line end:   121
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x8007296C
// line start: 128
// line end:   130
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x8007298C
// line start: 141
// line end:   158
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x800729EC
// line start: 167
// line end:   194
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x80072A7C
// line start: 209
// line end:   216
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80072ACC
// line start: 227
// line end:   233
void music_stop__Fv() {
}


// address: 0x80072B10
// line start: 245
// line end:   251
void music_fade__Fv() {
}


// address: 0x80072B50
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


// address: 0x80072BD4
// line start: 284
// line end:   290
void music_hold__Fv() {
}


// address: 0x80072C34
// line start: 299
// line end:   305
void music_release__Fv() {
}


// address: 0x80072C84
// line start: 314
// line end:   315
unsigned char snd_playing__Fi(int SFXNo) {
}


