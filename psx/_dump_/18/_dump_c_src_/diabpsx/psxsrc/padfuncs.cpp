// C:\diabpsx\PSXSRC\PADFUNCS.CPP

#include "types.h"

// address: 0x800958B8
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


// address: 0x80095ABC
// line start: 130
// line end:   227
void show_spell_dir__Fi(int pnum) {
	// register: 21
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 22
	register int ScrXOff;
	// register: 19
	register int ScrYOff;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 16
	register int cp;
	// register: 18
	// size: 0x24
	register struct Spell_Target *spl;
	// register: 30
	register int otx;
	// register: 23
	register int oty;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT R;
	// address: 0xFFFFFFC0
	// size: 0xE0
	auto struct CBlocks *gblocks;
	// register: 16
	register int ops;
}


// address: 0x80095EC0
// line start: 241
// line end:   290
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x80095F34
// line start: 298
// line end:   307
void select_belt_item__Fi(int pnum) {
}


// address: 0x80095F3C
// line start: 315
// line end:   324
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80095FA4
// line start: 331
// line end:   349
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x800960D4
// line start: 355
// line end:   375
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x8009620C
// line start: 384
// line end:   386
void pad_func_up__Fi(int pnum) {
}


// address: 0x80096238
// line start: 394
// line end:   396
void pad_func_down__Fi(int pnum) {
}


// address: 0x80096264
// line start: 404
// line end:   405
void pad_func_left__Fi(int pnum) {
}


// address: 0x8009626C
// line start: 412
// line end:   413
void pad_func_right__Fi(int pnum) {
}


// address: 0x80096274
// line start: 431
// line end:   444
void pad_func_select__Fi(int pnum) {
}


// address: 0x80096364
// line start: 456
// line end:   531
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 20
	register int x;
	// register: 21
	register int y;
}


// address: 0x80096748
// line start: 538
// line end:   589
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


// address: 0x80096A70
// line start: 593
// line end:   616
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


// address: 0x80096BC0
// line start: 620
// line end:   639
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x80096C50
// line start: 646
// line end:   802
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


// address: 0x8009727C
// line start: 809
// line end:   816
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80097370
// line start: 828
// line end:   841
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x800974AC
// line start: 864
// line end:   876
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x800975CC
// line start: 881
// line end:   892
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x800976E4
// line start: 897
// line end:   901
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80097790
// line start: 915
// line end:   937
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x8009785C
// line start: 975
// line end:   986
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80097974
// line start: 1012
// line end:   1022
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x800979F0
// line start: 1050
// line end:   1086
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 3
	register int ii;
	{
	}
}


// address: 0x80097BC8
// line start: 1094
// line end:   1095
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x80097BF0
// line start: 1105
// line end:   1106
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x80097C18
// line start: 1111
// line end:   1126
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


// address: 0x80097D58
// line start: 1130
// line end:   1157
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80097E64
// line start: 1161
// line end:   1303
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


// address: 0x80098728
// line start: 1307
// line end:   1331
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


// address: 0x80098804
// line start: 1340
// line end:   1346
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x80098910
// line start: 1355
// line end:   1425
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x80098CD0
// line start: 1430
// line end:   1484
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


// address: 0x80098F24
// line start: 1529
// line end:   1554
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80099160
// line start: 1555
// line end:   1555
void _GLOBAL__D_gplayer() {
}


// address: 0x80099188
// line start: 1555
// line end:   1555
void _GLOBAL__I_gplayer() {
}


