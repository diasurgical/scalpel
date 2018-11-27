// C:\diabpsx\PSXSRC\PADFUNCS.CPP

#include "types.h"

// address: 0x800965F0
void DrawArrow__Fii(int x1, int y1) {
	// register: 22
	// size: 0x1C
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


// address: 0x800967F4
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
	// register: 19
	// size: 0x1C
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


// address: 0x80096C80
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x1C
	register struct Spell_Target *spl;
}


// address: 0x80096CF4
void select_belt_item__Fi(int pnum) {
}


// address: 0x80096CFC
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80096D64
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80096E94
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80096FCC
void pad_func_up__Fi(int pnum) {
}


// address: 0x80096FF8
void pad_func_down__Fi(int pnum) {
}


// address: 0x80097024
void pad_func_left__Fi(int pnum) {
}


// address: 0x8009702C
void pad_func_right__Fi(int pnum) {
}


// address: 0x80097034
void pad_func_select__Fi(int pnum) {
}


// address: 0x800970F0
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 20
	register int x;
	// register: 21
	register int y;
}


// address: 0x8009754C
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


// address: 0x80097898
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	// size: 0x1C
	register struct Spell_Target *spl;
	{
		// register: 8
		register int i;
	}
}


// address: 0x8009799C
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x1C
	register struct Spell_Target *spl;
}


// address: 0x80097A2C
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 19
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 18
	register int sp;
	// register: 16
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 22
	register int omp;
	// register: 5
	// size: 0x6C
	register struct CPad *pad;
	// register: 21
	register unsigned char DoTarget;
}


// address: 0x80097E18
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80097ED8
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x80097FE0
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x800980CC
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x800981B8
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x8009823C
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x800982D4
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80098390
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x8009840C
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


// address: 0x800985D4
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x800985FC
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x80098624
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


// address: 0x80098764
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80098870
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


// address: 0x800990F0
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


// address: 0x800991CC
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x800992D8
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x80099698
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


// address: 0x800998EC
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80099B10
void _GLOBAL__D_gplayer() {
}


// address: 0x80099B38
void _GLOBAL__I_gplayer() {
}


