// C:\diabpsx\SOURCE\PREOBJ.CPP

#include "types.h"

// address: 0x80156164
// line start: 123
// line end:   141
void AddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8015624C
// line start: 148
// line end:   159
void AddSCambBook__Fi(int i) {
}


// address: 0x801562EC
// line start: 166
// line end:   192
void AddChest__Fii(int i, int t) {
}


// address: 0x801564CC
// line start: 199
// line end:   217
void AddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x80156618
// line start: 224
// line end:   233
void AddL3Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x801566AC
// line start: 240
// line end:   253
void AddSarc__Fi(int i) {
	// register: 5
	register int x;
	// register: 3
	register int y;
}


// address: 0x80156778
// line start: 260
// line end:   265
void AddFlameTrap__Fi(int i) {
}


// address: 0x801567D4
// line start: 270
// line end:   281
void AddTrap__Fii(int i, int ot) {
	// register: 4
	register int mt;
}


// address: 0x801568CC
// line start: 288
// line end:   298
void AddArmorStand__Fi(int i) {
}


// address: 0x80156954
// line start: 307
// line end:   323
void AddObjLight__Fii(int i, int r) {
}


// address: 0x80156A1C
// line start: 326
// line end:   338
void AddBarrel__Fii(int i, int ot) {
}


// address: 0x80156ACC
// line start: 345
// line end:   365
void AddShrine__Fi(int i) {
	// register: 3
	register int st;
	// address: 0xFFFFFFD0
	// size: 0x1A
	auto unsigned char slist[26];
}


// address: 0x80156C1C
// line start: 378
// line end:   385
void AddBookcase__Fi(int i) {
}


// address: 0x80156C74
// line start: 392
// line end:   396
void AddBookstand__Fi(int i) {
}


// address: 0x80156CBC
// line start: 405
// line end:   409
void AddBloodFtn__Fi(int i) {
}


// address: 0x80156D04
// line start: 418
// line end:   429
void AddPurifyingFountain__Fi(int i) {
	// register: 3
	register int x;
	// register: 5
	register int y;
}


// address: 0x80156DC0
// line start: 438
// line end:   442
void AddGoatShrine__Fi(int i) {
}


// address: 0x80156E08
// line start: 451
// line end:   455
void AddCauldron__Fi(int i) {
}


// address: 0x80156E50
// line start: 464
// line end:   475
void AddMurkyFountain__Fi(int i) {
	// register: 3
	register int x;
	// register: 5
	register int y;
}


// address: 0x80156F0C
// line start: 484
// line end:   488
void AddTearFountain__Fi(int i) {
}


// address: 0x80156F54
// line start: 497
// line end:   505
void AddDecap__Fi(int i) {
}


// address: 0x80156FCC
// line start: 511
// line end:   514
void AddVilebook__Fi(int i) {
}


// address: 0x8015701C
// line start: 521
// line end:   531
void AddMagicCircle__Fi(int i) {
}


// address: 0x80157090
// line start: 538
// line end:   542
void AddBrnCross__Fi(int i) {
}


// address: 0x801570D8
// line start: 551
// line end:   561
void AddPedistal__Fi(int i) {
}


// address: 0x80157180
// line start: 573
// line end:   590
void AddStoryBook__Fi(int i) {
	// register: 3
	register int bookframe;
}


// address: 0x80157304
// line start: 597
// line end:   607
void AddWeaponRack__Fi(int i) {
}


// address: 0x8015738C
// line start: 616
// line end:   624
void AddTorturedBody__Fi(int i) {
}


// address: 0x80157408
// line start: 632
// line end:   635
void AddFlameLvr__Fi(int i) {
}


// address: 0x80157448
// line start: 641
// line end:   656
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


// address: 0x80157554
// line start: 661
// line end:   671
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


// address: 0x80157648
// line start: 677
// line end:   681
void AddSlainHero__Fv() {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80157688
// line start: 685
// line end:   698
unsigned char RndLocOk__Fii(int xp, int yp) {
}


// address: 0x801577A0
// line start: 703
// line end:   707
unsigned char TrapLocOk__Fii(int xp, int yp) {
}


// address: 0x801577F4
// line start: 726
// line end:   750
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


// address: 0x801579A0
// line start: 757
// line end:   787
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


// address: 0x80157B98
// line start: 792
// line end:   818
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


// address: 0x80157CC0
// line start: 823
// line end:   892
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


// address: 0x80157F60
// line start: 896
// line end:   919
void ClrAllObjects__Fv() {
	// register: 4
	register int i;
}


// address: 0x80158050
// line start: 924
// line end:   945
void AddTortures__Fv() {
	// register: 19
	register int yp;
	// register: 18
	register int xp;
}


// address: 0x801581D0
// line start: 952
// line end:   961
void AddCandles__Fv() {
	// register: 16
	register int xp;
	// register: 17
	register int yp;
}


// address: 0x80158258
// line start: 1086
// line end:   1136
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


// address: 0x80158454
// line start: 1141
// line end:   1181
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


// address: 0x801585F0
// line start: 1188
// line end:   1200
void AddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x801586FC
// line start: 1207
// line end:   1218
void AddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x801587F8
// line start: 1225
// line end:   1236
void AddL3Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 17
	register int pn;
}


// address: 0x801588D8
// line start: 1242
// line end:   1246
unsigned char WallTrapLocOk__Fii(int xp, int yp) {
}


// address: 0x80158930
// line start: 1253
// line end:   1255
unsigned char TorchLocOK__Fii(int xp, int yp) {
}


// address: 0x80158960
// line start: 1261
// line end:   1276
void AddL2Torches__Fv() {
	// register: 16
	register int i;
	// register: 17
	register int j;
	// register: 18
	register int pn;
}


// address: 0x80158B08
// line start: 1287
// line end:   1357
void AddObjTraps__Fv() {
	// register: 18
	register int i;
	// register: 19
	register int j;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 21
	register int rndv;
	// register: 20
	register char oi;
}


// address: 0x80158D94
// line start: 1364
// line end:   1383
void AddChestTraps__Fv() {
	// register: 18
	register int i;
	// register: 19
	register int j;
}


// address: 0x80158ED8
// line start: 1398
// line end:   1434
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


// address: 0x80159044
// line start: 1438
// line end:   1458
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


// address: 0x80159198
// line start: 1465
// line end:   1490
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


// address: 0x801592E8
// line start: 1496
// line end:   1530
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


// address: 0x801594E0
// line start: 1536
// line end:   1546
void AddL4Goodies__Fv() {
}


// address: 0x80159590
// line start: 1552
// line end:   1586
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


// address: 0x80159724
// line start: 1593
// line end:   1611
void saveplrpos__Fv() {
}


// address: 0x801597E0
// line start: 1615
// line end:   1621
void restoreplrpos__Fv() {
}


// address: 0x80159850
// line start: 1625
// line end:   1722
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


// address: 0x80159EF0
// line start: 1726
// line end:   1854
void PreObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}

