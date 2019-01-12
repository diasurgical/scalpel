// C:\diabpsx\SOURCE\INV.CPP

#include "types.h"

// address: 0x80154878
// line start: 433
// line end:   434
void FreeInvGFX__Fv() {
}


// address: 0x80154880
// line start: 439
// line end:   446
void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80154904
// line start: 451
// line end:   482
void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80154B58
// line start: 488
// line end:   501
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x6C
	register struct TextDat *TData;
}


// address: 0x80154C28
// line start: 506
// line end:   551
void InvDrawSlots__Fv() {
	// register: 16
	register int Bx;
	// register: 17
	register int By;
}


// address: 0x80154F00
// line start: 561
// line end:   563
void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col) {
}


// address: 0x80154FCC
// line start: 568
// line end:   719
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


// address: 0x80155AE8
// line start: 724
// line end:   731
void DrawInvBack__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x80155B70
// line start: 736
// line end:   839
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


// address: 0x8015604C
// line start: 845
// line end:   876
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


// address: 0x80156214
// line start: 882
// line end:   913
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


// address: 0x80156338
// line start: 930
// line end:   934
void DrawInv__Fv() {
}


// address: 0x80156378
// line start: 941
// line end:   1039
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 18
	register int omp;
	// register: 19
	register int osel;
	// register: 16
	// size: 0xE0
	register struct CBlocks *BgBlocks;
}


// address: 0x801566C4
// line start: 1045
// line end:   1249
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


// address: 0x80156E8C
// line start: 1254
// line end:   1301
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


// address: 0x801571AC
// line start: 1306
// line end:   1370
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


// address: 0x80157548
// line start: 1375
// line end:   1468
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


// address: 0x80157A18
// line start: 1473
// line end:   1500
unsigned char WeaponAutoPlace__Fi(int pnum) {
}


// address: 0x80157CA4
// line start: 1506
// line end:   1512
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF68
	// size: 0x98
	auto struct ItemStruct h;
}


// address: 0x80157DA0
// line start: 1519
// line end:   1926
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


// address: 0x80159A8C
// line start: 1968
// line end:   2084
void CheckInvCut__Fiii(int pnum, int mx, int my) {
	// register: 18
	register int r;
	// register: 8
	register int ii;
	// register: 8
	register int iv;
}


// address: 0x8015A53C
// line start: 2109
// line end:   2130
void RemoveInvItem__Fii(int pnum, int iv) {
}


// address: 0x8015A7E4
// line start: 2138
// line end:   2142
void RemoveSpdBarItem__Fii(int pnum, int iv) {
}


// address: 0x8015A8D8
// line start: 2150
// line end:   2154
void CheckInvScrn__Fv() {
}


// address: 0x8015A950
// line start: 2168
// line end:   2177
void CheckItemStats__Fi(int pnum) {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *p;
}


// address: 0x8015A9D4
// line start: 2183
// line end:   2195
void CheckBookLevel__Fi(int pnum) {
	// register: 6
	register int slvl;
}


// address: 0x8015AB08
// line start: 2201
// line end:   2259
void CheckQuestItem__Fi(int pnum) {
}


// address: 0x8015AF30
// line start: 2269
// line end:   2328
void InvGetItem__Fii(int pnum, int ii) {
	// register: 5
	register int j;
	// register: 4
	register int jj;
}


// address: 0x8015B22C
// line start: 2335
// line end:   2470
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


// address: 0x8015BC9C
// line start: 2514
// line end:   2528
int FindGetItem__FiUsi(int idx, unsigned short ci, int iseed) {
	// register: 8
	register int i;
	// register: 7
	register int ii;
}


// address: 0x8015BD50
// line start: 2534
// line end:   2595
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


// address: 0x8015BEDC
// line start: 2610
// line end:   2632
unsigned char TryInvPut__Fv() {
	{
		{
		}
	}
}


// address: 0x8015C0A4
// line start: 2662
// line end:   2762
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


// address: 0x8015C54C
// line start: 2774
// line end:   2878
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


// address: 0x8015CAA8
// line start: 2883
// line end:   2992
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


// address: 0x8015CDF0
// line start: 2999
// line end:   3022
void RemoveScroll__Fi(int pnum) {
	// register: 5
	register int i;
}


// address: 0x8015CFD4
// line start: 3028
// line end:   3050
unsigned char UseScroll__Fv() {
	// register: 5
	register int i;
}


// address: 0x8015D23C
// line start: 3057
// line end:   3064
void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8015D2A4
// line start: 3072
// line end:   3080
unsigned char UseStaff__Fv() {
}


// address: 0x8015D364
// line start: 3131
// line end:   3145
void StartGoldDrop__Fv() {
}


// address: 0x8015D460
// line start: 3154
// line end:   3240
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


// address: 0x8015D984
// line start: 3246
// line end:   3258
void DoTelekinesis__Fv() {
}


// address: 0x8015DAAC
// line start: 3265
// line end:   3284
long CalculateGold__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 9
	register long gold;
}


// address: 0x8015DBE4
// line start: 3298
// line end:   3305
unsigned char DropItemBeforeTrig__Fv() {
}


// address: 0x8015DC3C
// line start: 3422
// line end:   3499
void ControlInv__Fv() {
}


// address: 0x8015DF1C
// line start: 3505
// line end:   3514
void InvGetItemWH__Fi(int Pos) {
}


// address: 0x8015E010
// line start: 3520
// line end:   3539
void InvAlignObject__Fv() {
}


// address: 0x8015E1C4
// line start: 3546
// line end:   3564
void InvSetItemCurs__Fv() {
	// register: 5
	register int ItemNo;
}


// address: 0x8015E358
// line start: 3571
// line end:   3666
void InvMoveCursLeft__Fv() {
	// register: 5
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8015E500
// line start: 3672
// line end:   3775
void InvMoveCursRight__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8015E7B4
// line start: 3780
// line end:   3873
void InvMoveCursUp__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8015E9AC
// line start: 3878
// line end:   3978
void InvMoveCursDown__Fv() {
	// register: 17
	register int ItemInc;
	// register: 16
	register int OldPos;
}


