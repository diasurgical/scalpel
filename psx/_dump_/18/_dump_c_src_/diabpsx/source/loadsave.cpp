// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x801540E4
// line start: 116
// line end:   122
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80154138
// line start: 214
// line end:   216
void LoadQuest__Fi(int i) {
}


// address: 0x80154200
// line start: 416
// line end:   423
void ISave__Fi(int v) {
}


// address: 0x80154260
// line start: 508
// line end:   510
void SaveQuest__Fi(int i) {
}


// address: 0x8015432C
// line start: 844
// line end:   923
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x801545E0
// line start: 927
// line end:   1018
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x801548DC
// line start: 1024
// line end:   1040
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x80154A04
// line start: 1044
// line end:   1063
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 10
	register unsigned char *SaveBuff;
}


// address: 0x80154B5C
// line start: 1067
// line end:   1083
void RestorePads__Fv() {
}


// address: 0x80154C1C
// line start: 1088
// line end:   1103
void StorePads__Fv() {
}


