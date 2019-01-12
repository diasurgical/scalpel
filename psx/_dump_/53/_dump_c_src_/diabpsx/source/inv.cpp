// C:\diabpsx\SOURCE\INV.CPP

#include "types.h"

// address: 0x80155B2C
// line start: 434
// line end:   435
void FreeInvGFX__Fv() {
}


// address: 0x80155B34
// line start: 440
// line end:   447
void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80155BB8
// line start: 452
// line end:   483
void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80155E0C
// line start: 489
// line end:   502
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x6C
	register struct TextDat *TData;
}


// address: 0x80155EDC
// line start: 507
// line end:   552
void InvDrawSlots__Fv() {
	// register: 16
	register int Bx;
	// register: 17
	register int By;
}


// address: 0x801561B4
// line start: 562
// line end:   564
void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col) {
}


// address: 0x80156280
// line start: 569
// line end:   720
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


// address: 0x80156D9C
// line start: 725
// line end:   732
void DrawInvBack__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x80156E24
// line start: 737
// line end:   840
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


// address: 0x80157300
// line start: 846
// line end:   877
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


// address: 0x801574C8
// line start: 883
// line end:   914
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


// address: 0x801575EC
// line start: 931
// line end:   935
void DrawInv__Fv() {
}


// address: 0x8015762C
// line start: 942
// line end:   1046
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 18
	register int omp;
	// register: 19
	register int osel;
	// register: 16
	// size: 0xE0
	register struct CBlocks *BgBlocks;
}


// address: 0x80157970
// line start: 1052
// line end:   1256
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


// address: 0x80158138
// line start: 1261
// line end:   1308
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


// address: 0x80158458
// line start: 1313
// line end:   1377
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


// address: 0x801587F4
// line start: 1382
// line end:   1475
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


// address: 0x80158CC4
// line start: 1480
// line end:   1507
unsigned char WeaponAutoPlace__Fi(int pnum) {
}


// address: 0x80158F50
// line start: 1513
// line end:   1519
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF68
	// size: 0x98
	auto struct ItemStruct h;
}


// address: 0x8015904C
// line start: 1526
// line end:   1933
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


// address: 0x8015AD38
// line start: 1975
// line end:   2091
void CheckInvCut__Fiii(int pnum, int mx, int my) {
	// register: 18
	register int r;
	// register: 8
	register int ii;
	// register: 8
	register int iv;
}


// address: 0x8015B7E8
// line start: 2116
// line end:   2137
void RemoveInvItem__Fii(int pnum, int iv) {
}


// address: 0x8015BA90
// line start: 2145
// line end:   2149
void RemoveSpdBarItem__Fii(int pnum, int iv) {
}


// address: 0x8015BB84
// line start: 2157
// line end:   2161
void CheckInvScrn__Fv() {
}


// address: 0x8015BBFC
// line start: 2175
// line end:   2184
void CheckItemStats__Fi(int pnum) {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *p;
}


// address: 0x8015BC80
// line start: 2190
// line end:   2202
void CheckBookLevel__Fi(int pnum) {
	// register: 6
	register int slvl;
}


// address: 0x8015BDB4
// line start: 2208
// line end:   2266
void CheckQuestItem__Fi(int pnum) {
}


// address: 0x8015C1DC
// line start: 2276
// line end:   2335
void InvGetItem__Fii(int pnum, int ii) {
	// register: 5
	register int j;
	// register: 4
	register int jj;
}


// address: 0x8015C4D8
// line start: 2342
// line end:   2477
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


// address: 0x8015CF48
// line start: 2521
// line end:   2535
int FindGetItem__FiUsi(int idx, unsigned short ci, int iseed) {
	// register: 8
	register int i;
	// register: 7
	register int ii;
}


// address: 0x8015CFFC
// line start: 2541
// line end:   2602
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


// address: 0x8015D188
// line start: 2617
// line end:   2639
unsigned char TryInvPut__Fv() {
	{
		{
		}
	}
}


// address: 0x8015D350
// line start: 2669
// line end:   2769
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


// address: 0x8015D7F8
// line start: 2781
// line end:   2885
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


// address: 0x8015DD54
// line start: 2890
// line end:   2999
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


// address: 0x8015E09C
// line start: 3006
// line end:   3029
void RemoveScroll__Fi(int pnum) {
	// register: 5
	register int i;
}


// address: 0x8015E280
// line start: 3035
// line end:   3057
unsigned char UseScroll__Fv() {
	// register: 5
	register int i;
}


// address: 0x8015E4E8
// line start: 3064
// line end:   3071
void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8015E550
// line start: 3079
// line end:   3087
unsigned char UseStaff__Fv() {
}


// address: 0x8015E610
// line start: 3138
// line end:   3152
void StartGoldDrop__Fv() {
}


// address: 0x8015E70C
// line start: 3161
// line end:   3247
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


// address: 0x8015EC30
// line start: 3253
// line end:   3265
void DoTelekinesis__Fv() {
}


// address: 0x8015ED58
// line start: 3272
// line end:   3291
long CalculateGold__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 9
	register long gold;
}


// address: 0x8015EE90
// line start: 3305
// line end:   3312
unsigned char DropItemBeforeTrig__Fv() {
}


// address: 0x8015EEE8
// line start: 3428
// line end:   3506
void ControlInv__Fv() {
}


// address: 0x8015F1F4
// line start: 3512
// line end:   3521
void InvGetItemWH__Fi(int Pos) {
}


// address: 0x8015F2E8
// line start: 3527
// line end:   3546
void InvAlignObject__Fv() {
}


// address: 0x8015F49C
// line start: 3553
// line end:   3573
void InvSetItemCurs__Fv() {
	// register: 6
	register int ItemNo;
}


// address: 0x8015F62C
// line start: 3580
// line end:   3675
void InvMoveCursLeft__Fv() {
	// register: 5
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8015F7D4
// line start: 3681
// line end:   3784
void InvMoveCursRight__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8015FA88
// line start: 3789
// line end:   3882
void InvMoveCursUp__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8015FC80
// line start: 3887
// line end:   3987
void InvMoveCursDown__Fv() {
	// register: 17
	register int ItemInc;
	// register: 16
	register int OldPos;
}


