// C:\diabpsx\PSXSRC\DLG.CPP

#include "types.h"

// address: 0x80148304
// line start: 315
// line end:   322
void ChooseCardLoad__Fv() {
}


// address: 0x80148210
// line start: 239
// line end:   245
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8015911C
// line start: 241
// line end:   259
void DoLoadGame__Fv() {
	{
		{
			{
				// register: 3
				register int result;
			}
		}
	}
}


// address: 0x801481D0
// line start: 228
// line end:   232
void DoLoadGame__Fv_addr_801481D0() {
}


// address: 0x80148048
// line start: 193
// line end:   205
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x80148110
// line start: 209
// line end:   222
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015CBD8
// line start: 193
// line end:   201
int DoSaveOptions__Fv() {
	// register: 5
	register int delete_file_number;
}


// address: 0x80147F88
// line start: 173
// line end:   187
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x80148724
// line start: 465
// line end:   486
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x801487BC
// line start: 490
// line end:   517
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8014826C
// line start: 285
// line end:   295
void McInitLoadCard1Menu__Fv() {
}


// address: 0x801482B8
// line start: 300
// line end:   310
void McInitLoadCard2Menu__Fv() {
}


// address: 0x801483A0
// line start: 326
// line end:   328
void McInitLoadCharMenu__Fv() {
}


// address: 0x801483C8
// line start: 332
// line end:   348
void McInitLoadGameMenu__Fv() {
}


// address: 0x8015DD94
// line start: 386
// line end:   429
void McMainKeyCtrl__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT um;
}


// address: 0x8014843C
// line start: 380
// line end:   433
void McMainKeyCtrl__Fv_addr_8014843C() {
	// register: 3
	register int FileNo;
	{
		{
			{
				{
					{
						// register: 17
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x801485E8
// line start: 438
// line end:   459
void ShowAlertBox__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT um;
	// register: 2
	register int lines;
	// register: 2
	register int X;
	// register: 2
	register int Y;
	// register: 2
	register int W;
	// register: 16
	register int H;
}


// address: 0x8015DED0
// line start: 434
// line end:   463
void ShowAlertBox__Fv_addr_8015DED0() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT um;
	// register: 2
	register int X;
	// register: 2
	register int Y;
	// register: 16
	register int W;
	// register: 17
	register int H;
	// address: 0xFFFFFFC8
	auto int oldBot;
	// register: 30
	register int oldTot;
	// register: 19
	register int lines;
	// register: 17
	register int yprintpos;
}


// address: 0x80143E1C
// line start: 425
// line end:   452
void ShowAlertBox__Fv_addr_80143E1C() {
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT um;
	// register: 2
	register int X;
	// register: 2
	register int Y;
	// register: 2
	register int W;
	// register: 16
	register int H;
	// register: 23
	register int oldBot;
	// register: 22
	register int oldTot;
	// register: 16
	register int lines;
}


// address: 0x8015E0A4
// line start: 467
// line end:   492
void ShowCardActionText__FPc(char *Text) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT um;
	// register: 2
	register int X;
	// register: 2
	register int Y;
	// register: 2
	register int W;
	// register: 17
	register int H;
	// register: 19
	register int oldBot;
	// register: 18
	register int oldTot;
}


// address: 0x8015E364
// line start: 557
// line end:   581
void ShowGameFiles__FPciiG4RECT(char *filename, int saveflag, int Spacing, struct RECT ORect) {
	// register: 22
	register int yoff;
	{
		{
			{
				// register: 17
				register int i;
				{
					// register: 6
					register int FileNo;
				}
			}
		}
	}
}


// address: 0x8015B3B0
// line start: 1109
// line end:   1117
void ConstructSlotName__FPci(char *TempStr, int slot) {
}


// address: 0x80159A6C
// line start: 286
// line end:   297
int DoFrontEndLoadCharacter__Fi(int slot) {
	// register: 16
	register int result;
	{
	}
}


// address: 0x80159850
// line start: 214
// line end:   252
int DoSaveGame__Fv_addr_80159850() {
	// address: 0xFFFFFFC0
	// size: 0x20
	auto char temp_name[32];
	// address: 0xFFFFFFE0
	// size: 0xC
	auto char *Classes[3];
}


// address: 0x80159828
// line start: 206
// line end:   207
int DoSaveOptions__Fv_addr_80159828() {
}


// address: 0x8015A814
// line start: 760
// line end:   791
bool GetSaveStatusMessage__FiPc_addr_8015A814(int fileblocks, char *file_name) {
	// register: 4
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8015B4A8
// line start: 1120
// line end:   1137
int GetSpinnerWidth__Fi(int j) {
	// address: 0xFFFFFFB8
	// size: 0x40
	auto char TempStr[64];
	// register: 2
	register int len;
}


// address: 0x80159D8C
// line start: 477
// line end:   534
void McCharCardMenuCtrl__Fv() {
	// register: 16
	// size: 0xEC
	register struct CPad *P;
}


// address: 0x80159E94
// line start: 477
// line end:   534
void McCharCardMenuCtrl__Fv_addr_80159E94() {
	// register: 16
	// size: 0xEC
	register struct CPad_dup_17 *P;
}


// address: 0x80159FD4
// line start: 537
// line end:   690
void McMainCharKeyCtrl__Fv() {
	// register: 19
	register int Spacing;
	// register: 17
	register int yoff;
	// register: 16
	register int SelX;
	// register: 17
	register int len;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT um;
	// register: 18
	// size: 0xEC
	register struct CPad *P;
}


// address: 0x8015A0DC
// line start: 537
// line end:   690
void McMainCharKeyCtrl__Fv_addr_8015A0DC() {
	// register: 19
	register int Spacing;
	// register: 17
	register int yoff;
	// register: 16
	register int SelX;
	// register: 17
	register int len;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT um;
	// register: 18
	// size: 0xEC
	register struct CPad_dup_17 *P;
}


// address: 0x80159C44
// line start: 366
// line end:   454
void McMainKeyCtrl__Fv_addr_80159C44() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT um;
}


// address: 0x8015AC74
// line start: 884
// line end:   903
void PackItem__FP12PkItemStructPC10ItemStruct(struct PkItemStruct *id, struct ItemStruct_dup_17 *is) {
}


// address: 0x8015AB6C
// line start: 884
// line end:   903
void PackItem__FP12PkItemStructPC10ItemStruct_addr_8015AB6C(struct PkItemStruct *id, struct ItemStruct *is) {
}


// address: 0x8015AD00
// line start: 910
// line end:   964
void PackPlayer__FP14PkPlayerStructi(struct PkPlayerStruct_dup_17 *pPack, int pnum) {
	// register: 18
	register int i;
	// register: 17
	// size: 0x14
	register struct PkItemStruct *pki;
	// register: 16
	// size: 0x6C
	register struct ItemStruct_dup_17 *pi;
	// register: 19
	// size: 0x19E8
	register struct PlayerStruct_dup_17 *pPlayer;
}


// address: 0x80156514
// line start: 900
// line end:   954
void PackPlayer__FP14PkPlayerStructi_addr_80156514(struct PkPlayerStruct *pPack, int pnum) {
	// register: 18
	register int i;
	// register: 17
	// size: 0x14
	register struct PkItemStruct *pki;
	// register: 16
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 19
	// size: 0x19E8
	register struct PlayerStruct *pPlayer;
}


// address: 0x8015ABF8
// line start: 910
// line end:   964
void PackPlayer__FP14PkPlayerStructi_addr_8015ABF8(struct PkPlayerStruct *pPack, int pnum) {
	// register: 18
	register int i;
	// register: 17
	// size: 0x14
	register struct PkItemStruct *pki;
	// register: 16
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 19
	// size: 0x19E8
	register struct PlayerStruct_dup_18 *pPlayer;
}


// address: 0x8015B54C
// line start: 1151
// line end:   1255
char *ReconstructSlotName__Fii(int side, int file) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8015A554
// line start: 693
// line end:   732
void ShowAlertBox__Fv_addr_8015A554() {
	// address: 0xFFFFFFA8
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT um;
	// register: 17
	register int W;
	// register: 30
	register int H;
	// register: 2
	register int X;
	// register: 2
	register int Y;
	// register: 16
	register int otpos;
	// address: 0xFFFFFFC0
	auto int oldBot;
	// address: 0xFFFFFFC8
	auto int oldTot;
	// register: 18
	register int lines;
	// register: 16
	register int yprintpos;
}


// address: 0x8015630C
// line start: 820
// line end:   861
void ShowCharacterFiles__FiiG4RECTi(int cs, int Spacing, struct RECT ORect, int yoff) {
	{
		// register: 19
		register int j;
		{
			// register: 3
			register int fileno;
			// register: 18
			register int r;
			// register: 17
			register int g;
			// register: 16
			register int b;
			// address: 0xFFFFFF90
			// size: 0x40
			auto char TempStr[64];
		}
	}
}


// address: 0x8015AA94
// line start: 822
// line end:   871
void ShowCharacterFiles__FiiG4RECTi_addr_8015AA94(int cs, int Spacing, struct RECT ORect, int yoff) {
	// register: 4
	register int sn;
	{
		// register: 19
		register int j;
		{
			// register: 3
			register int fileno;
			// register: 18
			register int r;
			// register: 17
			register int g;
			// register: 16
			register int b;
			// address: 0xFFFFFF90
			// size: 0x40
			auto char TempStr[64];
		}
	}
}


// address: 0x8015A934
// line start: 795
// line end:   819
void ShowGameFiles__FPciiG4RECTi(char *filename, int saveflag, int Spacing, struct RECT ORect, int yoff) {
	{
		// register: 17
		register int i;
		{
			// register: 5
			register int FileNo;
		}
	}
}


// address: 0x8015AF0C
// line start: 971
// line end:   992
void UnPackItem__FPC12PkItemStructP10ItemStruct(struct PkItemStruct *is, struct ItemStruct_dup_17 *id) {
}


// address: 0x8015AE04
// line start: 971
// line end:   992
void UnPackItem__FPC12PkItemStructP10ItemStruct_addr_8015AE04(struct PkItemStruct *is, struct ItemStruct *id) {
}


// address: 0x80156900
// line start: 1012
// line end:   1093
void UnPackPlayer__FPC14PkPlayerStructiUc(struct PkPlayerStruct *pPack, int pnum, unsigned char killok) {
	// register: 17
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 18
	// size: 0x14
	register struct PkItemStruct *pki;
	// register: 19
	// size: 0x19E8
	register struct PlayerStruct *pPlayer;
	// register: 16
	register int i;
}


// address: 0x8015AFE4
// line start: 1022
// line end:   1103
void UnPackPlayer__FPC14PkPlayerStructiUc_addr_8015AFE4(struct PkPlayerStruct *pPack, int pnum, unsigned char killok) {
	// register: 17
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 18
	// size: 0x14
	register struct PkItemStruct *pki;
	// register: 19
	// size: 0x19E8
	register struct PlayerStruct_dup_18 *pPlayer;
	// register: 16
	register int i;
}


// address: 0x8015B0EC
// line start: 1022
// line end:   1103
void UnPackPlayer__FPC14PkPlayerStructiUc_addr_8015B0EC(struct PkPlayerStruct_dup_17 *pPack, int pnum, unsigned char killok) {
	// register: 17
	// size: 0x6C
	register struct ItemStruct_dup_17 *pi;
	// register: 18
	// size: 0x14
	register struct PkItemStruct *pki;
	// register: 19
	// size: 0x19E8
	register struct PlayerStruct_dup_17 *pPlayer;
	// register: 16
	register int i;
}


// address: 0x8015AF0C
// line start: 1000
// line end:   1014
void VerifyGoldSeeds__FP12PlayerStruct(struct PlayerStruct_dup_18 *pPlayer) {
	// register: 18
	register int i;
	// register: 5
	register int j;
}


// address: 0x8015B014
// line start: 1000
// line end:   1014
void VerifyGoldSeeds__FP12PlayerStruct_addr_8015B014(struct PlayerStruct_dup_17 *pPlayer) {
	// register: 18
	register int i;
	// register: 5
	register int j;
}


// address: 0x80156828
// line start: 990
// line end:   1004
void VerifyGoldSeeds__FP12PlayerStruct_addr_80156828(struct PlayerStruct *pPlayer) {
	// register: 18
	register int i;
	// register: 5
	register int j;
}


