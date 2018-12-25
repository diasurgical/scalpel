// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x8015CDE4
// line start: 122
// line end:   128
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015CE38
// line start: 220
// line end:   222
void LoadQuest__Fi(int i) {
}


// address: 0x8015CF00
// line start: 422
// line end:   429
void ISave__Fi(int v) {
}


// address: 0x8015CF60
// line start: 514
// line end:   516
void SaveQuest__Fi(int i) {
}


// address: 0x8015D02C
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


// address: 0x8015D2A4
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


// address: 0x8015D554
// line start: 1014
// line end:   1034
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015D6B8
// line start: 1038
// line end:   1061
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015D850
// line start: 1065
// line end:   1081
void RestorePads__Fv() {
}


// address: 0x8015D910
// line start: 1086
// line end:   1101
void StorePads__Fv() {
}


// address: 0x8015D9CC
// line start: 1105
// line end:   1108
void GetIcon__Fv() {
}


// address: 0x8015DA08
// line start: 1112
// line end:   1129
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 17
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015DA6C
// line start: 1133
// line end:   1159
int PSX_OPT_SaveGame__Fi(int card_number) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015DB10
// line start: 1163
// line end:   1200
void LoadOptions__Fv() {
}


// address: 0x8015DB88
// line start: 1204
// line end:   1220
void SaveOptions__Fv() {
}


