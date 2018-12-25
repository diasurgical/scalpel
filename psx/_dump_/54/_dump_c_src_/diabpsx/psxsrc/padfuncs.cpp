// C:\diabpsx\PSXSRC\PADFUNCS.CPP

#include "types.h"

// address: 0x8009690C
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


// address: 0x80096B10
// line start: 125
// line end:   234
void show_spell_dir__Fi(int pnum) {
	// register: 23
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 20
	// size: 0x18
	register struct Spell_Target *spl;
	// address: 0xFFFFFFB8
	auto int otx;
	// register: 30
	register int oty;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT R;
	// register: 16
	register int cp;
	// address: 0xFFFFFFC0
	// size: 0xE0
	auto struct CBlocks *gblocks;
	// register: 16
	register int ops;
}


// address: 0x80096FA8
// line start: 246
// line end:   258
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x18
	register struct Spell_Target *spl;
}


// address: 0x8009701C
// line start: 266
// line end:   275
void select_belt_item__Fi(int pnum) {
}


// address: 0x80097024
// line start: 283
// line end:   292
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x8009708C
// line start: 299
// line end:   317
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x800971BC
// line start: 323
// line end:   343
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x800972F4
// line start: 352
// line end:   354
void pad_func_up__Fi(int pnum) {
}


// address: 0x80097320
// line start: 362
// line end:   364
void pad_func_down__Fi(int pnum) {
}


// address: 0x8009734C
// line start: 372
// line end:   373
void pad_func_left__Fi(int pnum) {
}


// address: 0x80097354
// line start: 380
// line end:   381
void pad_func_right__Fi(int pnum) {
}


// address: 0x8009735C
// line start: 399
// line end:   410
void pad_func_select__Fi(int pnum) {
}


// address: 0x80097418
// line start: 422
// line end:   492
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 20
	register int x;
	// register: 21
	register int y;
}


// address: 0x8009788C
// line start: 499
// line end:   548
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


// address: 0x80097BD8
// line start: 552
// line end:   572
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


// address: 0x80097CE0
// line start: 576
// line end:   595
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x18
	register struct Spell_Target *spl;
}


// address: 0x80097D70
// line start: 602
// line end:   725
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


// address: 0x80098158
// line start: 732
// line end:   737
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80098218
// line start: 746
// line end:   759
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x80098320
// line start: 764
// line end:   778
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x80098418
// line start: 784
// line end:   795
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x80098504
// line start: 800
// line end:   804
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80098588
// line start: 818
// line end:   822
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x80098620
// line start: 853
// line end:   864
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x800986DC
// line start: 879
// line end:   887
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x80098758
// line start: 910
// line end:   947
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


// address: 0x80098920
// line start: 955
// line end:   956
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x80098948
// line start: 966
// line end:   967
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x80098970
// line start: 972
// line end:   987
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


// address: 0x80098AB0
// line start: 991
// line end:   1009
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80098BBC
// line start: 1013
// line end:   1154
void DrawObjSelector__Fi(int pnum) {
	// register: 23
	// size: 0x23A8
	register struct PlayerStruct *player;
	// address: 0xFFFFFF58
	// size: 0x1E
	auto char str[30];
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 18
	register int cp;
	// address: 0xFFFFFF78
	auto int list_size;
	// address: 0xFFFFFF80
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


// address: 0x8009943C
// line start: 1158
// line end:   1182
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


// address: 0x80099518
// line start: 1191
// line end:   1197
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x80099624
// line start: 1206
// line end:   1276
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x800999E4
// line start: 1281
// line end:   1335
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


// address: 0x80099C38
// line start: 1380
// line end:   1405
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80099E5C
// line start: 1406
// line end:   1406
void _GLOBAL__D_gplayer() {
}


// address: 0x80099E84
// line start: 1406
// line end:   1406
void _GLOBAL__I_gplayer() {
}


