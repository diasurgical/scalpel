// C:\diabpsx\SOURCE\SOUND.CPP

#include "types.h"

// address: 0x800778A4
// line start: 108
// line end:   109
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x800778AC
// line start: 132
// line end:   136
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
	{
		// register: 16
		register int v;
	}
}


// address: 0x800778E8
// line start: 145
// line end:   163
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x80077930
// line start: 172
// line end:   201
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
	// register: 18
	register int padj;
}


// address: 0x800779D0
// line start: 209
// line end:   216
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x800779E0
// line start: 227
// line end:   232
void music_stop__Fv() {
}


// address: 0x80077A20
// line start: 245
// line end:   251
void music_fade__Fv() {
}


// address: 0x80077A60
// line start: 261
// line end:   276
void music_start__Fi(int nTrack) {
	{
		{
			// register: 3
			register int MusicVolume;
		}
	}
}


// address: 0x80077B00
// line start: 315
// line end:   316
unsigned char snd_playing__Fi(int SFXNo) {
}


