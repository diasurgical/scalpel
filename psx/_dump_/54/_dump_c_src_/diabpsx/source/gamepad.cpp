// C:\diabpsx\SOURCE\GAMEPAD.CPP

#include "types.h"

// address: 0x80070958
// line start: 94
// line end:   99
void ClrCursor__Fi(int num) {
}


// address: 0x800709A8
// line start: 108
// line end:   171
void flyabout__7GamePad(struct GamePad *this) {
	// register: 16
	register int cp;
	// register: 20
	register int owx;
	// register: 21
	register int owy;
	// register: 18
	register int wx;
	// register: 19
	register int wy;
	// register: 23
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 4
	register int step;
}


// address: 0x80070E64
// line start: 182
// line end:   187
void CloseInvChr__Fv() {
}


// address: 0x80070EB4
// line start: 192
// line end:   195
int LeftOf__Fi(int dir) {
}


// address: 0x80070ECC
// line start: 199
// line end:   202
int RightOf__Fi(int dir) {
}


// address: 0x80070EE8
// line start: 211
// line end:   222
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80070F94
// line start: 270
// line end:   305
char pad_UpIsUpRight__Fic(int pval, char other) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071058
// size: 0x94
// line start: 318
// line end:   341
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x8007114C
// line start: 350
// line end:   351
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80071154
// line start: 360
// line end:   363
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071198
// line start: 372
// line end:   375
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800711DC
// line start: 416
// line end:   474
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x8007143C
// line start: 484
// line end:   537
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x800715EC
// line start: 545
// line end:   564
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80071648
// line start: 572
// line end:   575
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x80071684
// line start: 584
// line end:   605
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x80071748
// line start: 613
// line end:   736
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x80071B54
// line start: 746
// line end:   780
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 17
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80071C98
// line start: 787
// line end:   830
bool CheckCentre__FP12PlayerStructi(struct PlayerStruct *player, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
	// register: 6
	register int ret;
}


// address: 0x80071D8C
// line start: 841
// line end:   887
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80071EA4
// line start: 899
// line end:   907
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x80071EF8
// line start: 915
// line end:   1025
int CheckBodge__7GamePadi(struct GamePad *this, int dir) {
	// register: 20
	register int x;
	// register: 21
	register int y;
	// register: 16
	register int lnd;
	// register: 18
	register int rnd;
	// register: 22
	register int newdir;
	// register: 18
	register int fx;
	// register: 16
	register int fy;
}


// address: 0x80072304
// line start: 1035
// line end:   1095
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80072620
// line start: 1103
// line end:   1167
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 18
	register int x;
	// register: 17
	register int y;
	{
		{
			// register: 16
			// size: 0x98
			register struct ItemStruct *pi;
		}
	}
}


// address: 0x800729C0
// line start: 1177
// line end:   1199
void show_combos__7GamePad(struct GamePad *this) {
	// register: 23
	register int x;
	// register: 21
	register int y;
	{
		// register: 19
		register int i;
	}
}


// address: 0x80072B98
// line start: 1267
// line end:   1502
void Handle__7GamePad(struct GamePad *this) {
	// register: 17
	register int cp;
	{
		{
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


// address: 0x8007321C
// line start: 1507
// line end:   1536
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEC0
	// size: 0x94
	auto struct GamePad GPad1;
	// address: 0xFFFFFF58
	// size: 0x94
	auto struct GamePad GPad2;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80073300
// line start: 1542
// line end:   1598
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 4
	// size: 0x94
	register struct GamePad *GPad1;
	// register: 8
	// size: 0x94
	register struct GamePad *GPad2;
}


// address: 0x800733E4
// line start: 1604
// line end:   1606
void Init_GamePad__Fv() {
}


// address: 0x80073414
// line start: 1611
// line end:   1625
void InitGamePadVars__Fv() {
}


// address: 0x800734A4
// line start: 1629
// line end:   1638
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


// address: 0x80073514
// line start: 1642
// line end:   1645
char GetPadStyle__Fi(int pnum) {
	// register: 2
	// size: 0x94
	register struct GamePad *GPad;
}


