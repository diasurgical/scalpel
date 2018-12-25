// C:\diabpsx\PSXSRC\CREDITS.CPP

#include "types.h"

// address: 0x80138CB0
// line start: 324
// line end:   336
void InitCredits__Fv() {
}


// address: 0x80138D44
// line start: 398
// line end:   543
int PrintCredits__Fiiiiii(int StrNo, int Y, int CharFade, int RFlag, int GFlag, int BFlag) {
	// register: 18
	register int CharHeight;
	// register: 16
	register int Loop;
	// register: 21
	register int Width;
	// address: 0xFFFFFF98
	auto char *EndPtr;
	// address: 0xFFFFFFA0
	auto int X;
	// register: 9
	register int x0;
	// register: 30
	register int x1;
	// register: 23
	register int x2;
	// register: 22
	register int x3;
	// register: 17
	register int Fade;
	// address: 0xFFFFFF78
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 5
	register int Col;
	// address: 0xFFFFFFA8
	auto int DoneFlag;
	// register: 19
	register char *Str;
}


// address: 0x80139574
// line start: 549
// line end:   567
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8013962C
// line start: 574
// line end:   592
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x801396E4
// line start: 598
// line end:   608
int CredCountNL__Fi(int Str) {
	// register: 16
	register int Count;
	// register: 4
	register char *StrPtr;
}


// address: 0x80139750
// line start: 616
// line end:   714
void DoCredits__Fv() {
	// address: 0xFFFFFF58
	// size: 0x7C
	auto struct CScreen CreditsBack;
	// register: 8
	register int Y;
	// register: 19
	register int Fade;
	// register: 20
	register int Mode;
	// register: 21
	register unsigned short TextNo;
	// register: 30
	register unsigned long CreditsCount;
	{
		// register: 17
		register int YOfs;
		{
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


