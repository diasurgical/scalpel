// C:\diabpsx\PSXSRC\PADFUNCS.CPP

#include "types.h"

// address: 0x80096C4C
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


// address: 0x80096E50
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


// address: 0x800972E8
// line start: 246
// line end:   258
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x18
	register struct Spell_Target *spl;
}


// address: 0x8009735C
// line start: 266
// line end:   275
void select_belt_item__Fi(int pnum) {
}


// address: 0x80097364
// line start: 283
// line end:   292
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x800973CC
// line start: 299
// line end:   317
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x800974FC
// line start: 323
// line end:   343
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80097634
// line start: 352
// line end:   354
void pad_func_up__Fi(int pnum) {
}


// address: 0x80097660
// line start: 362
// line end:   364
void pad_func_down__Fi(int pnum) {
}


// address: 0x8009768C
// line start: 372
// line end:   373
void pad_func_left__Fi(int pnum) {
}


// address: 0x80097694
// line start: 380
// line end:   381
void pad_func_right__Fi(int pnum) {
}


// address: 0x8009769C
// line start: 399
// line end:   410
void pad_func_select__Fi(int pnum) {
}


// address: 0x80097758
// line start: 422
// line end:   495
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 20
	register int x;
	// register: 21
	register int y;
}


// address: 0x80097BE4
// line start: 502
// line end:   551
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


// address: 0x80097F30
// line start: 555
// line end:   575
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


// address: 0x80098038
// line start: 579
// line end:   598
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x18
	register struct Spell_Target *spl;
}


// address: 0x800980C8
// line start: 605
// line end:   728
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


// address: 0x800984B0
// line start: 735
// line end:   740
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80098570
// line start: 749
// line end:   762
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x80098678
// line start: 767
// line end:   781
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x80098770
// line start: 787
// line end:   798
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x8009885C
// line start: 803
// line end:   807
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x800988E0
// line start: 821
// line end:   825
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x80098978
// line start: 856
// line end:   867
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80098A34
// line start: 882
// line end:   890
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x80098AB0
// line start: 913
// line end:   950
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


// address: 0x80098C78
// line start: 958
// line end:   959
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x80098CA0
// line start: 969
// line end:   970
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x80098CC8
// line start: 975
// line end:   990
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


// address: 0x80098E08
// line start: 994
// line end:   1012
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80098F14
// line start: 1016
// line end:   1157
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


// address: 0x80099794
// line start: 1161
// line end:   1185
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


// address: 0x80099870
// line start: 1194
// line end:   1200
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x8009997C
// line start: 1209
// line end:   1279
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x80099D3C
// line start: 1284
// line end:   1341
unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 19
	register int x;
	// register: 20
	register int y;
	// register: 17
	register int dir;
	// register: 21
	register int front_range;
	{
		{
			// register: 18
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


// address: 0x8009A014
// line start: 1386
// line end:   1411
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8009A238
// line start: 1412
// line end:   1412
void _GLOBAL__D_gplayer() {
}


// address: 0x8009A260
// line start: 1412
// line end:   1412
void _GLOBAL__I_gplayer() {
}


