// C:\diabpsx\SOURCE\PREOBJ.CPP

#include "types.h"

// address: 0x80141654
// line start: 121
// line end:   135
void AddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8014178C
// line start: 142
// line end:   152
void AddSCambBook__Fi(int i) {
}


// address: 0x8014182C
// line start: 159
// line end:   181
void AddChest__Fii(int i, int t) {
}


// address: 0x80141A0C
// line start: 188
// line end:   206
void AddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x80141B58
// line start: 213
// line end:   222
void AddL3Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x80141BEC
// line start: 229
// line end:   238
void AddSarc__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int y;
}


// address: 0x80141CC8
// line start: 245
// line end:   250
void AddFlameTrap__Fi(int i) {
}


// address: 0x80141D24
// line start: 255
// line end:   266
void AddTrap__Fii(int i, int ot) {
	// register: 4
	register int mt;
}


// address: 0x80141E1C
// line start: 273
// line end:   281
void AddArmorStand__Fi(int i) {
}


// address: 0x80141EA4
// line start: 288
// line end:   299
void AddObjLight__Fii(int i, int r) {
}


// address: 0x80141F4C
// line start: 304
// line end:   312
void AddBarrel__Fii(int i, int ot) {
}


// address: 0x80141FFC
// line start: 319
// line end:   339
void AddShrine__Fi(int i) {
	// register: 3
	register int st;
	// address: 0xFFFFFFD0
	// size: 0x1A
	auto unsigned char slist[26];
}


// address: 0x8014214C
// line start: 352
// line end:   355
void AddBookcase__Fi(int i) {
}


// address: 0x801421A4
// line start: 362
// line end:   364
void AddBookstand__Fi(int i) {
}


// address: 0x801421EC
// line start: 371
// line end:   373
void AddBloodFtn__Fi(int i) {
}


// address: 0x80142234
// line start: 380
// line end:   389
void AddPurifyingFountain__Fi(int i) {
	// register: 5
	register int x;
	// register: 7
	register int y;
}


// address: 0x80142310
// line start: 396
// line end:   398
void AddGoatShrine__Fi(int i) {
}


// address: 0x80142358
// line start: 405
// line end:   407
void AddCauldron__Fi(int i) {
}


// address: 0x801423A0
// line start: 414
// line end:   423
void AddMurkyFountain__Fi(int i) {
	// register: 5
	register int x;
	// register: 7
	register int y;
}


// address: 0x8014247C
// line start: 430
// line end:   432
void AddTearFountain__Fi(int i) {
}


// address: 0x801424C4
// line start: 439
// line end:   443
void AddDecap__Fi(int i) {
}


// address: 0x8014253C
// line start: 449
// line end:   452
void AddVilebook__Fi(int i) {
}


// address: 0x8014258C
// line start: 459
// line end:   464
void AddMagicCircle__Fi(int i) {
}


// address: 0x80142600
// line start: 471
// line end:   473
void AddBrnCross__Fi(int i) {
}


// address: 0x80142648
// line start: 480
// line end:   485
void AddPedistal__Fi(int i) {
}


// address: 0x801426BC
// line start: 496
// line end:   513
void AddStoryBook__Fi(int i) {
	// register: 4
	register int bookframe;
}


// address: 0x80142888
// line start: 520
// line end:   528
void AddWeaponRack__Fi(int i) {
}


// address: 0x80142910
// line start: 535
// line end:   539
void AddTorturedBody__Fi(int i) {
}


// address: 0x8014298C
// line start: 547
// line end:   550
void AddFlameLvr__Fi(int i) {
}


// address: 0x801429CC
// line start: 556
// line end:   571
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


// address: 0x80142AD8
// line start: 576
// line end:   585
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


// address: 0x80142BFC
// line start: 590
// line end:   594
void AddSlainHero__Fv() {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80142C3C
// line start: 598
// line end:   610
unsigned char RndLocOk__Fii(int xp, int yp) {
}


// address: 0x80142D20
// line start: 615
// line end:   618
unsigned char TrapLocOk__Fii(int xp, int yp) {
}


// address: 0x80142D88
// line start: 623
// line end:   628
unsigned char RoomLocOk__Fii(int xp, int yp) {
}


// address: 0x80142E20
// line start: 634
// line end:   658
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


// address: 0x80142FCC
// line start: 665
// line end:   695
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


// address: 0x801431C4
// line start: 700
// line end:   722
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


// address: 0x801432EC
// line start: 725
// line end:   794
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


// address: 0x8014358C
// line start: 798
// line end:   821
void ClrAllObjects__Fv() {
	// register: 4
	register int i;
}


// address: 0x8014367C
// line start: 826
// line end:   846
void AddTortures__Fv() {
	// register: 19
	register int yp;
	// register: 18
	register int xp;
}


// address: 0x80143808
// line start: 853
// line end:   862
void AddCandles__Fv() {
	// register: 16
	register int xp;
	// register: 17
	register int yp;
}


// address: 0x80143890
// line start: 869
// line end:   946
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


// address: 0x80143C2C
// line start: 953
// line end:   980
void AddLeverObj__Fiiiiiiii(int lx1, int ly1, int lx2, int ly2, int x1, int y1, int x2, int y2) {
}


// address: 0x80143C34
// line start: 986
// line end:   1035
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


// address: 0x80143E48
// line start: 1040
// line end:   1080
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


// address: 0x80143FE4
// line start: 1087
// line end:   1099
void AddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x8014411C
// line start: 1106
// line end:   1116
void AddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x80144230
// line start: 1123
// line end:   1133
void AddL3Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 17
	register int pn;
}


// address: 0x80144330
// line start: 1139
// line end:   1142
unsigned char WallTrapLocOk__Fii(int xp, int yp) {
}


// address: 0x80144398
// line start: 1149
// line end:   1151
unsigned char TorchLocOK__Fii(int xp, int yp) {
}


// address: 0x801443D8
// line start: 1157
// line end:   1171
void AddL2Torches__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 17
	register int pn;
}


// address: 0x8014458C
// line start: 1178
// line end:   1219
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


// address: 0x80144904
// line start: 1226
// line end:   1245
void AddChestTraps__Fv() {
	// register: 18
	register int i;
	// register: 20
	register int j;
}


// address: 0x80144A54
// line start: 1260
// line end:   1296
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


// address: 0x80144BC0
// line start: 1300
// line end:   1320
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


// address: 0x80144D14
// line start: 1327
// line end:   1352
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


// address: 0x80144E64
// line start: 1358
// line end:   1392
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


// address: 0x8014505C
// line start: 1398
// line end:   1408
void AddL4Goodies__Fv() {
}


// address: 0x8014510C
// line start: 1414
// line end:   1446
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


// address: 0x801452A0
// line start: 1453
// line end:   1549
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


// address: 0x80145904
// line start: 1553
// line end:   1681
void PreObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


