// C:\diabpsx\PSXSRC\PADS.CPP

#include "types.h"

// address: 0x800B04C8
// line start: 103
// line end:   110
void PAD_Open__Fv() {
}


// address: 0x80089128
// line start: 116
// line end:   165
unsigned long ReadPadStream__Fv() {
	// register: 19
	register unsigned char *p0;
	// register: 18
	register unsigned char *p1;
	// register: 16
	register unsigned long rval;
}


// address: 0x80089240
// line start: 176
// line end:   237
void PAD_Handler__Fv() {
	// register: 20
	register unsigned long JVal;
	// register: 3
	register unsigned long v;
	// register: 16
	register unsigned char fin;
}


// address: 0x8008943C
// size: 0xEC
// line start: 251
// line end:   265
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x800894EC
// line start: 277
// line end:   285
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
}


// address: 0x80089560
// line start: 290
// line end:   299
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
}


// address: 0x800895F4
// line start: 309
// line end:   340
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x80089718
// line start: 344
// line end:   350
void Flush__4CPad(struct CPad *this) {
}


// address: 0x8008976C
// line start: 357
// line end:   361
void InitClickBits__FPUs(unsigned short *CountArray) {
	// register: 2
	register int f;
}


// address: 0x8008978C
// line start: 365
// line end:   399
unsigned short MakeClickBits__FiiiPUs(int Switch, int Closed, int Speed, unsigned short *CountArray) {
	// register: 9
	register unsigned short Click;
	// register: 3
	register unsigned short BitMask;
	{
		{
			// register: 8
			register int ResetSpeed;
		}
	}
}


// address: 0x80089818
// line start: 404
// line end:   404
void _GLOBAL__I_Pad0() {
}


