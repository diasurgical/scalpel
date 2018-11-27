#include "types.h"

// === [ Overlay ID 3 ] ===

// address: 0x8009E2A0
// size: 0xC
extern char StrDate[12];

// address: 0x8009E2AC
// size: 0x9
extern char StrTime[9];

// address: 0x8009E2B8
// size: 0x1D4
extern char *Words[117];

// address: 0x8009E48C
// size: 0x60
extern struct MONTH_DAYS MonDays[12];

// address: 0x8009DE14
void VID_OpenModule__Fv() {
}


// address: 0x8009DED4
void InitScreens__Fv() {
}


// address: 0x8009DFC4
void MEM_SetupMem__Fv() {
}


// address: 0x8009DFF0
void SetupWorkRam__Fv() {
}


// address: 0x8009E080
void SYSI_Init__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x8009E18C
void GM_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009E1B0
void PA_Open__Fv() {
}


// address: 0x8009E1E8
void PAD_Open__Fv() {
}


// address: 0x8009E22C
void OVR_Open__Fv() {
}


// address: 0x8009E24C
void SCR_Open__Fv() {
}


// address: 0x8009E27C
void DEC_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009E4EC
char *GetVersionString__FPc(char *VersionString2) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto char VersionString[40];
}


// address: 0x8009E5C0
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


