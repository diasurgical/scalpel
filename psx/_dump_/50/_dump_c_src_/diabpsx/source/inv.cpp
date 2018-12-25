// C:\diabpsx\SOURCE\INV.CPP

#include "types.h"

// address: 0x8014BC90
// line start: 434
// line end:   435
void FreeInvGFX__Fv() {
}


// address: 0x8014BC98
// line start: 440
// line end:   447
void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8014BD1C
// line start: 452
// line end:   483
void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8014BF70
// line start: 489
// line end:   503
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x6C
	register struct TextDat *TData;
}


// address: 0x8014C040
// line start: 508
// line end:   553
void InvDrawSlots__Fv() {
	// register: 16
	register int Bx;
	// register: 17
	register int By;
}


// address: 0x8014C318
// line start: 563
// line end:   565
void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col) {
}


// address: 0x8014C3E4
// line start: 570
// line end:   721
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


// address: 0x8014CF00
// line start: 726
// line end:   733
void DrawInvBack__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x8014CF88
// line start: 738
// line end:   841
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


// address: 0x8014D464
// line start: 847
// line end:   878
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


// address: 0x8014D62C
// line start: 884
// line end:   915
void DrawInvUnique__Fv() {
	// register: 19
	// size: 0x6C
	register struct TextDat *ThisDat;
	// register: 10
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 17
	register int x;
	// register: 16
	register int y;
	// register: 18
	register int flip;
}


// address: 0x8014D750
// line start: 932
// line end:   936
void DrawInv__Fv() {
}


// address: 0x8014D790
// line start: 943
// line end:   1047
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 18
	register int omp;
	// register: 19
	register int osel;
	// register: 16
	// size: 0xE0
	register struct CBlocks *BgBlocks;
}


// address: 0x8014DAD4
// line start: 1053
// line end:   1257
void DoThatDrawInv__Fv() {
	// register: 16
	register int Loop;
	// register: 3
	register int ii;
	// register: 9
	register int ItemX;
	// register: 5
	register int ItemY;
	// register: 6
	register int ItemNo;
}


// address: 0x8014E29C
// line start: 1262
// line end:   1309
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


// address: 0x8014E5BC
// line start: 1314
// line end:   1378
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


// address: 0x8014E958
// line start: 1383
// line end:   1476
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


// address: 0x8014EE28
// line start: 1481
// line end:   1508
unsigned char WeaponAutoPlace__Fi(int pnum) {
}


// address: 0x8014F0B4
// line start: 1514
// line end:   1520
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF68
	// size: 0x98
	auto struct ItemStruct h;
}


// address: 0x8014F1B0
// line start: 1527
// line end:   1934
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
	// size: 0x98
	auto struct ItemStruct tempitem;
}


// address: 0x80150E9C
// line start: 1976
// line end:   2092
void CheckInvCut__Fiii(int pnum, int mx, int my) {
	// register: 18
	register int r;
	// register: 8
	register int ii;
	// register: 8
	register int iv;
}


// address: 0x8015194C
// line start: 2117
// line end:   2138
void RemoveInvItem__Fii(int pnum, int iv) {
}


// address: 0x80151BF4
// line start: 2146
// line end:   2150
void RemoveSpdBarItem__Fii(int pnum, int iv) {
}


// address: 0x80151CE8
// line start: 2158
// line end:   2162
void CheckInvScrn__Fv() {
}


// address: 0x80151D60
// line start: 2176
// line end:   2185
void CheckItemStats__Fi(int pnum) {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *p;
}


// address: 0x80151DE4
// line start: 2191
// line end:   2203
void CheckBookLevel__Fi(int pnum) {
	// register: 6
	register int slvl;
}


// address: 0x80151F18
// line start: 2209
// line end:   2271
void CheckQuestItem__Fi(int pnum) {
}


// address: 0x80152394
// line start: 2281
// line end:   2340
void InvGetItem__Fii(int pnum, int ii) {
	// register: 5
	register int j;
	// register: 4
	register int jj;
}


// address: 0x80152690
// line start: 2347
// line end:   2482
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


// address: 0x80153100
// line start: 2527
// line end:   2588
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


// address: 0x8015328C
// line start: 2603
// line end:   2625
unsigned char TryInvPut__Fv() {
	{
		{
		}
	}
}


// address: 0x80153454
// line start: 2655
// line end:   2755
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


// address: 0x801538FC
// line start: 2767
// line end:   2871
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


// address: 0x80153E58
// line start: 2876
// line end:   2985
char CheckInvHLight__Fv() {
	// register: 16
	register int r;
	// register: 19
	register char rv;
	// register: 17
	// size: 0x98
	register struct ItemStruct *pi;
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *p;
	{
		{
			// register: 17
			register int nGold;
		}
	}
}


// address: 0x801541A0
// line start: 2992
// line end:   3015
void RemoveScroll__Fi(int pnum) {
	// register: 5
	register int i;
}


// address: 0x80154384
// line start: 3021
// line end:   3043
unsigned char UseScroll__Fv() {
	// register: 5
	register int i;
}


// address: 0x801545EC
// line start: 3050
// line end:   3057
void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80154654
// line start: 3065
// line end:   3073
unsigned char UseStaff__Fv() {
}


// address: 0x80154714
// line start: 3124
// line end:   3138
void StartGoldDrop__Fv() {
}


// address: 0x80154810
// line start: 3147
// line end:   3233
unsigned char UseInvItem__Fii(int pnum, int cii) {
	// register: 18
	register int c;
	// register: 3
	register int idata;
	// register: 3
	register int it;
	// register: 17
	// size: 0x98
	register struct ItemStruct *Item;
	// register: 19
	register unsigned char speedlist;
}


// address: 0x80154D34
// line start: 3239
// line end:   3251
void DoTelekinesis__Fv() {
}


// address: 0x80154E5C
// line start: 3258
// line end:   3277
long CalculateGold__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 9
	register long gold;
}


// address: 0x80154F94
// line start: 3291
// line end:   3298
unsigned char DropItemBeforeTrig__Fv() {
}


// address: 0x80154FEC
// line start: 3414
// line end:   3492
void ControlInv__Fv() {
}


// address: 0x801552F8
// line start: 3498
// line end:   3507
void InvGetItemWH__Fi(int Pos) {
}


// address: 0x801553EC
// line start: 3513
// line end:   3532
void InvAlignObject__Fv() {
}


// address: 0x801555A0
// line start: 3539
// line end:   3559
void InvSetItemCurs__Fv() {
	// register: 6
	register int ItemNo;
}


// address: 0x80155730
// line start: 3566
// line end:   3661
void InvMoveCursLeft__Fv() {
	// register: 5
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x801558D8
// line start: 3667
// line end:   3770
void InvMoveCursRight__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x80155B8C
// line start: 3775
// line end:   3868
void InvMoveCursUp__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x80155D84
// line start: 3873
// line end:   3973
void InvMoveCursDown__Fv() {
	// register: 17
	register int ItemInc;
	// register: 16
	register int OldPos;
}


