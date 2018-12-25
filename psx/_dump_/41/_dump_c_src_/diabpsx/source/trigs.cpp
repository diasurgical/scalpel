// C:\diabpsx\SOURCE\TRIGS.CPP

#include "types.h"

// address: 0x80074AB0
// line start: 117
// line end:   122
void InitVPTriggers__Fv() {
}


// address: 0x80074AF8
// line start: 130
// line end:   138
bool FindLevTrig__Fiii(int x, int y, int l) {
}


// address: 0x80074B90
// line start: 142
// line end:   164
void ScanMap__FPsi(short *list, int l) {
	// register: 19
	register int NoTrigs;
	{
		{
			// register: 18
			register int y;
			{
				{
					// register: 16
					register int x;
				}
			}
		}
	}
}


// address: 0x80074C98
// line start: 176
// line end:   191
int FindBlock__Fii(int x, int y) {
	// register: 6
	// size: 0x4
	register struct BLOCK *ptr;
}


// address: 0x80074D34
// line start: 196
// line end:   226
void ChangeBlock__Fiii(int x, int y, int bl) {
	// register: 17
	// size: 0x4
	register struct BLOCK *ptr;
	// register: 18
	register short *list;
	{
		// register: 4
		register int b;
	}
}


// address: 0x80074E78
// line start: 230
// line end:   252
void ScanBlocks__FPs(short *list) {
	// register: 19
	// size: 0x4
	register struct BLOCK *ptr;
	{
		// register: 20
		register int bl;
		{
			// register: 18
			register int y;
			{
				{
					// register: 17
					register int x;
				}
			}
		}
	}
}


// address: 0x80074F80
// line start: 258
// line end:   293
void BuildLevTrigs__Fv() {
}


// address: 0x80075114
// line start: 323
// line end:   365
void DrawFRIG__Fv() {
}


// address: 0x80075134
// line start: 371
// line end:   451
unsigned char ForceTownTrig__Fv() {
	{
		{
			// register: 16
			register int px;
			// register: 17
			register int py;
		}
	}
}


// address: 0x80075410
// line start: 456
// line end:   492
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x800755D0
// line start: 499
// line end:   557
unsigned char ForceL2Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 3
	register int dy;
}


// address: 0x800758D0
// line start: 564
// line end:   619
unsigned char ForceL3Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80075BDC
// line start: 626
// line end:   693
unsigned char ForceL4Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80075F18
// line start: 699
// line end:   709
void Freeupstairs__Fv() {
	// register: 8
	register int j;
	// register: 9
	register int tx;
	// register: 10
	register int ty;
	// register: 4
	register int xx;
	// register: 5
	register int yy;
}


// address: 0x80075FC8
// line start: 716
// line end:   724
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x80076054
// line start: 733
// line end:   741
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x800760E0
// line start: 750
// line end:   758
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x8007616C
// line start: 769
// line end:   823
void CheckTrigForce__Fv() {
	// register: 19
	register int ocursmx;
	// register: 18
	register int ocursmy;
	{
		{
			{
				// register: 17
				register int i;
				{
					{
						// register: 16
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x80076478
// line start: 833
// line end:   855
void FadeGameOut__Fv() {
}


// address: 0x8007651C
// line start: 863
// line end:   882
bool IsTrigger__Fii(int x, int y) {
	// register: 6
	register int i;
}


// address: 0x80076614
// line start: 888
// line end:   891
bool CheckTrigLevel__Fi(int level) {
}


// address: 0x80076650
// line start: 895
// line end:   1051
void CheckTriggers__Fi(int pnum) {
	// register: 5
	register int x;
	// register: 6
	register int y;
	{
		// register: 30
		register int i;
		{
			{
				{
					{
						{
							// register: 16
							register unsigned char abortflag;
							// register: 18
							register int dx;
							// register: 17
							register int dy;
							// register: 19
							register char m;
						}
					}
				}
			}
		}
	}
}

