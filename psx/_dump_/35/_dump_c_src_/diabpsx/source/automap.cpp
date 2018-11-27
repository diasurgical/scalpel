// C:\diabpsx\SOURCE\AUTOMAP.CPP

#include "types.h"

// address: 0x80160EA8
void StartAutomap__Fv() {
}


// address: 0x80160EB8
void AutomapUp__Fv() {
}


// address: 0x80160ED8
void AutomapDown__Fv() {
}


// address: 0x80160EF8
void AutomapLeft__Fv() {
}


// address: 0x80160F18
void AutomapRight__Fv() {
}


// address: 0x80160F38
// size: 0x10
struct LINE_F2 *AMGetLine__FUcUcUc(unsigned char R, unsigned char G, unsigned char B) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct LINE_F2 *L2;
}


// address: 0x80160FE4
void AmDrawLine__Fiiii(int x0, int y0, int x1, int y1) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
}


// address: 0x8016104C
void AmDrawPlayer__Fiiii(int x0, int y0, int x1, int y1) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
}


// address: 0x801610B4
void DrawAutomapPlr__Fv() {
	// register: 18
	register int x;
	// register: 19
	register int y;
	// register: 22
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


// address: 0x801613C4
void DrawAutoMapVertWall__Fiiii(int X, int Y, int Length, int asd) {
	// register: 6
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 3
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x801614B8
void DrawAutoMapHorzWall__Fiiii(int X, int Y, int Length, int asd) {
	// register: 6
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 3
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x801615AC
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


// address: 0x80161780
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


// address: 0x80161958
void DrawAutoMapVertGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x80161A0C
void DrawAutoMapHorzGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x80161AC0
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


// address: 0x80161C08
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


// address: 0x80161E08
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


