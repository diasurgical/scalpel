// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x80149B2C
// line start: 1113
// line end:   1116
void GetIcon__Fv() {
}


// address: 0x80148958
// line start: 103
// line end:   109
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80148A74
// line start: 403
// line end:   410
void ISave__Fi(int v) {
}


// address: 0x8015DAC4
// line start: 1161
// line end:   1198
void LoadOptions__Fv() {
}


// address: 0x801489AC
// line start: 201
// line end:   203
void LoadQuest__Fi(int i) {
}


// address: 0x801491C0
// line start: 971
// line end:   987
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x80149064
// line start: 1003
// line end:   1019
int PSX_CH_LoadGame__Fii_addr_80149064(int card_number, int file) {
	// register: 17
	register int result;
	// register: 16
	register unsigned char *LoadBuff;
}


// address: 0x801491D0
// line start: 1023
// line end:   1044
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x80149304
// line start: 991
// line end:   1010
int PSX_CH_SaveGame__FiPcT1_addr_80149304(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 10
	register unsigned char *SaveBuff;
}


// address: 0x8015EA74
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


// address: 0x80148DE8
// line start: 904
// line end:   997
int PSX_GM_LoadGame__FUcii_addr_80148DE8(unsigned char firstflag, int card_number, int file) {
	// register: 16
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x80154188
// line start: 982
// line end:   1028
int PSX_GM_LoadGame__FUcii_addr_80154188(unsigned char firstflag, int card_number, int file) {
	// register: 2
	register int result;
	// register: 18
	register unsigned char *LoadBuff;
}


// address: 0x801446D0
// line start: 927
// line end:   1018
int PSX_GM_LoadGame__FUcii_addr_801446D0(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x8014DD50
// line start: 901
// line end:   994
int PSX_GM_LoadGame__FUcii_addr_8014DD50(unsigned char firstflag, int card_number, int file) {
	// register: 16
	register int i;
	// register: 18
	register int result;
	// register: 19
	register unsigned char *LoadBuff;
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


// address: 0x80148BA0
// line start: 831
// line end:   896
int PSX_GM_SaveGame__FiPcT1_addr_80148BA0(int card_number, char *name, char *title) {
	// register: 16
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8014441C
// line start: 844
// line end:   923
int PSX_GM_SaveGame__FiPcT1_addr_8014441C(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8014D928
// line start: 850
// line end:   947
int PSX_GM_SaveGame__FiPcT1_addr_8014D928(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 19
	register unsigned char *SaveBuff;
	// register: 16
	register int SaveSize;
}


// address: 0x8015E7D4
// line start: 852
// line end:   941
int PSX_GM_SaveGame__FiPcT1_addr_8015E7D4(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
	// register: 17
	register int SaveSize;
}


// address: 0x8015C85C
// line start: 1120
// line end:   1145
int PSX_OPT_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
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


// address: 0x8015C904
// line start: 1149
// line end:   1181
int PSX_OPT_SaveGame__Fi(int card_number) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
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


// address: 0x8014E428
// line start: 1192
// line end:   1267
int RestoreLoadedData__Fv_addr_8014E428() {
	// register: 2
	register unsigned char *LoadBuff;
	// register: 18
	register int DataSize;
	// register: 17
	register int i;
}


// address: 0x80144C34
// line start: 1067
// line end:   1083
void RestorePads__Fv() {
}


// address: 0x8015DB3C
// line start: 1202
// line end:   1218
void SaveOptions__Fv() {
}


// address: 0x80148AD4
// line start: 495
// line end:   497
void SaveQuest__Fi(int i) {
}


// address: 0x80144CF4
// line start: 1088
// line end:   1103
void StorePads__Fv() {
}


// address: 0x8015BAA4
// line start: 151
// line end:   152
char BLoad__Fv() {
}


// address: 0x8015BC00
// line start: 446
// line end:   447
void BSave__Fc(char v) {
}


// address: 0x8015BA94
// line start: 144
// line end:   145
char *GetDiabloStr__Fv() {
}


// address: 0x8015BA84
// line start: 134
// line end:   135
char *GetOptStr__Fv() {
}


// address: 0x8015BB14
// line start: 181
// line end:   183
unsigned char OLoad__Fv() {
}


// address: 0x8015BC78
// line start: 476
// line end:   478
void OSave__FUc(unsigned char v) {
}


// address: 0x8015C4AC
// line start: 1132
// line end:   1138
int PSX_CH_LoadBlock__Fii(int card_number, int file) {
}


// address: 0x8015C40C
// line start: 1120
// line end:   1128
void PSX_CH_LoadGame__Fi(int slot) {
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


// address: 0x8015C2E8
// line start: 1042
// line end:   1114
int PSX_GM_LoadGame__FUcii_addr_8015C2E8(unsigned char firstflag, int card_number, int file) {
	// register: 2
	register int result;
	// register: 19
	register unsigned char *LoadBuff;
}


// address: 0x8015BD88
// line start: 879
// line end:   1038
int PSX_GM_SaveGame__FiPcT1_addr_8015BD88(int card_number, char *name, char *title) {
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


// address: 0x8015C7F8
// line start: 1236
// line end:   1253
int PSX_OPT_LoadGame__Fiib_addr_8015C7F8(int card_number, int file, bool KillHandler) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015C854
// line start: 1257
// line end:   1304
int PSX_OPT_SaveGame__FiPc_addr_8015C854(int card_number, char *filename) {
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


