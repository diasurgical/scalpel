// C:\diabpsx\SOURCE\SOUND.CPP

#include "types.h"

// address: 0x8007024C
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80070254
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x800702BC
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x800702DC
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x8007034C
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x800703E8
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80070444
void music_stop__Fv() {
}


// address: 0x80070488
void music_fade__Fv() {
}


// address: 0x800704C8
void music_start__Fi(int nTrack) {
	{
		{
			// register: 6
			register int MusicVolume;
		}
	}
}


// address: 0x80070554
void music_hold__Fv() {
}


// address: 0x800705B4
void music_release__Fv() {
}


