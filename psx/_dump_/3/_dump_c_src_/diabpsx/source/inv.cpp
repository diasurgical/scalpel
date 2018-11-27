// C:\diabpsx\SOURCE\INV.CPP

#include "types.h"

// address: 0x8014EA00
// line start: 423
// line end:   424
void FreeInvGFX__Fv() {
}


// address: 0x8014EA08
// line start: 429
// line end:   436
void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8014EA8C
// line start: 441
// line end:   472
void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8014ECE0
// line start: 478
// line end:   491
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x68
	register struct TextDat *TData;
}


// address: 0x8014EDB0
// line start: 496
// line end:   545
void InvDrawSlots__Fv() {
	// register: 16
	register int Bx;
	// register: 17
	register int By;
}


// address: 0x8014F0C4
// line start: 551
// line end:   553
void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col) {
}


// address: 0x8014F190
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


// address: 0x8014FD1C
// line start: 712
// line end:   719
void DrawInvBack__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x8014FDA4
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
	// size: 0x68
	register struct TextDat *TData;
}


// address: 0x80150280
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


// address: 0x80150448
// line start: 877
// line end:   878
void DrawInv__Fv() {
}


// address: 0x80150478
// line start: 883
// line end:   954
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 17
	// size: 0xDC
	register struct CBlocks *BgBlocks;
	// register: 18
	register int omp;
	// register: 16
	register int osel;
}


// address: 0x80150744
// line start: 959
// line end:   1162
void DoThatDrawInv__Fv() {
	// register: 16
	register int Loop;
	// register: 4
	register int ii;
	// register: 9
	register int ItemX;
	// register: 8
	register int ItemY;
	// register: 6
	register int ItemNo;
}


// address: 0x80151020
// line start: 1167
// line end:   1214
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


// address: 0x8015133C
// line start: 1219
// line end:   1283
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


// address: 0x801516D4
// line start: 1288
// line end:   1381
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


// address: 0x80151BA0
// line start: 1386
// line end:   1413
unsigned char WeaponAutoPlace__Fi(int pnum) {
}


// address: 0x80151E28
// line start: 1419
// line end:   1425
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF68
	// size: 0x94
	auto struct ItemStruct h;
}


// address: 0x80151F18
// line start: 1432
// line end:   1839
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


// address: 0x80153BA4
// line start: 1881
// line end:   1997
void CheckInvCut__Fiii(int pnum, int mx, int my) {
	// register: 18
	register int r;
	// register: 8
	register int ii;
	// register: 8
	register int iv;
}


// address: 0x80154630
// line start: 2022
// line end:   2043
void RemoveInvItem__Fii(int pnum, int iv) {
}


// address: 0x801548D4
// line start: 2051
// line end:   2057
void RemoveSpdBarItem__Fii(int pnum, int iv) {
}


// address: 0x801549D4
// line start: 2063
// line end:   2067
void CheckInvScrn__Fv() {
}


// address: 0x80154A4C
// line start: 2081
// line end:   2090
void CheckItemStats__Fi(int pnum) {
	// register: 4
	// size: 0x22D0
	register struct PlayerStruct *p;
}


// address: 0x80154AD0
// line start: 2096
// line end:   2108
void CheckBookLevel__Fi(int pnum) {
	// register: 6
	register int slvl;
}


// address: 0x80154C04
// line start: 2114
// line end:   2172
void CheckQuestItem__Fi(int pnum) {
}


// address: 0x8015502C
// line start: 2182
// line end:   2240
void InvGetItem__Fii(int pnum, int ii) {
	// register: 5
	register int j;
	// register: 4
	register int jj;
}


// address: 0x80155324
// line start: 2247
// line end:   2382
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


// address: 0x80155D88
// line start: 2426
// line end:   2440
int FindGetItem__FiUsi(int idx, unsigned short ci, int iseed) {
	// register: 8
	register int i;
	// register: 7
	register int ii;
}


// address: 0x80155E3C
// line start: 2446
// line end:   2512
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


// address: 0x80156048
// line start: 2522
// line end:   2544
unsigned char TryInvPut__Fv() {
	{
		{
		}
	}
}


// address: 0x80156210
// line start: 2574
// line end:   2673
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


// address: 0x801566B4
// line start: 2685
// line end:   2789
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


// address: 0x80156C50
// line start: 2794
// line end:   2897
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


// address: 0x80156F94
// line start: 2904
// line end:   2927
void RemoveScroll__Fi(int pnum) {
	// register: 5
	register int i;
}


// address: 0x80157178
// line start: 2933
// line end:   2955
unsigned char UseScroll__Fv() {
	// register: 5
	register int i;
}


// address: 0x801573E0
// line start: 2962
// line end:   2969
void UseStaffCharge__Fi(int pnum) {
}


// address: 0x801574A0
// line start: 2977
// line end:   2985
unsigned char UseStaff__Fv() {
}


// address: 0x80157560
// line start: 3036
// line end:   3050
void StartGoldDrop__Fv() {
}


// address: 0x80157664
// line start: 3059
// line end:   3145
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


// address: 0x80157B8C
// line start: 3151
// line end:   3163
void DoTelekinesis__Fv() {
}


// address: 0x80157CB4
// line start: 3170
// line end:   3189
long CalculateGold__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 9
	register long gold;
}


// address: 0x80157DEC
// line start: 3203
// line end:   3210
unsigned char DropItemBeforeTrig__Fv() {
}


// address: 0x80157E44
// line start: 3324
// line end:   3384
void ControlInv__Fv() {
}


// address: 0x801581CC
// line start: 3390
// line end:   3399
void InvGetItemWH__Fi(int Pos) {
}


// address: 0x801582C4
// line start: 3405
// line end:   3424
void InvAlignObject__Fv() {
}


// address: 0x80158478
// line start: 3431
// line end:   3449
void InvSetItemCurs__Fv() {
	// register: 5
	register int ItemNo;
}


// address: 0x8015860C
// line start: 3456
// line end:   3537
void InvMoveCursLeft__Fv() {
	// register: 5
	register int ItemInc;
}


// address: 0x801587E8
// line start: 3542
// line end:   3629
void InvMoveCursRight__Fv() {
	// register: 4
	register int ItemInc;
}


// address: 0x80158B00
// line start: 3634
// line end:   3725
void InvMoveCursUp__Fv() {
	// register: 4
	register int ItemInc;
}


// address: 0x80158CE8
// line start: 3730
// line end:   3828
void InvMoveCursDown__Fv() {
	// register: 16
	register int ItemInc;
}


