// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x80063548
void FreeStoreMem__Fv() {
}


// address: 0x80063550
void DrawSTextBack__Fv() {
}


// address: 0x800635C0
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
	// address: 0x8012BA38
	static unsigned char DaveFix;
}


// address: 0x80063998
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80063A2C
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063AC4
void AddSLine__Fi(int y) {
}


// address: 0x80063B14
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80063B3C
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063BF0
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x80064078
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


// address: 0x80064698
void S_StartSmith__Fv() {
}


// address: 0x80064820
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x800649D8
void S_StartSBuy__Fv() {
}


// address: 0x80064B08
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


// address: 0x80064D28
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064E78
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064F5C
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


// address: 0x80065184
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x800655B4
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x80065658
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80065838
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065D08
void S_StartWitch__Fv() {
}


// address: 0x80065E48
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


// address: 0x80066020
void S_StartWBuy__Fv() {
}


// address: 0x8006614C
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80066270
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x800668C8
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80066950
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066AD0
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066EF0
void S_StartNoMoney__Fv() {
}


// address: 0x80066F58
void S_StartNoRoom__Fv() {
}


// address: 0x80066FB8
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x80067308
void S_StartBoy__Fv() {
}


// address: 0x80067498
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x800675F4
void S_StartHealer__Fv() {
}


// address: 0x800677C8
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x80067934
void S_StartHBuy__Fv() {
}


// address: 0x80067A54
void S_StartStory__Fv() {
}


// address: 0x80067B44
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067B78
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067C4C
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x800686AC
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80068880
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


// address: 0x80068AB0
void S_StartTavern__Fv() {
}


// address: 0x80068BA8
void S_StartBarMaid__Fv() {
}


// address: 0x80068C7C
void S_StartDrunk__Fv() {
}


// address: 0x80068D50
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80069040
void DrawSText__Fv() {
}


// address: 0x80069080
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80069148
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x800692F4
void STextESC__Fv() {
}


// address: 0x80069470
void STextUp__Fv() {
}


// address: 0x800695F8
void STextDown__Fv() {
}


// address: 0x80069790
void S_SmithEnter__Fv() {
}


// address: 0x80069864
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800698E0
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006995C
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069DA8
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80069F9C
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A1C0
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006A348
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


// address: 0x8006A578
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


// address: 0x8006A830
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


// address: 0x8006AA94
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006AD88
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006AE8C
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B0FC
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B258
void S_WitchEnter__Fv() {
}


// address: 0x8006B308
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B508
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B6F4
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B7F8
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B970
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006BACC
void S_BoyEnter__Fv() {
}


// address: 0x8006BC04
void BoyBuyItem__Fv() {
}


// address: 0x8006BC88
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BF2C
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C104
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006C450
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C56C
void S_HealerEnter__Fv() {
}


// address: 0x8006C604
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C810
void S_StoryEnter__Fv() {
}


// address: 0x8006C8A8
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006CA24
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


// address: 0x8006CC1C
void S_TavernEnter__Fv() {
}


// address: 0x8006CC8C
void S_BarmaidEnter__Fv() {
}


// address: 0x8006CCFC
void S_DrunkEnter__Fv() {
}


// address: 0x8006CD6C
void STextEnter__Fv() {
}


// address: 0x8006CF6C
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006D088
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006D09C
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006D0C4
void _GLOBAL__I_pSTextBoxCels() {
}


