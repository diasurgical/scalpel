// C:\diabpsx\PSXSRC\DLG.CPP

#include "types.h"

// address: 0x8014CED8
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8014CF98
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8014D060
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8014D120
void DoLoadGame__Fv() {
}


// address: 0x8014D160
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8014D1BC
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8014D208
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8014D254
void ChooseCardLoad__Fv() {
}


// address: 0x8014D2F4
void McInitLoadCharMenu__Fv() {
}


// address: 0x8014D31C
void McInitLoadGameMenu__Fv() {
}


// address: 0x8014D390
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
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8014D710
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


