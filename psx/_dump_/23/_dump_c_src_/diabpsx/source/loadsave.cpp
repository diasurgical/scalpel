// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x80148EFC
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80148F50
void LoadQuest__Fi(int i) {
}


// address: 0x80149018
void ISave__Fi(int v) {
}


// address: 0x80149078
void SaveQuest__Fi(int i) {
}


// address: 0x80149144
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8014940C
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x80149708
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x80149830
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x801499B0
void RestorePads__Fv() {
}


// address: 0x80149A70
void StorePads__Fv() {
}


// address: 0x80149B2C
void GetIcon__Fv() {
}


