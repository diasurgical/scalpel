// C:\diabpsx\PSXSRC\PADFUNCS.CPP

#include "types.h"

// address: 0x800961E8
// line start: 86
// line end:   113
void DrawArrow__Fii(int x1, int y1) {
	// register: 22
	// size: 0x24
	register struct Spell_Target *spl;
	// register: 20
	register char r;
	// register: 18
	register char b;
	{
		// register: 6
		register int ni;
		{
			// register: 30
			register int i;
			// register: 6
			register int ni;
		}
	}
}


// address: 0x800963EC
// line start: 121
// line end:   228
void show_spell_dir__Fi(int pnum) {
	// register: 23
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 16
	register int cp;
	// register: 19
	// size: 0x24
	register struct Spell_Target *spl;
	// address: 0xFFFFFFB8
	auto int otx;
	// register: 30
	register int oty;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT R;
	// address: 0xFFFFFFC0
	// size: 0xE0
	auto struct CBlocks *gblocks;
	// register: 16
	register int ops;
}


// address: 0x80096860
// line start: 240
// line end:   252
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x800968D4
// line start: 260
// line end:   269
void select_belt_item__Fi(int pnum) {
}


// address: 0x800968DC
// line start: 277
// line end:   286
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80096944
// line start: 293
// line end:   311
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80096A74
// line start: 317
// line end:   337
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80096BAC
// line start: 346
// line end:   348
void pad_func_up__Fi(int pnum) {
}


// address: 0x80096BD8
// line start: 356
// line end:   358
void pad_func_down__Fi(int pnum) {
}


// address: 0x80096C04
// line start: 366
// line end:   367
void pad_func_left__Fi(int pnum) {
}


// address: 0x80096C0C
// line start: 374
// line end:   375
void pad_func_right__Fi(int pnum) {
}


// address: 0x80096C14
// line start: 393
// line end:   404
void pad_func_select__Fi(int pnum) {
}


// address: 0x80096CD0
// line start: 416
// line end:   481
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 20
	register int x;
	// register: 21
	register int y;
}


// address: 0x800970F4
// line start: 488
// line end:   537
void pad_func_Action__Fi(int pnum) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 19
	register int x;
	// register: 20
	register int y;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80097408
// line start: 541
// line end:   561
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
	{
		// register: 5
		register int i;
	}
}


// address: 0x80097510
// line start: 565
// line end:   584
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x800975A0
// line start: 591
// line end:   712
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 17
	register int sp;
	// register: 19
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 21
	register int omp;
	// register: 5
	// size: 0x6C
	register struct CPad *pad;
	// register: 20
	register unsigned char DoTarget;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80097B20
// line start: 719
// line end:   724
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80097BE0
// line start: 733
// line end:   746
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x80097CE8
// line start: 751
// line end:   763
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x80097DD4
// line start: 768
// line end:   779
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x80097EC0
// line start: 784
// line end:   788
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80097F44
// line start: 802
// line end:   806
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x80097FDC
// line start: 837
// line end:   848
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80098098
// line start: 863
// line end:   871
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x80098114
// line start: 894
// line end:   931
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 2
	register int ii;
	// register: 20
	// size: 0x23A8
	register struct PlayerStruct *player;
	{
	}
}


// address: 0x800982DC
// line start: 939
// line end:   940
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x80098304
// line start: 950
// line end:   951
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x8009832C
// line start: 956
// line end:   971
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


// address: 0x8009846C
// line start: 975
// line end:   993
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80098578
// line start: 997
// line end:   1137
void DrawObjSelector__Fi(int pnum) {
	// register: 23
	// size: 0x23A8
	register struct PlayerStruct *player;
	// address: 0xFFFFFF40
	// size: 0x1E
	auto char str[30];
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 18
	register int cp;
	// address: 0xFFFFFF60
	auto int list_size;
	// address: 0xFFFFFF68
	auto int maxlen;
	// register: 2
	register int cgold;
	{
		// register: 21
		register int i;
		{
			// register: 9
			register int R;
			// register: 8
			register int G;
			// register: 3
			register int B;
			{
				{
					// register: 17
					register int len;
				}
			}
		}
	}
}


// address: 0x80098E3C
// line start: 1141
// line end:   1165
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


// address: 0x80098F18
// line start: 1174
// line end:   1180
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x80099024
// line start: 1189
// line end:   1259
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x800993E4
// line start: 1264
// line end:   1318
unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum) {
	// register: 2
	// size: 0x23A8
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


// address: 0x80099638
// line start: 1363
// line end:   1388
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8009985C
// line start: 1389
// line end:   1389
void _GLOBAL__D_gplayer() {
}


// address: 0x80099884
// line start: 1389
// line end:   1389
void _GLOBAL__I_gplayer() {
}


