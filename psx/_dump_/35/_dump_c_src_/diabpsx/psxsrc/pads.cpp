// C:\diabpsx\PSXSRC\PADS.CPP

#include "types.h"

// address: 0x800A2E8C
void PAD_Open__Fv() {
}


// address: 0x80084128
unsigned long ReadPadStream__Fv() {
	// register: 19
	register unsigned char *p0;
	// register: 18
	register unsigned char *p1;
	// register: 16
	register unsigned long rval;
}


// address: 0x80084240
void PAD_Handler__Fv() {
	// register: 20
	register unsigned long JVal;
	// register: 3
	register unsigned long v;
	// register: 16
	register unsigned char fin;
}


// address: 0x80084408
// size: 0x6C
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x800844A4
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x800845DC
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80084738
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x8008485C
void _GLOBAL__I_Pad0() {
}


