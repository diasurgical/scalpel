// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x8014D8AC
// line start: 104
// line end:   110
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8014D900
// line start: 202
// line end:   204
void LoadQuest__Fi(int i) {
}


// address: 0x8014D9C8
// line start: 404
// line end:   411
void ISave__Fi(int v) {
}


// address: 0x8014DA28
// line start: 496
// line end:   498
void SaveQuest__Fi(int i) {
}


// address: 0x8014DAF4
// line start: 832
// line end:   897
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8014DD50
// line start: 901
// line end:   994
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 16
	register int i;
	// register: 18
	register int result;
	// register: 19
	register unsigned char *LoadBuff;
}


// address: 0x8014E074
// line start: 1000
// line end:   1016
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 17
	register int result;
	// register: 16
	register unsigned char *LoadBuff;
}


// address: 0x8014E1E0
// line start: 1020
// line end:   1041
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


