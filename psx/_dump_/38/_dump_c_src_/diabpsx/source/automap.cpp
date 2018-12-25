// C:\diabpsx\SOURCE\AUTOMAP.CPP

#include "types.h"

// address: 0x80161A34
// line start: 130
// line end:   131
void StartAutomap__Fv() {
}


// address: 0x80161A44
// line start: 136
// line end:   137
void AutomapUp__Fv() {
}


// address: 0x80161A64
// line start: 142
// line end:   143
void AutomapDown__Fv() {
}


// address: 0x80161A84
// line start: 148
// line end:   149
void AutomapLeft__Fv() {
}


// address: 0x80161AA4
// line start: 154
// line end:   155
void AutomapRight__Fv() {
}


// address: 0x80161AC4
// size: 0x10
// line start: 176
// line end:   185
struct LINE_F2 *AMGetLine__FUcUcUc(unsigned char R, unsigned char G, unsigned char B) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct LINE_F2 *L2;
}


// address: 0x80161B7C
// line start: 202
// line end:   209
void AmDrawPlayer__Fiiiii(int x0, int y0, int x1, int y1, int PNum) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
}


// address: 0x80161C00
// line start: 221
// line end:   285
void DrawAutomapPlr__Fv() {
	// register: 18
	register int x;
	// register: 19
	register int y;
	// register: 23
	register int automaps3;
	// register: 22
	register int automaps4;
	// register: 21
	register int automaps5;
	{
		// register: 20
		register int pc;
	}
}


// address: 0x80161F6C
// line start: 335
// line end:   377
void DrawAutoMapVertDoor__Fii(int X, int Y) {
	// register: 8
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 22
	register int Ly;
	// register: 18
	register int Frac;
	// register: 22
	register int y0;
	// register: 21
	register int x1;
	// register: 19
	register int y1;
	// register: 16
	register int y2;
	// register: 20
	register int x3;
}


// address: 0x80162128
// line start: 383
// line end:   424
void DrawAutoMapHorzDoor__Fii(int X, int Y) {
	// register: 9
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 20
	register int Ly;
	// register: 18
	register int Frac;
	// register: 20
	register int y0;
	// register: 17
	register int x1;
	// register: 21
	register int y1;
	// register: 22
	register int y2;
	// register: 19
	register int x3;
}


// address: 0x801622E8
// line start: 430
// line end:   443
void DrawAutoMapVertGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 4
	register int Ly;
}


// address: 0x80162380
// line start: 449
// line end:   462
void DrawAutoMapHorzGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 4
	register int Ly;
}


// address: 0x80162418
// line start: 467
// line end:   501
void DrawAutoMapSquare__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 17
	register int Ly;
	// register: 7
	register int Frac;
	// register: 21
	register int y0;
	// register: 20
	register int x1;
	// register: 19
	register int y1;
	// register: 17
	register int y2;
	// register: 18
	register int x3;
}


// address: 0x8016254C
// line start: 507
// line end:   540
void DrawVertArch__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 16
	register int Ly;
	// register: 2
	register int Frac;
	// register: 22
	register int x0;
	// register: 23
	register int y0;
	// register: 19
	register int x1;
	// register: 18
	register int y1;
	// register: 21
	register int x2;
	// register: 20
	register int y2;
	// register: 17
	register int x3;
	// register: 16
	register int y3;
}


// address: 0x80162680
// line start: 546
// line end:   579
void DrawHorzArch__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 16
	register int Ly;
	// register: 2
	register int Frac;
	// register: 22
	register int x0;
	// register: 23
	register int y0;
	// register: 19
	register int x1;
	// register: 18
	register int y1;
	// register: 21
	register int x2;
	// register: 20
	register int y2;
	// register: 17
	register int x3;
	// register: 16
	register int y3;
}


// address: 0x801627B4
// line start: 628
// line end:   658
void DrawAutoMapStairs__Fii(int X, int Y) {
	// register: 3
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 19
	register int Ly;
	// register: 18
	register int Frac;
	// register: 20
	register int x1;
	// register: 21
	register int y1;
	// register: 19
	register int y2;
}


// address: 0x8016292C
// line start: 666
// line end:   1167
void DrawAutomap__Fv() {
	// register: 6
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 5
	register int Lx;
	// register: 4
	register int Ly;
	// register: 3
	register int LineY;
	// register: 21
	register int MapX;
	// register: 20
	register int MapY;
	// address: 0xFFFFFF90
	auto int LLSx;
	// address: 0xFFFFFF98
	auto int LLSy;
	// address: 0xFFFFFFA0
	auto int LRSx;
	// address: 0xFFFFFFA8
	auto int LRSy;
	// address: 0xFFFFFFB0
	auto int LSx;
	// address: 0xFFFFFFB8
	auto int LSy;
	// address: 0xFFFFFFC0
	auto int RSx;
	// address: 0xFFFFFFC8
	auto int RSy;
	// register: 17
	register int LLen;
	// register: 19
	register int RLen;
	// register: 22
	register int LLLen;
	// register: 23
	register int LRLen;
	// register: 18
	register unsigned char AMLWallFlag;
	// register: 18
	register unsigned char AMRWallFlag;
	// address: 0xFFFFFF48
	auto unsigned short AmTile;
	// register: 16
	register unsigned char AmTileType;
	// address: 0xFFFFFFD0
	auto unsigned char *AmTileTypePtr;
	// register: 5
	register int P1x;
	// register: 6
	register int P1y;
	// register: 7
	register int P2x;
	// register: 8
	register int P2y;
	// address: 0xFFFFFF50
	// size: 0x40
	auto char levname[64];
	// register: 2
	register int len;
	{
		{
			{
				{
					// register: 3
					register int PAx;
					// register: 4
					register int PAy;
				}
			}
		}
	}
}


