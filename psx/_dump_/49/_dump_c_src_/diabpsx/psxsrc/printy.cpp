// C:\diabpsx\PSXSRC\PRINTY.CPP

#include "types.h"

// address: 0x80081D10
// line start: 78
// line end:   83
void Set__7FontTab(struct FontTab *this) {
	{
		// register: 16
		register int Loop;
		{
			// register: 16
			register int f;
			// register: 16
			register int Loop;
		}
	}
}


// address: 0x80081DAC
// line start: 349
// line end:   359
void InitPrinty__Fv() {
}


// address: 0x80081E34
// line start: 364
// line end:   365
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x80081E3C
// line start: 372
// line end:   431
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x80081FBC
// line start: 436
// line end:   545
int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(struct CFont *this, int X, int Y, char *Str, enum TXT_JUST Justify, struct RECT *TextWindow, int R, int G, int B) {
	// register: 16
	register int Cx;
	// register: 22
	register int Cy;
	// address: 0xFFFFFFC0
	auto int WrapCount;
	// register: 19
	register char *EndPtr;
	// register: 20
	register char *SpacePtr;
	// register: 16
	register int SpaceW;
	// register: 21
	register int WindowW;
	// address: 0xFFFFFFC8
	auto int WindowX;
	// register: 6
	register int WindowY;
}


// address: 0x80082354
// line start: 550
// line end:   558
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 17
	register int Width;
}


// address: 0x800823BC
// line start: 566
// line end:   568
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x80082420
// line start: 574
// line end:   577
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


