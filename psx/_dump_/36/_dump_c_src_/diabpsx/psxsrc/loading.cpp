// C:\diabpsx\PSXSRC\LOADING.CPP

#include "types.h"

// address: 0x800986B0
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80098710
bool IsGameLoading__Fv() {
}


// address: 0x8009871C
void PutUpCutScreenTSK__FP4TASK(struct TASK *T) {
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


// address: 0x80098B90
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x80098C50
void TakeDownCutScreen__Fv() {
}


// address: 0x80098CDC
void FinishProgress__Fv() {
}


// address: 0x80098DBC
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x80098DF4
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


