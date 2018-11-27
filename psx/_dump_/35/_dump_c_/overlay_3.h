#include "types.h"

// === [ Overlay ID 3 ] ===

// address: 0x800A2F44
// size: 0xC
extern char StrDate[12];

// address: 0x800A2F50
// size: 0x9
extern char StrTime[9];

// address: 0x800A2F5C
// size: 0x1D8
extern char *Words[118];

// address: 0x800A3134
// size: 0x60
extern struct MONTH_DAYS MonDays[12];

// address: 0x800A2AB8
void VID_OpenModule__Fv() {
}


// address: 0x800A2B78
void InitScreens__Fv() {
}


// address: 0x800A2C68
void MEM_SetupMem__Fv() {
}


// address: 0x800A2C94
void SetupWorkRam__Fv() {
}


// address: 0x800A2D24
void SYSI_Init__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x800A2E30
void GM_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A2E54
void PA_Open__Fv() {
}


// address: 0x800A2E8C
void PAD_Open__Fv() {
}


// address: 0x800A2ED0
void OVR_Open__Fv() {
}


// address: 0x800A2EF0
void SCR_Open__Fv() {
}


// address: 0x800A2F20
void DEC_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A3194
char *GetVersionString__FPc(char *VersionString2) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto char VersionString[40];
}


// address: 0x800A3268
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


