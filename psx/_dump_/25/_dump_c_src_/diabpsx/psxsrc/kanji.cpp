// C:\diabpsx\PSXSRC\KANJI.CPP

#include "types.h"

// address: 0x800A00C4
void LoadKanjiFont__Fv() {
	// register: 16
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A0194
void LoadKanjiIndex__Fv() {
	// register: 17
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A0280
unsigned short *getb__FUs(unsigned short n) {
	// register: 4
	// size: 0x4
	register struct kindexS *ii;
	// register: 3
	register int i;
	// register: 16
	register int off;
}


// address: 0x800A02F0
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


// address: 0x800A03CC
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


