// C:\diabpsx\PSXSRC\PRINTY.CPP

#include "types.h"

// address: 0x80084B60
// line start: 90
// line end:   95
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


// address: 0x80084BFC
// line start: 361
// line end:   373
void InitPrinty__Fv() {
}


// address: 0x80084C9C
// line start: 378
// line end:   379
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x80084CA4
// line start: 386
// line end:   450
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x80084E3C
// line start: 455
// line end:   636
int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(struct CFont *this, int X, int Y, char *Str, enum TXT_JUST Justify, struct RECT *TextWindow, int R, int G, int B) {
	// register: 16
	register int Cx;
	// register: 20
	register int Cy;
	// address: 0xFFFFFF68
	auto int WrapCount;
	// register: 19
	register char *EndPtr;
	// register: 21
	register char *SpacePtr;
	// register: 3
	register int CharW;
	// register: 16
	register int SpaceW;
	// address: 0xFFFFFF70
	auto int WindowW;
	// address: 0xFFFFFF78
	auto int WindowH;
	// address: 0xFFFFFF80
	auto int WindowX;
	// address: 0xFFFFFF88
	auto int WindowY;
	// address: 0xFFFFFF90
	auto bool JapLang;
	// address: 0xFFFFFF98
	auto unsigned short col;
	{
		{
			// register: 5
			register char c;
			{
				{
					{
						{
							// register: 6
							register unsigned char h;
							{
								{
									// register: 6
									register unsigned char h;
									{
										{
											// register: 6
											register unsigned char h;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80085468
// line start: 641
// line end:   657
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 19
	register int Width;
	// register: 18
	register char c;
}


// address: 0x8008551C
// line start: 665
// line end:   667
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x80085580
// line start: 673
// line end:   676
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


