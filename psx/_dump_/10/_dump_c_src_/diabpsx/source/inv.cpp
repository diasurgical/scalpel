// C:\diabpsx\SOURCE\INV.CPP

#include "types.h"

// address: 0x8014037C
// line start: 423
// line end:   424
void FreeInvGFX__Fv() {
}


// address: 0x80140384
// line start: 429
// line end:   436
void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80140408
// line start: 441
// line end:   472
void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8014065C
// line start: 478
// line end:   491
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x6C
	register struct TextDat *TData;
}


// address: 0x8014072C
// line start: 496
// line end:   545
void InvDrawSlots__Fv() {
	// register: 16
	register int Bx;
	// register: 17
	register int By;
}


// address: 0x80140A40
// line start: 551
// line end:   553
void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col) {
}


// address: 0x80140B0C
// line start: 558
// line end:   707
void DrawInvStats__Fv() {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct Dialog InvBack;
	// register: 18
	register char c;
	// address: 0xFFFFFFD8
	// size: 0xA
	auto char chrstr[10];
	// register: 17
	register long mind;
	// register: 16
	register long maxd;
	// register: 16
	register int hper;
	// register: 16
	register int ac;
}


// address: 0x80141698
// line start: 712
// line end:   719
void DrawInvBack__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x80141720
// line start: 724
// line end:   827
void DrawInvCursor__Fv() {
	// register: 6
	register int ItemX;
	// register: 8
	register int ItemY;
	// register: 4
	register int LoopX;
	// register: 5
	register int LoopY;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x6C
	register struct TextDat *TData;
}


// address: 0x80141BFC
// line start: 833
// line end:   864
void DrawInvMsg__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT InfoRect;
	// register: 3
	register int InfoX;
	// register: 16
	register int InfoY;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x80141DC4
// line start: 877
// line end:   878
void DrawInv__Fv() {
}


// address: 0x80141DF4
// line start: 883
// line end:   957
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 18
	// size: 0xE0
	register struct CBlocks *BgBlocks;
	// register: 17
	register int omp;
	// register: 16
	register int osel;
}


// address: 0x801420D4
// line start: 962
// line end:   1165
void DoThatDrawInv__Fv() {
	// register: 16
	register int Loop;
	// register: 3
	register int ii;
	// register: 8
	register int ItemX;
	// register: 5
	register int ItemY;
	// register: 6
	register int ItemNo;
}


// address: 0x80142928
// line start: 1170
// line end:   1217
unsigned char AutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag) {
	// register: 5
	register int i;
	// register: 11
	register int j;
	// register: 4
	register int xx;
	// register: 10
	register int yy;
	// register: 16
	register unsigned char done;
}


// address: 0x80142C44
// line start: 1222
// line end:   1286
unsigned char SpecialAutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag) {
	// register: 5
	register int i;
	// register: 11
	register int j;
	// register: 4
	register int xx;
	// register: 10
	register int yy;
	// register: 16
	register unsigned char done;
}


// address: 0x80142FDC
// line start: 1291
// line end:   1384
unsigned char GoldAutoPlace__Fi(int pnum) {
	// register: 16
	register int i;
	// register: 19
	register int ii;
	// register: 10
	register int xx;
	// register: 8
	register int yy;
	// register: 3
	register long gt;
	// register: 6
	register unsigned char done;
}


// address: 0x801434A8
// line start: 1389
// line end:   1416
unsigned char WeaponAutoPlace__Fi(int pnum) {
}


// address: 0x80143730
// line start: 1422
// line end:   1428
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF68
	// size: 0x94
	auto struct ItemStruct h;
}


// address: 0x80143820
// line start: 1435
// line end:   1842
void CheckInvPaste__Fiii(int pnum, int mx, int my) {
	// register: 21
	register int r;
	// register: 23
	register int sx;
	// register: 30
	register int sy;
	// register: 16
	register int i;
	// register: 9
	register int j;
	// register: 7
	register int xx;
	// register: 10
	register int yy;
	// register: 8
	register int ii;
	// register: 17
	register unsigned char done;
	// register: 17
	register unsigned char done2h;
	// register: 20
	register int il;
	// register: 22
	register int cn;
	// register: 2
	register int it;
	// register: 19
	register int iv;
	// register: 5
	register int ig;
	// register: 5
	register long gt;
	// address: 0xFFFFFED8
	// size: 0x94
	auto struct ItemStruct tempitem;
}


// address: 0x801454AC
// line start: 1884
// line end:   2000
void CheckInvCut__Fiii(int pnum, int mx, int my) {
	// register: 18
	register int r;
	// register: 8
	register int ii;
	// register: 8
	register int iv;
}


// address: 0x80145F38
// line start: 2025
// line end:   2046
void RemoveInvItem__Fii(int pnum, int iv) {
}


// address: 0x801461DC
// line start: 2054
// line end:   2060
void RemoveSpdBarItem__Fii(int pnum, int iv) {
}


// address: 0x801462DC
// line start: 2066
// line end:   2070
void CheckInvScrn__Fv() {
}


// address: 0x80146354
// line start: 2084
// line end:   2093
void CheckItemStats__Fi(int pnum) {
	// register: 4
	// size: 0x22D0
	register struct PlayerStruct *p;
}


// address: 0x801463D8
// line start: 2099
// line end:   2111
void CheckBookLevel__Fi(int pnum) {
	// register: 6
	register int slvl;
}


// address: 0x8014650C
// line start: 2117
// line end:   2175
void CheckQuestItem__Fi(int pnum) {
}


// address: 0x80146934
// line start: 2185
// line end:   2243
void InvGetItem__Fii(int pnum, int ii) {
	// register: 5
	register int j;
	// register: 4
	register int jj;
}


// address: 0x80146C2C
// line start: 2250
// line end:   2385
void AutoGetItem__Fii(int pnum, int ii) {
	// register: 16
	register int i;
	// register: 2
	register int g;
	// register: 20
	register int w;
	// register: 21
	register int h;
	// register: 4
	register int idx;
	// register: 17
	register unsigned char done;
	{
		{
			// register: 5
			register int j;
			// register: 2
			register int jj;
		}
	}
}


// address: 0x80147690
// line start: 2429
// line end:   2443
int FindGetItem__FiUsi(int idx, unsigned short ci, int iseed) {
	// register: 8
	register int i;
	// register: 7
	register int ii;
}


// address: 0x80147744
// line start: 2449
// line end:   2510
void SyncGetItem__FiiiUsi(int x, int y, int idx, unsigned short ci, int iseed) {
	// register: 16
	register int ii;
	{
		{
			// register: 5
			register int j;
			// register: 4
			register int jj;
		}
	}
}


// address: 0x801478D0
// line start: 2525
// line end:   2547
unsigned char TryInvPut__Fv() {
	{
		{
		}
	}
}


// address: 0x80147A98
// line start: 2577
// line end:   2676
int InvPutItem__Fiii(int pnum, int x, int y) {
	// register: 16
	register int ii;
	// register: 23
	register unsigned char done;
	{
		// register: 21
		register int d;
		{
			// register: 16
			register int dy;
			{
				{
					{
						{
							{
								{
									{
										// register: 18
										register int l;
										{
											{
												// register: 19
												register int j;
												{
													// register: 20
													register int yy;
													{
														// register: 17
														register int i;
														{
															// register: 16
															register int xx;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80147F3C
// line start: 2688
// line end:   2792
int SyncPutItem__FiiiiUsiUciiiiiUl(int pnum, int x, int y, int idx, int icreateinfo, int iseed, int Id, int dur, int mdur, int ch, int mch, int ivalue, unsigned long ibuff) {
	// register: 16
	register int ii;
	// register: 17
	register int d;
	// register: 16
	register int dy;
	{
		{
			{
				{
					{
						{
							// register: 21
							register unsigned char done;
							{
								// register: 18
								register int l;
								{
									{
										// register: 20
										register int j;
										{
											// register: 19
											register int yy;
											{
												// register: 17
												register int i;
												{
													// register: 16
													register int xx;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80148498
// line start: 2797
// line end:   2906
char CheckInvHLight__Fv() {
	// register: 16
	register int r;
	// register: 19
	register char rv;
	// register: 17
	// size: 0x94
	register struct ItemStruct *pi;
	// register: 18
	// size: 0x22D0
	register struct PlayerStruct *p;
	{
		{
			// register: 17
			register int nGold;
		}
	}
}


// address: 0x801487DC
// line start: 2913
// line end:   2936
void RemoveScroll__Fi(int pnum) {
	// register: 5
	register int i;
}


// address: 0x801489C0
// line start: 2942
// line end:   2964
unsigned char UseScroll__Fv() {
	// register: 5
	register int i;
}


// address: 0x80148C28
// line start: 2971
// line end:   2978
void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80148C90
// line start: 2986
// line end:   2994
unsigned char UseStaff__Fv() {
}


// address: 0x80148D50
// line start: 3045
// line end:   3059
void StartGoldDrop__Fv() {
}


// address: 0x80148E54
// line start: 3068
// line end:   3154
unsigned char UseInvItem__Fii(int pnum, int cii) {
	// register: 18
	register int c;
	// register: 3
	register int idata;
	// register: 3
	register int it;
	// register: 17
	// size: 0x94
	register struct ItemStruct *Item;
	// register: 19
	register unsigned char speedlist;
}


// address: 0x8014937C
// line start: 3160
// line end:   3172
void DoTelekinesis__Fv() {
}


// address: 0x801494A4
// line start: 3179
// line end:   3198
long CalculateGold__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 9
	register long gold;
}


// address: 0x801495DC
// line start: 3212
// line end:   3219
unsigned char DropItemBeforeTrig__Fv() {
}


// address: 0x80149634
// line start: 3333
// line end:   3393
void ControlInv__Fv() {
}


// address: 0x801499BC
// line start: 3399
// line end:   3408
void InvGetItemWH__Fi(int Pos) {
}


// address: 0x80149AB4
// line start: 3414
// line end:   3433
void InvAlignObject__Fv() {
}


// address: 0x80149C68
// line start: 3440
// line end:   3458
void InvSetItemCurs__Fv() {
	// register: 5
	register int ItemNo;
}


// address: 0x80149DFC
// line start: 3465
// line end:   3546
void InvMoveCursLeft__Fv() {
	// register: 5
	register int ItemInc;
}


// address: 0x80149FD8
// line start: 3551
// line end:   3638
void InvMoveCursRight__Fv() {
	// register: 4
	register int ItemInc;
}


// address: 0x8014A2F0
// line start: 3643
// line end:   3734
void InvMoveCursUp__Fv() {
	// register: 4
	register int ItemInc;
}


// address: 0x8014A4D8
// line start: 3739
// line end:   3837
void InvMoveCursDown__Fv() {
	// register: 16
	register int ItemInc;
}


