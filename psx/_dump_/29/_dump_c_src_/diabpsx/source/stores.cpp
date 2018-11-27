// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x80062DB0
void FreeStoreMem__Fv() {
}


// address: 0x80062DB8
void DrawSTextBack__Fv() {
}


// address: 0x80062E28
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
	// address: 0x8012B814
	static unsigned char DaveFix;
}


// address: 0x80063200
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80063294
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x8006332C
void AddSLine__Fi(int y) {
}


// address: 0x8006337C
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x800633A4
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063458
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x800638E0
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


// address: 0x80063F00
void S_StartSmith__Fv() {
}


// address: 0x80064088
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80064240
void S_StartSBuy__Fv() {
}


// address: 0x80064370
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


// address: 0x80064590
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x800646E0
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x800647C4
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


// address: 0x800649EC
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80064E1C
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x80064EC0
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x800650A0
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065570
void S_StartWitch__Fv() {
}


// address: 0x800656B0
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


// address: 0x80065888
void S_StartWBuy__Fv() {
}


// address: 0x800659B4
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80065AD8
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80066130
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x800661B8
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066338
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066758
void S_StartNoMoney__Fv() {
}


// address: 0x800667C0
void S_StartNoRoom__Fv() {
}


// address: 0x80066820
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x80066B70
void S_StartBoy__Fv() {
}


// address: 0x80066D00
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80066E88
void S_StartHealer__Fv() {
}


// address: 0x8006705C
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x800671C8
void S_StartHBuy__Fv() {
}


// address: 0x800672E8
void S_StartStory__Fv() {
}


// address: 0x800673D8
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x8006740C
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x800674E0
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x80067F40
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80068114
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


// address: 0x80068344
void S_StartTavern__Fv() {
}


// address: 0x8006843C
void S_StartBarMaid__Fv() {
}


// address: 0x80068510
void S_StartDrunk__Fv() {
}


// address: 0x800685E4
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x800688D4
void DrawSText__Fv() {
}


// address: 0x80068914
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x800689DC
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80068B88
void STextESC__Fv() {
}


// address: 0x80068CE4
void STextUp__Fv() {
}


// address: 0x80068E7C
void STextDown__Fv() {
}


// address: 0x8006902C
void S_SmithEnter__Fv() {
}


// address: 0x80069100
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006917C
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800691F8
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069644
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80069838
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80069A5C
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x80069BE4
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


// address: 0x80069E14
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


// address: 0x8006A0CC
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


// address: 0x8006A330
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006A624
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006A728
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006A998
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006AAF4
void S_WitchEnter__Fv() {
}


// address: 0x8006ABA4
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006ADA4
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006AF90
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B094
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B20C
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B368
void S_BoyEnter__Fv() {
}


// address: 0x8006B4A0
void BoyBuyItem__Fv() {
}


// address: 0x8006B524
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B7C8
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B9A0
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006BCEC
void S_ConfirmEnter__Fv() {
}


// address: 0x8006BE08
void S_HealerEnter__Fv() {
}


// address: 0x8006BEA0
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C0AC
void S_StoryEnter__Fv() {
}


// address: 0x8006C144
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C2C0
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


// address: 0x8006C4B8
void S_TavernEnter__Fv() {
}


// address: 0x8006C528
void S_BarmaidEnter__Fv() {
}


// address: 0x8006C598
void S_DrunkEnter__Fv() {
}


// address: 0x8006C608
void STextEnter__Fv() {
}


// address: 0x8006C808
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006C92C
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006C940
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006C968
void _GLOBAL__I_pSTextBoxCels() {
}


