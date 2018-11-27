// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x80149298
// line start: 103
// line end:   109
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x801492EC
// line start: 201
// line end:   203
void LoadQuest__Fi(int i) {
}


// address: 0x801493B4
// line start: 403
// line end:   410
void ISave__Fi(int v) {
}


// address: 0x80149414
// line start: 495
// line end:   497
void SaveQuest__Fi(int i) {
}


// address: 0x801494E0
// line start: 831
// line end:   896
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x80149728
// line start: 904
// line end:   997
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 16
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x801499A4
// line start: 1003
// line end:   1019
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 17
	register int result;
	// register: 16
	register unsigned char *LoadBuff;
}


// address: 0x80149B10
// line start: 1023
// line end:   1044
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


