// C:\diabpsx\PSXSRC\DLG.CPP

#include "types.h"

// address: 0x801536BC
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8015377C
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x80153844
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x80153904
void DoLoadGame__Fv() {
}


// address: 0x80153944
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x801539A0
void McInitLoadCard1Menu__Fv() {
}


// address: 0x801539EC
void McInitLoadCard2Menu__Fv() {
}


// address: 0x80153A38
void ChooseCardLoad__Fv() {
}


// address: 0x80153AEC
void McInitLoadCharMenu__Fv() {
}


// address: 0x80153B14
void McInitLoadGameMenu__Fv() {
}


// address: 0x80153B70
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


// address: 0x80153D2C
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


// address: 0x80153ECC
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x80153F4C
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


