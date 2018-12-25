// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x801538C8
// line start: 118
// line end:   119
char BLoad__Fv() {
}


// address: 0x801538E4
// line start: 123
// line end:   129
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80153938
// line start: 148
// line end:   150
unsigned char OLoad__Fv() {
}


// address: 0x8015395C
// line start: 219
// line end:   221
void LoadQuest__Fi(int i) {
}


// address: 0x80153A24
// line start: 413
// line end:   414
void BSave__Fc(char v) {
}


// address: 0x80153A3C
// line start: 419
// line end:   426
void ISave__Fi(int v) {
}


// address: 0x80153A9C
// line start: 443
// line end:   445
void OSave__FUc(unsigned char v) {
}


// address: 0x80153AE0
// line start: 510
// line end:   512
void SaveQuest__Fi(int i) {
}


// address: 0x80153BAC
// line start: 846
// line end:   978
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int i;
	// register: 18
	register unsigned char *SaveBuff;
	// register: 17
	register int SaveSize;
}


// address: 0x80154188
// line start: 982
// line end:   1028
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 2
	register int result;
	// register: 18
	register unsigned char *LoadBuff;
}


// address: 0x80154274
// line start: 1034
// line end:   1054
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x801543D8
// line start: 1058
// line end:   1079
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x80154558
// line start: 1083
// line end:   1098
void RestorePads__Fv() {
}


// address: 0x80154618
// line start: 1102
// line end:   1117
void StorePads__Fv() {
}


// address: 0x801546D4
// line start: 1121
// line end:   1124
void GetIcon__Fv() {
}


// address: 0x80154710
// line start: 1128
// line end:   1145
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 17
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x80154774
// line start: 1149
// line end:   1173
int PSX_OPT_SaveGame__FiPc(int card_number, char *filename) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015480C
// line start: 1177
// line end:   1206
void LoadOptions__Fv() {
}


// address: 0x8015487C
// line start: 1210
// line end:   1223
void SaveOptions__Fv() {
}


// address: 0x801548DC
// line start: 1227
// line end:   1318
int RestoreLoadedData__Fv() {
	// register: 2
	register unsigned char *LoadBuff;
	// register: 18
	register int DataSize;
	// register: 16
	register int i;
}


