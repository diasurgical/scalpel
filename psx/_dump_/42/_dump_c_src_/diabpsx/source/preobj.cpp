// C:\diabpsx\SOURCE\PREOBJ.CPP

#include "types.h"

// address: 0x8015EAF8
// line start: 123
// line end:   137
void AddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8015EC30
// line start: 144
// line end:   155
void AddSCambBook__Fi(int i) {
}


// address: 0x8015ECD0
// line start: 162
// line end:   184
void AddChest__Fii(int i, int t) {
}


// address: 0x8015EEB0
// line start: 191
// line end:   209
void AddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8015EFFC
// line start: 216
// line end:   225
void AddL3Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8015F090
// line start: 232
// line end:   241
void AddSarc__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int y;
}


// address: 0x8015F16C
// line start: 248
// line end:   253
void AddFlameTrap__Fi(int i) {
}


// address: 0x8015F1C8
// line start: 258
// line end:   269
void AddTrap__Fii(int i, int ot) {
	// register: 4
	register int mt;
}


// address: 0x8015F2C0
// line start: 276
// line end:   284
void AddArmorStand__Fi(int i) {
}


// address: 0x8015F348
// line start: 291
// line end:   302
void AddObjLight__Fii(int i, int r) {
}


// address: 0x8015F3F0
// line start: 307
// line end:   315
void AddBarrel__Fii(int i, int ot) {
}


// address: 0x8015F4A0
// line start: 322
// line end:   342
void AddShrine__Fi(int i) {
	// register: 3
	register int st;
	// address: 0xFFFFFFD0
	// size: 0x1A
	auto unsigned char slist[26];
}


// address: 0x8015F5F0
// line start: 355
// line end:   358
void AddBookcase__Fi(int i) {
}


// address: 0x8015F648
// line start: 365
// line end:   367
void AddBookstand__Fi(int i) {
}


// address: 0x8015F690
// line start: 374
// line end:   376
void AddBloodFtn__Fi(int i) {
}


// address: 0x8015F6D8
// line start: 383
// line end:   392
void AddPurifyingFountain__Fi(int i) {
	// register: 5
	register int x;
	// register: 7
	register int y;
}


// address: 0x8015F7B4
// line start: 399
// line end:   401
void AddGoatShrine__Fi(int i) {
}


// address: 0x8015F7FC
// line start: 408
// line end:   410
void AddCauldron__Fi(int i) {
}


// address: 0x8015F844
// line start: 417
// line end:   426
void AddMurkyFountain__Fi(int i) {
	// register: 5
	register int x;
	// register: 7
	register int y;
}


// address: 0x8015F920
// line start: 433
// line end:   435
void AddTearFountain__Fi(int i) {
}


// address: 0x8015F968
// line start: 442
// line end:   446
void AddDecap__Fi(int i) {
}


// address: 0x8015F9E0
// line start: 452
// line end:   455
void AddVilebook__Fi(int i) {
}


// address: 0x8015FA30
// line start: 462
// line end:   468
void AddMagicCircle__Fi(int i) {
}


// address: 0x8015FAB8
// line start: 475
// line end:   477
void AddBrnCross__Fi(int i) {
}


// address: 0x8015FB00
// line start: 484
// line end:   489
void AddPedistal__Fi(int i) {
}


// address: 0x8015FB74
// line start: 500
// line end:   517
void AddStoryBook__Fi(int i) {
	// register: 4
	register int bookframe;
}


// address: 0x8015FD40
// line start: 524
// line end:   532
void AddWeaponRack__Fi(int i) {
}


// address: 0x8015FDC8
// line start: 539
// line end:   543
void AddTorturedBody__Fi(int i) {
}


// address: 0x8015FE44
// line start: 551
// line end:   554
void AddFlameLvr__Fi(int i) {
}


// address: 0x8015FE84
// line start: 560
// line end:   575
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


// address: 0x8015FF90
// line start: 580
// line end:   589
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


// address: 0x801600B4
// line start: 594
// line end:   598
void AddSlainHero__Fv() {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x801600F4
// line start: 602
// line end:   614
unsigned char RndLocOk__Fii(int xp, int yp) {
}


// address: 0x801601D8
// line start: 619
// line end:   622
unsigned char TrapLocOk__Fii(int xp, int yp) {
}


// address: 0x80160240
// line start: 627
// line end:   632
unsigned char RoomLocOk__Fii(int xp, int yp) {
}


// address: 0x801602D8
// line start: 638
// line end:   662
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


// address: 0x80160484
// line start: 669
// line end:   699
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


// address: 0x8016067C
// line start: 704
// line end:   730
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


// address: 0x801607A4
// line start: 735
// line end:   804
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


// address: 0x80160A44
// line start: 808
// line end:   831
void ClrAllObjects__Fv() {
	// register: 4
	register int i;
}


// address: 0x80160B34
// line start: 836
// line end:   856
void AddTortures__Fv() {
	// register: 19
	register int yp;
	// register: 18
	register int xp;
}


// address: 0x80160CC0
// line start: 863
// line end:   872
void AddCandles__Fv() {
	// register: 16
	register int xp;
	// register: 17
	register int yp;
}


// address: 0x80160D48
// line start: 879
// line end:   956
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


// address: 0x801610E4
// line start: 963
// line end:   990
void AddLeverObj__Fiiiiiiii(int lx1, int ly1, int lx2, int ly2, int x1, int y1, int x2, int y2) {
}


// address: 0x801610EC
// line start: 996
// line end:   1045
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


// address: 0x80161300
// line start: 1050
// line end:   1090
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


// address: 0x8016149C
// line start: 1097
// line end:   1109
void AddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x801615D4
// line start: 1116
// line end:   1126
void AddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x801616E8
// line start: 1133
// line end:   1143
void AddL3Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 17
	register int pn;
}


// address: 0x801617E8
// line start: 1149
// line end:   1152
unsigned char WallTrapLocOk__Fii(int xp, int yp) {
}


// address: 0x80161850
// line start: 1159
// line end:   1161
unsigned char TorchLocOK__Fii(int xp, int yp) {
}


// address: 0x80161890
// line start: 1167
// line end:   1181
void AddL2Torches__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 17
	register int pn;
}


// address: 0x80161A44
// line start: 1188
// line end:   1229
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


// address: 0x80161DBC
// line start: 1236
// line end:   1255
void AddChestTraps__Fv() {
	// register: 18
	register int i;
	// register: 20
	register int j;
}


// address: 0x80161F0C
// line start: 1270
// line end:   1306
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


// address: 0x80162078
// line start: 1310
// line end:   1330
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


// address: 0x801621CC
// line start: 1337
// line end:   1362
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


// address: 0x8016231C
// line start: 1368
// line end:   1402
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


// address: 0x80162514
// line start: 1408
// line end:   1418
void AddL4Goodies__Fv() {
}


// address: 0x801625C4
// line start: 1424
// line end:   1458
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


// address: 0x80162764
// line start: 1465
// line end:   1561
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


// address: 0x80162DC8
// line start: 1565
// line end:   1693
void PreObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}

