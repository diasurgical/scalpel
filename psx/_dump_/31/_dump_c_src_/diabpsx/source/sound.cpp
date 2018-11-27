// C:\diabpsx\SOURCE\SOUND.CPP

#include "types.h"

// address: 0x80070370
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80070378
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x800703E0
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x80070400
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x80070470
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x8007050C
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80070568
void music_stop__Fv() {
}


// address: 0x800705AC
void music_fade__Fv() {
}


// address: 0x800705EC
void music_start__Fi(int nTrack) {
	{
		{
			// register: 6
			register int MusicVolume;
		}
	}
}


// address: 0x80070678
void music_hold__Fv() {
}


// address: 0x800706D8
void music_release__Fv() {
}


