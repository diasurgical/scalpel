// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x8015D610
// line start: 123
// line end:   129
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015D664
// line start: 221
// line end:   223
void LoadQuest__Fi(int i) {
}


// address: 0x8015D72C
// line start: 423
// line end:   430
void ISave__Fi(int v) {
}


// address: 0x8015D78C
// line start: 515
// line end:   517
void SaveQuest__Fi(int i) {
}


// address: 0x8015D858
// line start: 851
// line end:   928
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8015DAE0
// line start: 932
// line end:   1019
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x8015DDA0
// line start: 1025
// line end:   1045
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015DF04
// line start: 1049
// line end:   1072
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015E09C
// line start: 1076
// line end:   1092
void RestorePads__Fv() {
}


// address: 0x8015E15C
// line start: 1097
// line end:   1112
void StorePads__Fv() {
}


// address: 0x8015E218
// line start: 1116
// line end:   1119
void GetIcon__Fv() {
}


// address: 0x8015E254
// line start: 1123
// line end:   1140
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 17
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015E2B8
// line start: 1144
// line end:   1168
int PSX_OPT_SaveGame__FiPc(int card_number, char *filename) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015E350
// line start: 1172
// line end:   1198
void LoadOptions__Fv() {
}


// address: 0x8015E3B0
// line start: 1202
// line end:   1215
void SaveOptions__Fv() {
}


