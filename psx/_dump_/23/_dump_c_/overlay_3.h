#include "types.h"

// === [ Overlay ID 3 ] ===

// address: 0x800A0698
// size: 0xC
extern char StrDate[12];

// address: 0x800A06A4
// size: 0x9
extern char StrTime[9];

// address: 0x800A06B0
// size: 0x1D8
extern char *Words[118];

// address: 0x800A0888
// size: 0x60
extern struct MONTH_DAYS MonDays[12];

// address: 0x800A020C
// line start: 84
// line end:   111
void VID_OpenModule__Fv() {
}


// address: 0x800A02CC
// line start: 154
// line end:   175
void InitScreens__Fv() {
}


// address: 0x800A03BC
// line start: 85
// line end:   87
void MEM_SetupMem__Fv() {
}


// address: 0x800A03E8
// line start: 123
// line end:   135
void SetupWorkRam__Fv() {
}


// address: 0x800A0478
// line start: 92
// line end:   155
void SYSI_Init__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x800A0584
// line start: 1294
// line end:   1299
void GM_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A05A8
// line start: 526
// line end:   529
void PA_Open__Fv() {
}


// address: 0x800A05E0
// line start: 98
// line end:   105
void PAD_Open__Fv() {
}


// address: 0x800A0624
// line start: 110
// line end:   111
void OVR_Open__Fv() {
}


// address: 0x800A0644
// line start: 157
// line end:   158
void SCR_Open__Fv() {
}


// address: 0x800A0674
// line start: 61
// line end:   63
void DEC_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A08E8
// line start: 251
// line end:   274
char *GetVersionString__FPc(char *VersionString2) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto char VersionString[40];
}


// address: 0x800A09BC
// line start: 298
// line end:   337
char *GetWord__FPc(char *VStr) {
	// register: 18
	register bool Found;
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char MonStr[4];
	// register: 17
	register int DayCount;
	// register: 16
	register int Minutes;
	{
	}
}


