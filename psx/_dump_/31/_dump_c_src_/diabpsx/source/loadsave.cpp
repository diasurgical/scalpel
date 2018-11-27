// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x8015BDC4
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015BE18
void LoadQuest__Fi(int i) {
}


// address: 0x8015BEE0
void ISave__Fi(int v) {
}


// address: 0x8015BF40
void SaveQuest__Fi(int i) {
}


// address: 0x8015C00C
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8015C2D4
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x8015C5D0
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015C6F8
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015C878
void RestorePads__Fv() {
}


// address: 0x8015C938
void StorePads__Fv() {
}


// address: 0x8015C9F4
void GetIcon__Fv() {
}


// address: 0x8015CA30
int PSX_OPT_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015CAD8
int PSX_OPT_SaveGame__Fi(int card_number) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


