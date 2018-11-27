// C:\diabpsx\PSXSRC\PRINTY.CPP

#include "types.h"

// address: 0x80086000
// line start: 538
// line end:   546
int GetStrWidth__5CFontPc(struct CFont_dup_1 *this, char *Str) {
	// register: 17
	register int Width;
}


// address: 0x80084218
// line start: 621
// line end:   637
int GetStrWidth__5CFontPc_addr_80084218(struct CFont *this, char *Str) {
	// register: 19
	register int Width;
	// register: 18
	register char c;
}


// address: 0x80085218
// line start: 641
// line end:   657
int GetStrWidth__5CFontPc_addr_80085218(struct CFont_dup_14 *this, char *Str) {
	// register: 19
	register int Width;
	// register: 18
	register char c;
}


// address: 0x80082F8C
// line start: 646
// line end:   662
int GetStrWidth__5CFontPc_addr_80082F8C(struct CFont *this, char *Str) {
	// register: 18
	register int Width;
	// register: 19
	register char c;
}


// address: 0x800849B8
// line start: 635
// line end:   651
int GetStrWidth__5CFontPc_addr_800849B8(struct CFont_dup_10 *this, char *Str) {
	// register: 19
	register int Width;
	// register: 18
	register char c;
}


// address: 0x80082A90
// line start: 544
// line end:   552
int GetStrWidth__5CFontPc_addr_80082A90(struct CFont *this, char *Str) {
	// register: 17
	register int Width;
}


// address: 0x800824E8
// line start: 343
// line end:   353
void InitPrinty__Fv() {
}


// address: 0x800827C8
// line start: 386
// line end:   455
int PrintChar__5CFontUsUsUcUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, unsigned char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x80082578
// line start: 366
// line end:   425
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x800840C8
// line start: 385
// line end:   444
int PrintChar__5CFontUsUscUcUcUc_addr_800840C8(struct CFont_dup_10 *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// address: 0xFFFFFFB8
	auto int Cw;
	{
		{
			{
				{
					// address: 0xFFFFFFC0
					auto unsigned short DR;
					// address: 0xFFFFFFC8
					auto unsigned short DG;
					// address: 0xFFFFFFD0
					auto unsigned short DB;
					// register: 16
					register unsigned short LR;
					// register: 17
					register unsigned short LG;
					// register: 19
					register unsigned short LB;
				}
			}
		}
	}
}


// address: 0x80084A54
// line start: 386
// line end:   450
int PrintChar__5CFontUsUscUcUcUc_addr_80084A54(struct CFont_dup_14 *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x80085AE0
// line start: 360
// line end:   419
int PrintChar__5CFontUsUscUcUcUc_addr_80085AE0(struct CFont_dup_1 *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 21
	register int Cw;
	{
		{
			{
				{
					// register: 3
					register unsigned short LG;
					// register: 4
					register unsigned short LB;
				}
			}
		}
	}
}


// address: 0x8008428C
// line start: 385
// line end:   444
int PrintChar__5CFontUsUscUcUcUc_addr_8008428C(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// address: 0xFFFFFFB8
	auto int Cw;
	{
		{
			{
				{
					// address: 0xFFFFFFC0
					auto unsigned short DR;
					// address: 0xFFFFFFC8
					auto unsigned short DG;
					// address: 0xFFFFFFD0
					auto unsigned short DB;
					// register: 16
					register unsigned short LR;
					// register: 17
					register unsigned short LG;
					// register: 19
					register unsigned short LB;
				}
			}
		}
	}
}


// address: 0x800826F8
// line start: 430
// line end:   539
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


// address: 0x80084BEC
// line start: 455
// line end:   636
int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc_addr_80084BEC(struct CFont_dup_14 *this, int X, int Y, char *Str, enum TXT_JUST Justify, struct RECT *TextWindow, int R, int G, int B) {
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


// address: 0x80085C68
// line start: 424
// line end:   533
int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc_addr_80085C68(struct CFont_dup_1 *this, int X, int Y, char *Str, enum TXT_JUST Justify, struct RECT *TextWindow, int R, int G, int B) {
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


// address: 0x80083C30
// line start: 437
// line end:   616
int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc_addr_80083C30(struct CFont *this, int X, int Y, char *Str, enum TXT_JUST Justify, struct RECT *TextWindow, int R, int G, int B) {
	// register: 16
	register int Cx;
	// register: 20
	register int Cy;
	// address: 0xFFFFFF78
	auto int WrapCount;
	// register: 19
	register char *EndPtr;
	// register: 21
	register char *SpacePtr;
	// register: 3
	register int CharW;
	// register: 16
	register int SpaceW;
	// address: 0xFFFFFF80
	auto int WindowW;
	// address: 0xFFFFFF88
	auto int WindowX;
	// register: 5
	register int WindowY;
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


// address: 0x80084394
// line start: 449
// line end:   630
int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc_addr_80084394(struct CFont_dup_10 *this, int X, int Y, char *Str, enum TXT_JUST Justify, struct RECT *TextWindow, int R, int G, int B) {
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


// address: 0x800845D0
// line start: 447
// line end:   627
int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc_addr_800845D0(struct CFont *this, int X, int Y, char *Str, enum TXT_JUST Justify, struct RECT *TextWindow, int R, int G, int B) {
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


// address: 0x80082AF8
// line start: 560
// line end:   562
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x80086068
// line start: 554
// line end:   556
void SetChar__5CFontiUs_addr_80086068(struct CFont_dup_1 *this, int ch, unsigned short Frm) {
}


// address: 0x80084A6C
// line start: 659
// line end:   661
void SetChar__5CFontiUs_addr_80084A6C(struct CFont_dup_10 *this, int ch, unsigned short Frm) {
}


// address: 0x800852CC
// line start: 665
// line end:   667
void SetChar__5CFontiUs_addr_800852CC(struct CFont_dup_14 *this, int ch, unsigned short Frm) {
}


// address: 0x800860CC
// line start: 562
// line end:   565
int SetOTpos__5CFonti(struct CFont_dup_1 *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80082B5C
// line start: 568
// line end:   571
int SetOTpos__5CFonti_addr_80082B5C(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80084AD0
// line start: 667
// line end:   670
int SetOTpos__5CFonti_addr_80084AD0(struct CFont_dup_10 *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80085330
// line start: 673
// line end:   676
int SetOTpos__5CFonti_addr_80085330(struct CFont_dup_14 *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80084A4C
// line start: 378
// line end:   379
void SetTextDat__5CFontP7TextDat(struct CFont_dup_14 *this, struct TextDat_dup_14 *NewDat) {
}


// address: 0x80082570
// line start: 358
// line end:   359
void SetTextDat__5CFontP7TextDat_addr_80082570(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x800840C0
// line start: 377
// line end:   378
void SetTextDat__5CFontP7TextDat_addr_800840C0(struct CFont_dup_10 *this, struct TextDat *NewDat) {
}


// address: 0x80083F84
// line start: 89
// line end:   94
void Set__7FontTab(struct FontTab_dup_10 *this) {
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


// address: 0x800859BC
// line start: 78
// line end:   83
void Set__7FontTab_addr_800859BC(struct FontTab_dup_1 *this) {
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


// address: 0x80082684
// line start: 90
// line end:   95
void Set__7FontTab_addr_80082684(struct FontTab_dup_15 *this) {
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


// address: 0x80084148
// line start: 89
// line end:   94
void Set__7FontTab_addr_80084148(struct FontTab_dup_11 *this) {
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


// address: 0x8008244C
// line start: 78
// line end:   83
void Set__7FontTab_addr_8008244C(struct FontTab *this) {
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


// address: 0x80084910
// line start: 90
// line end:   95
void Set__7FontTab_addr_80084910(struct FontTab_dup_14 *this) {
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


