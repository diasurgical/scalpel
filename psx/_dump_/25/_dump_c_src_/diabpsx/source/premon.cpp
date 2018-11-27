// C:\diabpsx\SOURCE\PREMON.CPP

#include "types.h"

// address: 0x8014B328
// line start: 103
// line end:   110
unsigned char MonstPlace__Fii(int xp, int yp) {
}


// address: 0x8014B3E4
// line start: 114
// line end:   170
void InitMonsterGFX__Fi(int monst) {
	// register: 6
	register int anim;
	// address: 0xFFFFFF00
	// size: 0x100
	auto char strBuff[256];
	// register: 3
	register int mtype;
	// register: 7
	// size: 0x3C
	register struct MonsterData *pmonsterdata;
}


// address: 0x8014B4BC
// line start: 246
// line end:   251
void PlaceMonster__Fiiii(int i, int mtype, int x, int y) {
}


// address: 0x8014B55C
// line start: 255
// line end:   276
int AddMonsterType__Fii(int type, int placeflag) {
	// register: 16
	register int i;
	// register: 4
	register unsigned char done;
}


// address: 0x8014B658
// line start: 286
// line end:   298
void GetMonsterTypes__FUl(unsigned long QuestMask) {
	// address: 0xFFFFFCC8
	// size: 0x320
	auto int typelist[200];
	// register: 17
	register int nt;
}


// address: 0x8014B708
// line start: 304
// line end:   340
void ClrAllMonsters__Fv() {
	// register: 17
	register int i;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8014B848
// line start: 344
// line end:   362
void InitLevelMonsters__Fv() {
	// register: 3
	register int i;
}


// address: 0x8014B8CC
// line start: 366
// line end:   554
void GetLevelMTypes__Fv() {
	// register: 16
	register int i;
	// register: 4
	register int minl;
	// register: 2
	register int maxl;
	// address: 0xFFFFFB00
	// size: 0x320
	auto int typelist[200];
	// register: 17
	register int nt;
	// register: 20
	register char mamask;
	// register: 18
	register unsigned long QuestMask;
	{
		{
			{
				{
					// address: 0xFFFFFE20
					// size: 0x1BC
					auto int skeltypes[111];
					// register: 19
					register int numskeltypes;
				}
			}
		}
	}
}


// address: 0x8014BD34
// line start: 560
// line end:   637
void PlaceQuestMonsters__Fv() {
	// register: 16
	register int skeltype;
	// register: 16
	register unsigned char *setp;
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											{
												{
													{
														{
															{
																{
																	{
																		{
																			{
																				{
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


// address: 0x8014C0F8
// line start: 646
// line end:   672
void LoadDiabMonsts__Fv() {
	// register: 16
	register unsigned char *lpSetPiece;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8014C208
// line start: 680
// line end:   763
void PlaceGroup__FiiUci(int mtype, int num, unsigned char leaderf, int leader) {
	// register: 16
	register int xp;
	// register: 17
	register int yp;
	// register: 19
	register int x1;
	// register: 22
	register int y1;
	// register: 21
	register int j;
	// register: 20
	register int placed;
	// address: 0xFFFFFFB0
	auto int try1;
	// register: 23
	register int try2;
	// register: 2
	register int rd;
}


// address: 0x8014C7B8
// line start: 768
// line end:   820
void SetMapMonsters__FPUcii(unsigned char *pMap, int startx, int starty) {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 2
	register unsigned short rw;
	// register: 20
	register unsigned short rh;
	// register: 17
	register unsigned short *lm;
}


// address: 0x8014C9DC
// line start: 825
// line end:   927
void InitMonsters__Fv() {
	// register: 18
	register int i;
	// register: 16
	register int mtype;
	// register: 5
	register int na;
	// register: 20
	register int nt;
	// address: 0xFFFFFE08
	// size: 0x1BC
	auto int scattertypes[111];
	// register: 21
	register int numscattypes;
	// register: 17
	register long fv;
	// register: 16
	register long j;
	// register: 4
	register int numplacemonsters;
	// register: 17
	register int s;
	// register: 16
	register int t;
}


// address: 0x8014CD8C
// line start: 931
// line end:   1118
void PlaceUniqueMonst__Fiii(int uniqindex, int miniontype, int unpackfilesize) {
	// address: 0xFFFFFF98
	// size: 0x18
	auto struct UniqMonstStruct *Uniq;
	// register: 22
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 23
	register int xp;
	// register: 20
	register int yp;
	// register: 17
	register int x;
	// register: 16
	register int y;
	// register: 4
	register unsigned char done;
	// register: 18
	register int count;
	// address: 0xFFFFFFA0
	auto int count2;
	// address: 0xFFFFFF40
	// size: 0x40
	auto char filestr[64];
	// address: 0xFFFFFFA8
	auto int uniqtype;
	// register: 5
	register int i;
	// address: 0xFFFFFFB0
	auto unsigned char zharflag;
	// register: 16
	register int mMinDamage;
	// register: 17
	register int mMaxDamage;
}


// address: 0x8014D4F8
// line start: 1124
// line end:   1158
void PlaceUniques__Fv() {
	// register: 16
	register int u;
	// register: 5
	register int mt;
	// register: 4
	register unsigned char done;
}


// address: 0x8014D688
// line start: 1163
// line end:   1188
int PreSpawnSkeleton__Fv() {
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 18
	register int skeltypes;
	// register: 16
	register int skel;
}


// address: 0x8014D7C8
// line start: 1194
// line end:   1199
int encode_enemy__Fi(int m) {
}


// address: 0x8014D820
// line start: 1202
// line end:   1214
void decode_enemy__Fii(int m, int enemy) {
}


// address: 0x8014D938
// line start: 1218
// line end:   1220
unsigned char IsGoat__Fi(int mt) {
}


