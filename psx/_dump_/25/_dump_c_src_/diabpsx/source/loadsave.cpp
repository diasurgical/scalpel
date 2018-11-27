// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x80149714
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80149768
void LoadQuest__Fi(int i) {
}


// address: 0x80149830
void ISave__Fi(int v) {
}


// address: 0x80149890
void SaveQuest__Fi(int i) {
}


// address: 0x8014995C
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x80149C24
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x80149F20
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8014A048
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8014A1C8
void RestorePads__Fv() {
}


// address: 0x8014A288
void StorePads__Fv() {
}


// address: 0x8014A344
void GetIcon__Fv() {
}


