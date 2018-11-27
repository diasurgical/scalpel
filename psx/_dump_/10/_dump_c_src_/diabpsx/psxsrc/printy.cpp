// C:\diabpsx\PSXSRC\PRINTY.CPP

#include "types.h"

// address: 0x800820AC
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


// address: 0x80082148
void InitPrinty__Fv() {
}


// address: 0x800821D0
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x800821D8
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x80082358
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


// address: 0x800826F0
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 17
	register int Width;
}


// address: 0x80082758
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x800827BC
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


