#include "types.h"

// === [ Overlay ID 3 ] ===

// address: 0x800A1A94
// size: 0xC
extern char StrDate[12];

// address: 0x800A1AA0
// size: 0x9
extern char StrTime[9];

// address: 0x800A1AAC
// size: 0x1D8
extern char *Words[118];

// address: 0x800A1C84
// size: 0x60
extern struct MONTH_DAYS MonDays[12];

// address: 0x800A1608
void VID_OpenModule__Fv() {
}


// address: 0x800A16C8
void InitScreens__Fv() {
}


// address: 0x800A17B8
void MEM_SetupMem__Fv() {
}


// address: 0x800A17E4
void SetupWorkRam__Fv() {
}


// address: 0x800A1874
void SYSI_Init__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x800A1980
void GM_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A19A4
void PA_Open__Fv() {
}


// address: 0x800A19DC
void PAD_Open__Fv() {
}


// address: 0x800A1A20
void OVR_Open__Fv() {
}


// address: 0x800A1A40
void SCR_Open__Fv() {
}


// address: 0x800A1A70
void DEC_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A1CE4
char *GetVersionString__FPc(char *VersionString2) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto char VersionString[40];
}


// address: 0x800A1DB8
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


