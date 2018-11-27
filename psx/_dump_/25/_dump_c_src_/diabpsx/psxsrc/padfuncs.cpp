// C:\diabpsx\PSXSRC\PADFUNCS.CPP

#include "types.h"

// address: 0x80096300
// line start: 95
// line end:   122
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


// address: 0x80096504
// line start: 130
// line end:   237
void show_spell_dir__Fi(int pnum) {
	// address: 0xFFFFFFB8
	// size: 0x23A8
	auto struct PlayerStruct *player;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 16
	register int cp;
	// register: 19
	// size: 0x24
	register struct Spell_Target *spl;
	// register: 30
	register int otx;
	// register: 23
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


// address: 0x80096968
// line start: 251
// line end:   300
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x800969DC
// line start: 308
// line end:   317
void select_belt_item__Fi(int pnum) {
}


// address: 0x800969E4
// line start: 325
// line end:   334
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80096A4C
// line start: 341
// line end:   359
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80096B7C
// line start: 365
// line end:   385
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80096CB4
// line start: 394
// line end:   396
void pad_func_up__Fi(int pnum) {
}


// address: 0x80096CE0
// line start: 404
// line end:   406
void pad_func_down__Fi(int pnum) {
}


// address: 0x80096D0C
// line start: 414
// line end:   415
void pad_func_left__Fi(int pnum) {
}


// address: 0x80096D14
// line start: 422
// line end:   423
void pad_func_right__Fi(int pnum) {
}


// address: 0x80096D1C
// line start: 441
// line end:   454
void pad_func_select__Fi(int pnum) {
}


// address: 0x80096E0C
// line start: 466
// line end:   541
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 20
	register int x;
	// register: 21
	register int y;
}


// address: 0x80097200
// line start: 548
// line end:   599
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


// address: 0x80097528
// line start: 603
// line end:   626
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


// address: 0x80097630
// line start: 630
// line end:   649
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x800976C0
// line start: 656
// line end:   816
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 17
	register int sp;
	// register: 20
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 21
	register int omp;
	// register: 4
	// size: 0x6C
	register struct CPad *pad;
	// register: 19
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


// address: 0x80097D4C
// line start: 823
// line end:   830
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80097E40
// line start: 842
// line end:   855
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x80097F7C
// line start: 878
// line end:   890
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x8009809C
// line start: 895
// line end:   906
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x800981B4
// line start: 911
// line end:   915
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80098260
// line start: 929
// line end:   951
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x8009832C
// line start: 989
// line end:   1000
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80098444
// line start: 1026
// line end:   1036
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x800984C0
// line start: 1064
// line end:   1100
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 3
	register int ii;
	{
	}
}


// address: 0x80098698
// line start: 1108
// line end:   1109
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x800986C0
// line start: 1119
// line end:   1120
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x800986E8
// line start: 1125
// line end:   1140
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


// address: 0x80098828
// line start: 1144
// line end:   1171
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80098934
// line start: 1175
// line end:   1317
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


// address: 0x800991F8
// line start: 1321
// line end:   1345
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


// address: 0x800992D4
// line start: 1354
// line end:   1360
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x800993E0
// line start: 1369
// line end:   1439
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x800997A0
// line start: 1444
// line end:   1498
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


// address: 0x800999F4
// line start: 1543
// line end:   1568
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80099C18
// line start: 1569
// line end:   1569
void _GLOBAL__D_gplayer() {
}


// address: 0x80099C40
// line start: 1569
// line end:   1569
void _GLOBAL__I_gplayer() {
}


