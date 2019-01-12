// C:\diabpsx\PSXSRC\PADFUNCS.CPP

#include "types.h"

// address: 0x800A060C
// line start: 88
// line end:   90
void SetQSpell__Fiii(int pnum, int Spell, int type) {
}


// address: 0x800A062C
// line start: 99
// line end:   111
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x48
	register struct SpellTarget *spl;
}


// address: 0x800A0690
// line start: 119
// line end:   128
void select_belt_item__Fi(int pnum) {
}


// address: 0x800A0698
// line start: 136
// line end:   145
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x800A0700
// line start: 152
// line end:   170
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x800A082C
// line start: 176
// line end:   196
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x800A0960
// line start: 204
// line end:   206
void pad_func_up__Fi(int pnum) {
}


// address: 0x800A098C
// line start: 214
// line end:   216
void pad_func_down__Fi(int pnum) {
}


// address: 0x800A09B8
// line start: 224
// line end:   225
void pad_func_left__Fi(int pnum) {
}


// address: 0x800A09C0
// line start: 232
// line end:   233
void pad_func_right__Fi(int pnum) {
}


// address: 0x800A09C8
// line start: 251
// line end:   263
void pad_func_select__Fi(int pnum) {
}


// address: 0x800A0A8C
// line start: 270
// line end:   282
void SetFindMonsterXY__FP12PlayerStructi(struct PlayerStruct *p, int i) {
	{
		{
			// register: 3
			// size: 0x6C
			register struct MonsterStruct *m;
			{
				// register: 2
				// size: 0xC4
				register struct TownerStruct *t;
			}
		}
	}
}


// address: 0x800A0B1C
// line start: 293
// line end:   389
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 16
	register int x;
	// register: 17
	register int y;
	{
		{
			{
				{
					// register: 16
					register int fx;
					// register: 17
					register int fy;
					{
						{
							{
								// register: 17
								register int fx;
								// register: 20
								register int fy;
								// register: 23
								// size: 0x19E8
								register struct PlayerStruct *plr2;
								{
									// register: 3
									register int oco;
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
}


// address: 0x800A0FD0
// line start: 396
// line end:   453
void pad_func_Action__Fi(int pnum) {
	// register: 20
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 21
	register int x;
	// register: 22
	register int y;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	{
		{
			{
				{
					{
						{
							// register: 17
							register int ox;
							// register: 18
							register int oy;
						}
					}
				}
			}
		}
	}
}


// address: 0x800A1388
// line start: 458
// line end:   461
void InitTargetCursor__Fi(int pnum) {
}


// address: 0x800A13BC
// line start: 466
// line end:   478
void RemoveTargetCursor__Fi(int pnum) {
}


// address: 0x800A1404
// line start: 482
// line end:   488
bool TargetingSpell__Fi(int sp) {
}


// address: 0x800A144C
// line start: 496
// line end:   585
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 19
	register int sp;
	// register: 16
	// size: 0x108
	register struct CBlocks *gblocks;
	// register: 22
	register int omp;
	// register: 20
	register unsigned char DoTarget;
	{
		{
			{
				{
					// register: 5
					// size: 0x48
					register struct SpellTarget *spl;
				}
			}
		}
	}
}


// address: 0x800A184C
// line start: 592
// line end:   633
void pad_func_Use_Item__Fi(int pnum) {
	{
		{
			// register: 18
			// size: 0x19E8
			register struct PlayerStruct *player;
		}
	}
}


// address: 0x800A1A80
// line start: 639
// line end:   663
void pad_func_BeltList__Fi(int pnum) {
}


// address: 0x800A1BE8
// line start: 672
// line end:   688
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x800A1D1C
// line start: 694
// line end:   711
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x800A1E4C
// line start: 717
// line end:   731
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x800A1F7C
// line start: 737
// line end:   743
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x800A2070
// line start: 758
// line end:   763
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x800A2148
// line start: 794
// line end:   805
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x800A2204
// line start: 820
// line end:   849
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 17
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 21
	register int sp;
	// register: 19
	register char spt;
	// register: 18
	register int qps;
	// register: 20
	register int qst;
}


// address: 0x800A2378
// line start: 871
// line end:   921
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 2
	register int ii;
	// register: 20
	// size: 0x19E8
	register struct PlayerStruct *player;
	{
	}
}


// address: 0x800A25F8
// line start: 929
// line end:   930
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x800A2620
// line start: 940
// line end:   941
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x800A2648
// line start: 946
// line end:   963
bool sort_gold__Fi(int pnum) {
	// register: 17
	// size: 0x3
	register struct found_objects *fo;
	// register: 19
	register bool ngold;
	{
		// register: 18
		register int i;
	}
}


// address: 0x800A2750
// line start: 969
// line end:   1129
void DrawObjSelector__FiP12PlayerStruct(int pnum, struct PlayerStruct *player) {
	// address: 0xFFFFFF20
	// size: 0x80
	auto char str[128];
	// register: 16
	// size: 0xEC
	register struct CPad *Pad;
	// register: 16
	register int cp;
	// register: 18
	register int list_size;
	// register: 22
	register int maxlen;
	// address: 0xFFFFFFA0
	// size: 0x3
	auto struct found_objects *fo;
	// register: 8
	register int R;
	// register: 3
	register int G;
	// register: 2
	register int B;
	// register: 20
	register int i;
	// register: 3
	register int nwrap;
	// register: 16
	register int add_wrap;
	// address: 0xFFFFFFB8
	auto int nx;
	// address: 0xFFFFFFC0
	auto int ny;
	// register: 22
	register int nw;
	// register: 16
	register int nh;
	// register: 21
	register int ypos;
	{
		{
			// register: 16
			register int fx;
			// register: 17
			register int fy;
			{
				{
					{
						{
							// register: 18
							register int len;
						}
					}
				}
			}
		}
	}
}


// address: 0x800A2F58
// line start: 1133
// line end:   1138
bool SelectorActive__Fv() {
}


// address: 0x800A2F64
// line start: 1142
// line end:   1220
void DrawObjTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 18
	register int pnum;
	// register: 22
	register bool op;
	// register: 30
	register bool oamap;
	// register: 21
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 19
	register int oseldata;
	// register: 20
	register int omp;
	// register: 16
	register bool opan;
	// register: 23
	register int opause;
	{
		{
			// register: 16
			register int x;
			// register: 17
			register int y;
		}
	}
}


// address: 0x800A32A0
// line start: 1228
// line end:   1244
void add_area_find_object__Fiii(int index, int x, int y) {
	{
		{
			// register: 2
			// size: 0x3
			register struct found_objects *fo;
		}
	}
}


// address: 0x800A3310
// line start: 1254
// line end:   1347
unsigned char CheckRangeObject__Fiii(int x, int y, int distance) {
	// register: 4
	register char co;
	// register: 6
	// size: 0x8
	register struct map_info *dm;
	// register: 17
	register int nitem;
	// register: 16
	register int nmonster;
	// register: 19
	register int nobject;
	// register: 20
	register bool ok;
	{
		{
			// register: 4
			register int vis_flag;
		}
	}
}


// address: 0x800A3688
// line start: 1351
// line end:   1474
unsigned char CheckArea__FiiiUci(int xx, int yy, int range, unsigned char allflag, int pnum) {
	// address: 0xFFFFFFB8
	// size: 0x19E8
	auto struct PlayerStruct *player;
	// address: 0xFFFFFFC0
	// size: 0x48
	auto struct SpellTarget *spl;
	// address: 0xFFFFFFC8
	auto bool is_myplr;
	// register: 21
	register int i;
	// register: 17
	register int dir;
	// register: 23
	register int cm;
	// register: 4
	register int ci;
	// register: 20
	register int x;
	// register: 19
	register int y;
	{
		{
			// register: 18
			register int dx;
			// register: 17
			register int dy;
			{
				{
					{
						{
							// register: 16
							// size: 0x6C
							register struct MonsterStruct *Monst;
							{
								{
									{
										// register: 22
										register int j;
										{
											{
												// register: 18
												register int k;
												{
													{
														{
															{
																{
																	{
																		{
																			{
																				{
																					// register: 16
																					// size: 0x6C
																					register struct MonsterStruct *Monst;
																					{
																						// register: 16
																						// size: 0xC4
																						register struct TownerStruct *Twn;
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


// address: 0x800A3C70
// line start: 1479
// line end:   1505
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	{
		{
			// register: 30
			register bool done;
			// register: 17
			register int nx;
			// register: 16
			register int ny;
			{
			}
		}
	}
}


// address: 0x800A3DE8
// line start: 1505
// line end:   1505
void _GLOBAL__D_gplayer() {
}


// address: 0x800A3E10
// line start: 1505
// line end:   1505
void _GLOBAL__I_gplayer() {
}


