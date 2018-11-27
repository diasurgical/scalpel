// C:\diabpsx\SOURCE\INV.CPP

#include "types.h"

// address: 0x8013E6D4
// line start: 424
// line end:   425
void FreeInvGFX__Fv() {
}


// address: 0x8013E6DC
// line start: 430
// line end:   437
void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8013E760
// line start: 442
// line end:   473
void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8013E9B4
// line start: 479
// line end:   492
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x6C
	register struct TextDat *TData;
}


// address: 0x8013EA84
// line start: 497
// line end:   542
void InvDrawSlots__Fv() {
	// register: 16
	register int Bx;
	// register: 17
	register int By;
}


// address: 0x8013ED5C
// line start: 552
// line end:   554
void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col) {
}


// address: 0x8013EE28
// line start: 559
// line end:   708
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


// address: 0x8013F8FC
// line start: 713
// line end:   720
void DrawInvBack__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x8013F984
// line start: 725
// line end:   828
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


// address: 0x8013FE44
// line start: 834
// line end:   865
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


// address: 0x8014000C
// line start: 871
// line end:   902
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


// address: 0x80140130
// line start: 913
// line end:   915
void DrawInv__Fv() {
}


// address: 0x80140160
// line start: 920
// line end:   998
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 18
	// size: 0xE0
	register struct CBlocks *BgBlocks;
	// register: 17
	register int omp;
	// register: 16
	register int osel;
}


// address: 0x80140444
// line start: 1003
// line end:   1207
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


// address: 0x80140BAC
// line start: 1212
// line end:   1259
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


// address: 0x80140EA8
// line start: 1264
// line end:   1328
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


// address: 0x80141218
// line start: 1333
// line end:   1426
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


// address: 0x801416AC
// line start: 1431
// line end:   1458
unsigned char WeaponAutoPlace__Fi(int pnum) {
}


// address: 0x8014191C
// line start: 1464
// line end:   1470
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF68
	// size: 0x94
	auto struct ItemStruct h;
}


// address: 0x80141A0C
// line start: 1477
// line end:   1884
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
	// register: 18
	register int iv;
	// register: 5
	register int ig;
	// register: 5
	register long gt;
	// address: 0xFFFFFED8
	// size: 0x94
	auto struct ItemStruct tempitem;
}


// address: 0x8014356C
// line start: 1926
// line end:   2042
void CheckInvCut__Fiii(int pnum, int mx, int my) {
	// register: 18
	register int r;
	// register: 8
	register int ii;
	// register: 8
	register int iv;
}


// address: 0x80143F44
// line start: 2067
// line end:   2088
void RemoveInvItem__Fii(int pnum, int iv) {
}


// address: 0x801441C8
// line start: 2096
// line end:   2102
void RemoveSpdBarItem__Fii(int pnum, int iv) {
}


// address: 0x801442C0
// line start: 2108
// line end:   2112
void CheckInvScrn__Fv() {
}


// address: 0x80144338
// line start: 2126
// line end:   2135
void CheckItemStats__Fi(int pnum) {
	// register: 4
	// size: 0x22C8
	register struct PlayerStruct *p;
}


// address: 0x801443B4
// line start: 2141
// line end:   2153
void CheckBookLevel__Fi(int pnum) {
	// register: 6
	register int slvl;
}


// address: 0x801444E0
// line start: 2159
// line end:   2217
void CheckQuestItem__Fi(int pnum) {
}


// address: 0x801448C0
// line start: 2227
// line end:   2286
void InvGetItem__Fii(int pnum, int ii) {
	// register: 5
	register int j;
	// register: 4
	register int jj;
}


// address: 0x80144BA0
// line start: 2293
// line end:   2428
void AutoGetItem__Fii(int pnum, int ii) {
	// register: 16
	register int i;
	// register: 2
	register int g;
	// register: 19
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


// address: 0x801455D8
// line start: 2472
// line end:   2486
int FindGetItem__FiUsi(int idx, unsigned short ci, int iseed) {
	// register: 8
	register int i;
	// register: 7
	register int ii;
}


// address: 0x8014568C
// line start: 2492
// line end:   2553
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


// address: 0x80145818
// line start: 2568
// line end:   2590
unsigned char TryInvPut__Fv() {
	{
		{
		}
	}
}


// address: 0x801459C0
// line start: 2620
// line end:   2720
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


// address: 0x80145E54
// line start: 2732
// line end:   2836
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


// address: 0x80146374
// line start: 2841
// line end:   2950
char CheckInvHLight__Fv() {
	// register: 16
	register int r;
	// register: 19
	register char rv;
	// register: 17
	// size: 0x94
	register struct ItemStruct *pi;
	// register: 18
	// size: 0x22C8
	register struct PlayerStruct *p;
	{
		{
			// register: 17
			register int nGold;
		}
	}
}


// address: 0x801466B4
// line start: 2957
// line end:   2980
void RemoveScroll__Fi(int pnum) {
	// register: 5
	register int i;
}


// address: 0x80146878
// line start: 2986
// line end:   3008
unsigned char UseScroll__Fv() {
	// register: 5
	register int i;
}


// address: 0x80146AB4
// line start: 3015
// line end:   3022
void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80146B1C
// line start: 3030
// line end:   3038
unsigned char UseStaff__Fv() {
}


// address: 0x80146BD0
// line start: 3089
// line end:   3103
void StartGoldDrop__Fv() {
}


// address: 0x80146CC4
// line start: 3112
// line end:   3198
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


// address: 0x801471B4
// line start: 3204
// line end:   3216
void DoTelekinesis__Fv() {
}


// address: 0x801472DC
// line start: 3223
// line end:   3242
long CalculateGold__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 9
	register long gold;
}


// address: 0x801473FC
// line start: 3256
// line end:   3263
unsigned char DropItemBeforeTrig__Fv() {
}


// address: 0x80147454
// line start: 3378
// line end:   3448
void ControlInv__Fv() {
}


// address: 0x80147734
// line start: 3454
// line end:   3463
void InvGetItemWH__Fi(int Pos) {
}


// address: 0x8014781C
// line start: 3469
// line end:   3488
void InvAlignObject__Fv() {
}


// address: 0x801479C8
// line start: 3495
// line end:   3513
void InvSetItemCurs__Fv() {
	// register: 5
	register int ItemNo;
}


// address: 0x80147B4C
// line start: 3520
// line end:   3603
void InvMoveCursLeft__Fv() {
	// register: 5
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x80147D38
// line start: 3609
// line end:   3698
void InvMoveCursRight__Fv() {
	// register: 6
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8014804C
// line start: 3703
// line end:   3796
void InvMoveCursUp__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8014823C
// line start: 3801
// line end:   3901
void InvMoveCursDown__Fv() {
	// register: 17
	register int ItemInc;
	// register: 16
	register int OldPos;
}


