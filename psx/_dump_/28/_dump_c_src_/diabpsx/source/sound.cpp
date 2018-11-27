// C:\diabpsx\SOURCE\SOUND.CPP

#include "types.h"

// address: 0x800709A8
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x800709B0
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x80070A18
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x80070A38
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x80070AA8
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x80070B44
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80070BA0
void music_stop__Fv() {
}


// address: 0x80070BE4
void music_fade__Fv() {
}


// address: 0x80070C24
void music_start__Fi(int nTrack) {
	{
		{
			// register: 6
			register int MusicVolume;
		}
	}
}


// address: 0x80070CB0
void music_hold__Fv() {
}


// address: 0x80070D10
void music_release__Fv() {
}


