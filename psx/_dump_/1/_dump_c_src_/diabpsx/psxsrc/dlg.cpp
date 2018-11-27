// C:\diabpsx\PSXSRC\DLG.CPP

#include "types.h"

// address: 0x80147F88
// line start: 173
// line end:   187
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
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


// address: 0x801481D0
// line start: 228
// line end:   232
void DoLoadGame__Fv() {
}


// address: 0x80148210
// line start: 239
// line end:   245
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
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


// address: 0x80148304
// line start: 315
// line end:   322
void ChooseCardLoad__Fv() {
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


// address: 0x8014843C
// line start: 380
// line end:   433
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


