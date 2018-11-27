// C:\diabpsx\PSXSRC\PADFUNCS.CPP

#include "types.h"

// address: 0x80093EDC
void DrawArrow__Fii(int x1, int y1) {
	// register: 17
	register int bright;
	{
		// register: 18
		register int i;
	}
}


// address: 0x80094324
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


// address: 0x80094718
void release_spell__Fi(int pnum) {
}


// address: 0x8009477C
void select_belt_item__Fi(int pnum) {
}


// address: 0x80094784
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x800947EC
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80094920
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80094A5C
void pad_func_up__Fi(int pnum) {
}


// address: 0x80094A88
void pad_func_down__Fi(int pnum) {
}


// address: 0x80094AB4
void pad_func_left__Fi(int pnum) {
}


// address: 0x80094ABC
void pad_func_right__Fi(int pnum) {
}


// address: 0x80094AC4
void pad_func_select__Fi(int pnum) {
}


// address: 0x80094BB4
void pad_func_Attack__Fi(int pnum) {
	// register: 17
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 18
	register int x;
	// register: 19
	register int y;
}


// address: 0x80094F24
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


// address: 0x800951F0
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x22D0
	register struct PlayerStruct *player;
	{
		// register: 5
		register int i;
	}
}


// address: 0x800953BC
void RemoveTargetCursor__Fi(int pnum) {
}


// address: 0x80095458
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 16
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 17
	register int sp;
	// register: 19
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 21
	register int omp;
	// register: 4
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


// address: 0x80095B24
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80095C18
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x80095D54
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x80095E74
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x80095F8C
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80096038
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x800960F0
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80096208
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 7
	register int sp;
	// register: 6
	register char spt;
}


// address: 0x80096284
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 3
	register int ii;
	{
	}
}


// address: 0x8009645C
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x80096484
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x800964AC
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


// address: 0x800965EC
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x800966F4
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


// address: 0x80096F54
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


// address: 0x80097030
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x8009713C
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 10
	register char co;
}


// address: 0x80097514
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


// address: 0x80097768
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
}


// address: 0x800979B0
void _GLOBAL__D_gplayer() {
}


// address: 0x800979D8
void _GLOBAL__I_gplayer() {
}


