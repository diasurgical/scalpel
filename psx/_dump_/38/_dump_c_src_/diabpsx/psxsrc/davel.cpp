// C:\diabpsx\PSXSRC\DAVEL.CPP

#include "types.h"

// address: 0x8009E0F8
// line start: 92
// line end:   95
void DaveLDummyPoll__Fv() {
}


// address: 0x8009E100
// line start: 98
// line end:   100
void DaveL__Fv() {
}


// address: 0x8009E128
// line start: 118
// line end:   185
void DoReflection__FP8POLY_FT4iii(struct POLY_FT4 *Ft4, int R, int G, int B) {
	// register: 4
	register unsigned char zV0;
	// register: 5
	register unsigned char zV2;
	// register: 5
	register unsigned char zH;
	// register: 20
	register unsigned char dH;
	// register: 17
	register unsigned char zV;
	// register: 3
	register unsigned char *s;
	// register: 4
	register unsigned char *d;
	// register: 18
	register unsigned char *Ft4m;
	// register: 23
	register short zX0;
	// register: 30
	register short zX1;
	// address: 0x8011B374
	static int count;
	// register: 22
	register int n;
	// register: 16
	register int xoffset;
	// register: 6
	register int yoffset;
	// register: 19
	register short zY;
}


// address: 0x8009E468
// line start: 189
// line end:   220
void mteleportfx__Fv() {
	// register: 20
	register int plr;
	// register: 16
	register int br;
	{
		{
			{
				{
					// register: 17
					register int OtPos;
				}
			}
		}
	}
}


// address: 0x8009E77C
// line start: 225
// line end:   239
void invistimer__Fv() {
	// register: 7
	register int plr;
}


// address: 0x8009E854
// line start: 242
// line end:   277
void setUVparams__FP8POLY_FT4P9FRAME_HDR(struct POLY_FT4 *Ft4, struct FRAME_HDR *Fr) {
	// register: 5
	register int zU;
	// register: 9
	register int zV;
	// register: 8
	register int zW;
	// register: 7
	register int zH;
}


// address: 0x8009E8E4
// line start: 283
// line end:   316
void drawparticle__Fiiiiii(int x, int y, int scale, int anim, int colour, int OtPos) {
	// register: 23
	// size: 0x70
	register struct TextDat *Dat;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// address: 0xFFFFFFD0
	// size: 0xC
	auto struct FRAME_HDR *Fr;
	// register: 16
	register unsigned char SpR;
	// register: 17
	register unsigned char SpG;
	// register: 18
	register unsigned char SpB;
	// register: 20
	register int w;
	// register: 19
	register int h;
	// register: 30
	register int f;
}


// address: 0x8009EADC
// line start: 320
// line end:   333
void drawpolyF4__Fiiiiii(int x, int y, int w, int h, int colour, int OtPos) {
	// address: 0xFFFFFFD0
	// size: 0x18
	auto struct POLY_F4 *F4;
	// register: 21
	register unsigned char SpR;
	// register: 23
	register unsigned char SpG;
	// register: 18
	register unsigned char SpB;
}


// address: 0x8009EC10
// line start: 338
// line end:   359
void drawpolyG4__Fiiiiiiii(int x, int y, int w, int h1, int h2, int colour0, int colour1, int OtPos) {
	// address: 0xFFFFFFC0
	// size: 0x24
	auto struct POLY_G4 *G4;
	// register: 30
	register unsigned char SpR0;
	// register: 23
	register unsigned char SpG0;
	// register: 18
	register unsigned char SpB0;
	// address: 0xFFFFFFC8
	auto unsigned char SpR1;
	// address: 0xFFFFFFD0
	auto unsigned char SpG1;
	// register: 22
	register unsigned char SpB1;
}


// address: 0x8009EDE0
// line start: 364
// line end:   390
void particlejump__Fii(int ScrX, int ScrY) {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x8009EFB0
// line start: 412
// line end:   431
void doparticlejump__Fv() {
	// register: 17
	register int ScrX;
	// register: 5
	register int ScrY;
	// register: 19
	register int ScrXOff;
	// register: 20
	register int ScrYOff;
	// address: 0xFFFFFFD8
	auto int WorldX;
	// address: 0xFFFFFFDC
	auto int WorldY;
	// register: 21
	// size: 0x108
	register struct CBlocks *gblocks;
}


// address: 0x8009F144
// line start: 436
// line end:   456
void StartPartJump__Fiiiii(int mi, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x8009F298
// line start: 461
// line end:   480
void MonstPartJump__Fi(int m) {
	// register: 17
	register int ScrYOff;
	// address: 0xFFFFFFE0
	auto int WorldX;
	// address: 0xFFFFFFE4
	auto int WorldY;
	// register: 18
	// size: 0x108
	register struct CBlocks *gblocks;
}


// address: 0x8009F3B8
// line start: 485
// line end:   566
void doparticlechain__Fiiiiiiiiiiii(int sx, int sy, int dx, int dy, int count, int scale, int scaledec, int semitrans, int randomize, int colour, int OtPos, int source) {
	// address: 0xFFFFFF90
	// size: 0x70
	auto struct TextDat *Dat;
	// register: 5
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 8
	register unsigned char SpR;
	// register: 23
	register unsigned char SpG;
	// register: 21
	register unsigned char SpB;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 3
	register int br;
	// register: 20
	register int w;
	// register: 18
	register int h;
	// register: 19
	register int f;
	// register: 22
	register int c;
	// address: 0xFFFFFF98
	auto int t;
	// register: 2
	register int rand;
	// register: 3
	register int xoffs;
	// register: 2
	register int yoffs;
	// address: 0xFFFFFFA0
	auto int xf;
	// address: 0xFFFFFFA8
	auto int yf;
	// address: 0xFFFFFFB0
	auto int dxf;
	// address: 0xFFFFFFB8
	auto int dyf;
	// register: 5
	register int dxabs;
	// register: 4
	register int dyabs;
	// register: 4
	register int divisor;
	// register: 8
	register int *partexecnum;
}


// address: 0x8009F708
// line start: 570
// line end:   587
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x8009F7C4
// line start: 591
// line end:   641
void Teleportfx__Fiiiiiiii(int scrnx, int scrny, int width, int height, int scale, int colmask, int numpart, int OtPos) {
	// address: 0xFFFFFF98
	// size: 0x70
	auto struct TextDat *Dat;
	// address: 0xFFFFFF70
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 22
	register unsigned char SpR;
	// register: 23
	register unsigned char SpG;
	// register: 17
	register unsigned char SpB;
	// register: 20
	register int w;
	// register: 16
	register int h;
	// register: 18
	register int x;
	// register: 19
	register int y;
	// register: 30
	register int f;
	// address: 0xFFFFFFA0
	auto int n;
	// register: 17
	register int randu;
	// register: 21
	register int randl;
	// address: 0xFFFFFFA8
	auto unsigned char Rmask;
	// address: 0xFFFFFFB0
	auto unsigned char Gmask;
	// address: 0xFFFFFFB8
	auto unsigned char Bmask;
	// address: 0xFFFFFE70
	// size: 0x100
	auto int rand[64];
}


// address: 0x8009FAC4
// line start: 645
// line end:   660
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x8009FCEC
// line start: 665
// line end:   680
void ParticleExp__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x8009FD84
// line start: 685
// line end:   702
void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x8009FEA8
// line start: 706
// line end:   721
void healFX__Fv() {
	// register: 17
	register int plr;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8009FFE4
// line start: 726
// line end:   728
void HealStart__Fi(int plr) {
}


// address: 0x800A0018
// line start: 732
// line end:   735
void HealotherStart__Fi(int plr) {
}


// address: 0x800A0050
// line start: 739
// line end:   745
void TeleStart__Fi(int plr) {
}


// address: 0x800A0110
// line start: 749
// line end:   751
void TeleStop__Fi(int plr) {
}


// address: 0x800A013C
// line start: 755
// line end:   757
void PhaseStart__Fi(int plr) {
}


// address: 0x800A0170
// line start: 762
// line end:   764
void PhaseEnd__Fi(int plr) {
}


// address: 0x800A019C
// line start: 770
// line end:   793
void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT R;
	// register: 22
	// size: 0x108
	register struct CBlocks *TheBlocks;
	// register: 21
	register int ScrXOff;
	// register: 20
	register int ScrYOff;
	// register: 17
	register int OtPos;
}


// address: 0x800A0384
// line start: 798
// line end:   801
void ApocaStart__Fi(int plr) {
}


// address: 0x800A03E8
// line start: 806
// line end:   826
void DaveLTask__FP4TASK(struct TASK *T) {
}


