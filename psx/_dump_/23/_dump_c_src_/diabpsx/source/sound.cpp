// C:\diabpsx\SOURCE\SOUND.CPP

#include "types.h"

// address: 0x800705D8
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x800705E0
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x80070648
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x80070668
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x800706D8
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x80070774
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x800707DC
void music_stop__Fv() {
}


// address: 0x80070828
void music_fade__Fv() {
}


// address: 0x80070868
void music_start__Fi(int nTrack) {
	{
		{
			// register: 6
			register int MusicVolume;
		}
	}
}


