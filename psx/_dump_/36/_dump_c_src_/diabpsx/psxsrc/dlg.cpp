// C:\diabpsx\PSXSRC\DLG.CPP

#include "types.h"

// address: 0x80158E78
// line start: 175
// line end:   189
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x80158F38
// line start: 193
// line end:   201
int DoSaveOptions__Fv() {
	// register: 5
	register int delete_file_number;
}


// address: 0x80158F8C
// line start: 207
// line end:   219
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015905C
// line start: 223
// line end:   235
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
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


// address: 0x801591C8
// line start: 267
// line end:   273
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x80159224
// line start: 313
// line end:   323
void McInitLoadCard1Menu__Fv() {
}


// address: 0x80159270
// line start: 328
// line end:   338
void McInitLoadCard2Menu__Fv() {
}


// address: 0x801592BC
// line start: 343
// line end:   353
void ChooseCardLoad__Fv() {
}


// address: 0x80159370
// line start: 357
// line end:   359
void McInitLoadCharMenu__Fv() {
}


// address: 0x80159398
// line start: 363
// line end:   379
void McInitLoadGameMenu__Fv() {
}


// address: 0x801593F4
// line start: 389
// line end:   432
void McMainKeyCtrl__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT um;
}


// address: 0x80159530
// line start: 437
// line end:   466
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


// address: 0x80159704
// line start: 470
// line end:   495
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


// address: 0x80159848
// line start: 501
// line end:   525
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x801598EC
// line start: 529
// line end:   556
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x801599C4
// line start: 560
// line end:   584
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


