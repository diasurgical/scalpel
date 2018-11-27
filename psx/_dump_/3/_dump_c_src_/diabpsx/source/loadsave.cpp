// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x8014D8AC
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8014D900
void LoadQuest__Fi(int i) {
}


// address: 0x8014D9C8
void ISave__Fi(int v) {
}


// address: 0x8014DA28
void SaveQuest__Fi(int i) {
}


// address: 0x8014DAF4
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8014DD50
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 16
	register int i;
	// register: 18
	register int result;
	// register: 19
	register unsigned char *LoadBuff;
}


// address: 0x8014E074
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 17
	register int result;
	// register: 16
	register unsigned char *LoadBuff;
}


// address: 0x8014E1E0
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


