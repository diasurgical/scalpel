// C:\diabpsx\PSXSRC\PRIMPOOL.CPP

#include "types.h"

// address: 0x8008346C
// line start: 143
// line end:   180
unsigned char PRIM_Open__FiiiP10SCREEN_ENVUl(int Prims, int OtSize, int Depth, struct SCREEN_ENV *Scr, unsigned long MemType) {
	{
		{
			{
				{
					// register: 16
					register int f;
				}
			}
		}
	}
}


// address: 0x80083588
// line start: 187
// line end:   205
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x80083664
// line start: 216
// line end:   238
void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth) {
	// register: 16
	// size: 0xC
	register struct DR_MODE *DrArea;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT RealRect;
}


// address: 0x8008378C
// line start: 248
// line end:   249
unsigned char PRIM_GetCurrentScreen__Fv() {
}


// address: 0x80083798
// line start: 257
// line end:   266
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x800837D4
// line start: 279
// line end:   349
void PRIM_Flush__Fv() {
	// register: 17
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
	{
		{
		}
	}
}


// address: 0x80083A04
// line start: 373
// line end:   374
unsigned long *PRIM_GetCurrentOtList__Fv() {
}


// address: 0x80083A10
// line start: 382
// line end:   384
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x80083A4C
// line start: 388
// line end:   389
unsigned char ClearedYet__Fv() {
}


// address: 0x80083A58
// line start: 397
// line end:   401
void PrimDrawSycnCallBack() {
}


// address: 0x80083A78
// line start: 411
// line end:   412
void SendDispEnv__Fv() {
}


// address: 0x80083A9C
// size: 0x18
// line start: 461
// line end:   465
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x80083AB4
// size: 0x28
// line start: 469
// line end:   473
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x80083ACC
// size: 0x34
// line start: 477
// line end:   481
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x80083AE4
// size: 0x24
// line start: 486
// line end:   490
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x80083AFC
// size: 0x14
// line start: 494
// line end:   498
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x80083B14
// size: 0xC
// line start: 511
// line end:   515
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x80083B2C
// line start: 519
// line end:   548
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x80083C40
// line start: 554
// line end:   565
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


