// C:\diabpsx\PSXSRC\KANJI.CPP

#include "types.h"

// address: 0x8009F494
// line start: 34
// line end:   36
void LoadKanjiFont__Fv() {
}


// address: 0x8009F4D0
// line start: 40
// line end:   42
void LoadKanjiIndex__Fv() {
}


// address: 0x8009F50C
// line start: 49
// line end:   67
unsigned short *getb__FUs(unsigned short n) {
	// register: 3
	// size: 0x4
	register struct kindexS *ii;
	// register: 4
	register int i;
	// register: 16
	register int off;
}


// address: 0x8009F580
// line start: 78
// line end:   102
void _get_font__FPUsUsUs(unsigned short *into, unsigned short num, unsigned short col) {
	// register: 8
	register unsigned short *p;
	// register: 16
	register unsigned short *d;
	// register: 5
	register long i;
	// register: 3
	register long j;
	// register: 6
	register short by;
}


// address: 0x8009F65C
// line start: 110
// line end:   144
int KPrintChar__FUsUsUcUcUs(unsigned short Cx, unsigned short Cy, unsigned char h, unsigned char l, int col) {
	// address: 0xFFFFFFE8
	// size: 0x28
	auto struct POLY_FT4 *ft4;
	// address: 0xFFFFFE88
	// size: 0x152
	auto unsigned short buff[169];
	// register: 5
	register unsigned short kan;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT r;
}


