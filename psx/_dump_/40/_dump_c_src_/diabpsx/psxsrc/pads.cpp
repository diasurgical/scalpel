// C:\diabpsx\PSXSRC\PADS.CPP

#include "types.h"

// address: 0x800B0450
// line start: 103
// line end:   110
void PAD_Open__Fv() {
}


// address: 0x800890E0
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


// address: 0x800891F8
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


// address: 0x800893F4
// size: 0xEC
// line start: 251
// line end:   265
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x800894A4
// line start: 277
// line end:   285
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
}


// address: 0x80089518
// line start: 290
// line end:   299
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
}


// address: 0x800895AC
// line start: 309
// line end:   340
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x800896D0
// line start: 344
// line end:   350
void Flush__4CPad(struct CPad *this) {
}


// address: 0x80089724
// line start: 357
// line end:   361
void InitClickBits__FPUs(unsigned short *CountArray) {
	// register: 2
	register int f;
}


// address: 0x80089744
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


// address: 0x800897D0
// line start: 404
// line end:   404
void _GLOBAL__I_Pad0() {
}


