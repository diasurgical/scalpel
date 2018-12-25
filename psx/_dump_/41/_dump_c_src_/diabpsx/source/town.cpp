// C:\diabpsx\SOURCE\TOWN.CPP

#include "types.h"

// address: 0x80073F10
// line start: 129
// line end:   207
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x800740C0
// line start: 216
// line end:   275
void T_FillSector__FPUcT0iiiib(unsigned char *P3Tiles, unsigned char *pSector, int xi, int yi, int w, int h, bool AddSec) {
	// register: 17
	register int i;
	// register: 22
	register int j;
	// register: 20
	register int xx;
	// address: 0xFFFFFFB8
	auto int yy;
	// register: 6
	register long v1;
	// register: 18
	register long v2;
	// register: 19
	register long v3;
	// register: 21
	register long v4;
	// address: 0xFFFFFFC0
	auto long ii;
	{
		{
			// register: 9
			register unsigned short *Map;
			{
				{
					{
						{
							// register: 2
							register long Dave;
						}
					}
				}
			}
		}
	}
}


// address: 0x80074304
// line start: 282
// line end:   333
void T_FillTile__FPUciii(unsigned char *P3Tiles, int xx, int yy, int t) {
	// register: 6
	register long v1;
	// register: 6
	register long v2;
	// register: 6
	register long v3;
	// register: 6
	register long v4;
}


// address: 0x80074414
// line start: 343
// line end:   346
void TownFixupBodges__Fv() {
}


// address: 0x80074454
// line start: 351
// line end:   437
void T_Pass3__Fv() {
	// register: 19
	register unsigned char *pSector;
	// register: 17
	register int xx;
	// register: 18
	register int yy;
	{
		// register: 5
		register int y;
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


// address: 0x800747E0
// line start: 453
// line end:   506
void CreateTown__Fi(int entry) {
	{
		// register: 5
		register int y;
		{
			{
				// register: 4
				register int x;
			}
		}
	}
}


// address: 0x80074934
// line start: 568
// line end:   600
unsigned char *GRL_LoadFileInMemSig__FPCcPUl(char *Name, unsigned long *Len) {
	// register: 18
	// size: 0x14
	register struct FileIO *MyIo;
	// address: 0xFFFFFFD8
	// size: 0x14
	auto char SmallName[20];
	// register: 16
	register unsigned char *Dest;
	// register: 16
	register int FileLen;
}


// address: 0x80074A18
// line start: 612
// line end:   639
void GRL_StripDir__FPcPCc(char *Dest, char *Src) {
	// register: 17
	register char *BSlash;
	// register: 3
	register char *FSlash;
	{
		{
			// register: 5
			register char *Last;
		}
	}
}


