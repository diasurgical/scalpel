// C:\diabpsx\PSXSRC\OPTIONS.CPP

#include "types.h"

// address: 0x8009B578
void PrintSelectBack__FbT0(bool S, bool B) {
	// register: 17
	register int len;
}


// address: 0x8009B6F8
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x8009B7DC
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


// address: 0x8009BCD0
void DrawMenu__Fi(int MenuNo) {
	// address: 0xFFFFFF70
	// size: 0x8
	auto struct OMENULIST *mptr;
	// address: 0xFFFFFF78
	// size: 0x18
	auto struct OMENUITEM *iptr;
	// address: 0xFFFFFF80
	auto int sh;
	// address: 0xFFFFFF58
	// size: 0x24
	auto struct POLY_G4 *G4;
	// address: 0xFFFFFF88
	auto int yoff;
	// register: 17
	register int len;
	// address: 0xFFFFFF90
	auto unsigned char r;
	// address: 0xFFFFFF98
	auto unsigned char g;
	// address: 0xFFFFFFA0
	auto unsigned char b;
	// address: 0xFFFFFFA8
	auto int mx;
	// address: 0xFFFFFFB0
	auto int my;
	// address: 0xFFFFFFB8
	auto int BARFRAC;
	// register: 17
	register int mptrx;
	// register: 16
	register int mptry;
	{
		// address: 0xFFFFFFC0
		auto int i;
		{
			{
				{
					// register: 20
					register int sxp;
					// register: 16
					register int syp;
					// register: 18
					register unsigned char barg;
					// register: 23
					register unsigned char barr;
					{
						{
							// register: 19
							register int len;
							// register: 20
							register int cx;
							// register: 21
							register int cy;
							{
								{
									// register: 3
									register int fi;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8009C960
int who_pressed__Fi(int pval) {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 16
	// size: 0x6C
	register struct CPad *Pad1;
}


// address: 0x8009C9E8
void ShowCharacterFiles__Fv() {
	// register: 16
	register int j;
	// register: 21
	register int yoff;
	// register: 17
	register int move;
	// register: 6
	register int fileno;
	// register: 18
	// size: 0x6C
	register struct CPad *P;
	// register: 19
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 5
	register int lcs;
	{
		{
			// register: 19
			register int r;
			// register: 18
			register int g;
			// register: 17
			register int b;
			// register: 7
			register char *FileLabel;
		}
	}
}


// address: 0x8009CFEC
void MemcardPad__Fv() {
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
		}
	}
}


// address: 0x8009D664
void SoundPad__Fv() {
	// register: 17
	// size: 0x6C
	register struct CPad *P;
	// register: 16
	register int move;
	// register: 18
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
	}
}


// address: 0x8009DE80
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


// address: 0x8009E2D8
void CalcVolumes__Fv() {
}


// address: 0x8009E410
void SetLoadedVolumes__Fv() {
}


// address: 0x8009E498
void GetVolumes__Fv() {
	{
		// register: 6
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


// address: 0x8009E534
void PrintInfoMenu__Fv() {
	// address: 0xFFFFFEE0
	// size: 0x100
	auto char temp[256];
	// register: 16
	register int ypos;
}


// address: 0x8009E6DC
void SeedPad__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *P;
	// address: 0xFFFFFFE8
	// size: 0x2
	auto char temp[2];
	{
		// register: 16
		register int i;
	}
}


// address: 0x8009E960
void DrawOptions__FP4TASK(struct TASK *T) {
	// register: 19
	register int OldOptionsSeed;
	// register: 16
	register int old_pad;
	// register: 17
	// size: 0x6C
	register struct CPad *P;
	{
		{
			{
				// register: 4
				register int x;
				{
					{
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


// address: 0x8009F234
void ToggleOptions__Fv() {
}


// address: 0x8009F2EC
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


// address: 0x8009F61C
void ActivateMemcard__Fv() {
}


