// C:\diabpsx\SOURCE\GAMEPAD.CPP

#include "types.h"

// address: 0x80072DD0
// line start: 94
// line end:   101
void ClrCursor__Fi(int num) {
}


// address: 0x80072E30
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


// address: 0x800732EC
// line start: 184
// line end:   189
void CloseInvChr__Fv() {
}


// address: 0x8007333C
// line start: 194
// line end:   197
int LeftOf__Fi(int dir) {
}


// address: 0x80073354
// line start: 201
// line end:   204
int RightOf__Fi(int dir) {
}


// address: 0x80073370
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


// address: 0x8007341C
// line start: 272
// line end:   307
char pad_UpIsUpRight__Fic(int pval, char other) {
	// register: 3
	register int walk_dir;
}


// address: 0x800734E0
// size: 0x94
// line start: 320
// line end:   343
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x800735D4
// line start: 352
// line end:   353
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x800735DC
// line start: 362
// line end:   365
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80073620
// line start: 374
// line end:   377
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80073664
// line start: 418
// line end:   476
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x800738C4
// line start: 486
// line end:   539
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80073A74
// line start: 547
// line end:   566
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80073AD0
// line start: 574
// line end:   577
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x80073B0C
// line start: 586
// line end:   607
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x80073BD0
// line start: 615
// line end:   739
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


// address: 0x80073FE8
// line start: 749
// line end:   783
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 17
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x8007412C
// line start: 790
// line end:   833
bool CheckCentre__FP12PlayerStructi(struct PlayerStruct *player, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
	// register: 6
	register int ret;
}


// address: 0x80074220
// line start: 844
// line end:   890
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80074338
// line start: 902
// line end:   910
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x8007438C
// line start: 918
// line end:   1029
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


// address: 0x80074798
// line start: 1039
// line end:   1103
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80074AAC
// line start: 1111
// line end:   1180
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


// address: 0x80074E8C
// line start: 1190
// line end:   1213
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


// address: 0x80075058
// line start: 1297
// line end:   1537
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


// address: 0x800756D8
// line start: 1544
// line end:   1568
void GamePadTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x800757A4
// line start: 1574
// line end:   1630
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 3
	// size: 0x94
	register struct GamePad *GP1;
	// register: 8
	// size: 0x94
	register struct GamePad *GP2;
}


// address: 0x800758B4
// line start: 1636
// line end:   1638
void Init_GamePad__Fv() {
}


// address: 0x800758E4
// line start: 1643
// line end:   1657
void InitGamePadVars__Fv() {
}


// address: 0x80075974
// line start: 1661
// line end:   1670
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


// address: 0x800759E4
// line start: 1674
// line end:   1677
char GetPadStyle__Fi(int pnum) {
	// register: 2
	// size: 0x94
	register struct GamePad *GPad;
}


// address: 0x80075A08
// line start: 1678
// line end:   1678
void _GLOBAL__I_flyflag() {
}


