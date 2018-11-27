// C:\diabpsx\SOURCE\EFFECTS.CPP

#include "types.h"

// address: 0x8003AF10
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x8003AF18
void stream_stop__Fv() {
}


// address: 0x8003AF60
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003B024
void stream_update__Fv() {
}


// address: 0x8003B02C
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003B048
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003B0A0
void FreeMonsterSnd__Fv() {
}


// address: 0x8003B0A8
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003B1AC
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003B2BC
void PlayEffect__Fii(int i, int mode) {
	// register: 16
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003B3E8
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003B480
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003B4C0
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003B514
void sound_stop__Fv() {
	// register: 18
	register int mi;
	// register: 17
	register int mode;
	// register: 16
	register int nr;
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x8003B5AC
void sound_update__Fv() {
}


// address: 0x8003B5E0
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003B624
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


