// C:\diabpsx\PSXSRC\DLG.CPP

#include "types.h"

// address: 0x8015CB18
// line start: 175
// line end:   189
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8015CBD8
// line start: 193
// line end:   201
int DoSaveOptions__Fv() {
	// register: 5
	register int delete_file_number;
}


// address: 0x8015CC2C
// line start: 207
// line end:   219
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015CCFC
// line start: 223
// line end:   235
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015CDBC
// line start: 241
// line end:   256
void DoLoadGame__Fv() {
}


// address: 0x8015CE4C
// line start: 264
// line end:   270
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8015CEA8
// line start: 310
// line end:   320
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8015CEF4
// line start: 325
// line end:   335
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8015CF40
// line start: 340
// line end:   350
void ChooseCardLoad__Fv() {
}


// address: 0x8015CFF4
// line start: 354
// line end:   356
void McInitLoadCharMenu__Fv() {
}


// address: 0x8015D01C
// line start: 360
// line end:   376
void McInitLoadGameMenu__Fv() {
}


// address: 0x8015D078
// line start: 386
// line end:   441
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


// address: 0x8015D234
// line start: 446
// line end:   473
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


// address: 0x8015D3D4
// line start: 479
// line end:   503
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015D478
// line start: 507
// line end:   534
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


