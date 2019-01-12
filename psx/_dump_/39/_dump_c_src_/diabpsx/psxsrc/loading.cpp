// C:\diabpsx\PSXSRC\LOADING.CPP

#include "types.h"

// address: 0x800A4114
// line start: 145
// line end:   151
void MY_TSK_Sleep__Fi(int time) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x800A416C
// line start: 162
// line end:   202
void UPDATEPROGRESS__Fi(int inc) {
	{
		{
			{
				// register: 16
				register int i;
			}
		}
	}
}


// address: 0x800A4238
// line start: 212
// line end:   213
bool IsGameLoading__Fv() {
}


// address: 0x800A4244
// line start: 224
// line end:   280
void DrawCutScreen__Fi(int lev) {
	// register: 30
	register unsigned char barr;
	// register: 22
	register unsigned char barg;
	// register: 21
	register unsigned short prog;
	// address: 0xFFFFFFA8
	// size: 0x10
	auto struct Dialog LBack;
	// register: 16
	register int tx;
	// address: 0xFFFFFFB8
	// size: 0x24
	auto struct POLY_G4 *G4;
	// register: 19
	register int BarOt;
	// address: 0xFFFFFFC0
	auto int oldDot;
	// address: 0xFFFFFFC8
	auto int oldTot;
}


// address: 0x800A4680
// line start: 286
// line end:   303
void PutUpCutScreenTSK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
	// register: 18
	register int lev;
	// register: 17
	register int tpx;
}


// address: 0x800A4748
// line start: 315
// line end:   364
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	{
		{
			{
				// register: 16
				register int f;
			}
		}
	}
}


// address: 0x800A4898
// line start: 374
// line end:   396
void TakeDownCutScreen__Fv() {
}


// address: 0x800A493C
// line start: 407
// line end:   426
void FinishBootProgress__Fv() {
}


// address: 0x800A49C8
// line start: 438
// line end:   452
void FinishProgress__Fv() {
}


// address: 0x800A4AA4
// line start: 458
// line end:   458
void _GLOBAL__D_CutScr() {
}


// address: 0x800A4ACC
// line start: 458
// line end:   458
void _GLOBAL__I_CutScr() {
}


