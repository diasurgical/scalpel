#include "types.h"

// === [ Overlay ID 3 ] ===

// address: 0x800A25E0
// size: 0xC
extern char StrDate[12];

// address: 0x800A25EC
// size: 0x9
extern char StrTime[9];

// address: 0x800A25F8
// size: 0x1D8
extern char *Words[118];

// address: 0x800A27D0
// size: 0x60
extern struct MONTH_DAYS MonDays[12];

// address: 0x800A2154
void VID_OpenModule__Fv() {
}


// address: 0x800A2214
void InitScreens__Fv() {
}


// address: 0x800A2304
void MEM_SetupMem__Fv() {
}


// address: 0x800A2330
void SetupWorkRam__Fv() {
}


// address: 0x800A23C0
void SYSI_Init__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x800A24CC
void GM_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A24F0
void PA_Open__Fv() {
}


// address: 0x800A2528
void PAD_Open__Fv() {
}


// address: 0x800A256C
void OVR_Open__Fv() {
}


// address: 0x800A258C
void SCR_Open__Fv() {
}


// address: 0x800A25BC
void DEC_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A2830
char *GetVersionString__FPc(char *VersionString2) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto char VersionString[40];
}


// address: 0x800A2904
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


