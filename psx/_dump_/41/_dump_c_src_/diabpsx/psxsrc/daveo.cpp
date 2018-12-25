// C:\diabpsx\PSXSRC\DAVEO.CPP

#include "types.h"

// address: 0x80084234
// line start: 71
// line end:   137
void ReadPad__Fi(int NoDeb) {
	// register: 16
	// size: 0xEC
	register struct CPad *DPad;
	// register: 2
	register int New;
	// register: 4
	register int cmem;
	// register: 5
	register int p1mema;
	// register: 6
	register int p1memb;
	// register: 7
	register int p2mema;
	// register: 8
	register int p2memb;
	// register: 9
	register int diffm;
}


// address: 0x800843BC
// line start: 297
// line end:   300
void DummyPoll__Fv() {
}


// address: 0x800843C4
// line start: 303
// line end:   304
void DaveOwens__Fv() {
}


// address: 0x800843EC
// line start: 316
// line end:   335
void DaveCentreStuff__Fv() {
	// address: 0xFFFFFFC0
	// size: 0x28
	auto char TempStr[40];
}


// address: 0x80084534
// line start: 376
// line end:   400
void PlaceStoreGold2__Fil(int myplr, long v) {
	// register: 17
	register int i;
	// register: 20
	register int ii;
	// register: 22
	register int xx;
	// register: 19
	register int yy;
	// register: 4
	register unsigned char done;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8008475C
// line start: 405
// line end:   436
void GivePlayerDosh__Fil(int PlayerNo, long cost) {
	// register: 18
	register int i;
}


// address: 0x80084910
// line start: 441
// line end:   450
int CalcItemVal__FP10ItemStruct(struct ItemStruct *Item) {
	// register: 2
	register int cost;
}


// address: 0x8008496C
// line start: 454
// line end:   477
void RemoveDupInvItem__Fii(int pnum, int iv) {
}


// address: 0x80084B5C
// line start: 491
// line end:   557
long DetectDup__FP10ItemStructi(struct ItemStruct *Item, int PlayerNo) {
	// register: 6
	register long Value;
	// register: 3
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 17
	register int i;
	// register: 18
	register int InvItem;
	// register: 21
	register long DupSell;
	// register: 19
	register unsigned char Flag;
}


// address: 0x80084DD8
// line start: 562
// line end:   633
void WinterSales__Fi(int PlayerNo) {
	// register: 16
	register int Value;
	// register: 17
	register int i;
	// register: 18
	register int InvItem;
	// register: 19
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 21
	register unsigned char Flag;
}


// address: 0x80085014
// line start: 642
// line end:   715
void KeefDaFeef__Fi(int PlayerNo) {
	// register: 17
	register int i;
	// register: 19
	register int InvItem;
	// register: 18
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 21
	register unsigned char Flag;
}


