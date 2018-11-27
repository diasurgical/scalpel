// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x8015CDB0
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015CE04
void LoadQuest__Fi(int i) {
}


// address: 0x8015CECC
void ISave__Fi(int v) {
}


// address: 0x8015CF2C
void SaveQuest__Fi(int i) {
}


// address: 0x8015CFF8
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8015D270
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x8015D520
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015D684
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015D804
void RestorePads__Fv() {
}


// address: 0x8015D8C4
void StorePads__Fv() {
}


// address: 0x8015D980
void GetIcon__Fv() {
}


// address: 0x8015D9BC
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 17
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015DA20
int PSX_OPT_SaveGame__Fi(int card_number) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015DAC4
void LoadOptions__Fv() {
}


// address: 0x8015DB3C
void SaveOptions__Fv() {
}


