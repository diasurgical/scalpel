// C:\diabpsx\PSXSRC\DAVEL.CPP

#include "types.h"

// address: 0x800970A8
// line start: 90
// line end:   91
void DaveLDummyPoll__Fv() {
}


// address: 0x800970B0
// line start: 94
// line end:   96
void DaveL__Fv() {
}


// address: 0x800970D8
// line start: 107
// line end:   167
void DoReflection__FP8POLY_FT4iii(struct POLY_FT4 *Ft4, int R, int G, int B) {
	// register: 3
	register unsigned char zV0;
	// register: 2
	register unsigned char zV2;
	// register: 2
	register unsigned char zH;
	// register: 22
	register unsigned char dH;
	// register: 17
	register unsigned char zV;
	// register: 3
	register unsigned char *s;
	// register: 4
	register unsigned char *d;
	// register: 19
	register unsigned char *Ft4m;
	// register: 23
	register short zX0;
	// register: 30
	register short zX1;
	// address: 0x80122848
	static int count;
	// register: 21
	register int n;
	// register: 16
	register int xoffset;
	// register: 4
	register int yoffset;
	// register: 18
	register short zY;
}


// address: 0x800973C4
// line start: 171
// line end:   202
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


// address: 0x800976C4
// line start: 207
// line end:   221
void invistimer__Fv() {
	// register: 7
	register int plr;
}


// address: 0x8009779C
// line start: 224
// line end:   259
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


// address: 0x8009782C
// line start: 265
// line end:   298
void drawparticle__Fiiiiii(int x, int y, int scale, int anim, int colour, int OtPos) {
	// register: 23
	// size: 0x6C
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


// address: 0x80097A24
// line start: 302
// line end:   315
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


// address: 0x80097B58
// line start: 320
// line end:   341
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


// address: 0x80097D28
// line start: 346
// line end:   372
void particlejump__Fv() {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x80097ED8
// line start: 376
// line end:   389
void particleglow__Fv() {
	// register: 17
	register int n;
}


// address: 0x80097FCC
// line start: 394
// line end:   396
void doparticlejump__Fv() {
}


// address: 0x8009800C
// line start: 400
// line end:   419
void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x80098174
// line start: 424
// line end:   507
void doparticlechain__Fiiiiiiiiiiii(int sx, int sy, int dx, int dy, int count, int scale, int scaledec, int semitrans, int randomize, int colour, int OtPos, int source) {
	// address: 0xFFFFFF88
	// size: 0x6C
	auto struct TextDat *Dat;
	// address: 0xFFFFFF80
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// address: 0xFFFFFF90
	// size: 0xC
	auto struct FRAME_HDR *Fr;
	// register: 21
	register unsigned char SpR;
	// register: 23
	register unsigned char SpG;
	// register: 22
	register unsigned char SpB;
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 3
	register int br;
	// register: 19
	register int w;
	// register: 16
	register int h;
	// register: 20
	register int f;
	// address: 0xFFFFFF98
	auto int c;
	// address: 0xFFFFFFA0
	auto int t;
	// register: 2
	register int rand;
	// register: 3
	register int xoffs;
	// register: 2
	register int yoffs;
	// address: 0xFFFFFFA8
	auto int xf;
	// address: 0xFFFFFFB0
	auto int yf;
	// address: 0xFFFFFFB8
	auto int dxf;
	// address: 0xFFFFFFC0
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


// address: 0x8009857C
// line start: 511
// line end:   526
void ParticleBlob__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80098614
// line start: 530
// line end:   547
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x800986D4
// line start: 551
// line end:   601
void Teleportfx__Fiiiiiiii(int scrnx, int scrny, int width, int height, int scale, int colmask, int numpart, int OtPos) {
	// address: 0xFFFFFF98
	// size: 0x6C
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


// address: 0x800989D4
// line start: 605
// line end:   620
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x80098BFC
// line start: 625
// line end:   640
void ParticleExp__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80098C98
// line start: 645
// line end:   662
void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x80098DBC
// line start: 666
// line end:   681
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


// address: 0x80098EF8
// line start: 686
// line end:   688
void HealStart__Fi(int plr) {
}


// address: 0x80098F2C
// line start: 692
// line end:   695
void HealotherStart__Fi(int plr) {
}


// address: 0x80098F64
// line start: 699
// line end:   702
void TeleStart__Fi(int plr) {
}


// address: 0x80098FC0
// line start: 707
// line end:   709
void PhaseStart__Fi(int plr) {
}


// address: 0x80098FF4
// line start: 714
// line end:   716
void PhaseEnd__Fi(int plr) {
}


// address: 0x80099020
// line start: 722
// line end:   745
void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT R;
	// register: 22
	// size: 0xE0
	register struct CBlocks *TheBlocks;
	// register: 21
	register int ScrXOff;
	// register: 20
	register int ScrYOff;
	// register: 17
	register int OtPos;
}


// address: 0x800991FC
// line start: 750
// line end:   753
void ApocaStart__Fi(int plr) {
}


// address: 0x80099254
// line start: 758
// line end:   776
void DaveLTask__FP4TASK(struct TASK *T) {
}


