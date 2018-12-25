// C:\diabpsx\SOURCE\EFFECTS.CPP

#include "types.h"

// address: 0x8003CE9C
// line start: 83
// line end:   99
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x8003CEC4
// line start: 107
// line end:   117
void stream_stop__Fv() {
}


// address: 0x8003CF20
// line start: 127
// line end:   137
void stream_pause__Fv() {
}


// address: 0x8003CF84
// line start: 148
// line end:   156
void stream_resume__Fv() {
}


// address: 0x8003CFD4
// line start: 169
// line end:   207
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003D0C0
// line start: 213
// line end:   229
void stream_update__Fv() {
}


// address: 0x8003D0C8
// line start: 235
// line end:   242
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003D0E4
// line start: 249
// line end:   280
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003D13C
// line start: 286
// line end:   309
void FreeMonsterSnd__Fv() {
}


// address: 0x8003D144
// line start: 327
// line end:   368
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// address: 0xFFFFFFA0
	// size: 0x40
	auto char Temp[64];
	// register: 4294967295
	register long volume;
	// register: 6
	register long pan;
	// register: 5
	register int scrx;
	// register: 4
	register int scry;
	// register: 2
	// size: 0x108
	register struct CBlocks *gblocks;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register long vol;
}


// address: 0x8003D32C
// line start: 375
// line end:   424
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003D490
// line start: 433
// line end:   478
void PlayEffect__Fii(int i, int mode) {
	// register: 3
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003D5DC
// line start: 485
// line end:   511
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003D684
// line start: 520
// line end:   528
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003D6F0
// line start: 535
// line end:   548
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003D79C
// line start: 554
// line end:   569
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


// address: 0x8003D834
// line start: 576
// line end:   586
void sound_update__Fv() {
}


// address: 0x8003D868
// line start: 594
// line end:   625
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003D8AC
// line start: 631
// line end:   644
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


// address: 0x8003D954
// line start: 656
// line end:   663
void stream_fade__Fv() {
}


