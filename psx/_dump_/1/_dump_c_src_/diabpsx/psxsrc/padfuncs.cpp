// C:\diabpsx\PSXSRC\PADFUNCS.CPP

#include "types.h"

// address: 0x80093CE8
// line start: 92
// line end:   132
void DrawArrow__Fii(int x1, int y1) {
	// register: 17
	register int bright;
	{
		// register: 18
		register int i;
	}
}


// address: 0x80094130
// line start: 140
// line end:   219
void show_spell_dir__Fi(int pnum) {
	// register: 30
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 22
	register int ScrXOff;
	// register: 21
	register int ScrYOff;
	// register: 16
	register int x;
	// register: 18
	register int y;
	// register: 16
	register int cp;
	// register: 20
	register int otx;
	// register: 19
	register int oty;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT R;
	// register: 23
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 16
	register int ops;
}


// address: 0x80094524
// line start: 233
// line end:   281
void release_spell__Fi(int pnum) {
}


// address: 0x80094588
// line start: 289
// line end:   298
void select_belt_item__Fi(int pnum) {
}


// address: 0x80094590
// line start: 306
// line end:   315
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x800945F8
// line start: 322
// line end:   340
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x8009472C
// line start: 346
// line end:   366
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80094868
// line start: 375
// line end:   377
void pad_func_up__Fi(int pnum) {
}


// address: 0x80094894
// line start: 385
// line end:   387
void pad_func_down__Fi(int pnum) {
}


// address: 0x800948C0
// line start: 395
// line end:   396
void pad_func_left__Fi(int pnum) {
}


// address: 0x800948C8
// line start: 403
// line end:   404
void pad_func_right__Fi(int pnum) {
}


// address: 0x800948D0
// line start: 422
// line end:   435
void pad_func_select__Fi(int pnum) {
}


// address: 0x800949C0
// line start: 445
// line end:   507
void pad_func_Attack__Fi(int pnum) {
	// register: 17
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 18
	register int x;
	// register: 19
	register int y;
}


// address: 0x80094D30
// line start: 514
// line end:   559
void pad_func_Action__Fi(int pnum) {
	// register: 16
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 18
	register int x;
	// register: 19
	register int y;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80094FFC
// line start: 563
// line end:   585
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x22D0
	register struct PlayerStruct *player;
	{
		// register: 5
		register int i;
	}
}


// address: 0x800951C8
// line start: 589
// line end:   605
void RemoveTargetCursor__Fi(int pnum) {
}


// address: 0x80095264
// line start: 612
// line end:   768
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 19
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 18
	register int sp;
	// register: 16
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 21
	register int omp;
	// register: 4
	// size: 0x6C
	register struct CPad *pad;
	// register: 20
	register unsigned char DoTarget;
}


// address: 0x80095784
// line start: 775
// line end:   782
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80095878
// line start: 794
// line end:   807
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x800959B4
// line start: 830
// line end:   842
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x80095AD4
// line start: 847
// line end:   858
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x80095BEC
// line start: 863
// line end:   867
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80095C98
// line start: 881
// line end:   902
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x80095D50
// line start: 941
// line end:   952
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80095E68
// line start: 978
// line end:   988
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 7
	register int sp;
	// register: 6
	register char spt;
}


// address: 0x80095EE4
// line start: 1016
// line end:   1052
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 3
	register int ii;
	{
	}
}


// address: 0x800960BC
// line start: 1060
// line end:   1061
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x800960E4
// line start: 1071
// line end:   1072
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x8009610C
// line start: 1077
// line end:   1092
int get_max_find_size__FPici(int *lsize, char mask, int pnum) {
	// register: 19
	register int maxlen;
	// register: 18
	register int size;
	{
		// register: 17
		register int i;
		{
			{
				{
					// register: 3
					register int l;
				}
			}
		}
	}
}


// address: 0x8009624C
// line start: 1096
// line end:   1123
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80096354
// line start: 1127
// line end:   1259
void DrawObjSelector__Fi(int pnum) {
	// register: 19
	// size: 0x22D0
	register struct PlayerStruct *player;
	// address: 0xFFFFFF48
	// size: 0x1E
	auto char str[30];
	// register: 18
	// size: 0x6C
	register struct CPad *Pad;
	// address: 0xFFFFFF68
	auto int list_size;
	// address: 0xFFFFFF70
	auto int maxlen;
	// register: 2
	register int cgold;
	{
		// register: 21
		register int i;
		{
			{
				{
					// register: 17
					register int len;
				}
			}
		}
	}
}


// address: 0x80096BB4
// line start: 1263
// line end:   1287
void DrawObjTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 17
	register int pnum;
	{
		// register: 16
		register int oseldata;
	}
}


// address: 0x80096C90
// line start: 1296
// line end:   1302
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x80096D9C
// line start: 1311
// line end:   1381
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 10
	register char co;
}


// address: 0x80097174
// line start: 1386
// line end:   1440
unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum) {
	// register: 2
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 18
	register int x;
	// register: 20
	register int y;
	// register: 16
	register int dir;
	// register: 19
	register int front_range;
	{
		{
			// register: 17
			register int i;
			{
				// register: 17
				register int l;
				{
					{
						// register: 19
						register int j;
						{
							{
								// register: 16
								register int i;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800973C8
// line start: 1485
// line end:   1508
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
}


// address: 0x80097610
// line start: 1509
// line end:   1509
void _GLOBAL__D_gplayer() {
}


// address: 0x80097638
// line start: 1509
// line end:   1509
void _GLOBAL__I_gplayer() {
}


