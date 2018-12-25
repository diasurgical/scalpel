#include "types.h"

// === [ Overlay ID 4 ] ===

// address: 0x800B04FC
// size: 0xC
extern char StrDate[12];

// address: 0x800B0508
// size: 0x9
extern char StrTime[9];

// address: 0x800B0514
// size: 0x1D8
extern char *Words[118];

// address: 0x800B06EC
// size: 0x60
extern struct MONTH_DAYS MonDays[12];

// address: 0x800B0054
// line start: 93
// line end:   134
void VID_OpenModule__Fv() {
}


// address: 0x800B0114
// line start: 184
// line end:   207
void InitScreens__Fv() {
}


// address: 0x800B0204
// line start: 85
// line end:   87
void MEM_SetupMem__Fv() {
}


// address: 0x800B0230
// line start: 123
// line end:   137
void SetupWorkRam__Fv() {
}


// address: 0x800B02D0
// line start: 97
// line end:   174
void SYSI_Init__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x800B0418
// line start: 560
// line end:   563
void PA_Open__Fv() {
}


// address: 0x800B0450
// line start: 103
// line end:   110
void PAD_Open__Fv() {
}


// address: 0x800B0494
// line start: 1398
// line end:   1403
void GM_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800B04B8
// line start: 110
// line end:   111
void OVR_Open__Fv() {
}


// address: 0x800B04D8
// line start: 61
// line end:   63
void DEC_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800B074C
// line start: 252
// line end:   275
char *GetVersionString__FPc(char *VersionString2) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto char VersionString[40];
}


// address: 0x800B0820
// line start: 299
// line end:   338
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


