// C:\diabpsx\PSXSRC\PADFUNCS.CPP

#include "types.h"

// address: 0x800994DC
// line start: 90
// line end:   117
void DrawArrow__Fii(int x1, int y1) {
	// register: 22
	// size: 0x18
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


// address: 0x800996E0
// line start: 125
// line end:   234
void show_spell_dir__Fi(int pnum) {
	// register: 20
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 18
	// size: 0x18
	register struct Spell_Target *spl;
	// register: 22
	register int otx;
	// register: 21
	register int oty;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT R;
	// register: 16
	register int cp;
	// register: 23
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 16
	register int ops;
}


// address: 0x80099A14
// line start: 246
// line end:   258
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x18
	register struct Spell_Target *spl;
}


// address: 0x80099A88
// line start: 266
// line end:   275
void select_belt_item__Fi(int pnum) {
}


// address: 0x80099A90
// line start: 283
// line end:   292
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80099AF8
// line start: 299
// line end:   317
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80099C28
// line start: 323
// line end:   343
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80099D60
// line start: 352
// line end:   354
void pad_func_up__Fi(int pnum) {
}


// address: 0x80099D8C
// line start: 362
// line end:   364
void pad_func_down__Fi(int pnum) {
}


// address: 0x80099DB8
// line start: 372
// line end:   373
void pad_func_left__Fi(int pnum) {
}


// address: 0x80099DC0
// line start: 380
// line end:   381
void pad_func_right__Fi(int pnum) {
}


// address: 0x80099DC8
// line start: 399
// line end:   410
void pad_func_select__Fi(int pnum) {
}


// address: 0x80099E84
// line start: 422
// line end:   521
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	register int x;
	// register: 20
	register int y;
	{
		{
			{
				{
					{
						{
							// register: 21
							register int oco;
							// register: 17
							// size: 0x4
							register struct found_objects *fo;
							{
								// register: 4
								register int i;
								{
									{
										{
											// register: 16
											register int fx;
											// register: 17
											register int fy;
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


// address: 0x8009A444
// line start: 528
// line end:   577
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


// address: 0x8009A790
// line start: 581
// line end:   601
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	// size: 0x18
	register struct Spell_Target *spl;
	{
		// register: 8
		register int i;
	}
}


// address: 0x8009A898
// line start: 605
// line end:   624
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x18
	register struct Spell_Target *spl;
}


// address: 0x8009A928
// line start: 631
// line end:   757
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 19
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 18
	register int sp;
	// register: 16
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 21
	register int omp;
	// register: 5
	// size: 0x6C
	register struct CPad *pad;
	// register: 20
	register unsigned char DoTarget;
}


// address: 0x8009AD28
// line start: 764
// line end:   769
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x8009ADE8
// line start: 778
// line end:   791
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x8009AEF0
// line start: 796
// line end:   810
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x8009AFE8
// line start: 816
// line end:   827
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x8009B0D4
// line start: 832
// line end:   836
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x8009B158
// line start: 850
// line end:   854
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x8009B1F0
// line start: 885
// line end:   896
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x8009B2AC
// line start: 911
// line end:   919
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x8009B328
// line start: 942
// line end:   979
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


// address: 0x8009B4F0
// line start: 987
// line end:   988
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x8009B518
// line start: 998
// line end:   999
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x8009B540
// line start: 1004
// line end:   1019
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


// address: 0x8009B680
// line start: 1023
// line end:   1043
int sort_gold__Fi(int pnum) {
	// register: 19
	register int num_gold_items;
	// register: 17
	// size: 0x4
	register struct found_objects *fo;
	{
		// register: 18
		register int i;
	}
}


// address: 0x8009B784
// line start: 1047
// line end:   1185
void DrawObjSelector__Fi(int pnum) {
	// register: 23
	// size: 0x23A8
	register struct PlayerStruct *player;
	// address: 0xFFFFFF50
	// size: 0x1E
	auto char str[30];
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 18
	register int cp;
	// address: 0xFFFFFF70
	auto int list_size;
	// address: 0xFFFFFF78
	auto int maxlen;
	// register: 2
	register int cgold;
	// address: 0xFFFFFF80
	// size: 0x4
	auto struct found_objects *fo;
	// register: 9
	register int R;
	// register: 8
	register int G;
	// register: 3
	register int B;
	{
		// register: 22
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


// address: 0x8009C018
// line start: 1189
// line end:   1213
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


// address: 0x8009C0F4
// line start: 1222
// line end:   1228
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x8009C200
// line start: 1237
// line end:   1308
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
	// register: 4
	register int vis_flag;
}


// address: 0x8009C5D0
// line start: 1313
// line end:   1377
unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 19
	register int x;
	// register: 20
	register int y;
	// register: 23
	register int dir;
	// register: 30
	register int front_range;
	{
		{
			// register: 21
			register int i;
			{
				// register: 17
				register int l;
				{
					{
						// register: 18
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


// address: 0x8009C944
// line start: 1422
// line end:   1443
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8009CB68
// line start: 1444
// line end:   1444
void _GLOBAL__D_gplayer() {
}


// address: 0x8009CB90
// line start: 1444
// line end:   1444
void _GLOBAL__I_gplayer() {
}


