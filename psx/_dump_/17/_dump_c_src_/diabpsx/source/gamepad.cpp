// C:\diabpsx\SOURCE\GAMEPAD.CPP

#include "types.h"

// address: 0x8006F9A8
// line start: 96
// line end:   159
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


// address: 0x8006FE30
// line start: 170
// line end:   178
void CloseInvChr__Fv() {
}


// address: 0x8006FE98
// line start: 187
// line end:   198
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8006FF3C
// line start: 207
// line end:   238
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x8006FFAC
// line start: 247
// line end:   277
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x8007001C
// size: 0x9C
// line start: 290
// line end:   317
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80070148
// line start: 326
// line end:   328
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80070188
// line start: 337
// line end:   340
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800701CC
// line start: 349
// line end:   352
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80070210
// line start: 393
// line end:   451
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x80070480
// line start: 461
// line end:   514
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80070640
// line start: 522
// line end:   541
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x8007069C
// line start: 549
// line end:   552
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x800706D8
// line start: 561
// line end:   589
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x80070778
// line start: 597
// line end:   709
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
}


// address: 0x80070B5C
// line start: 719
// line end:   748
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 16
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80070C30
// line start: 759
// line end:   805
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80070D48
// line start: 816
// line end:   825
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x80070D8C
// line start: 833
// line end:   924
int CheckBodge__7GamePadi(struct GamePad *this, int dir) {
	// register: 20
	register int x;
	// register: 21
	register int y;
	// register: 16
	register int lnd;
	// register: 17
	register int rnd;
	// register: 22
	register int newdir;
	// register: 17
	register int fx;
	// register: 16
	register int fy;
}


// address: 0x80071080
// line start: 934
// line end:   995
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80071350
// line start: 1003
// line end:   1046
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 17
	register int x;
	// register: 18
	register int y;
}


// address: 0x80071578
// line start: 1054
// line end:   1073
void show_combos__7GamePad(struct GamePad *this) {
	// register: 22
	register int x;
	// register: 21
	register int y;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8007172C
// line start: 1194
// line end:   1497
void Handle__7GamePad(struct GamePad *this) {
	// register: 17
	register int cp;
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
						}
					}
				}
			}
		}
	}
}


// address: 0x80071DC8
// line start: 1502
// line end:   1594
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEA8
	// size: 0x9C
	auto struct GamePad GPad1;
	// address: 0xFFFFFF48
	// size: 0x9C
	auto struct GamePad GPad2;
	// register: 18
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80071FC0
// line start: 1600
// line end:   1617
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 2
	// size: 0x5C
	register struct TASK *gtask;
	// register: 16
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80072070
// line start: 1629
// line end:   1630
void Init_GamePad__Fv() {
}


// address: 0x800720A0
// line start: 1635
// line end:   1646
void InitGamePadVars__Fv() {
}


