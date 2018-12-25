#include "types.h"

// === [ Overlay ID 3 ] ===

// address: 0x800A4EB4
// size: 0xC
extern char StrDate[12];

// address: 0x800A4EC0
// size: 0x9
extern char StrTime[9];

// address: 0x800A4ECC
// size: 0x1D8
extern char *Words[118];

// address: 0x800A50A4
// size: 0x60
extern struct MONTH_DAYS MonDays[12];

// address: 0x800A4A48
// line start: 84
// line end:   116
void VID_OpenModule__Fv() {
}


// address: 0x800A4B08
// line start: 163
// line end:   184
void InitScreens__Fv() {
}


// address: 0x800A4BF8
// line start: 85
// line end:   87
void MEM_SetupMem__Fv() {
}


// address: 0x800A4C24
// line start: 123
// line end:   135
void SetupWorkRam__Fv() {
}


// address: 0x800A4CB4
// line start: 94
// line end:   160
void SYSI_Init__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x800A4DD0
// line start: 1343
// line end:   1348
void GM_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A4DF4
// line start: 530
// line end:   533
void PA_Open__Fv() {
}


// address: 0x800A4E2C
// line start: 98
// line end:   105
void PAD_Open__Fv() {
}


// address: 0x800A4E70
// line start: 110
// line end:   111
void OVR_Open__Fv() {
}


// address: 0x800A4E90
// line start: 61
// line end:   63
void DEC_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A5104
// line start: 251
// line end:   274
char *GetVersionString__FPc(char *VersionString2) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto char VersionString[40];
}


// address: 0x800A51D8
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


