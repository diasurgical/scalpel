// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x80159BEC
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80159C40
void LoadQuest__Fi(int i) {
}


// address: 0x80159D08
void ISave__Fi(int v) {
}


// address: 0x80159D68
void SaveQuest__Fi(int i) {
}


// address: 0x80159E34
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


// address: 0x8015A0D4
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


// address: 0x8015A3C0
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015A524
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015A6A4
void RestorePads__Fv() {
}


// address: 0x8015A764
void StorePads__Fv() {
}


// address: 0x8015A820
void GetIcon__Fv() {
}


// address: 0x8015A85C
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 17
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015A8C0
int PSX_OPT_SaveGame__FiPc(int card_number, char *filename) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015A958
void LoadOptions__Fv() {
}


// address: 0x8015A9C8
void SaveOptions__Fv() {
}


