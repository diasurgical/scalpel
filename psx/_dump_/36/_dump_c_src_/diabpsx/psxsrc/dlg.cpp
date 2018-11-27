// C:\diabpsx\PSXSRC\DLG.CPP

#include "types.h"

// address: 0x80158E78
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x80158F38
int DoSaveOptions__Fv() {
	// register: 5
	register int delete_file_number;
}


// address: 0x80158F8C
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015905C
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015911C
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
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x80159224
void McInitLoadCard1Menu__Fv() {
}


// address: 0x80159270
void McInitLoadCard2Menu__Fv() {
}


// address: 0x801592BC
void ChooseCardLoad__Fv() {
}


// address: 0x80159370
void McInitLoadCharMenu__Fv() {
}


// address: 0x80159398
void McInitLoadGameMenu__Fv() {
}


// address: 0x801593F4
void McMainKeyCtrl__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT um;
}


// address: 0x80159530
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
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x801598EC
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x801599C4
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


