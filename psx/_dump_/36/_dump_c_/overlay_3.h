#include "types.h"

// === [ Overlay ID 3 ] ===

// address: 0x800A0F70
// size: 0xC
extern char StrDate[12];

// address: 0x800A0F7C
// size: 0x9
extern char StrTime[9];

// address: 0x800A0F88
// size: 0x1D8
extern char *Words[118];

// address: 0x800A1160
// size: 0x60
extern struct MONTH_DAYS MonDays[12];

// address: 0x800A0AE4
void VID_OpenModule__Fv() {
}


// address: 0x800A0BA4
void InitScreens__Fv() {
}


// address: 0x800A0C94
void MEM_SetupMem__Fv() {
}


// address: 0x800A0CC0
void SetupWorkRam__Fv() {
}


// address: 0x800A0D50
void SYSI_Init__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x800A0E5C
void GM_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A0E80
void PA_Open__Fv() {
}


// address: 0x800A0EB8
void PAD_Open__Fv() {
}


// address: 0x800A0EFC
void OVR_Open__Fv() {
}


// address: 0x800A0F1C
void SCR_Open__Fv() {
}


// address: 0x800A0F4C
void DEC_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A11C0
char *GetVersionString__FPc(char *VersionString2) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto char VersionString[40];
}


// address: 0x800A1294
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


