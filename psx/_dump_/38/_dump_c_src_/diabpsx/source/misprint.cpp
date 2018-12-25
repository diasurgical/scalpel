// C:\diabpsx\SOURCE\MISPRINT.CPP

#include "types.h"

// address: 0x8007B5EC
// line start: 85
// line end:   144
void DoPortalFX__FP8POLY_FT4iiii(struct POLY_FT4 *Ft4, int R, int G, int B, int OtPos) {
	// register: 16
	register unsigned char zU;
	// register: 3
	register unsigned char *s;
	// register: 4
	register unsigned char *d;
	// register: 18
	register unsigned char *Ft4m;
	// register: 21
	register short zX0;
	// register: 22
	register short zX1;
	// register: 17
	register short zY;
	// register: 19
	register int n;
	// address: 0x800E3630
	// size: 0xE0
	static int xoffset[56];
}


// address: 0x8007B95C
// size: 0x28
// line start: 156
// line end:   221
struct POLY_FT4 *TempPrintMissile__FiiiiiiiiccUcUcUcc(int ScrX, int ScrY, int OtPos, int spell, int aframe, int direction, int anim, int sfx, int xflip, int yflip, int red, int grn, int blu, int semi) {
	// address: 0xFFFFFF90
	// size: 0x28
	auto struct POLY_FT4 *FT4;
	// register: 17
	// size: 0x70
	register struct TextDat *missdat;
	// register: 16
	register int frame;
	// register: 5
	register int tv1;
	// register: 2
	register int dw;
	// register: 3
	register int dh;
}


// address: 0x8007BD44
// line start: 225
// line end:   252
void FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register int anim;
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
	// register: 17
	// size: 0x70
	register struct TextDat *missdat;
	// register: 16
	register int frame;
}


// address: 0x8007BEE4
// line start: 258
// line end:   272
void FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
	// register: 18
	// size: 0x70
	register struct TextDat *missdat;
	// register: 17
	register int frame;
}


// address: 0x8007C000
// line start: 277
// line end:   294
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x8007C0A8
// line start: 300
// line end:   317
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x8007C160
// line start: 323
// line end:   326
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007C1C8
// line start: 330
// line end:   333
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007C2EC
// line start: 337
// line end:   339
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x8007C384
// line start: 343
// line end:   345
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x8007C41C
// line start: 349
// line end:   352
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007C488
// line start: 356
// line end:   368
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 12
	register char xflip;
	// register: 11
	register char yflip;
	// register: 3
	register int frame;
}


// address: 0x8007C538
// line start: 372
// line end:   395
void FuncFARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 11
			register char xflip;
			// register: 10
			register char yflip;
			// register: 3
			register int frame;
			// register: 8
			register int nframe;
		}
	}
}


// address: 0x8007C630
// line start: 400
// line end:   425
void FuncLARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 11
			register char xflip;
			// register: 10
			register char yflip;
			// register: 3
			register int frame;
			// register: 8
			register int nframe;
		}
	}
}


// address: 0x8007C720
// line start: 430
// line end:   444
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 9
	register char xflip;
	// register: 10
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x8007C7BC
// line start: 448
// line end:   464
void FuncBONESPIRIT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 22
	register char xflip;
	// register: 23
	register char yflip;
	// register: 16
	register int frame;
	// register: 21
	register int sfx;
}


// address: 0x8007C8E0
// line start: 468
// line end:   487
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x8007C988
// line start: 493
// line end:   494
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007C9F0
// line start: 498
// line end:   499
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007CA58
// line start: 503
// line end:   524
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register unsigned char red;
	// register: 19
	register unsigned char grn;
	// register: 21
	register unsigned char blu;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007CBE4
// line start: 528
// line end:   543
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 20
	register unsigned char red;
	// register: 21
	register unsigned char grn;
	// register: 18
	register unsigned char blu;
	// register: 2
	register unsigned long bright;
}


// address: 0x8007CD60
// line start: 547
// line end:   550
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007CDCC
// line start: 554
// line end:   557
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007CE2C
// line start: 561
// line end:   573
void FuncELEMENT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 9
			register char xflip;
			// register: 3
			register int frame;
		}
	}
}


// address: 0x8007CF00
// line start: 578
// line end:   581
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007CF6C
// line start: 585
// line end:   586
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007CF74
// line start: 589
// line end:   606
void FuncFLASH__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int size;
	{
		{
			// address: 0x80118F68
			// size: 0x60
			static int xoffset[8][3];
			// register: 17
			register int id;
			// register: 18
			// size: 0x90
			register struct CPlayer *test;
			// register: 16
			// size: 0x19E8
			register struct PlayerStruct *player;
		}
	}
}


// address: 0x8007D0D4
// line start: 610
// line end:   612
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007D134
// line start: 616
// line end:   617
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007D13C
// line start: 620
// line end:   621
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007D170
// line start: 625
// line end:   629
void FuncWEAPEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


