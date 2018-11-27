// C:\diabpsx\PSXSRC\DLG.CPP

#include "types.h"

// address: 0x8015D834
// line start: 175
// line end:   189
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8015D8F4
// line start: 193
// line end:   201
int DoSaveOptions__Fv() {
	// register: 5
	register int delete_file_number;
}


// address: 0x8015D948
// line start: 207
// line end:   219
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015DA18
// line start: 223
// line end:   235
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015DAD8
// line start: 241
// line end:   256
void DoLoadGame__Fv() {
}


// address: 0x8015DB68
// line start: 264
// line end:   270
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8015DBC4
// line start: 310
// line end:   320
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8015DC10
// line start: 325
// line end:   335
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8015DC5C
// line start: 340
// line end:   350
void ChooseCardLoad__Fv() {
}


// address: 0x8015DD10
// line start: 354
// line end:   356
void McInitLoadCharMenu__Fv() {
}


// address: 0x8015DD38
// line start: 360
// line end:   376
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


// address: 0x8015DED0
// line start: 434
// line end:   463
void ShowAlertBox__Fv() {
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


// address: 0x8015E1E8
// line start: 498
// line end:   522
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015E28C
// line start: 526
// line end:   553
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
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


