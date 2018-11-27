// C:\diabpsx\SOURCE\GENDUNG.CPP

#include "types.h"

// address: 0x80143C44
// line start: 160
// line end:   205
void FillSolidBlockTbls__Fv() {
	// address: 0xFFFFFFF0
	auto unsigned long dwTiles;
	// register: 16
	register unsigned char *pSBFile;
	// register: 6
	register unsigned char *pTmp;
	{
		// register: 3
		register unsigned long d;
		{
			// register: 4
			register unsigned char bv;
			{
			}
		}
	}
}


// address: 0x80143DF0
// line start: 217
// line end:   218
void SetDungeonMicros__Fv() {
}


// address: 0x80143DF8
// line start: 224
// line end:   235
void DRLG_InitTrans__Fv() {
	// register: 3
	register int x;
	// register: 5
	register int y;
}


// address: 0x80143E6C
// line start: 243
// line end:   253
void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x80143F0C
// line start: 262
// line end:   268
void DRLG_RectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x80143F8C
// line start: 276
// line end:   277
void DRLG_CopyTrans__Fiiii(int sx, int sy, int dx, int dy) {
}


// address: 0x80143FF4
// line start: 284
// line end:   294
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


// address: 0x80144068
// line start: 301
// line end:   313
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


// address: 0x801440F8
// line start: 321
// line end:   325
void DRLG_InitSetPC__Fv() {
}


// address: 0x80144110
// line start: 333
// line end:   343
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


// address: 0x801441C0
// line start: 350
// line end:   360
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


// address: 0x80144260
// line start: 394
// line end:   465
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


// address: 0x80144528
// line start: 477
// line end:   580
void DRLG_CreateThemeRoom__Fi(int themeIndex) {
	// register: 6
	register int xx;
	// register: 7
	register int yy;
}


// address: 0x80145530
// line start: 604
// line end:   659
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


// address: 0x801457D8
// line start: 671
// line end:   687
void DRLG_HoldThemeRooms__Fv() {
	// register: 25
	register int i;
	// register: 5
	register int x;
	// register: 8
	register int y;
}


// address: 0x8014598C
// line start: 701
// line end:   712
unsigned char SkipThemeRoom__Fii(int x, int y) {
	// register: 7
	register int i;
}


// address: 0x80145A58
// line start: 718
// line end:   745
void InitLevels__Fv() {
	{
		// register: 5
		register int i;
	}
}


