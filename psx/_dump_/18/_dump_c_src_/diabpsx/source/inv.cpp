// C:\diabpsx\SOURCE\INV.CPP

#include "types.h"

// address: 0x8014D108
void FreeInvGFX__Fv() {
}


// address: 0x8014D110
void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8014D194
void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8014D3E8
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x6C
	register struct TextDat *TData;
}


// address: 0x8014D4B8
void InvDrawSlots__Fv() {
	// register: 16
	register int Bx;
	// register: 17
	register int By;
}


// address: 0x8014D790
void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col) {
}


// address: 0x8014D85C
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


// address: 0x8014E3E8
void DrawInvBack__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x8014E470
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


// address: 0x8014E94C
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


// address: 0x8014EB14
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


// address: 0x8014EC38
void DrawInv__Fv() {
}


// address: 0x8014EC68
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 18
	// size: 0xE0
	register struct CBlocks *BgBlocks;
	// register: 17
	register int omp;
	// register: 16
	register int osel;
}


// address: 0x8014EF70
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


// address: 0x8014F738
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


// address: 0x8014FA58
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


// address: 0x8014FDF4
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


// address: 0x801502C4
unsigned char WeaponAutoPlace__Fi(int pnum) {
}


// address: 0x80150550
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF68
	// size: 0x98
	auto struct ItemStruct h;
}


// address: 0x8015064C
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


// address: 0x80152338
void CheckInvCut__Fiii(int pnum, int mx, int my) {
	// register: 18
	register int r;
	// register: 8
	register int ii;
	// register: 8
	register int iv;
}


// address: 0x80152DE8
void RemoveInvItem__Fii(int pnum, int iv) {
}


// address: 0x80153090
void RemoveSpdBarItem__Fii(int pnum, int iv) {
}


// address: 0x80153190
void CheckInvScrn__Fv() {
}


// address: 0x80153208
void CheckItemStats__Fi(int pnum) {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *p;
}


// address: 0x8015328C
void CheckBookLevel__Fi(int pnum) {
	// register: 6
	register int slvl;
}


// address: 0x801533C0
void CheckQuestItem__Fi(int pnum) {
}


// address: 0x801537E8
void InvGetItem__Fii(int pnum, int ii) {
	// register: 5
	register int j;
	// register: 4
	register int jj;
}


// address: 0x80153AE4
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


// address: 0x80154554
int FindGetItem__FiUsi(int idx, unsigned short ci, int iseed) {
	// register: 8
	register int i;
	// register: 7
	register int ii;
}


// address: 0x80154608
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


// address: 0x80154794
unsigned char TryInvPut__Fv() {
	{
		{
		}
	}
}


// address: 0x8015495C
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


// address: 0x80154E04
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


// address: 0x80155360
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


// address: 0x801556A8
void RemoveScroll__Fi(int pnum) {
	// register: 5
	register int i;
}


// address: 0x8015588C
unsigned char UseScroll__Fv() {
	// register: 5
	register int i;
}


// address: 0x80155AF4
void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80155B5C
unsigned char UseStaff__Fv() {
}


// address: 0x80155C1C
void StartGoldDrop__Fv() {
}


// address: 0x80155D18
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


// address: 0x8015623C
void DoTelekinesis__Fv() {
}


// address: 0x80156364
long CalculateGold__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 9
	register long gold;
}


// address: 0x8015649C
unsigned char DropItemBeforeTrig__Fv() {
}


// address: 0x801564F4
void ControlInv__Fv() {
}


// address: 0x801567D4
void InvGetItemWH__Fi(int Pos) {
}


// address: 0x801568C8
void InvAlignObject__Fv() {
}


// address: 0x80156A7C
void InvSetItemCurs__Fv() {
	// register: 5
	register int ItemNo;
}


// address: 0x80156C10
void InvMoveCursLeft__Fv() {
	// register: 5
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x80156DFC
void InvMoveCursRight__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x80157124
void InvMoveCursUp__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8015731C
void InvMoveCursDown__Fv() {
	// register: 17
	register int ItemInc;
	// register: 16
	register int OldPos;
}


