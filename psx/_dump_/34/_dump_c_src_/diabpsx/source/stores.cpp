// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x8006355C
void FreeStoreMem__Fv() {
}


// address: 0x80063564
void DrawSTextBack__Fv() {
}


// address: 0x800635D4
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
	// address: 0x8012D040
	static unsigned char DaveFix;
}


// address: 0x800639AC
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80063A40
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063AD8
void AddSLine__Fi(int y) {
}


// address: 0x80063B28
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80063B50
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063C04
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x8006408C
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


// address: 0x800646AC
void S_StartSmith__Fv() {
}


// address: 0x80064834
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x800649EC
void S_StartSBuy__Fv() {
}


// address: 0x80064B1C
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


// address: 0x80064D3C
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064E8C
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064F70
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


// address: 0x80065198
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x800655C8
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x8006566C
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x8006584C
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065D1C
void S_StartWitch__Fv() {
}


// address: 0x80065E5C
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


// address: 0x80066034
void S_StartWBuy__Fv() {
}


// address: 0x80066160
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80066284
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x800668DC
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80066964
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066AE4
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066F04
void S_StartNoMoney__Fv() {
}


// address: 0x80066F6C
void S_StartNoRoom__Fv() {
}


// address: 0x80066FCC
void S_StartConfirm__Fv() {
	// register: 17
	register char iclr;
	// register: 3
	register unsigned char idprint;
	// register: 16
	register char *StrPtr;
}


// address: 0x80067344
void S_StartBoy__Fv() {
}


// address: 0x800674D4
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006765C
void S_StartHealer__Fv() {
}


// address: 0x80067830
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x8006799C
void S_StartHBuy__Fv() {
}


// address: 0x80067ABC
void S_StartStory__Fv() {
}


// address: 0x80067BAC
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067BE0
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067CB4
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x80068714
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x800688E8
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


// address: 0x80068B18
void S_StartTavern__Fv() {
}


// address: 0x80068C10
void S_StartBarMaid__Fv() {
}


// address: 0x80068CE4
void S_StartDrunk__Fv() {
}


// address: 0x80068DB8
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x800690A0
void DrawSText__Fv() {
}


// address: 0x800690E0
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x800691A8
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80069354
void STextESC__Fv() {
}


// address: 0x800694C8
void STextUp__Fv() {
}


// address: 0x80069660
void STextDown__Fv() {
}


// address: 0x80069810
void S_SmithEnter__Fv() {
}


// address: 0x800698E4
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069960
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800699DC
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069E28
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006A01C
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A240
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006A3C8
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


// address: 0x8006A5F8
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


// address: 0x8006A8B0
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


// address: 0x8006AB14
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006AE08
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006AF0C
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B17C
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B2D8
void S_WitchEnter__Fv() {
}


// address: 0x8006B388
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B588
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B774
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B878
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B9F0
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006BB4C
void S_BoyEnter__Fv() {
}


// address: 0x8006BC84
void BoyBuyItem__Fv() {
}


// address: 0x8006BD08
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BFAC
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C194
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006C4E0
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C5FC
void S_HealerEnter__Fv() {
}


// address: 0x8006C694
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C8A0
void S_StoryEnter__Fv() {
}


// address: 0x8006C938
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006CAB4
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


// address: 0x8006CCAC
void S_TavernEnter__Fv() {
}


// address: 0x8006CD1C
void S_BarmaidEnter__Fv() {
}


// address: 0x8006CD8C
void S_DrunkEnter__Fv() {
}


// address: 0x8006CDFC
void STextEnter__Fv() {
}


// address: 0x8006D008
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006D138
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006D14C
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006D174
void _GLOBAL__I_pSTextBoxCels() {
}


