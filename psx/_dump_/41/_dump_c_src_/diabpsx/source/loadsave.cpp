// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x801572F4
// line start: 129
// line end:   130
char BLoad__Fv() {
}


// address: 0x80157310
// line start: 134
// line end:   140
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80157364
// line start: 159
// line end:   161
unsigned char OLoad__Fv() {
}


// address: 0x80157388
// line start: 230
// line end:   232
void LoadQuest__Fi(int i) {
}


// address: 0x80157450
// line start: 424
// line end:   425
void BSave__Fc(char v) {
}


// address: 0x80157468
// line start: 430
// line end:   437
void ISave__Fi(int v) {
}


// address: 0x801574C8
// line start: 454
// line end:   456
void OSave__FUc(unsigned char v) {
}


// address: 0x8015750C
// line start: 521
// line end:   523
void SaveQuest__Fi(int i) {
}


// address: 0x801575D8
// line start: 857
// line end:   1016
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int i;
	// register: 3
	register int result;
	// register: 19
	register int tries;
	// register: 21
	register unsigned char *SaveBuff;
	// register: 16
	register int SaveSize;
	// register: 16
	register int savesize;
	{
		// register: 2
		register int delete_file_number;
	}
}


// address: 0x80157B38
// line start: 1020
// line end:   1092
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 2
	register int result;
	// register: 19
	register unsigned char *LoadBuff;
}


// address: 0x80157C5C
// line start: 1098
// line end:   1106
void PSX_CH_LoadGame__Fi(int slot) {
}


// address: 0x80157CFC
// line start: 1110
// line end:   1116
int PSX_CH_LoadBlock__Fii(int card_number, int file) {
}


// address: 0x80157D24
// line start: 1120
// line end:   1163
int PSX_CH_SaveGame__Fii(int card_number, int slot) {
	// register: 2
	register int result;
	// register: 17
	register int tries;
	// address: 0xFFFFFFA0
	// size: 0x40
	auto char TempStr[64];
	{
		// register: 2
		register int delete_file_number;
	}
}


// address: 0x80157EA8
// line start: 1167
// line end:   1182
void RestorePads__Fv() {
}


// address: 0x80157F68
// line start: 1186
// line end:   1201
void StorePads__Fv() {
}


// address: 0x80158024
// line start: 1205
// line end:   1208
void GetIcon__Fv() {
}


// address: 0x80158060
// line start: 1212
// line end:   1229
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x801580BC
// line start: 1233
// line end:   1277
int PSX_OPT_SaveGame__FiPc(int card_number, char *filename) {
	// register: 2
	register int result;
	// register: 16
	register int tries;
	// address: 0xFFFFFFA0
	// size: 0x40
	auto char TempStr[64];
	// register: 19
	register unsigned char *SaveBuff;
	{
		// register: 2
		register int delete_file_number;
	}
}


// address: 0x801581F4
// line start: 1283
// line end:   1304
void LoadOptions__Fv() {
}


// address: 0x801582CC
// line start: 1308
// line end:   1323
void SaveOptions__Fv() {
}


// address: 0x80158370
// line start: 1327
// line end:   1434
int RestoreLoadedData__Fb(bool firstflag) {
	// register: 2
	register unsigned char *LoadBuff;
	// register: 18
	register int DataSize;
	// register: 16
	register int i;
}


