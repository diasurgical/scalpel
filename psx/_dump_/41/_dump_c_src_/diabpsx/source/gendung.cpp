// C:\diabpsx\SOURCE\GENDUNG.CPP

#include "types.h"

// address: 0x80155AF8
// line start: 162
// line end:   210
void FillSolidBlockTbls__Fv() {
	// address: 0xFFFFFFF0
	auto unsigned long dwTiles;
	// register: 16
	register unsigned char *pSBFile;
	// register: 6
	register unsigned char *pTmp;
	{
		// register: 4
		register unsigned long d;
		{
			// register: 3
			register unsigned char bv;
			{
			}
		}
	}
}


// address: 0x80155C84
// line start: 222
// line end:   223
void SetDungeonMicros__Fv() {
}


// address: 0x80155C8C
// line start: 229
// line end:   240
void DRLG_InitTrans__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x80155D00
// line start: 248
// line end:   254
void DRLG_RectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 8
	register int i;
	// register: 5
	register int j;
}


// address: 0x80155D74
// line start: 262
// line end:   263
void DRLG_CopyTrans__Fiiii(int sx, int sy, int dx, int dy) {
}


// address: 0x80155DBC
// line start: 270
// line end:   280
void DRLG_ListTrans__FiPUc(int num, unsigned char *List) {
	// register: 17
	register int i;
	// register: 4
	register unsigned char x1;
	// register: 5
	register unsigned char y1;
	// register: 6
	register unsigned char x2;
	// register: 7
	register unsigned char y2;
}


// address: 0x80155E30
// line start: 287
// line end:   299
void DRLG_AreaTrans__FiPUc(int num, unsigned char *List) {
	// register: 17
	register int i;
	// register: 4
	register unsigned char x1;
	// register: 5
	register unsigned char y1;
	// register: 6
	register unsigned char x2;
	// register: 7
	register unsigned char y2;
}


// address: 0x80155EC0
// line start: 307
// line end:   311
void DRLG_InitSetPC__Fv() {
}


// address: 0x80155ED8
// line start: 319
// line end:   329
void DRLG_SetPC__Fv() {
	// register: 4
	register int i;
	// register: 5
	register int j;
	// register: 8
	register int x;
	// register: 10
	register int y;
	// register: 7
	register int w;
	// register: 9
	register int h;
}


// address: 0x80155F78
// line start: 336
// line end:   346
void Make_SetPC__Fiiii(int x, int y, int w, int h) {
	// register: 8
	register int i;
	// register: 9
	register int j;
	// register: 4
	register int dx;
	// register: 5
	register int dy;
	// register: 7
	register int dh;
	// register: 6
	register int dw;
}


// address: 0x80156008
// line start: 380
// line end:   451
unsigned char DRLG_WillThemeRoomFit__FiiiiiPiT5(int floor, int x, int y, int minSize, int maxSize, int *width, int *height) {
	// register: 7
	register int ii;
	// register: 4
	register int xx;
	// register: 4
	register int yy;
	// register: 3
	register int xSmallest;
	// register: 8
	register int ySmallest;
	// address: 0xFFFFFF20
	// size: 0x50
	auto int xArray[20];
	// address: 0xFFFFFF70
	// size: 0x50
	auto int yArray[20];
	// register: 19
	register int xCount;
	// register: 18
	register int yCount;
	// register: 21
	register unsigned char yFlag;
	// register: 20
	register unsigned char xFlag;
}


// address: 0x801562D0
// line start: 463
// line end:   566
void DRLG_CreateThemeRoom__Fi(int themeIndex) {
	// register: 6
	register int xx;
	// register: 7
	register int yy;
}


// address: 0x801572D8
// line start: 590
// line end:   645
void DRLG_PlaceThemeRooms__FiiiiUc(int minSize, int maxSize, int floor, int freq, int rndSize) {
	// register: 18
	register int i;
	// register: 19
	register int j;
	// address: 0xFFFFFFC0
	auto int themeW;
	// address: 0xFFFFFFC4
	auto int themeH;
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											// register: 3
											register int rv2;
											// register: 16
											register int min;
											// register: 17
											register int max;
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


// address: 0x80157580
// line start: 657
// line end:   673
void DRLG_HoldThemeRooms__Fv() {
	// register: 25
	register int i;
	// register: 7
	register int x;
	// register: 8
	register int y;
}


// address: 0x80157724
// line start: 687
// line end:   698
unsigned char SkipThemeRoom__Fii(int x, int y) {
	// register: 7
	register int i;
}


// address: 0x801577F0
// line start: 704
// line end:   731
void InitLevels__Fv() {
	{
		// register: 5
		register int i;
	}
}


