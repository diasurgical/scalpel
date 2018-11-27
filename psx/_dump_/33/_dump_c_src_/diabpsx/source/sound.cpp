// C:\diabpsx\SOURCE\SOUND.CPP

#include "types.h"

// address: 0x800705C4
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x800705CC
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x80070634
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x80070654
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x800706B4
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x80070744
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80070794
void music_stop__Fv() {
}


// address: 0x800707D8
void music_fade__Fv() {
}


// address: 0x80070818
void music_start__Fi(int nTrack) {
	{
		{
			// register: 2
			register int MusicVolume;
		}
	}
}


// address: 0x8007089C
void music_hold__Fv() {
}


// address: 0x800708FC
void music_release__Fv() {
}


