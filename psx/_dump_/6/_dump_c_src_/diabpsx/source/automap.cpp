// C:\diabpsx\SOURCE\AUTOMAP.CPP

#include "types.h"

// address: 0x8014B118
// line start: 84
// line end:   87
void StartAutomap__Fv() {
}


// address: 0x8014B130
// line start: 92
// line end:   93
void AutomapUp__Fv() {
}


// address: 0x8014B148
// line start: 98
// line end:   99
void AutomapDown__Fv() {
}


// address: 0x8014B160
// line start: 104
// line end:   105
void AutomapLeft__Fv() {
}


// address: 0x8014B178
// line start: 110
// line end:   111
void AutomapRight__Fv() {
}


// address: 0x8014B190
// size: 0x10
// line start: 132
// line end:   139
struct LINE_F2 *AMGetLine__FUcUcUc(unsigned char R, unsigned char G, unsigned char B) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct LINE_F2 *L2;
}


// address: 0x8014B23C
// line start: 144
// line end:   151
void AmDrawLine__Fiiii(int x0, int y0, int x1, int y1) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
}


// address: 0x8014B2A4
// line start: 164
// line end:   241
void DrawAutomapPlr__Fv() {
	// register: 2
	register int Px;
	// register: 3
	register int Py;
	// register: 18
	register int x;
	// register: 19
	register int y;
	// register: 23
	register int automaps3;
	// register: 21
	register int automaps4;
	// register: 20
	register int automaps5;
	{
		// register: 30
		register int pc;
	}
}


// address: 0x8014B61C
// line start: 246
// line end:   262
void DrawAutoMapVertWall__Fiii(int X, int Y, int Length) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x8014B6C4
// line start: 269
// line end:   285
void DrawAutoMapHorzWall__Fiii(int X, int Y, int Length) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x8014B76C
// line start: 291
// line end:   355
void DrawAutoMapVertDoor__Fii(int X, int Y) {
	// register: 7
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 18
	register int Ly;
	// register: 19
	register int x1;
	// register: 17
	register int x3;
}


// address: 0x8014B8E4
// line start: 362
// line end:   427
void DrawAutoMapHorzDoor__Fii(int X, int Y) {
	// register: 8
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 17
	register int Ly;
	// register: 20
	register int y0;
	// register: 19
	register int x1;
	// register: 18
	register int y1;
	// register: 17
	register int y2;
	// register: 17
	register int x3;
}


// address: 0x8014BA64
// line start: 434
// line end:   450
void DrawAutoMapVertGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x8014BAF8
// line start: 457
// line end:   473
void DrawAutoMapHorzGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x8014BB8C
// line start: 479
// line end:   528
void DrawAutoMapSquare__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 17
	register int Ly;
	// register: 20
	register int y0;
	// register: 18
	register int x1;
	// register: 19
	register int y1;
	// register: 17
	register int y2;
	// register: 17
	register int x3;
}


// address: 0x8014BCA4
// line start: 535
// line end:   604
void DrawAutoMapStairs__Fii(int X, int Y) {
	// register: 3
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 17
	register int Ly;
	// register: 18
	register int x1;
	// register: 19
	register int y1;
	// register: 20
	register int y2;
	// register: 18
	register int x3;
}


// address: 0x8014BE4C
// line start: 611
// line end:   719
void DrawAutomap__Fv() {
	// register: 20
	register int MapX;
	// register: 19
	register int MapY;
	// register: 18
	register int Sx;
	// register: 21
	register int Sy;
	// register: 17
	register unsigned short Tile;
	// register: 16
	register int Len;
	{
		// register: 7
		register int pc;
		{
			{
				{
					// register: 4
					register int Px;
					// register: 5
					register int Py;
				}
			}
		}
	}
}


