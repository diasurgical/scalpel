// C:\diabpsx\PSXSRC\LOADING.CPP

#include "types.h"

// address: 0x800A4318
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


// address: 0x800A4A10
// line start: 407
// line end:   426
void FinishBootProgress__Fv() {
}


// address: 0x80097EBC
// line start: 301
// line end:   305
void FinishProgress__Fv() {
}


// address: 0x80097964
// line start: 155
// line end:   156
bool IsGameLoading__Fv() {
}


// address: 0x800A41E8
// line start: 145
// line end:   151
void MY_TSK_Sleep__Fi(int time) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x800A4754
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


// address: 0x80097970
// line start: 166
// line end:   235
void PutUpCutScreenTSK__FP4TASK_addr_80097970(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
	// address: 0xFFFFFFD0
	auto int lev;
	// address: 0xFFFFFFC8
	// size: 0x24
	auto struct POLY_G4 *G4;
	// register: 16
	register unsigned char barr;
	// register: 21
	register unsigned char barg;
	// register: 17
	register unsigned short prog;
}


// address: 0x800999F0
// line start: 166
// line end:   242
void PutUpCutScreenTSK__FP4TASK_addr_800999F0(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
	// address: 0xFFFFFFD0
	auto int lev;
	// register: 16
	register int tx;
	// address: 0xFFFFFFC8
	// size: 0x24
	auto struct POLY_G4 *G4;
	// register: 21
	register unsigned char barr;
	// register: 16
	register unsigned char barg;
	// register: 17
	register unsigned short prog;
}


// address: 0x800A481C
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


// address: 0x80097DC4
// line start: 247
// line end:   273
void PutUpCutScreen__Fi_addr_80097DC4(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x80097E74
// line start: 283
// line end:   290
void TakeDownCutScreen__Fv() {
}


// address: 0x80097904
// line start: 139
// line end:   144
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x800A4240
// line start: 162
// line end:   202
void UPDATEPROGRESS__Fi_addr_800A4240(int inc) {
	{
		{
			{
				// register: 16
				register int i;
			}
		}
	}
}


// address: 0x800A4B78
// line start: 458
// line end:   458
void _GLOBAL__D_CutScr() {
}


// address: 0x80097F80
// line start: 310
// line end:   310
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x800A4BA0
// line start: 458
// line end:   458
void _GLOBAL__I_CutScr() {
}


// address: 0x80097FB8
// line start: 310
// line end:   310
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


