// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x8015D610
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015D664
void LoadQuest__Fi(int i) {
}


// address: 0x8015D72C
void ISave__Fi(int v) {
}


// address: 0x8015D78C
void SaveQuest__Fi(int i) {
}


// address: 0x8015D858
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8015DAE0
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x8015DDA0
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015DF04
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015E09C
void RestorePads__Fv() {
}


// address: 0x8015E15C
void StorePads__Fv() {
}


// address: 0x8015E218
void GetIcon__Fv() {
}


// address: 0x8015E254
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 17
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015E2B8
int PSX_OPT_SaveGame__FiPc(int card_number, char *filename) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015E350
void LoadOptions__Fv() {
}


// address: 0x8015E3B0
void SaveOptions__Fv() {
}


