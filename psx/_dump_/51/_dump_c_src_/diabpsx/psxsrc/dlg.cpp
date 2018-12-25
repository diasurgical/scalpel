// C:\diabpsx\PSXSRC\DLG.CPP

#include "types.h"

// address: 0x8014C91C
// line start: 176
// line end:   190
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8014C9DC
// line start: 194
// line end:   202
int DoSaveOptions__Fv() {
	// register: 5
	register int delete_file_number;
}


// address: 0x8014CA30
// line start: 208
// line end:   220
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8014CB00
// line start: 224
// line end:   236
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8014CBC0
// line start: 242
// line end:   264
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


// address: 0x8014CC64
// line start: 272
// line end:   278
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8014CCC0
// line start: 318
// line end:   328
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8014CD0C
// line start: 333
// line end:   343
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8014CD58
// line start: 348
// line end:   358
void ChooseCardLoad__Fv() {
}


// address: 0x8014CE0C
// line start: 362
// line end:   364
void McInitLoadCharMenu__Fv() {
}


// address: 0x8014CE34
// line start: 368
// line end:   384
void McInitLoadGameMenu__Fv() {
}


// address: 0x8014CE90
// line start: 394
// line end:   437
void McMainKeyCtrl__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT um;
}


// address: 0x8014CFCC
// line start: 442
// line end:   471
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


// address: 0x8014D198
// line start: 475
// line end:   500
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


// address: 0x8014D2D4
// line start: 506
// line end:   530
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8014D378
// line start: 534
// line end:   561
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8014D450
// line start: 565
// line end:   589
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


