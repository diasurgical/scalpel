// C:\diabpsx\SOURCE\SOUND.CPP

#include "types.h"

// address: 0x80070AE8
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80070AF0
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x80070B58
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x80070B78
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x80070BD8
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x80070C68
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80070CB8
void music_stop__Fv() {
}


// address: 0x80070CFC
void music_fade__Fv() {
}


// address: 0x80070D3C
void music_start__Fi(int nTrack) {
	{
		{
			// register: 2
			register int MusicVolume;
		}
	}
}


// address: 0x80070DC0
void music_hold__Fv() {
}


// address: 0x80070E20
void music_release__Fv() {
}


// address: 0x80070E70
unsigned char snd_playing__Fi(int SFXNo) {
}


