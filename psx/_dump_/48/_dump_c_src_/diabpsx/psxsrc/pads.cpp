// C:\diabpsx\PSXSRC\PADS.CPP

#include "types.h"

// address: 0x8009D73C
// line start: 98
// line end:   105
void PAD_Open__Fv() {
}


// address: 0x80081538
// line start: 111
// line end:   141
unsigned long ReadPadStream__Fv() {
	// register: 19
	register unsigned char *p0;
	// register: 18
	register unsigned char *p1;
	// register: 16
	register unsigned long rval;
}


// address: 0x80081650
// line start: 152
// line end:   203
void PAD_Handler__Fv() {
	// register: 16
	register unsigned long JVal;
	// register: 3
	register unsigned long v;
	// register: 17
	register unsigned char fin;
}


// address: 0x80081808
// size: 0x6C
// line start: 217
// line end:   228
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x800818A4
// line start: 240
// line end:   271
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x800819DC
// line start: 275
// line end:   307
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80081B38
// line start: 317
// line end:   341
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x80081C5C
// line start: 345
// line end:   345
void _GLOBAL__I_Pad0() {
}

