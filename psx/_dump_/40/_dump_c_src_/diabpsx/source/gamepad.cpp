// C:\diabpsx\SOURCE\GAMEPAD.CPP

#include "types.h"

// address: 0x80077AE0
// line start: 113
// line end:   122
void ClrCursor__Fi(int num) {
}


// address: 0x80077B3C
// line start: 127
// line end:   128
void HappyMan__Fi(int n) {
}


// address: 0x80077B4C
// line start: 136
// line end:   205
void flyabout__7GamePad(struct GamePad *this) {
	// register: 16
	register int cp;
	// register: 20
	register int owx;
	// register: 21
	register int owy;
	// register: 17
	register int wx;
	// register: 18
	register int wy;
	// register: 23
	// size: 0x108
	register struct CBlocks *gblocks;
	// register: 4
	register int step;
}


// address: 0x80077F48
// line start: 216
// line end:   220
void CloseInvChr__Fv() {
}


// address: 0x80077F90
// line start: 268
// line end:   280
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80078010
// line start: 351
// line end:   391
char pad_UpIsUpRight__Fic(int pval, char other) {
	// register: 3
	register int walk_dir;
}


// address: 0x800780CC
// size: 0xD4
// line start: 404
// line end:   426
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80078180
// line start: 440
// line end:   441
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80078188
// line start: 450
// line end:   453
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800781CC
// line start: 462
// line end:   465
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80078210
// line start: 504
// line end:   564
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x80078478
// line start: 574
// line end:   630
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80078630
// line start: 638
// line end:   657
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x8007868C
// line start: 665
// line end:   668
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x800786C8
// line start: 678
// line end:   708
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x800787B4
// line start: 716
// line end:   868
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80078BCC
// line start: 884
// line end:   935
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 16
	register int hand;
	// register: 18
	register int joydown;
}


// address: 0x80078CD8
// line start: 942
// line end:   985
bool CheckCentre__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
	// register: 6
	register int ret;
}


// address: 0x80078DD0
// line start: 996
// line end:   998
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x80078E00
// line start: 1043
// line end:   1084
int CheckDirs__7GamePadiii(struct GamePad *this, int dir, int wx, int wy) {
}


// address: 0x80078F08
// line start: 1095
// line end:   1103
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x80078F48
// line start: 1108
// line end:   1120
bool newDirOk__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int x;
	// register: 6
	register int y;
	{
		{
			// register: 6
			register int wx;
			// register: 7
			register int wy;
		}
	}
}


// address: 0x80078FF8
// line start: 1124
// line end:   1207
int CheckDiagBodge__7GamePadi(struct GamePad *this, int dir) {
	// address: 0xFFFFFF90
	auto int x;
	// address: 0xFFFFFF98
	auto int y;
	// register: 30
	register int lnd;
	// register: 23
	register int rnd;
	// address: 0xFFFFFFA0
	auto int wx;
	// address: 0xFFFFFFA8
	auto int wy;
	// register: 19
	register char *poffset_x;
	// register: 20
	register char *poffset_y;
	// register: 22
	register bool pl;
	// register: 21
	register bool pr;
	// address: 0xFFFFFFB0
	auto bool pf;
	// address: 0xFFFFFFB8
	auto bool pll;
	// address: 0xFFFFFFC0
	auto bool prr;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x800792EC
// line start: 1218
// line end:   1281
int CheckIsoBodge__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int x;
	// register: 6
	register int y;
	// register: 17
	register int newdir;
	// register: 21
	register int wx;
	// register: 22
	register int wy;
	// address: 0xFFFFFFB0
	auto int lnd;
	// address: 0xFFFFFFB8
	auto int rnd;
	// register: 18
	register char *poffset_x;
	// register: 19
	register char *poffset_y;
	{
		{
		}
	}
}


// address: 0x80079658
// line start: 1290
// line end:   1329
int CheckBodge__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int fx;
	// register: 6
	register int fy;
	// register: 4
	// size: 0x8
	register struct map_info *dm;
	{
		{
			// register: 5
			register int wx;
			// register: 6
			register int wy;
		}
	}
}


// address: 0x800797B8
// line start: 1339
// line end:   1406
void walk__7GamePadi(struct GamePad *this, int cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
	// register: 3
	// size: 0x19E8
	register struct PlayerStruct *plr2;
	{
		{
		}
	}
}


// address: 0x80079B00
// line start: 1414
// line end:   1481
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 19
	register int x;
	// register: 18
	register int y;
	{
		{
			{
				{
					// register: 16
					// size: 0x6C
					register struct ItemStruct *pi;
				}
			}
		}
	}
}


// address: 0x80079E3C
// line start: 1490
// line end:   1527
void show_combos__7GamePad(struct GamePad *this) {
	// register: 21
	register int y;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT crect;
	// register: 22
	// size: 0x4
	register enum TXT_JUST J;
	{
		// register: 20
		register int i;
	}
}


// address: 0x8007A0C8
// line start: 1554
// line end:   1908
void Handle__7GamePad(struct GamePad *this) {
	// register: 18
	register int cp;
	{
		{
			// register: 6
			register unsigned long msk;
			{
				{
					{
						{
							{
								{
									{
										{
											// register: 2
											register int abut;
											{
												{
													// register: 16
													register int owait;
													{
														{
															// register: 5
															register int dir;
															{
																{
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
	}
}


// address: 0x8007A7C4
// line start: 1914
// line end:   1940
void GamePadTask__FP4TASK(struct TASK *T) {
	// register: 17
	register int omp;
	// register: 18
	register int oms;
}


// address: 0x8007A8BC
// size: 0xD4
// line start: 1945
// line end:   1946
struct GamePad *GetGamePad__Fi(int pnum) {
}


// address: 0x8007A8DC
// line start: 1952
// line end:   2008
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 3
	// size: 0xD4
	register struct GamePad *GP1;
	// register: 8
	// size: 0xD4
	register struct GamePad *GP2;
}


// address: 0x8007A9E0
// line start: 2014
// line end:   2016
void Init_GamePad__Fv() {
}


// address: 0x8007AA10
// line start: 2021
// line end:   2075
void InitGamePadVars__Fv() {
}


// address: 0x8007AB9C
// line start: 2079
// line end:   2088
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


// address: 0x8007AC0C
// line start: 2092
// line end:   2095
char GetPadStyle__Fi(int pnum) {
	// register: 2
	// size: 0xD4
	register struct GamePad *GPad;
}


// address: 0x8007AC30
// line start: 2096
// line end:   2096
void _GLOBAL__I_flyflag() {
}


