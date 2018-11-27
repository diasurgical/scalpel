// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x801540E4
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80154138
void LoadQuest__Fi(int i) {
}


// address: 0x80154200
void ISave__Fi(int v) {
}


// address: 0x80154260
void SaveQuest__Fi(int i) {
}


// address: 0x8015432C
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x801545E0
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x801548DC
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x80154A04
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 10
	register unsigned char *SaveBuff;
}


// address: 0x80154B5C
void RestorePads__Fv() {
}


// address: 0x80154C1C
void StorePads__Fv() {
}


