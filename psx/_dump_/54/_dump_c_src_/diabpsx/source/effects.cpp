// C:\diabpsx\SOURCE\EFFECTS.CPP

#include "types.h"

// address: 0x8003A064
// line start: 77
// line end:   88
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x8003A06C
// line start: 96
// line end:   102
void stream_stop__Fv() {
}


// address: 0x8003A0C0
// line start: 115
// line end:   149
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003A1B0
// line start: 155
// line end:   171
void stream_update__Fv() {
}


// address: 0x8003A1B8
// line start: 177
// line end:   184
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003A1D4
// line start: 191
// line end:   222
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003A22C
// line start: 228
// line end:   251
void FreeMonsterSnd__Fv() {
}


// address: 0x8003A234
// line start: 257
// line end:   277
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003A338
// line start: 284
// line end:   315
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003A434
// line start: 324
// line end:   369
void PlayEffect__Fii(int i, int mode) {
	// register: 16
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003A54C
// line start: 376
// line end:   398
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003A5E4
// line start: 413
// line end:   416
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003A624
// line start: 424
// line end:   434
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003A678
// line start: 441
// line end:   456
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


// address: 0x8003A710
// line start: 463
// line end:   473
void sound_update__Fv() {
}


// address: 0x8003A744
// line start: 481
// line end:   512
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003A788
// line start: 518
// line end:   531
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


