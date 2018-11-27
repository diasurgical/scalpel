// C:\diabpsx\PSXSRC\DLG.CPP

#include "types.h"

// address: 0x8014CED8
// line start: 170
// line end:   184
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8014CF98
// line start: 190
// line end:   202
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8014D060
// line start: 206
// line end:   219
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8014D120
// line start: 225
// line end:   229
void DoLoadGame__Fv() {
}


// address: 0x8014D160
// line start: 236
// line end:   242
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8014D1BC
// line start: 282
// line end:   292
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8014D208
// line start: 297
// line end:   307
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8014D254
// line start: 312
// line end:   319
void ChooseCardLoad__Fv() {
}


// address: 0x8014D2F4
// line start: 323
// line end:   325
void McInitLoadCharMenu__Fv() {
}


// address: 0x8014D31C
// line start: 329
// line end:   345
void McInitLoadGameMenu__Fv() {
}


// address: 0x8014D390
// line start: 377
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


// address: 0x8014D53C
// line start: 435
// line end:   456
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


// address: 0x8014D678
// line start: 462
// line end:   483
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8014D710
// line start: 487
// line end:   514
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


