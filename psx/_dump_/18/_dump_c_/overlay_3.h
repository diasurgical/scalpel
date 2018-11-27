#include "types.h"

// === [ Overlay ID 3 ] ===

// address: 0x8009FCB4
// size: 0xC
extern char StrDate[12];

// address: 0x8009FCC0
// size: 0x9
extern char StrTime[9];

// address: 0x8009FCCC
// size: 0x1D8
extern char *Words[118];

// address: 0x8009FEA4
// size: 0x60
extern struct MONTH_DAYS MonDays[12];

// address: 0x8009F828
void VID_OpenModule__Fv() {
}


// address: 0x8009F8E8
void InitScreens__Fv() {
}


// address: 0x8009F9D8
void MEM_SetupMem__Fv() {
}


// address: 0x8009FA04
void SetupWorkRam__Fv() {
}


// address: 0x8009FA94
void SYSI_Init__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x8009FBA0
void GM_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009FBC4
void PA_Open__Fv() {
}


// address: 0x8009FBFC
void PAD_Open__Fv() {
}


// address: 0x8009FC40
void OVR_Open__Fv() {
}


// address: 0x8009FC60
void SCR_Open__Fv() {
}


// address: 0x8009FC90
void DEC_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009FF04
char *GetVersionString__FPc(char *VersionString2) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto char VersionString[40];
}


// address: 0x8009FFD8
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


