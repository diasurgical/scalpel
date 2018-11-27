// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x8015CDB0
// line start: 122
// line end:   128
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015CE04
// line start: 220
// line end:   222
void LoadQuest__Fi(int i) {
}


// address: 0x8015CECC
// line start: 422
// line end:   429
void ISave__Fi(int v) {
}


// address: 0x8015CF2C
// line start: 514
// line end:   516
void SaveQuest__Fi(int i) {
}


// address: 0x8015CFF8
// line start: 850
// line end:   921
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8015D270
// line start: 925
// line end:   1008
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x8015D520
// line start: 1014
// line end:   1034
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015D684
// line start: 1038
// line end:   1059
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015D804
// line start: 1063
// line end:   1079
void RestorePads__Fv() {
}


// address: 0x8015D8C4
// line start: 1084
// line end:   1099
void StorePads__Fv() {
}


// address: 0x8015D980
// line start: 1103
// line end:   1106
void GetIcon__Fv() {
}


// address: 0x8015D9BC
// line start: 1110
// line end:   1127
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 17
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015DA20
// line start: 1131
// line end:   1157
int PSX_OPT_SaveGame__Fi(int card_number) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015DAC4
// line start: 1161
// line end:   1198
void LoadOptions__Fv() {
}


// address: 0x8015DB3C
// line start: 1202
// line end:   1218
void SaveOptions__Fv() {
}


