// C:\diabpsx\SOURCE\AUTOMAP.CPP

#include "types.h"

// address: 0x80156198
// line start: 124
// line end:   127
void StartAutomap__Fv() {
}


// address: 0x801561A8
// line start: 132
// line end:   133
void AutomapUp__Fv() {
}


// address: 0x801561C8
// line start: 138
// line end:   139
void AutomapDown__Fv() {
}


// address: 0x801561E8
// line start: 144
// line end:   145
void AutomapLeft__Fv() {
}


// address: 0x80156208
// line start: 150
// line end:   151
void AutomapRight__Fv() {
}


// address: 0x80156228
// size: 0x10
// line start: 172
// line end:   179
struct LINE_F2 *AMGetLine__FUcUcUc(unsigned char R, unsigned char G, unsigned char B) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct LINE_F2 *L2;
}


// address: 0x801562D4
// line start: 184
// line end:   191
void AmDrawLine__Fiiii(int x0, int y0, int x1, int y1) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
}


// address: 0x8015633C
// line start: 198
// line end:   208
void AmDrawPlayer__Fiiiii(int x0, int y0, int x1, int y1, int PNum) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
}


// address: 0x801563C4
// line start: 221
// line end:   304
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


// address: 0x80156714
// line start: 309
// line end:   326
void DrawAutoMapVertWall__Fiiii(int X, int Y, int Length, int asd) {
	// register: 6
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 3
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x80156808
// line start: 333
// line end:   350
void DrawAutoMapHorzWall__Fiiii(int X, int Y, int Length, int asd) {
	// register: 6
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 3
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x801568FC
// line start: 356
// line end:   420
void DrawAutoMapVertDoor__Fii(int X, int Y) {
	// register: 8
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 22
	register int Ly;
	// register: 16
	register int Frac;
	// register: 22
	register int y0;
	// register: 21
	register int x1;
	// register: 19
	register int y1;
	// register: 18
	register int y2;
	// register: 20
	register int x3;
}


// address: 0x80156AD0
// line start: 427
// line end:   492
void DrawAutoMapHorzDoor__Fii(int X, int Y) {
	// register: 9
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 21
	register int Ly;
	// register: 18
	register int Frac;
	// register: 21
	register int y0;
	// register: 17
	register int x1;
	// register: 20
	register int y1;
	// register: 22
	register int y2;
	// register: 19
	register int x3;
}


// address: 0x80156CA8
// line start: 499
// line end:   515
void DrawAutoMapVertGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x80156D5C
// line start: 522
// line end:   538
void DrawAutoMapHorzGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x80156E10
// line start: 544
// line end:   593
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


// address: 0x80156F58
// line start: 600
// line end:   669
void DrawAutoMapStairs__Fii(int X, int Y) {
	// register: 3
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 18
	register int Lx;
	// register: 22
	register int Ly;
	// register: 17
	register int Frac;
	// register: 20
	register int x1;
	// register: 19
	register int y1;
	// register: 21
	register int y2;
	// register: 17
	register int x3;
}


// address: 0x80157158
// line start: 677
// line end:   814
void DrawAutomap__Fv() {
	// register: 20
	register int MapX;
	// register: 19
	register int MapY;
	// register: 17
	register int Sx;
	// register: 21
	register int Sy;
	// register: 18
	register unsigned short Tile;
	// register: 16
	register int Len;
	// address: 0xFFFFFF98
	// size: 0x8
	auto struct RECT R;
	// address: 0xFFFFFFA0
	// size: 0x40
	auto char levname[64];
	// register: 2
	register int len;
	{
		{
			// register: 2
			register int Px;
			// register: 3
			register int Py;
		}
	}
}


