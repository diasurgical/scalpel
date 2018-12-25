// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x8015BA84
// line start: 134
// line end:   135
char *GetOptStr__Fv() {
}


// address: 0x8015BA94
// line start: 144
// line end:   145
char *GetDiabloStr__Fv() {
}


// address: 0x8015BAA4
// line start: 151
// line end:   152
char BLoad__Fv() {
}


// address: 0x8015BAC0
// line start: 156
// line end:   162
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015BB14
// line start: 181
// line end:   183
unsigned char OLoad__Fv() {
}


// address: 0x8015BB38
// line start: 252
// line end:   254
void LoadQuest__Fi(int i) {
}


// address: 0x8015BC00
// line start: 446
// line end:   447
void BSave__Fc(char v) {
}


// address: 0x8015BC18
// line start: 452
// line end:   459
void ISave__Fi(int v) {
}


// address: 0x8015BC78
// line start: 476
// line end:   478
void OSave__FUc(unsigned char v) {
}


// address: 0x8015BCBC
// line start: 543
// line end:   545
void SaveQuest__Fi(int i) {
}


// address: 0x8015BD88
// line start: 879
// line end:   1038
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


// address: 0x8015C2E8
// line start: 1042
// line end:   1114
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 2
	register int result;
	// register: 19
	register unsigned char *LoadBuff;
}


// address: 0x8015C40C
// line start: 1120
// line end:   1128
void PSX_CH_LoadGame__Fi(int slot) {
}


// address: 0x8015C4AC
// line start: 1132
// line end:   1138
int PSX_CH_LoadBlock__Fii(int card_number, int file) {
}


// address: 0x8015C4D4
// line start: 1142
// line end:   1187
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


// address: 0x8015C640
// line start: 1191
// line end:   1206
void RestorePads__Fv() {
}


// address: 0x8015C700
// line start: 1210
// line end:   1225
void StorePads__Fv() {
}


// address: 0x8015C7BC
// line start: 1229
// line end:   1232
void GetIcon__Fv() {
}


// address: 0x8015C7F8
// line start: 1236
// line end:   1253
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015C854
// line start: 1257
// line end:   1304
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


// address: 0x8015C974
// line start: 1310
// line end:   1331
void LoadOptions__Fv() {
}


// address: 0x8015CA4C
// line start: 1335
// line end:   1350
void SaveOptions__Fv() {
}


// address: 0x8015CAF0
// line start: 1354
// line end:   1461
int RestoreLoadedData__Fb(bool firstflag) {
	// register: 2
	register unsigned char *LoadBuff;
	// register: 18
	register int DataSize;
	// register: 16
	register int i;
}


