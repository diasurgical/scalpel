// C:\diabpsx\SOURCE\GAMEPAD.CPP

#include "types.h"

// address: 0x80072CA4
// line start: 94
// line end:   101
void ClrCursor__Fi(int num) {
}


// address: 0x80072D04
// line start: 110
// line end:   173
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


// address: 0x800731C0
// line start: 184
// line end:   189
void CloseInvChr__Fv() {
}


// address: 0x80073210
// line start: 194
// line end:   197
int LeftOf__Fi(int dir) {
}


// address: 0x80073228
// line start: 201
// line end:   204
int RightOf__Fi(int dir) {
}


// address: 0x80073244
// line start: 213
// line end:   224
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x800732F0
// line start: 272
// line end:   307
char pad_UpIsUpRight__Fic(int pval, char other) {
	// register: 3
	register int walk_dir;
}


// address: 0x800733B4
// size: 0x94
// line start: 320
// line end:   343
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x800734A8
// line start: 352
// line end:   353
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x800734B0
// line start: 362
// line end:   365
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800734F4
// line start: 374
// line end:   377
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80073538
// line start: 418
// line end:   476
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x80073798
// line start: 486
// line end:   539
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80073948
// line start: 547
// line end:   566
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x800739A4
// line start: 574
// line end:   577
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x800739E0
// line start: 586
// line end:   607
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x80073AA4
// line start: 615
// line end:   738
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


// address: 0x80073EB0
// line start: 748
// line end:   782
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 17
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80073FF4
// line start: 789
// line end:   832
bool CheckCentre__FP12PlayerStructi(struct PlayerStruct *player, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
	// register: 6
	register int ret;
}


// address: 0x800740E8
// line start: 843
// line end:   889
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80074200
// line start: 901
// line end:   909
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x80074254
// line start: 917
// line end:   1028
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


// address: 0x80074660
// line start: 1038
// line end:   1102
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80074974
// line start: 1110
// line end:   1179
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


// address: 0x80074D54
// line start: 1189
// line end:   1212
void show_combos__7GamePad(struct GamePad *this) {
	// register: 22
	register int x;
	// register: 21
	register int y;
	{
		// register: 20
		register int i;
	}
}


// address: 0x80074F20
// line start: 1296
// line end:   1536
void Handle__7GamePad(struct GamePad *this) {
	// register: 17
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


// address: 0x800755A0
// line start: 1543
// line end:   1567
void GamePadTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x8007566C
// line start: 1573
// line end:   1629
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 3
	// size: 0x94
	register struct GamePad *GP1;
	// register: 8
	// size: 0x94
	register struct GamePad *GP2;
}


// address: 0x8007577C
// line start: 1635
// line end:   1637
void Init_GamePad__Fv() {
}


// address: 0x800757AC
// line start: 1642
// line end:   1656
void InitGamePadVars__Fv() {
}


// address: 0x8007583C
// line start: 1660
// line end:   1669
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


// address: 0x800758AC
// line start: 1673
// line end:   1676
char GetPadStyle__Fi(int pnum) {
	// register: 2
	// size: 0x94
	register struct GamePad *GPad;
}


// address: 0x800758D0
// line start: 1677
// line end:   1677
void _GLOBAL__I_flyflag() {
}


