// C:\diabpsx\SOURCE\PREITEM.CPP

#include "types.h"

// address: 0x80163480
// line start: 213
// line end:   218
void BubbleSwapItem__FP10ItemStructT0(struct ItemStruct_dup_13 *a, struct ItemStruct_dup_13 *b) {
	// address: 0xFFFFFF68
	// size: 0x98
	auto struct ItemStruct_dup_13 h;
}


// address: 0x8014EB94
// line start: 213
// line end:   218
void BubbleSwapItem__FP10ItemStructT0_addr_8014EB94(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF68
	// size: 0x98
	auto struct ItemStruct h;
}


// address: 0x80159DF0
// line start: 213
// line end:   218
void BubbleSwapItem__FP10ItemStructT0_addr_80159DF0(struct ItemStruct_dup_6 *a, struct ItemStruct_dup_6 *b) {
	// address: 0xFFFFFF68
	// size: 0x98
	auto struct ItemStruct_dup_6 h;
}


// address: 0x8014CAE0
// line start: 213
// line end:   218
void BubbleSwapItem__FP10ItemStructT0_addr_8014CAE0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF68
	// size: 0x94
	auto struct ItemStruct h;
}


// address: 0x80161D80
// line start: 213
// line end:   218
void BubbleSwapItem__FP10ItemStructT0_addr_80161D80(struct ItemStruct_dup_11 *a, struct ItemStruct_dup_11 *b) {
	// address: 0xFFFFFF68
	// size: 0x98
	auto struct ItemStruct_dup_11 h;
}


// address: 0x8014CE08
// line start: 274
// line end:   302
unsigned char HealerItemOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x8014D438
// line start: 391
// line end:   399
void RecreateBoyItem__Fiiii(int ii, int idx, int lvl, int iseed) {
	// register: 17
	register int itype;
}


// address: 0x8014D378
// line start: 377
// line end:   387
void RecreateHealerItem__Fiiii(int ii, int idx, int lvl, int iseed) {
	{
		{
		}
	}
}


// address: 0x8014E134
// line start: 597
// line end:   650
void RecreateItem__FiiUsii(int ii, int idx, unsigned short icreateinfo, int iseed, int ivalue) {
	// register: 3
	register int uper;
	// register: 9
	register unsigned char onlygood;
	// register: 10
	register unsigned char uavail;
	// register: 11
	register unsigned char pregen;
}


// address: 0x8014D0BC
// line start: 326
// line end:   333
void RecreatePremiumItem__Fiiii(int ii, int idx, int plvl, int iseed) {
	// register: 17
	register int itype;
}


// address: 0x8014D2DC
// line start: 362
// line end:   368
void RecreateSmithItem__Fiiii(int ii, int idx, int lvl, int iseed) {
}


// address: 0x8014D4FC
// line start: 404
// line end:   409
void RecreateTownItem__FiiUsii(int ii, int idx, unsigned short icreateinfo, int iseed, int ivalue) {
}


// address: 0x8014D184
// line start: 338
// line end:   357
void RecreateWitchItem__Fiiii(int ii, int idx, int lvl, int iseed) {
	{
		{
			// register: 19
			register int itype;
			// register: 17
			register int iblvl;
		}
	}
}


// address: 0x8014CCE4
// line start: 244
// line end:   268
int RndBoyItem__Fi(int lvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x8014CFBC
// line start: 306
// line end:   321
int RndHealerItem__Fi(int lvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x8014C794
// line start: 134
// line end:   154
int RndSmithItem__Fi(int lvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 18
	register int i;
}


// address: 0x8014C9E0
// line start: 186
// line end:   207
int RndWitchItem__Fi(int lvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x8014C730
// line start: 111
// line end:   127
unsigned char SmithItemOk__Fi(int i) {
	// register: 3
	register unsigned char rv;
}


// address: 0x8014E014
// line start: 577
// line end:   591
void SortHealer__Fv() {
	// register: 3
	register int j;
	// register: 17
	register int k;
	// register: 4
	register unsigned char sorted;
}


// address: 0x8014DF00
// line start: 555
// line end:   572
void SortSmith__Fv() {
	// register: 3
	register int j;
	// register: 17
	register int k;
	// register: 4
	register unsigned char sorted;
}


// address: 0x8014CBC4
// line start: 223
// line end:   238
void SortWitch__Fv() {
	// register: 3
	register int j;
	// register: 17
	register int k;
	// register: 4
	register unsigned char sorted;
}


// address: 0x8014DDAC
// line start: 532
// line end:   550
void SpawnBoy__Fi(int lvl) {
	// register: 16
	register int itype;
}


// address: 0x8014DA90
// line start: 495
// line end:   528
void SpawnHealer__Fi(int lvl) {
	// register: 3
	register int i;
	// register: 18
	register int nsi;
	// register: 16
	register int srnd;
}


// address: 0x8014D588
// line start: 414
// line end:   435
void SpawnSmith__Fi(int lvl) {
	// register: 16
	register int i;
	// register: 20
	register int nsi;
}


// address: 0x8014D724
// line start: 440
// line end:   491
void SpawnWitch__Fi(int lvl) {
	// register: 17
	register int itype;
	// register: 16
	register int iblvl;
	// register: 18
	register int i;
	// register: 22
	register int nsi;
}


// address: 0x8014C8A0
// line start: 160
// line end:   181
unsigned char WitchItemOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
}


