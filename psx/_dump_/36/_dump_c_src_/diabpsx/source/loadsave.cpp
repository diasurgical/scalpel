// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x80159BEC
// line start: 124
// line end:   130
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80159C40
// line start: 222
// line end:   224
void LoadQuest__Fi(int i) {
}


// address: 0x80159D08
// line start: 424
// line end:   431
void ISave__Fi(int v) {
}


// address: 0x80159D68
// line start: 516
// line end:   518
void SaveQuest__Fi(int i) {
}


// address: 0x80159E34
// line start: 852
// line end:   941
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
// line start: 945
// line end:   1044
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
// line start: 1050
// line end:   1070
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015A524
// line start: 1074
// line end:   1095
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015A6A4
// line start: 1099
// line end:   1114
void RestorePads__Fv() {
}


// address: 0x8015A764
// line start: 1118
// line end:   1133
void StorePads__Fv() {
}


// address: 0x8015A820
// line start: 1137
// line end:   1140
void GetIcon__Fv() {
}


// address: 0x8015A85C
// line start: 1144
// line end:   1161
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 17
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015A8C0
// line start: 1165
// line end:   1189
int PSX_OPT_SaveGame__FiPc(int card_number, char *filename) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015A958
// line start: 1193
// line end:   1222
void LoadOptions__Fv() {
}


// address: 0x8015A9C8
// line start: 1226
// line end:   1239
void SaveOptions__Fv() {
}


