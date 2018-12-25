#include "types.h"

// === [ Overlay ID 3 ] ===

// address: 0x800A50C4
// size: 0xC
extern char StrDate[12];

// address: 0x800A50D0
// size: 0x9
extern char StrTime[9];

// address: 0x800A50DC
// size: 0x1D8
extern char *Words[118];

// address: 0x800A52B4
// size: 0x60
extern struct MONTH_DAYS MonDays[12];

// address: 0x800A4C50
// line start: 85
// line end:   113
void VID_OpenModule__Fv() {
}


// address: 0x800A4D10
// line start: 164
// line end:   183
void InitScreens__Fv() {
}


// address: 0x800A4E00
// line start: 85
// line end:   87
void MEM_SetupMem__Fv() {
}


// address: 0x800A4E2C
// line start: 123
// line end:   135
void SetupWorkRam__Fv() {
}


// address: 0x800A4EBC
// line start: 95
// line end:   162
void SYSI_Init__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x800A4FE0
// line start: 1343
// line end:   1348
void GM_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A5004
// line start: 530
// line end:   533
void PA_Open__Fv() {
}


// address: 0x800A503C
// line start: 98
// line end:   105
void PAD_Open__Fv() {
}


// address: 0x800A5080
// line start: 110
// line end:   111
void OVR_Open__Fv() {
}


// address: 0x800A50A0
// line start: 61
// line end:   63
void DEC_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A5314
// line start: 251
// line end:   274
char *GetVersionString__FPc(char *VersionString2) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto char VersionString[40];
}


// address: 0x800A53E8
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


