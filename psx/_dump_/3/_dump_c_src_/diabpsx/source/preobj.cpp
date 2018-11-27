// C:\diabpsx\SOURCE\PREOBJ.CPP

#include "types.h"

// address: 0x8014AC98
// line start: 121
// line end:   135
void AddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8014AE28
// line start: 142
// line end:   152
void AddSCambBook__Fi(int i) {
}


// address: 0x8014AF00
// line start: 159
// line end:   181
void AddChest__Fii(int i, int t) {
}


// address: 0x8014B100
// line start: 188
// line end:   206
void AddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8014B270
// line start: 213
// line end:   222
void AddL3Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8014B34C
// line start: 229
// line end:   238
void AddSarc__Fi(int i) {
	// register: 6
	register int x;
	// register: 2
	register int y;
}


// address: 0x8014B450
// line start: 245
// line end:   250
void AddFlameTrap__Fi(int i) {
}


// address: 0x8014B4E4
// line start: 255
// line end:   266
void AddTrap__Fii(int i, int ot) {
	// register: 17
	register int mt;
}


// address: 0x8014B600
// line start: 273
// line end:   284
void AddObjLight__Fii(int i, int r) {
}


// address: 0x8014B6DC
// line start: 289
// line end:   297
void AddBarrel__Fii(int i, int ot) {
}


// address: 0x8014B7AC
// line start: 304
// line end:   324
void AddShrine__Fi(int i) {
	// register: 3
	register int st;
	// address: 0xFFFFFFD0
	// size: 0x1A
	auto unsigned char slist[26];
}


// address: 0x8014B918
// line start: 337
// line end:   340
void AddBookcase__Fi(int i) {
}


// address: 0x8014B990
// line start: 347
// line end:   349
void AddBookstand__Fi(int i) {
}


// address: 0x8014B9F8
// line start: 356
// line end:   358
void AddBloodFtn__Fi(int i) {
}


// address: 0x8014BA60
// line start: 365
// line end:   374
void AddPurifyingFountain__Fi(int i) {
	// register: 4
	register int x;
	// register: 7
	register int y;
}


// address: 0x8014BB64
// line start: 381
// line end:   389
void AddArmorStand__Fi(int i) {
}


// address: 0x8014BC0C
// line start: 396
// line end:   398
void AddGoatShrine__Fi(int i) {
}


// address: 0x8014BC74
// line start: 405
// line end:   407
void AddCauldron__Fi(int i) {
}


// address: 0x8014BCDC
// line start: 414
// line end:   423
void AddMurkyFountain__Fi(int i) {
	// register: 4
	register int x;
	// register: 7
	register int y;
}


// address: 0x8014BDE0
// line start: 430
// line end:   432
void AddTearFountain__Fi(int i) {
}


// address: 0x8014BE48
// line start: 439
// line end:   443
void AddDecap__Fi(int i) {
}


// address: 0x8014BEE0
// line start: 449
// line end:   452
void AddVilebook__Fi(int i) {
}


// address: 0x8014BF64
// line start: 459
// line end:   464
void AddMagicCircle__Fi(int i) {
}


// address: 0x8014BFF8
// line start: 471
// line end:   473
void AddBrnCross__Fi(int i) {
}


// address: 0x8014C060
// line start: 480
// line end:   485
void AddPedistal__Fi(int i) {
}


// address: 0x8014C10C
// line start: 496
// line end:   507
void AddStoryBook__Fi(int i) {
}


// address: 0x8014C2C8
// line start: 514
// line end:   522
void AddWeaponRack__Fi(int i) {
}


// address: 0x8014C370
// line start: 529
// line end:   533
void AddTorturedBody__Fi(int i) {
}


// address: 0x8014C408
// line start: 541
// line end:   544
void AddFlameLvr__Fi(int i) {
}


// address: 0x8014C480
// line start: 550
// line end:   565
void GetRndObjLoc__FiRiT1(int randarea, int *xx, int *yy) {
	// register: 17
	register int i;
	// register: 16
	register int j;
	// register: 3
	register unsigned char failed;
	{
		{
			// register: 19
			register int tries;
		}
	}
}


// address: 0x8014C58C
// line start: 570
// line end:   579
void AddMushPatch__Fv() {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
	{
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x8014C6B0
// line start: 584
// line end:   588
void AddSlainHero__Fv() {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x8014C6F0
// line start: 592
// line end:   604
unsigned char RndLocOk__Fii(int xp, int yp) {
}


// address: 0x8014C7D4
// line start: 609
// line end:   612
unsigned char TrapLocOk__Fii(int xp, int yp) {
}


// address: 0x8014C83C
// line start: 617
// line end:   622
unsigned char RoomLocOk__Fii(int xp, int yp) {
}


// address: 0x8014C8D4
// line start: 628
// line end:   652
void InitRndLocObj__Fiii(int min, int max, int objtype) {
	// register: 20
	register int xp;
	// register: 21
	register int yp;
	// register: 23
	register int numobjs;
	{
		// register: 22
		register int i;
	}
}


// address: 0x8014CA80
// line start: 659
// line end:   689
void InitRndLocBigObj__Fiii(int min, int max, int objtype) {
	// register: 18
	register int xp;
	// register: 21
	register int yp;
	// register: 23
	register int numobjs;
	{
		// register: 22
		register int i;
	}
}


// address: 0x8014CC78
// line start: 694
// line end:   716
void InitRndLocObj5x5__Fiii(int min, int max, int objtype) {
	// register: 19
	register int xp;
	// register: 18
	register int yp;
	// register: 16
	register int xx;
	// register: 17
	register int yy;
	// register: 21
	register int cnt;
	// register: 20
	register unsigned char done;
	// register: 23
	register int numobjs;
	{
		// register: 22
		register int i;
	}
}


// address: 0x8014CDA0
// line start: 719
// line end:   788
void SetMapObjects__FPUcii(unsigned char *pMap, int startx, int starty) {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 19
	register int rw;
	// register: 21
	register int rh;
	// register: 17
	register unsigned char *lm;
	// register: 20
	register unsigned char *h;
	// register: 2
	register long mapoff;
	// register: 3
	register int ot;
	// address: 0xFFFFFF60
	// size: 0x38
	auto unsigned char fileload[56];
	// address: 0xFFFFFF98
	// size: 0x20
	auto char filestr[32];
}


// address: 0x8014D064
// line start: 792
// line end:   815
void ClrAllObjects__Fv() {
	// register: 4
	register int i;
}


// address: 0x8014D154
// line start: 820
// line end:   840
void AddTortures__Fv() {
	// register: 19
	register int yp;
	// register: 18
	register int xp;
}


// address: 0x8014D2E0
// line start: 847
// line end:   856
void AddCandles__Fv() {
	// register: 16
	register int xp;
	// register: 17
	register int yp;
}


// address: 0x8014D368
// line start: 863
// line end:   940
void AddTrapLine__Fiiii(int min, int max, int tobjtype, int lobjtype) {
	// address: 0xFFFFFFA0
	auto int i;
	// register: 16
	register int j;
	// register: 17
	register int xp;
	// register: 18
	register int yp;
	// address: 0xFFFFFFA8
	auto int numobjs;
	// address: 0xFFFFFFB0
	auto int sx;
	// address: 0xFFFFFFB8
	auto int sy;
	// address: 0xFFFFFFC0
	auto int xa;
	// address: 0xFFFFFFC8
	auto int ya;
	// register: 20
	register int t;
	// register: 30
	register int lx1;
	// register: 23
	register int ly1;
	// register: 22
	register int lx2;
	// register: 21
	register int ly2;
	// register: 19
	register unsigned char found;
}


// address: 0x8014D704
// line start: 947
// line end:   974
void AddLeverObj__Fiiiiiiii(int lx1, int ly1, int lx2, int ly2, int x1, int y1, int x2, int y2) {
}


// address: 0x8014D70C
// line start: 980
// line end:   1029
void AddBookLever__Fiiiiiiiii(int lx1, int ly1, int lx2, int ly2, int x1, int y1, int x2, int y2, int msg) {
	// register: 20
	register int xp;
	// register: 19
	register int yp;
	// register: 16
	register int xx;
	// register: 17
	register int yy;
	// register: 21
	register int cnt;
	// register: 18
	register unsigned char done;
	// register: 16
	register int i;
}


// address: 0x8014D980
// line start: 1034
// line end:   1074
void InitRndBarrels__Fv() {
	// register: 19
	register int xp;
	// register: 18
	register int yp;
	// register: 4
	register int o;
	// register: 20
	register int c;
	// register: 17
	register int t;
	// register: 30
	register int numobjs;
	{
		// register: 21
		register int i;
		{
			// register: 16
			register unsigned char found;
		}
	}
}


// address: 0x8014DB1C
// line start: 1081
// line end:   1093
void AddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x8014DC54
// line start: 1100
// line end:   1110
void AddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x8014DD68
// line start: 1117
// line end:   1127
void AddL3Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 17
	register int pn;
}


// address: 0x8014DE68
// line start: 1134
// line end:   1136
unsigned char TorchLocOK__Fii(int xp, int yp) {
}


// address: 0x8014DEA8
// line start: 1142
// line end:   1156
void AddL2Torches__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 17
	register int pn;
}


// address: 0x8014E05C
// line start: 1162
// line end:   1165
unsigned char WallTrapLocOk__Fii(int xp, int yp) {
}


// address: 0x8014E0C4
// line start: 1172
// line end:   1213
void AddObjTraps__Fv() {
	// register: 18
	register int i;
	// register: 19
	register int j;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// address: 0xFFFFFFD0
	auto int rndv;
	// register: 23
	register char oi;
}


// address: 0x8014E43C
// line start: 1220
// line end:   1239
void AddChestTraps__Fv() {
	// register: 18
	register int i;
	// register: 20
	register int j;
}


// address: 0x8014E58C
// line start: 1254
// line end:   1290
void LoadMapObjects__FPUciiiiiii(unsigned char *pMap, int startx, int starty, int x1, int y1, int w, int h, int leveridx) {
	// register: 17
	register int i;
	// register: 20
	register int j;
	// register: 21
	register int rw;
	// register: 22
	register int rh;
	// register: 16
	register int ox;
	// register: 19
	register int oy;
	// register: 18
	register unsigned char *lm;
	// register: 2
	register long mapoff;
}


// address: 0x8014E6F8
// line start: 1294
// line end:   1314
void AddDiabObjs__Fv() {
	// register: 17
	register unsigned char *lpSetPiece;
	{
		{
			{
			}
		}
	}
}


// address: 0x8014E84C
// line start: 1321
// line end:   1346
void AddStoryBooks__Fv() {
	// register: 19
	register int xp;
	// register: 20
	register int yp;
	// register: 16
	register int xx;
	// register: 17
	register int yy;
	// register: 21
	register int cnt;
	// register: 18
	register unsigned char done;
}


// address: 0x8014E99C
// line start: 1352
// line end:   1386
void AddHookedBodies__Fi(int freq) {
	// register: 23
	register int i;
	// address: 0xFFFFFFC8
	auto int j;
	// register: 19
	register int ii;
	// register: 17
	register int jj;
}


// address: 0x8014EB94
// line start: 1392
// line end:   1402
void AddL4Goodies__Fv() {
}


// address: 0x8014EC44
// line start: 1408
// line end:   1440
void AddLazStand__Fv() {
	// register: 19
	register int xp;
	// register: 20
	register int yp;
	// register: 16
	register int xx;
	// register: 17
	register int yy;
	// register: 21
	register int cnt;
	// register: 18
	register unsigned char done;
}


// address: 0x8014EDD8
// line start: 1447
// line end:   1543
void InitObjects__Fv() {
	// register: 17
	register int textdef;
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


// address: 0x8014F43C
// line start: 1547
// line end:   1676
void PreObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


