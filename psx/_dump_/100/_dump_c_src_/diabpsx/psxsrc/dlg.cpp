// C:\diabpsx\PSXSRC\DLG.CPP

#include "types.h"

// address: 0x8015AC54
// line start: 173
// line end:   187
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8015AD14
// line start: 193
// line end:   205
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015ADDC
// line start: 209
// line end:   222
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015AE9C
// line start: 228
// line end:   232
void DoLoadGame__Fv() {
}


// address: 0x8015AEDC
// line start: 239
// line end:   245
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8015AF38
// line start: 285
// line end:   295
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8015AF84
// line start: 300
// line end:   310
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8015AFD0
// line start: 315
// line end:   325
void ChooseCardLoad__Fv() {
}


// address: 0x8015B084
// line start: 329
// line end:   331
void McInitLoadCharMenu__Fv() {
}


// address: 0x8015B0AC
// line start: 335
// line end:   351
void McInitLoadGameMenu__Fv() {
}


// address: 0x8015B108
// line start: 361
// line end:   416
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


// address: 0x8015B2C4
// line start: 421
// line end:   448
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


// address: 0x8015B464
// line start: 454
// line end:   475
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015B4E4
// line start: 479
// line end:   506
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


