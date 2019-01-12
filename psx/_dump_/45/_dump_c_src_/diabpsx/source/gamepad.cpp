// C:\diabpsx\SOURCE\GAMEPAD.CPP

#include "types.h"

// address: 0x8007077C
// line start: 94
// line end:   99
void ClrCursor__Fi(int num) {
}


// address: 0x800707CC
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


// address: 0x80070C88
// line start: 182
// line end:   186
void CloseInvChr__Fv() {
}


// address: 0x80070CD0
// line start: 195
// line end:   206
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80070D7C
// line start: 215
// line end:   246
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80070DEC
// line start: 255
// line end:   285
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80070E5C
// size: 0x9C
// line start: 298
// line end:   321
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80070F54
// line start: 330
// line end:   332
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80070F94
// line start: 341
// line end:   344
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80070FD8
// line start: 353
// line end:   356
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x8007101C
// line start: 397
// line end:   455
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x8007127C
// line start: 465
// line end:   518
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x8007142C
// line start: 526
// line end:   545
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80071488
// line start: 553
// line end:   556
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x800714C4
// line start: 565
// line end:   586
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x80071588
// line start: 594
// line end:   717
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


// address: 0x80071994
// line start: 727
// line end:   761
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 17
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80071AD8
// line start: 768
// line end:   811
bool CheckCentre__FP12PlayerStructi(struct PlayerStruct *player, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
	// register: 6
	register int ret;
}


// address: 0x80071BCC
// line start: 822
// line end:   868
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80071CE4
// line start: 880
// line end:   883
int LeftOf__Fi(int dir) {
}


// address: 0x80071CFC
// line start: 887
// line end:   890
int RightOf__Fi(int dir) {
}


// address: 0x80071D18
// line start: 894
// line end:   902
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x80071D6C
// line start: 910
// line end:   1019
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


// address: 0x80072178
// line start: 1029
// line end:   1091
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80072484
// line start: 1099
// line end:   1163
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


// address: 0x80072824
// line start: 1173
// line end:   1195
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


// address: 0x800729FC
// line start: 1263
// line end:   1498
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


// address: 0x80073084
// line start: 1503
// line end:   1532
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEB0
	// size: 0x9C
	auto struct GamePad GPad1;
	// address: 0xFFFFFF50
	// size: 0x9C
	auto struct GamePad GPad2;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80073154
// line start: 1538
// line end:   1594
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 4
	// size: 0x9C
	register struct GamePad *GPad1;
	// register: 8
	// size: 0x9C
	register struct GamePad *GPad2;
}


// address: 0x80073238
// line start: 1600
// line end:   1602
void Init_GamePad__Fv() {
}


// address: 0x80073268
// line start: 1607
// line end:   1621
void InitGamePadVars__Fv() {
}


// address: 0x800732F8
// line start: 1625
// line end:   1634
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


