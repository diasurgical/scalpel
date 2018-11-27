#include "types.h"

// === [ Overlay ID 3 ] ===

// address: 0x800A0E14
// size: 0xC
extern char StrDate[12];

// address: 0x800A0E20
// size: 0x9
extern char StrTime[9];

// address: 0x800A0E2C
// size: 0x1D8
extern char *Words[118];

// address: 0x800A1004
// size: 0x60
extern struct MONTH_DAYS MonDays[12];

// address: 0x800A0988
void VID_OpenModule__Fv() {
}


// address: 0x800A0A48
void InitScreens__Fv() {
}


// address: 0x800A0B38
void MEM_SetupMem__Fv() {
}


// address: 0x800A0B64
void SetupWorkRam__Fv() {
}


// address: 0x800A0BF4
void SYSI_Init__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x800A0D00
void GM_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A0D24
void PA_Open__Fv() {
}


// address: 0x800A0D5C
void PAD_Open__Fv() {
}


// address: 0x800A0DA0
void OVR_Open__Fv() {
}


// address: 0x800A0DC0
void SCR_Open__Fv() {
}


// address: 0x800A0DF0
void DEC_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A1064
char *GetVersionString__FPc(char *VersionString2) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto char VersionString[40];
}


// address: 0x800A1138
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


