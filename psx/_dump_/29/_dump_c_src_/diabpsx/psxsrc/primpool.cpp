// C:\diabpsx\PSXSRC\PRIMPOOL.CPP

#include "types.h"

// address: 0x8007B8D0
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


// address: 0x8007B9EC
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x8007BAC8
void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth) {
	// register: 16
	// size: 0xC
	register struct DR_MODE *DrArea;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT RealRect;
}


// address: 0x8007BBF0
unsigned char PRIM_GetCurrentScreen__Fv() {
}


// address: 0x8007BBFC
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x8007BC38
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007BE4C
unsigned long *PRIM_GetCurrentOtList__Fv() {
}


// address: 0x8007BE58
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x8007BE94
unsigned char ClearedYet__Fv() {
}


// address: 0x8007BEA0
void PrimDrawSycnCallBack() {
}


// address: 0x8007BEC0
void SendDispEnv__Fv() {
}


// address: 0x8007BEE4
// size: 0x18
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007BEFC
// size: 0x28
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007BF14
// size: 0x34
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x8007BF2C
// size: 0x24
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007BF44
// size: 0x14
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007BF5C
// size: 0xC
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007BF74
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007C088
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}

