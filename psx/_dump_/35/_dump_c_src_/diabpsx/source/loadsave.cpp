// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x8015E58C
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015E5E0
void LoadQuest__Fi(int i) {
}


// address: 0x8015E6A8
void ISave__Fi(int v) {
}


// address: 0x8015E708
void SaveQuest__Fi(int i) {
}


// address: 0x8015E7D4
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
	// register: 17
	register int SaveSize;
}


// address: 0x8015EA74
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 19
	register int DataSize;
	// register: 20
	register unsigned char *LoadBuff;
}


// address: 0x8015ED60
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015EEC4
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015F044
void RestorePads__Fv() {
}


// address: 0x8015F104
void StorePads__Fv() {
}


// address: 0x8015F1C0
void GetIcon__Fv() {
}


// address: 0x8015F1FC
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 17
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015F260
int PSX_OPT_SaveGame__FiPc(int card_number, char *filename) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015F2F8
void LoadOptions__Fv() {
}


// address: 0x8015F368
void SaveOptions__Fv() {
}


