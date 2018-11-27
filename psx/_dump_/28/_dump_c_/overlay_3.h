#include "types.h"

// === [ Overlay ID 3 ] ===

// address: 0x800A1318
// size: 0xC
extern char StrDate[12];

// address: 0x800A1324
// size: 0x9
extern char StrTime[9];

// address: 0x800A1330
// size: 0x1D8
extern char *Words[118];

// address: 0x800A1508
// size: 0x60
extern struct MONTH_DAYS MonDays[12];

// address: 0x800A0E8C
void VID_OpenModule__Fv() {
}


// address: 0x800A0F4C
void InitScreens__Fv() {
}


// address: 0x800A103C
void MEM_SetupMem__Fv() {
}


// address: 0x800A1068
void SetupWorkRam__Fv() {
}


// address: 0x800A10F8
void SYSI_Init__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x800A1204
void GM_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A1228
void PA_Open__Fv() {
}


// address: 0x800A1260
void PAD_Open__Fv() {
}


// address: 0x800A12A4
void OVR_Open__Fv() {
}


// address: 0x800A12C4
void SCR_Open__Fv() {
}


// address: 0x800A12F4
void DEC_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A1568
char *GetVersionString__FPc(char *VersionString2) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto char VersionString[40];
}


// address: 0x800A163C
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


