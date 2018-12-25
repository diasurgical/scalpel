// C:\diabpsx\PSXSRC\PADFUNCS.CPP

#include "types.h"

// address: 0x80095A08
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


// address: 0x80095C0C
// line start: 130
// line end:   227
void show_spell_dir__Fi(int pnum) {
	// register: 30
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 21
	register int ScrXOff;
	// register: 20
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
	// register: 23
	register int otx;
	// register: 22
	register int oty;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT R;
	// address: 0xFFFFFFC8
	// size: 0xE0
	auto struct CBlocks *gblocks;
	// register: 16
	register int ops;
}


// address: 0x80095F98
// line start: 241
// line end:   290
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x8009600C
// line start: 298
// line end:   307
void select_belt_item__Fi(int pnum) {
}


// address: 0x80096014
// line start: 315
// line end:   324
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x8009607C
// line start: 331
// line end:   349
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x800961AC
// line start: 355
// line end:   375
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x800962E4
// line start: 384
// line end:   386
void pad_func_up__Fi(int pnum) {
}


// address: 0x80096310
// line start: 394
// line end:   396
void pad_func_down__Fi(int pnum) {
}


// address: 0x8009633C
// line start: 404
// line end:   405
void pad_func_left__Fi(int pnum) {
}


// address: 0x80096344
// line start: 412
// line end:   413
void pad_func_right__Fi(int pnum) {
}


// address: 0x8009634C
// line start: 431
// line end:   444
void pad_func_select__Fi(int pnum) {
}


// address: 0x8009643C
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


// address: 0x80096820
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


// address: 0x80096B48
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


// address: 0x80096C98
// line start: 620
// line end:   639
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x80096D28
// line start: 646
// line end:   806
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


// address: 0x800973B4
// line start: 813
// line end:   820
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x800974A8
// line start: 832
// line end:   845
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x800975E4
// line start: 868
// line end:   880
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x80097704
// line start: 885
// line end:   896
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x8009781C
// line start: 901
// line end:   905
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x800978C8
// line start: 919
// line end:   941
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x80097994
// line start: 979
// line end:   990
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80097AAC
// line start: 1016
// line end:   1026
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x80097B28
// line start: 1054
// line end:   1090
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 3
	register int ii;
	{
	}
}


// address: 0x80097D00
// line start: 1098
// line end:   1099
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x80097D28
// line start: 1109
// line end:   1110
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x80097D50
// line start: 1115
// line end:   1130
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


// address: 0x80097E90
// line start: 1134
// line end:   1161
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80097F9C
// line start: 1165
// line end:   1307
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


// address: 0x80098860
// line start: 1311
// line end:   1335
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


// address: 0x8009893C
// line start: 1344
// line end:   1350
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x80098A48
// line start: 1359
// line end:   1429
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x80098E08
// line start: 1434
// line end:   1488
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


// address: 0x8009905C
// line start: 1533
// line end:   1558
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80099280
// line start: 1559
// line end:   1559
void _GLOBAL__D_gplayer() {
}


// address: 0x800992A8
// line start: 1559
// line end:   1559
void _GLOBAL__I_gplayer() {
}


