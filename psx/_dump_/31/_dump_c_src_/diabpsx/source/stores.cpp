// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x80062EC4
void FreeStoreMem__Fv() {
}


// address: 0x80062ECC
void DrawSTextBack__Fv() {
}


// address: 0x80062F3C
void PrintSString__FiiUcPcci(int x, int y, unsigned char cjustflag, char *str, int col, int val) {
	// register: 21
	register int xx;
	// register: 19
	register int yy;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto char valstr[32];
	// register: 30
	register int SpinnerY;
	// register: 20
	register unsigned char R;
	// register: 18
	register unsigned char G;
	// register: 17
	register unsigned char B;
	// address: 0x8012BB20
	static unsigned char DaveFix;
}


// address: 0x80063314
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x800633A8
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063440
void AddSLine__Fi(int y) {
}


// address: 0x80063490
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x800634B8
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x8006356C
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x800639F4
void StoreAutoPlace__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int w;
	// register: 19
	register int h;
	// register: 3
	register int idx;
	// register: 4
	register unsigned char done;
}


// address: 0x80064014
void S_StartSmith__Fv() {
}


// address: 0x8006419C
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80064354
void S_StartSBuy__Fv() {
}


// address: 0x80064484
void S_ScrollSPBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 22
	register int ls;
	// register: 16
	register char iclr;
	// register: 3
	register int boughtitems;
	{
		{
			{
				{
					// register: 16
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x800646A4
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x800647F4
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x800648D8
void S_ScrollSSell__Fi(int idx) {
	// register: 19
	register int l;
	// register: 23
	register int ls;
	// register: 20
	register int v;
	// register: 18
	register char iclr;
	{
		{
			{
				{
					// register: 17
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x80064B00
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80064F30
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x80064FD4
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x800651B4
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065684
void S_StartWitch__Fv() {
}


// address: 0x800657C4
void S_ScrollWBuy__Fi(int idx) {
	// register: 19
	register int l;
	// register: 21
	register int ls;
	// register: 18
	register char iclr;
	{
		{
			{
				{
					// register: 17
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x8006599C
void S_StartWBuy__Fv() {
}


// address: 0x80065AC8
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80065BEC
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80066244
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x800662CC
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006644C
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x8006686C
void S_StartNoMoney__Fv() {
}


// address: 0x800668D4
void S_StartNoRoom__Fv() {
}


// address: 0x80066934
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x80066C84
void S_StartBoy__Fv() {
}


// address: 0x80066E14
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80066F9C
void S_StartHealer__Fv() {
}


// address: 0x80067170
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x800672DC
void S_StartHBuy__Fv() {
}


// address: 0x800673FC
void S_StartStory__Fv() {
}


// address: 0x800674EC
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067520
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x800675F4
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x80068054
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80068228
void S_StartTalk__Fv() {
	// register: 18
	register int i;
	// register: 5
	register int tq;
	// register: 17
	register int sn;
	// register: 22
	register int la;
	// register: 20
	register int gl;
}


// address: 0x80068458
void S_StartTavern__Fv() {
}


// address: 0x80068550
void S_StartBarMaid__Fv() {
}


// address: 0x80068624
void S_StartDrunk__Fv() {
}


// address: 0x800686F8
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x800689E8
void DrawSText__Fv() {
}


// address: 0x80068A28
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80068AF0
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80068C9C
void STextESC__Fv() {
}


// address: 0x80068DF8
void STextUp__Fv() {
}


// address: 0x80068F90
void STextDown__Fv() {
}


// address: 0x80069140
void S_SmithEnter__Fv() {
}


// address: 0x80069214
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069290
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006930C
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069758
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006994C
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80069B70
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x80069CF8
void S_SPBuyEnter__Fv() {
	// register: 5
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
	{
		// register: 3
		register int xx;
	}
}


// address: 0x80069F28
unsigned char StoreGoldFit__Fi(int idx) {
	// register: 18
	register int sz;
	// register: 16
	register int numsqrs;
	// register: 4
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006A1E0
void PlaceStoreGold__Fl(long v) {
	// register: 16
	register int i;
	// register: 18
	register int ii;
	// register: 19
	register int xx;
	// register: 17
	register int yy;
	// register: 5
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


// address: 0x8006A444
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006A738
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006A83C
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006AAAC
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006AC08
void S_WitchEnter__Fv() {
}


// address: 0x8006ACB8
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006AEB8
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B0A4
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B1A8
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B320
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B47C
void S_BoyEnter__Fv() {
}


// address: 0x8006B5B4
void BoyBuyItem__Fv() {
}


// address: 0x8006B638
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B8DC
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006BAB4
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006BE00
void S_ConfirmEnter__Fv() {
}


// address: 0x8006BF1C
void S_HealerEnter__Fv() {
}


// address: 0x8006BFB4
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C1C0
void S_StoryEnter__Fv() {
}


// address: 0x8006C258
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C3D4
void S_TalkEnter__Fv() {
	// register: 16
	register int i;
	// register: 5
	register int tq;
	// register: 18
	register int sn;
	// register: 21
	register int la;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8006C5CC
void S_TavernEnter__Fv() {
}


// address: 0x8006C63C
void S_BarmaidEnter__Fv() {
}


// address: 0x8006C6AC
void S_DrunkEnter__Fv() {
}


// address: 0x8006C71C
void STextEnter__Fv() {
}


// address: 0x8006C91C
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006CA50
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006CA64
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006CA8C
void _GLOBAL__I_pSTextBoxCels() {
}


