// C:\diabpsx\PSXSRC\DLG.CPP

#include "types.h"

// address: 0x80144F74
// line start: 177
// line end:   191
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x80145034
// line start: 197
// line end:   209
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x801450F4
// line start: 213
// line end:   226
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x801451AC
// line start: 232
// line end:   236
void DoLoadGame__Fv() {
}


// address: 0x801451EC
// line start: 243
// line end:   249
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x80145248
// line start: 289
// line end:   299
void McInitLoadCard1Menu__Fv() {
}


// address: 0x80145294
// line start: 304
// line end:   314
void McInitLoadCard2Menu__Fv() {
}


// address: 0x801452E0
// line start: 319
// line end:   329
void ChooseCardLoad__Fv() {
}


// address: 0x80145394
// line start: 333
// line end:   335
void McInitLoadCharMenu__Fv() {
}


// address: 0x801453BC
// line start: 339
// line end:   355
void McInitLoadGameMenu__Fv() {
}


// address: 0x80145418
// line start: 365
// line end:   420
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


// address: 0x801455D4
// line start: 425
// line end:   452
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


// address: 0x80145774
// line start: 458
// line end:   479
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x801457F4
// line start: 483
// line end:   510
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


