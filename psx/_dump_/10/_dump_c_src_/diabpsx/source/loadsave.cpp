// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x80148AB4
// line start: 103
// line end:   109
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80148B08
// line start: 201
// line end:   203
void LoadQuest__Fi(int i) {
}


// address: 0x80148BD0
// line start: 403
// line end:   410
void ISave__Fi(int v) {
}


// address: 0x80148C30
// line start: 495
// line end:   497
void SaveQuest__Fi(int i) {
}


// address: 0x80148CFC
// line start: 831
// line end:   894
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x80148F44
// line start: 898
// line end:   965
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 16
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x801491C0
// line start: 971
// line end:   987
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x80149304
// line start: 991
// line end:   1010
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 10
	register unsigned char *SaveBuff;
}


