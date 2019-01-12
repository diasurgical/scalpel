// C:\diabpsx\PSXSRC\PRINTY.CPP

#include "types.h"

// address: 0x80089908
// line start: 102
// line end:   107
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


// address: 0x800899A4
// line start: 581
// line end:   600
void InitPrinty__Fv() {
	// register: 16
	register int otpos;
}


// address: 0x80089A54
// line start: 605
// line end:   606
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x80089A5C
// line start: 617
// line end:   659
int KanjiPrintChar__5CFontUsUsUsUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, unsigned short kan, int R, int G, int B) {
}


// address: 0x80089B94
// line start: 667
// line end:   740
int PrintChar__5CFontUsUsUcUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, unsigned char C, int R, int G, int B) {
	// register: 18
	register int Cw;
}


// address: 0x80089D38
// line start: 746
// line end:   984
int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(struct CFont *this, int X, int Y, char *Str, enum TXT_JUST Justify, struct RECT *TextWindow, int R, int G, int B) {
	// register: 20
	register int Cx;
	// register: 22
	register int Cy;
	// address: 0xFFFFFF70
	auto int WrapCount;
	// register: 17
	register char *EndPtr;
	// register: 21
	register char *SpacePtr;
	// register: 3
	register int CharW;
	// register: 16
	register int SpaceW;
	// address: 0xFFFFFF78
	auto int _WindowW;
	// register: 23
	register int WindowW;
	// address: 0xFFFFFF80
	auto int WindowH;
	// address: 0xFFFFFF88
	auto int WindowX;
	// address: 0xFFFFFF90
	auto int WindowY;
	// address: 0xFFFFFF50
	// size: 0x8
	auto struct RECT ClipRect;
	// register: 2
	register unsigned short kan;
	// address: 0xFFFFFF98
	auto char *OrigStr;
	{
		{
			// register: 5
			register unsigned char c;
			{
				{
					{
						{
							// register: 16
							register char c;
							{
								{
									{
										// register: 8
										register char c;
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


// address: 0x8008A370
// line start: 989
// line end:   1101
int GetWrap__5CFontPcP4RECT(struct CFont *this, char *Str, struct RECT *TextWindow) {
	// register: 22
	register int WrapCount;
	// register: 16
	register char *EndPtr;
	// register: 19
	register char *SpacePtr;
	// register: 23
	register char *LastSpacePtr;
	// register: 3
	register int CharW;
	// register: 17
	register int SpaceW;
	// register: 20
	register int WindowW;
	// register: 30
	register int _WindowW;
	{
		{
			// register: 5
			register unsigned char c;
			{
				{
					{
						{
							// register: 17
							register char c;
						}
					}
				}
			}
		}
	}
}


// address: 0x8008A5E0
// line start: 1107
// line end:   1190
int GetWrapWidth__5CFontPcP4RECT(struct CFont *this, char *Str, struct RECT *TextWindow) {
	// register: 16
	register char *EndPtr;
	// register: 19
	register char *SpacePtr;
	// register: 3
	register int CharW;
	// register: 18
	register int SpaceW;
	// register: 20
	register int WindowW;
	{
		// register: 5
		register unsigned char c;
	}
}


// address: 0x8008A74C
// line start: 1196
// line end:   1218
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 17
	register int Width;
}


// address: 0x8008A7C8
// line start: 1226
// line end:   1229
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x8008A848
// line start: 1235
// line end:   1238
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8008A854
// line start: 1246
// line end:   1266
int GetCharWidth__5CFontUc(struct CFont *this, unsigned char ch) {
}


// address: 0x8008A904
// line start: 1273
// line end:   1273
void _GLOBAL__I_WHITER() {
}


