// C:\diabpsx\SOURCE\PREOBJ.CPP

#include "types.h"

// address: 0x8014B608
// line start: 123
// line end:   137
void AddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8014B740
// line start: 144
// line end:   155
void AddSCambBook__Fi(int i) {
}


// address: 0x8014B7E0
// line start: 162
// line end:   184
void AddChest__Fii(int i, int t) {
}


// address: 0x8014B9C0
// line start: 191
// line end:   209
void AddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8014BB0C
// line start: 216
// line end:   225
void AddL3Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8014BBA0
// line start: 232
// line end:   241
void AddSarc__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int y;
}


// address: 0x8014BC7C
// line start: 248
// line end:   253
void AddFlameTrap__Fi(int i) {
}


// address: 0x8014BCD8
// line start: 258
// line end:   269
void AddTrap__Fii(int i, int ot) {
	// register: 4
	register int mt;
}


// address: 0x8014BDD0
// line start: 276
// line end:   284
void AddArmorStand__Fi(int i) {
}


// address: 0x8014BE58
// line start: 291
// line end:   307
void AddObjLight__Fii(int i, int r) {
}


// address: 0x8014BF20
// line start: 310
// line end:   318
void AddBarrel__Fii(int i, int ot) {
}


// address: 0x8014BFD0
// line start: 325
// line end:   345
void AddShrine__Fi(int i) {
	// register: 3
	register int st;
	// address: 0xFFFFFFD0
	// size: 0x1A
	auto unsigned char slist[26];
}


// address: 0x8014C120
// line start: 358
// line end:   361
void AddBookcase__Fi(int i) {
}


// address: 0x8014C178
// line start: 368
// line end:   370
void AddBookstand__Fi(int i) {
}


// address: 0x8014C1C0
// line start: 377
// line end:   379
void AddBloodFtn__Fi(int i) {
}


// address: 0x8014C208
// line start: 386
// line end:   395
void AddPurifyingFountain__Fi(int i) {
	// register: 5
	register int x;
	// register: 7
	register int y;
}


// address: 0x8014C2E4
// line start: 402
// line end:   404
void AddGoatShrine__Fi(int i) {
}


// address: 0x8014C32C
// line start: 411
// line end:   413
void AddCauldron__Fi(int i) {
}


// address: 0x8014C374
// line start: 420
// line end:   429
void AddMurkyFountain__Fi(int i) {
	// register: 5
	register int x;
	// register: 7
	register int y;
}


// address: 0x8014C450
// line start: 436
// line end:   438
void AddTearFountain__Fi(int i) {
}


// address: 0x8014C498
// line start: 445
// line end:   449
void AddDecap__Fi(int i) {
}


// address: 0x8014C510
// line start: 455
// line end:   458
void AddVilebook__Fi(int i) {
}


// address: 0x8014C560
// line start: 465
// line end:   471
void AddMagicCircle__Fi(int i) {
}


// address: 0x8014C5E8
// line start: 478
// line end:   480
void AddBrnCross__Fi(int i) {
}


// address: 0x8014C630
// line start: 487
// line end:   492
void AddPedistal__Fi(int i) {
}


// address: 0x8014C6A4
// line start: 503
// line end:   520
void AddStoryBook__Fi(int i) {
	// register: 4
	register int bookframe;
}


// address: 0x8014C870
// line start: 527
// line end:   535
void AddWeaponRack__Fi(int i) {
}


// address: 0x8014C8F8
// line start: 542
// line end:   546
void AddTorturedBody__Fi(int i) {
}


// address: 0x8014C974
// line start: 554
// line end:   557
void AddFlameLvr__Fi(int i) {
}


// address: 0x8014C9B4
// line start: 563
// line end:   578
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


// address: 0x8014CAC0
// line start: 583
// line end:   592
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


// address: 0x8014CBE4
// line start: 597
// line end:   601
void AddSlainHero__Fv() {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x8014CC24
// line start: 605
// line end:   617
unsigned char RndLocOk__Fii(int xp, int yp) {
}


// address: 0x8014CD08
// line start: 622
// line end:   625
unsigned char TrapLocOk__Fii(int xp, int yp) {
}


// address: 0x8014CD70
// line start: 630
// line end:   635
unsigned char RoomLocOk__Fii(int xp, int yp) {
}


// address: 0x8014CE08
// line start: 641
// line end:   665
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


// address: 0x8014CFB4
// line start: 672
// line end:   702
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


// address: 0x8014D1AC
// line start: 707
// line end:   733
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


// address: 0x8014D2D4
// line start: 738
// line end:   807
void SetMapObjects__FPUcii(unsigned char *pMap, int startx, int starty) {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 19
	register int rw;
	// register: 20
	register int rh;
	// register: 17
	register unsigned char *lm;
	// register: 7
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


// address: 0x8014D574
// line start: 811
// line end:   834
void ClrAllObjects__Fv() {
	// register: 4
	register int i;
}


// address: 0x8014D664
// line start: 839
// line end:   859
void AddTortures__Fv() {
	// register: 19
	register int yp;
	// register: 18
	register int xp;
}


// address: 0x8014D7F0
// line start: 866
// line end:   875
void AddCandles__Fv() {
	// register: 16
	register int xp;
	// register: 17
	register int yp;
}


// address: 0x8014D878
// line start: 882
// line end:   959
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


// address: 0x8014DC14
// line start: 966
// line end:   993
void AddLeverObj__Fiiiiiiii(int lx1, int ly1, int lx2, int ly2, int x1, int y1, int x2, int y2) {
}


// address: 0x8014DC1C
// line start: 999
// line end:   1048
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


// address: 0x8014DE30
// line start: 1053
// line end:   1093
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


// address: 0x8014DFCC
// line start: 1100
// line end:   1112
void AddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x8014E104
// line start: 1119
// line end:   1129
void AddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x8014E218
// line start: 1136
// line end:   1146
void AddL3Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 17
	register int pn;
}


// address: 0x8014E318
// line start: 1152
// line end:   1155
unsigned char WallTrapLocOk__Fii(int xp, int yp) {
}


// address: 0x8014E380
// line start: 1162
// line end:   1164
unsigned char TorchLocOK__Fii(int xp, int yp) {
}


// address: 0x8014E3C0
// line start: 1170
// line end:   1184
void AddL2Torches__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 17
	register int pn;
}


// address: 0x8014E574
// line start: 1191
// line end:   1232
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


// address: 0x8014E8EC
// line start: 1239
// line end:   1258
void AddChestTraps__Fv() {
	// register: 18
	register int i;
	// register: 20
	register int j;
}


// address: 0x8014EA3C
// line start: 1273
// line end:   1309
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


// address: 0x8014EBA8
// line start: 1313
// line end:   1333
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


// address: 0x8014ECFC
// line start: 1340
// line end:   1365
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


// address: 0x8014EE4C
// line start: 1371
// line end:   1405
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


// address: 0x8014F044
// line start: 1411
// line end:   1421
void AddL4Goodies__Fv() {
}


// address: 0x8014F0F4
// line start: 1427
// line end:   1461
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


// address: 0x8014F294
// line start: 1468
// line end:   1564
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


// address: 0x8014F8F8
// line start: 1568
// line end:   1696
void PreObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


