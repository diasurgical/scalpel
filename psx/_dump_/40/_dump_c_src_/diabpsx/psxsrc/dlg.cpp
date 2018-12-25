// C:\diabpsx\PSXSRC\DLG.CPP

#include "types.h"

// address: 0x80154FE0
// line start: 187
// line end:   201
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x801550A0
// line start: 205
// line end:   206
int DoSaveOptions__Fv() {
}


// address: 0x801550C8
// line start: 213
// line end:   251
int DoSaveGame__Fv() {
	// address: 0xFFFFFFC0
	// size: 0x20
	auto char temp_name[32];
	// address: 0xFFFFFFE0
	// size: 0xC
	auto char *Classes[3];
}


// address: 0x80155240
// line start: 257
// line end:   277
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


// address: 0x801552E4
// line start: 285
// line end:   296
int DoFrontEndLoadCharacter__Fi(int slot) {
	// register: 16
	register int result;
	{
	}
}


// address: 0x8015533C
// line start: 302
// line end:   312
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8015537C
// line start: 317
// line end:   327
void McInitLoadCard2Menu__Fv() {
}


// address: 0x801553BC
// line start: 332
// line end:   339
void ChooseCardLoad__Fv() {
}


// address: 0x80155458
// line start: 343
// line end:   355
void McInitLoadGameMenu__Fv() {
}


// address: 0x801554BC
// line start: 365
// line end:   453
void McMainKeyCtrl__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT um;
}


// address: 0x8015570C
// line start: 476
// line end:   533
void McCharCardMenuCtrl__Fv() {
	// register: 16
	// size: 0xEC
	register struct CPad *P;
}


// address: 0x80155954
// line start: 536
// line end:   689
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


// address: 0x80155DCC
// line start: 692
// line end:   730
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


// address: 0x80155FD8
// line start: 736
// line end:   754
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015608C
// line start: 758
// line end:   789
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 4
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x801561AC
// line start: 793
// line end:   817
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


// address: 0x80156488
// line start: 874
// line end:   893
void PackItem__FP12PkItemStructPC10ItemStruct(struct PkItemStruct *id, struct ItemStruct *is) {
}


// address: 0x80156514
// line start: 900
// line end:   954
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


// address: 0x80156720
// line start: 961
// line end:   982
void UnPackItem__FPC12PkItemStructP10ItemStruct(struct PkItemStruct *is, struct ItemStruct *id) {
}


// address: 0x80156828
// line start: 990
// line end:   1004
void VerifyGoldSeeds__FP12PlayerStruct(struct PlayerStruct *pPlayer) {
	// register: 18
	register int i;
	// register: 5
	register int j;
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


// address: 0x80156BC4
// line start: 1099
// line end:   1107
void ConstructSlotName__FPci(char *TempStr, int slot) {
}


// address: 0x80156CBC
// line start: 1110
// line end:   1127
int GetSpinnerWidth__Fi(int j) {
	// address: 0xFFFFFFB8
	// size: 0x40
	auto char TempStr[64];
	// register: 2
	register int len;
}


// address: 0x80156D60
// line start: 1141
// line end:   1245
char *ReconstructSlotName__Fii(int side, int file) {
	{
		// register: 3
		register int i;
	}
}


