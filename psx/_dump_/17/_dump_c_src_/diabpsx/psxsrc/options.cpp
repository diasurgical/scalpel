// C:\diabpsx\PSXSRC\OPTIONS.CPP

#include "types.h"

// address: 0x800989C0
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x80098AA4
void DrawSpinner__FiiUcUcUciiibiT8(int x, int y, unsigned char SpinR, unsigned char SpinG, int SpinB, int spinradius, int spinbright, int angle, bool Sparkle, int OtPos, bool cross) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
	// register: 16
	// size: 0x34
	register struct POLY_GT4 *GT4;
	// register: 6
	// size: 0x28
	register struct POLY_GT3 *GT3;
	// address: 0xFFFFFFD0
	// size: 0x6C
	auto struct TextDat *ThisDat;
	// register: 16
	register unsigned char rand;
	// register: 5
	register int f;
	// register: 2
	register unsigned short bright;
	// register: 30
	register unsigned short r;
	// register: 23
	register unsigned short g;
	// register: 22
	register unsigned short b;
	// register: 3
	register int xr1;
	// register: 5
	register int yr1;
	// register: 7
	register int xr2;
	// register: 4
	register int yr2;
	// register: 2
	register int yr3;
	// register: 20
	register int radius;
	{
		// register: 17
		register int i;
		{
			{
				{
					// register: 17
					register char flip;
					{
						// register: 16
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x80098F6C
void DrawMenu__Fi(int MenuNo) {
	// address: 0xFFFFFF80
	// size: 0x8
	auto struct OMENULIST *mptr;
	// address: 0xFFFFFF88
	// size: 0x18
	auto struct OMENUITEM *iptr;
	// address: 0xFFFFFF90
	auto int sh;
	// address: 0xFFFFFF68
	// size: 0x24
	auto struct POLY_G4 *G4;
	// address: 0xFFFFFF98
	auto int yoff;
	// register: 18
	register int len;
	// address: 0xFFFFFFA0
	auto unsigned char r;
	// address: 0xFFFFFFA8
	auto unsigned char g;
	// address: 0xFFFFFFB0
	auto unsigned char b;
	// address: 0xFFFFFFB8
	auto int mx;
	// address: 0xFFFFFFC0
	auto int my;
	// register: 17
	register int mptrx;
	// register: 16
	register int mptry;
	{
		// register: 30
		register int i;
		{
			{
				{
					// register: 20
					register int sxp;
					// register: 22
					register int syp;
					{
						{
							// register: 18
							register int len;
							// register: 19
							register int cx;
							// register: 20
							register int cy;
							{
								{
									// register: 3
									register int fi;
									{
										{
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


// address: 0x80099A9C
void ShowCharacterFiles__Fv() {
	// register: 19
	register int j;
	// register: 23
	register int yoff;
	// register: 20
	register int move;
	// register: 6
	register int fileno;
	// register: 21
	// size: 0x6C
	register struct CPad *P;
	// register: 22
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 5
	register int lcs;
	{
		{
			// address: 0xFFFFFFC0
			// size: 0x10
			auto struct Dialog SBack;
			// address: 0xFFFFFFD0
			// size: 0x8
			auto struct RECT um;
			// register: 2
			register int X;
			// register: 2
			register int Y;
			// register: 2
			register int W;
			// register: 17
			register int H;
			// register: 19
			register int oldBot;
			// register: 18
			register int oldTot;
			{
				{
					// register: 18
					register int r;
					// register: 17
					register int g;
					// register: 16
					register int b;
				}
			}
		}
	}
}


// address: 0x8009A134
void MemcardPad__Fv() {
	// register: 21
	// size: 0x6C
	register struct CPad *P;
	// register: 18
	register int move;
	// register: 3
	register int FileNo;
	// register: 23
	register int yoff;
	// register: 4
	register int save_blocks;
	// register: 22
	// size: 0x18
	register struct OMENUITEM *iptr;
	{
		{
			// register: 5
			register int lcs;
			{
				{
					{
						// register: 17
						register int i;
						{
							{
								{
									{
										// address: 0xFFFFFFC0
										// size: 0x10
										auto struct Dialog SBack;
										// address: 0xFFFFFFD0
										// size: 0x8
										auto struct RECT um;
										// register: 2
										register int X;
										// register: 2
										register int Y;
										// register: 2
										register int W;
										// register: 17
										register int H;
										// register: 19
										register int oldBot;
										// register: 18
										register int oldTot;
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


// address: 0x8009A7D8
void SoundPad__Fv() {
	// register: 18
	// size: 0x6C
	register struct CPad *P;
	// register: 16
	register int move;
	// register: 17
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 6
	register int lcs;
	{
		{
			{
				// register: 3
				register int l;
				{
					{
						{
							{
								// register: 16
								register int llen;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8009ADE8
void CentrePad__Fv() {
	// register: 17
	// size: 0x6C
	register struct CPad *P;
	// register: 16
	register int move;
	// register: 18
	// size: 0x18
	register struct OMENUITEM *iptr;
	{
		{
			// register: 5
			register int lcs;
			{
				// register: 16
				register int osx;
				// register: 19
				register int osy;
			}
		}
	}
}


// address: 0x8009B20C
void CalcVolumes__Fv() {
}


// address: 0x8009B34C
void GetVolumes__Fv() {
	{
		// register: 8
		register int i;
		{
			// register: 5
			// size: 0x8
			register struct OMENULIST *mptr;
			// register: 3
			// size: 0x18
			register struct OMENUITEM *iptr;
			{
				// register: 4
				register int s;
			}
		}
	}
}


// address: 0x8009B454
void PrintInfoMenu__Fv() {
	// address: 0xFFFFFEE0
	// size: 0x100
	auto char temp[256];
	// register: 16
	register int ypos;
}


// address: 0x8009B5FC
void DrawOptions__FP4TASK(struct TASK *T) {
	// register: 17
	register int old_pad;
	// register: 18
	// size: 0x6C
	register struct CPad *P;
	{
		{
			{
				// register: 3
				register int x;
			}
		}
	}
}


// address: 0x8009BC0C
void ToggleOptions__Fv() {
}


// address: 0x8009BCAC
void FormatPad__Fv() {
	// register: 16
	register int move;
	// register: 17
	// size: 0x6C
	register struct CPad *P;
	// register: 18
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 5
	register int lcs;
}


