// C:\diabpsx\SOURCE\INV.CPP

#include "types.h"

// address: 0x8015263C
// line start: 443
// line end:   444
void FreeInvGFX__Fv() {
}


// address: 0x80152644
// line start: 448
// line end:   455
void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x801526C8
// line start: 462
// line end:   501
void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80152980
// line start: 508
// line end:   523
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x70
	register struct TextDat *TData;
}


// address: 0x80152A50
// line start: 529
// line end:   587
void InvDrawSlots__Fv() {
	// register: 16
	register int Bx;
	// register: 17
	register int By;
}


// address: 0x80152D68
// line start: 597
// line end:   599
void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col) {
}


// address: 0x80152E34
// line start: 605
// line end:   764
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


// address: 0x80153950
// line start: 769
// line end:   778
void DrawInvBack__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x801539FC
// line start: 783
// line end:   904
void DrawInvCursor__Fv() {
	// register: 17
	register int ItemX;
	// register: 16
	register int ItemY;
	// register: 4
	register int LoopX;
	// register: 5
	register int LoopY;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 18
	// size: 0x70
	register struct TextDat *TData;
	{
		{
			{
				{
					{
						{
							// register: 3
							register int GoldAmount;
						}
					}
				}
			}
		}
	}
}


// address: 0x80153FC8
// line start: 910
// line end:   958
void DrawInvMsg__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT InfoRect;
	// register: 2
	register int InfoY;
	// register: 2
	register int InfoW;
	// register: 20
	register int InfoH;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct Dialog InvBack;
	// register: 17
	register int OldOt;
}


// address: 0x80154194
// line start: 966
// line end:   1021
void DrawInvHelpTxt__Fv() {
	// address: 0xFFFFFF78
	// size: 0x80
	auto char TempStr[128];
}


// address: 0x8015447C
// line start: 1041
// line end:   1048
void DrawInv__Fv() {
}


// address: 0x801544C4
// line start: 1053
// line end:   1242
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 21
	register int omp;
	// register: 20
	register int osel;
	// register: 19
	// size: 0x108
	register struct CBlocks *BgBlocks;
	{
		// register: 16
		register int OldOt;
		{
			{
				{
					{
						// register: 16
						register int PInvNo;
					}
				}
			}
		}
	}
}


// address: 0x80154AE8
// line start: 1249
// line end:   1482
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
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT ClipRect;
}


// address: 0x801552F8
// line start: 1487
// line end:   1534
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


// address: 0x80155620
// line start: 1539
// line end:   1603
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


// address: 0x801559C4
// line start: 1608
// line end:   1703
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


// address: 0x80155E9C
// line start: 1708
// line end:   1735
unsigned char WeaponAutoPlace__Fi(int pnum) {
}


// address: 0x80156130
// line start: 1741
// line end:   1747
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF90
	// size: 0x6C
	auto struct ItemStruct h;
}


// address: 0x80156244
// line start: 1754
// line end:   2185
void CheckInvPaste__Fiii(int pnum, int mx, int my) {
	// register: 20
	register int r;
	// register: 22
	register int sx;
	// register: 23
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
	// address: 0xFFFFFF68
	auto unsigned char done;
	// register: 17
	register unsigned char done2h;
	// register: 19
	register int il;
	// register: 21
	register int cn;
	// register: 2
	register int it;
	// register: 17
	register int iv;
	// register: 5
	register int ig;
	// register: 5
	register long gt;
	// address: 0xFFFFFEF8
	// size: 0x6C
	auto struct ItemStruct tempitem;
}


// address: 0x80157FCC
// line start: 2227
// line end:   2343
void CheckInvCut__Fiii(int pnum, int mx, int my) {
	// register: 18
	register int r;
	// register: 8
	register int ii;
	// register: 8
	register int iv;
}


// address: 0x80158AD0
// line start: 2368
// line end:   2391
void RemoveInvItem__Fii(int pnum, int iv) {
}


// address: 0x80158D80
// line start: 2399
// line end:   2404
void RemoveSpdBarItem__Fii(int pnum, int iv) {
}


// address: 0x80158E74
// line start: 2412
// line end:   2416
void CheckInvScrn__Fv() {
}


// address: 0x80158EEC
// line start: 2430
// line end:   2439
void CheckItemStats__Fi(int pnum) {
	// register: 4
	// size: 0x19E8
	register struct PlayerStruct *p;
}


// address: 0x80158F70
// line start: 2445
// line end:   2459
void CheckBookLevel__Fi(int pnum) {
	// register: 6
	register int slvl;
}


// address: 0x801590A4
// line start: 2465
// line end:   2548
void CheckQuestItem__Fi(int pnum) {
}


// address: 0x80159554
// line start: 2558
// line end:   2617
void InvGetItem__Fii(int pnum, int ii) {
	// register: 5
	register int j;
	// register: 4
	register int jj;
}


// address: 0x80159830
// line start: 2624
// line end:   2761
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


// address: 0x8015A298
// line start: 2811
// line end:   2882
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


// address: 0x8015A400
// line start: 2897
// line end:   2923
unsigned char TryInvPut__Fv() {
	// register: 17
	register int Dist;
	{
		{
			// register: 16
			register int d;
			{
			}
		}
	}
}


// address: 0x8015A540
// line start: 2953
// line end:   3086
int InvPutItem__Fiii(int pnum, int x, int y) {
	// register: 16
	register int ii;
	// register: 18
	register unsigned char done;
	{
		{
			{
				// register: 17
				register int Dist;
				{
					{
						// register: 16
						register int d;
					}
				}
			}
		}
	}
}


// address: 0x8015A8C8
// line start: 3098
// line end:   3202
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


// address: 0x8015AE20
// line start: 3207
// line end:   3323
char CheckInvHLight__Fv() {
	// register: 16
	register int r;
	// register: 19
	register char rv;
	// register: 17
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *p;
	{
		{
			// register: 17
			register int nGold;
		}
	}
}


// address: 0x8015B168
// line start: 3330
// line end:   3353
void RemoveScroll__Fi(int pnum) {
	// register: 5
	register int i;
}


// address: 0x8015B34C
// line start: 3359
// line end:   3381
unsigned char UseScroll__Fv() {
	// register: 5
	register int i;
}


// address: 0x8015B5B4
// line start: 3388
// line end:   3395
void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8015B618
// line start: 3403
// line end:   3411
unsigned char UseStaff__Fv() {
}


// address: 0x8015B6D8
// line start: 3462
// line end:   3476
void StartGoldDrop__Fv() {
}


// address: 0x8015B7DC
// line start: 3485
// line end:   3615
unsigned char UseInvItem__Fii(int pnum, int cii) {
	// register: 18
	register int c;
	// register: 3
	register int idata;
	// register: 3
	register int it;
	// register: 17
	// size: 0x6C
	register struct ItemStruct *Item;
	// register: 19
	register unsigned char speedlist;
}


// address: 0x8015BDA0
// line start: 3621
// line end:   3633
void DoTelekinesis__Fv() {
}


// address: 0x8015BED0
// line start: 3640
// line end:   3659
long CalculateGold__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 9
	register long gold;
}


// address: 0x8015C008
// line start: 3673
// line end:   3680
unsigned char DropItemBeforeTrig__Fv() {
}


// address: 0x8015C060
// line start: 3794
// line end:   3916
void ControlInv__Fv() {
}


// address: 0x8015C3F4
// line start: 3922
// line end:   3931
void InvGetItemWH__Fi(int Pos) {
}


// address: 0x8015C4EC
// line start: 3937
// line end:   3956
void InvAlignObject__Fv() {
}


// address: 0x8015C6A0
// line start: 3963
// line end:   3985
void InvSetItemCurs__Fv() {
	// register: 6
	register int ItemNo;
}


// address: 0x8015C840
// line start: 3992
// line end:   4087
void InvMoveCursLeft__Fv() {
	// register: 5
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8015C9E8
// line start: 4093
// line end:   4196
void InvMoveCursRight__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8015CC9C
// line start: 4201
// line end:   4294
void InvMoveCursUp__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8015CE94
// line start: 4299
// line end:   4399
void InvMoveCursDown__Fv() {
	// register: 17
	register int ItemInc;
	// register: 16
	register int OldPos;
}


