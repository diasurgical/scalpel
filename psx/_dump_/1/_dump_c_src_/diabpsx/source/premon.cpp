// C:\diabpsx\SOURCE\PREMON.CPP

#include "types.h"

// address: 0x80148ACC
// line start: 103
// line end:   110
unsigned char MonstPlace__Fii(int xp, int yp) {
}


// address: 0x80148B88
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


// address: 0x80148C60
// line start: 246
// line end:   251
void PlaceMonster__Fiiii(int i, int mtype, int x, int y) {
}


// address: 0x80148D00
// line start: 255
// line end:   276
int AddMonsterType__Fii(int type, int placeflag) {
	// register: 16
	register int i;
	// register: 4
	register unsigned char done;
}


// address: 0x80148DFC
// line start: 286
// line end:   298
void GetMonsterTypes__FUl(unsigned long QuestMask) {
	// address: 0xFFFFFCC8
	// size: 0x320
	auto int typelist[200];
	// register: 17
	register int nt;
}


// address: 0x80148EAC
// line start: 304
// line end:   340
void ClrAllMonsters__Fv() {
	// register: 17
	register int i;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80148FEC
// line start: 344
// line end:   362
void InitLevelMonsters__Fv() {
	// register: 3
	register int i;
}


// address: 0x80149070
// line start: 366
// line end:   549
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


// address: 0x801494B8
// line start: 555
// line end:   632
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


// address: 0x8014987C
// line start: 641
// line end:   667
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


// address: 0x8014998C
// line start: 675
// line end:   752
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


// address: 0x80149EC0
// line start: 757
// line end:   809
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


// address: 0x8014A0E4
// line start: 814
// line end:   916
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


// address: 0x8014A494
// line start: 920
// line end:   1107
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


// address: 0x8014AC00
// line start: 1113
// line end:   1147
void PlaceUniques__Fv() {
	// register: 16
	register int u;
	// register: 5
	register int mt;
	// register: 4
	register unsigned char done;
}


// address: 0x8014AD90
// line start: 1152
// line end:   1177
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


// address: 0x8014AED0
// line start: 1183
// line end:   1188
int encode_enemy__Fi(int m) {
}


// address: 0x8014AF28
// line start: 1191
// line end:   1203
void decode_enemy__Fii(int m, int enemy) {
}


// address: 0x8014B040
// line start: 1207
// line end:   1209
unsigned char IsGoat__Fi(int mt) {
}


