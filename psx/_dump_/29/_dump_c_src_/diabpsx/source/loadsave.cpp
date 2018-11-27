// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x8015BA90
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015BAE4
void LoadQuest__Fi(int i) {
}


// address: 0x8015BBAC
void ISave__Fi(int v) {
}


// address: 0x8015BC0C
void SaveQuest__Fi(int i) {
}


// address: 0x8015BCD8
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8015BFA0
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x8015C29C
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015C3C4
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015C544
void RestorePads__Fv() {
}


// address: 0x8015C604
void StorePads__Fv() {
}


// address: 0x8015C6C0
void GetIcon__Fv() {
}


// address: 0x8015C6FC
int PSX_OPT_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015C7A4
int PSX_OPT_SaveGame__Fi(int card_number) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


