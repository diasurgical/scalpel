// C:\diabpsx\PSXSRC\DLG.CPP

#include "types.h"

// address: 0x8015C8D0
// line start: 175
// line end:   189
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8015C990
// line start: 195
// line end:   207
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015CA60
// line start: 211
// line end:   224
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015CB20
// line start: 230
// line end:   245
void DoLoadGame__Fv() {
}


// address: 0x8015CBB0
// line start: 253
// line end:   259
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8015CC0C
// line start: 299
// line end:   309
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8015CC58
// line start: 314
// line end:   324
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8015CCA4
// line start: 329
// line end:   339
void ChooseCardLoad__Fv() {
}


// address: 0x8015CD58
// line start: 343
// line end:   345
void McInitLoadCharMenu__Fv() {
}


// address: 0x8015CD80
// line start: 349
// line end:   365
void McInitLoadGameMenu__Fv() {
}


// address: 0x8015CDDC
// line start: 375
// line end:   430
void McMainKeyCtrl__Fv() {
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


// address: 0x8015CF98
// line start: 435
// line end:   462
void ShowAlertBox__Fv() {
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


// address: 0x8015D138
// line start: 468
// line end:   492
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015D1DC
// line start: 496
// line end:   523
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


