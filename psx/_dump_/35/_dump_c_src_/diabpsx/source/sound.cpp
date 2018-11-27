// C:\diabpsx\SOURCE\SOUND.CPP

#include "types.h"

// address: 0x80070C6C
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80070C74
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x80070CDC
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x80070CFC
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x80070D5C
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x80070DEC
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80070E3C
void music_stop__Fv() {
}


// address: 0x80070E80
void music_fade__Fv() {
}


// address: 0x80070EC0
void music_start__Fi(int nTrack) {
	{
		{
			// register: 2
			register int MusicVolume;
		}
	}
}


// address: 0x80070F44
void music_hold__Fv() {
}


// address: 0x80070FA4
void music_release__Fv() {
}


// address: 0x80070FF4
unsigned char snd_playing__Fi(int SFXNo) {
}


