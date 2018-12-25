// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x8014D678
// line start: 125
// line end:   131
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8014D6CC
// line start: 150
// line end:   152
unsigned char OLoad__Fv() {
}


// address: 0x8014D6F0
// line start: 221
// line end:   223
void LoadQuest__Fi(int i) {
}


// address: 0x8014D7B8
// line start: 423
// line end:   430
void ISave__Fi(int v) {
}


// address: 0x8014D818
// line start: 447
// line end:   449
void OSave__FUc(unsigned char v) {
}


// address: 0x8014D85C
// line start: 514
// line end:   516
void SaveQuest__Fi(int i) {
}


// address: 0x8014D928
// line start: 850
// line end:   947
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 19
	register unsigned char *SaveBuff;
	// register: 16
	register int SaveSize;
}


// address: 0x8014DCB0
// line start: 951
// line end:   993
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 2
	register int result;
	// register: 18
	register unsigned char *LoadBuff;
}


// address: 0x8014DDC0
// line start: 999
// line end:   1019
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8014DF24
// line start: 1023
// line end:   1044
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8014E0A4
// line start: 1048
// line end:   1063
void RestorePads__Fv() {
}


// address: 0x8014E164
// line start: 1067
// line end:   1082
void StorePads__Fv() {
}


// address: 0x8014E220
// line start: 1086
// line end:   1089
void GetIcon__Fv() {
}


// address: 0x8014E25C
// line start: 1093
// line end:   1110
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 17
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8014E2C0
// line start: 1114
// line end:   1138
int PSX_OPT_SaveGame__FiPc(int card_number, char *filename) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8014E358
// line start: 1142
// line end:   1171
void LoadOptions__Fv() {
}


// address: 0x8014E3C8
// line start: 1175
// line end:   1188
void SaveOptions__Fv() {
}


// address: 0x8014E428
// line start: 1192
// line end:   1267
int RestoreLoadedData__Fv() {
	// register: 2
	register unsigned char *LoadBuff;
	// register: 18
	register int DataSize;
	// register: 17
	register int i;
}


