// C:\diabpsx\PSXSRC\DLG.CPP

#include "types.h"

// address: 0x80159660
// line start: 188
// line end:   202
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x80159720
// line start: 206
// line end:   207
int DoSaveOptions__Fv() {
}


// address: 0x80159748
// line start: 214
// line end:   252
int DoSaveGame__Fv() {
	// address: 0xFFFFFFC0
	// size: 0x20
	auto char temp_name[32];
	// address: 0xFFFFFFE0
	// size: 0xC
	auto char *Classes[3];
}


// address: 0x801598C0
// line start: 258
// line end:   278
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


// address: 0x80159964
// line start: 286
// line end:   297
int DoFrontEndLoadCharacter__Fi(int slot) {
	// register: 16
	register int result;
	{
	}
}


// address: 0x801599BC
// line start: 303
// line end:   313
void McInitLoadCard1Menu__Fv() {
}


// address: 0x801599FC
// line start: 318
// line end:   328
void McInitLoadCard2Menu__Fv() {
}


// address: 0x80159A3C
// line start: 333
// line end:   340
void ChooseCardLoad__Fv() {
}


// address: 0x80159AD8
// line start: 344
// line end:   356
void McInitLoadGameMenu__Fv() {
}


// address: 0x80159B3C
// line start: 366
// line end:   454
void McMainKeyCtrl__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT um;
}


// address: 0x80159D8C
// line start: 477
// line end:   534
void McCharCardMenuCtrl__Fv() {
	// register: 16
	// size: 0xEC
	register struct CPad *P;
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


// address: 0x8015A44C
// line start: 693
// line end:   732
void ShowAlertBox__Fv() {
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


// address: 0x8015A658
// line start: 738
// line end:   756
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015A70C
// line start: 760
// line end:   791
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 4
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8015A82C
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


// address: 0x8015A98C
// line start: 822
// line end:   871
void ShowCharacterFiles__FiiG4RECTi(int cs, int Spacing, struct RECT ORect, int yoff) {
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


// address: 0x8015AB6C
// line start: 884
// line end:   903
void PackItem__FP12PkItemStructPC10ItemStruct(struct PkItemStruct *id, struct ItemStruct *is) {
}


// address: 0x8015ABF8
// line start: 910
// line end:   964
void PackPlayer__FP14PkPlayerStructi(struct PkPlayerStruct *pPack, int pnum) {
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


// address: 0x8015AE04
// line start: 971
// line end:   992
void UnPackItem__FPC12PkItemStructP10ItemStruct(struct PkItemStruct *is, struct ItemStruct *id) {
}


// address: 0x8015AF0C
// line start: 1000
// line end:   1014
void VerifyGoldSeeds__FP12PlayerStruct(struct PlayerStruct *pPlayer) {
	// register: 18
	register int i;
	// register: 5
	register int j;
}


// address: 0x8015AFE4
// line start: 1022
// line end:   1103
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


// address: 0x8015B2A8
// line start: 1109
// line end:   1117
void ConstructSlotName__FPci(char *TempStr, int slot) {
}


// address: 0x8015B3A0
// line start: 1120
// line end:   1137
int GetSpinnerWidth__Fi(int j) {
	// address: 0xFFFFFFB8
	// size: 0x40
	auto char TempStr[64];
	// register: 2
	register int len;
}


// address: 0x8015B444
// line start: 1151
// line end:   1255
char *ReconstructSlotName__Fii(int side, int file) {
	{
		// register: 3
		register int i;
	}
}


