// C:\diabpsx\PSXSRC\BIRD.CPP

#include "types.h"

// address: 0x800AB2C0
// line start: 47
// line end:   51
void SetBirdFrig__Fb(bool f) {
}


// address: 0x800AB2F4
// line start: 84
// line end:   91
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x800AB34C
// line start: 100
// line end:   146
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
	// register: 18
	register int offsx;
	// register: 19
	register int offsy;
}


// address: 0x800AB4AC
// line start: 156
// line end:   166
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x800AB528
// line start: 174
// line end:   189
bool CheckDist__Fii(int x, int y) {
	// register: 16
	register int x1;
	// register: 16
	register int y1;
	{
		// register: 19
		register int i;
	}
}


// address: 0x800AB610
// line start: 200
// line end:   223
int BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int scared;
	// register: 4
	register int p;
	// register: 4
	register int i;
	{
		{
			// register: 5
			// size: 0x19E8
			register struct PlayerStruct *player;
		}
	}
}


// address: 0x800AB73C
// line start: 232
// line end:   241
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x800AB790
// line start: 250
// line end:   283
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 20
	register int nd;
	// register: 19
	register int x;
	// register: 18
	register int y;
	{
		{
			// register: 17
			// size: 0x2
			register struct Perch *p;
		}
	}
}


// address: 0x800AB970
// line start: 292
// line end:   312
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800ABA74
// line start: 323
// line end:   330
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800ABAE0
// line start: 339
// line end:   355
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800ABB64
// line start: 363
// line end:   376
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800ABC10
// line start: 381
// line end:   408
void CheckDirOk__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int x;
	// register: 16
	register int y;
	// register: 21
	register int ofx;
	// register: 20
	register int ofy;
	// register: 22
	register bool posok;
	{
		// register: 23
		register int d;
		{
			{
				// register: 18
				register int i;
			}
		}
	}
}


// address: 0x800ABD20
// line start: 416
// line end:   428
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800ABDCC
// line start: 437
// line end:   460
void BIRD_StartFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *leader;
	{
		{
			{
				// register: 17
				register int i;
			}
		}
	}
}


// address: 0x800ABE58
// line start: 468
// line end:   526
void BIRD_DoFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 20
	register int pnum;
	{
		{
			{
				{
					{
						{
							// register: 17
							register int x;
							// register: 18
							register int y;
						}
					}
				}
			}
		}
	}
}


// address: 0x800AC15C
// line start: 536
// line end:   540
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800AC168
// line start: 555
// line end:   562
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800AC1D4
// line start: 572
// line end:   591
void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 18
		register int i;
	}
}


// address: 0x800AC2CC
// line start: 599
// line end:   612
void ProcessFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	// size: 0x18
	register struct BIRDSTRUCT *leader;
	{
		{
			// register: 17
			register int x;
			// register: 18
			register int y;
		}
	}
}


// address: 0x800AC3BC
// line start: 637
// line end:   656
void InitBird__Fv() {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x800AC494
// line start: 668
// line end:   707
void ProcessBird__Fv() {
	// register: 16
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 18
		register int i;
	}
}


// address: 0x800AC5D8
// line start: 715
// line end:   744
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 3
	register int banim;
}


// address: 0x800AC670
// line start: 750
// line end:   770
void bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4, int height) {
	// register: 17
	register int x;
	// register: 4
	register int y;
}


// address: 0x800AC7A0
// line start: 775
// line end:   795
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	// register: 4
	// size: 0x108
	register struct CBlocks *gb;
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 20
	// size: 0x70
	register struct TextDat *Dat;
	{
		{
			// register: 16
			register int ot;
		}
	}
}


// address: 0x800AC8C8
// line start: 834
// line end:   898
void DrawLBird__Fv() {
	// register: 20
	// size: 0x18
	register struct BIRDSTRUCT *ThisBird;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 30
	// size: 0x108
	register struct CBlocks *gblock;
	// register: 2
	register int ScrXOff;
	// register: 2
	register int ScrYOff;
	// register: 19
	register int x;
	// register: 18
	register int y;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT R;
	// address: 0xFFFFFFD0
	// size: 0x70
	auto struct TextDat *Dat;
	{
		{
			{
				// register: 22
				register int i;
				{
					{
						{
							// register: 16
							register int ot;
						}
					}
				}
			}
		}
	}
}


