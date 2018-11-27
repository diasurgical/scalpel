// C:\diabpsx\SOURCE\PREOBJ.CPP

#include "types.h"

// address: 0x80153C20
// line start: 121
// line end:   135
void AddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x80153D58
// line start: 142
// line end:   153
void AddSCambBook__Fi(int i) {
}


// address: 0x80153DF8
// line start: 160
// line end:   182
void AddChest__Fii(int i, int t) {
}


// address: 0x80153FD8
// line start: 189
// line end:   207
void AddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x80154124
// line start: 214
// line end:   223
void AddL3Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x801541B8
// line start: 230
// line end:   239
void AddSarc__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int y;
}


// address: 0x80154294
// line start: 246
// line end:   251
void AddFlameTrap__Fi(int i) {
}


// address: 0x801542F0
// line start: 256
// line end:   267
void AddTrap__Fii(int i, int ot) {
	// register: 4
	register int mt;
}


// address: 0x801543E8
// line start: 274
// line end:   282
void AddArmorStand__Fi(int i) {
}


// address: 0x80154470
// line start: 289
// line end:   300
void AddObjLight__Fii(int i, int r) {
}


// address: 0x80154518
// line start: 305
// line end:   313
void AddBarrel__Fii(int i, int ot) {
}


// address: 0x801545C8
// line start: 320
// line end:   340
void AddShrine__Fi(int i) {
	// register: 3
	register int st;
	// address: 0xFFFFFFD0
	// size: 0x1A
	auto unsigned char slist[26];
}


// address: 0x80154718
// line start: 353
// line end:   356
void AddBookcase__Fi(int i) {
}


// address: 0x80154770
// line start: 363
// line end:   365
void AddBookstand__Fi(int i) {
}


// address: 0x801547B8
// line start: 372
// line end:   374
void AddBloodFtn__Fi(int i) {
}


// address: 0x80154800
// line start: 381
// line end:   390
void AddPurifyingFountain__Fi(int i) {
	// register: 5
	register int x;
	// register: 7
	register int y;
}


// address: 0x801548DC
// line start: 397
// line end:   399
void AddGoatShrine__Fi(int i) {
}


// address: 0x80154924
// line start: 406
// line end:   408
void AddCauldron__Fi(int i) {
}


// address: 0x8015496C
// line start: 415
// line end:   424
void AddMurkyFountain__Fi(int i) {
	// register: 5
	register int x;
	// register: 7
	register int y;
}


// address: 0x80154A48
// line start: 431
// line end:   433
void AddTearFountain__Fi(int i) {
}


// address: 0x80154A90
// line start: 440
// line end:   444
void AddDecap__Fi(int i) {
}


// address: 0x80154B08
// line start: 450
// line end:   453
void AddVilebook__Fi(int i) {
}


// address: 0x80154B58
// line start: 460
// line end:   465
void AddMagicCircle__Fi(int i) {
}


// address: 0x80154BCC
// line start: 472
// line end:   474
void AddBrnCross__Fi(int i) {
}


// address: 0x80154C14
// line start: 481
// line end:   486
void AddPedistal__Fi(int i) {
}


// address: 0x80154C88
// line start: 497
// line end:   514
void AddStoryBook__Fi(int i) {
	// register: 4
	register int bookframe;
}


// address: 0x80154E54
// line start: 521
// line end:   529
void AddWeaponRack__Fi(int i) {
}


// address: 0x80154EDC
// line start: 536
// line end:   540
void AddTorturedBody__Fi(int i) {
}


// address: 0x80154F58
// line start: 548
// line end:   551
void AddFlameLvr__Fi(int i) {
}


// address: 0x80154F98
// line start: 557
// line end:   572
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


// address: 0x801550A4
// line start: 577
// line end:   586
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


// address: 0x801551C8
// line start: 591
// line end:   595
void AddSlainHero__Fv() {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80155208
// line start: 599
// line end:   611
unsigned char RndLocOk__Fii(int xp, int yp) {
}


// address: 0x801552EC
// line start: 616
// line end:   619
unsigned char TrapLocOk__Fii(int xp, int yp) {
}


// address: 0x80155354
// line start: 624
// line end:   629
unsigned char RoomLocOk__Fii(int xp, int yp) {
}


// address: 0x801553EC
// line start: 635
// line end:   659
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


// address: 0x80155598
// line start: 666
// line end:   696
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


// address: 0x80155790
// line start: 701
// line end:   727
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


// address: 0x801558B8
// line start: 730
// line end:   799
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


// address: 0x80155B58
// line start: 803
// line end:   826
void ClrAllObjects__Fv() {
	// register: 4
	register int i;
}


// address: 0x80155C48
// line start: 831
// line end:   851
void AddTortures__Fv() {
	// register: 19
	register int yp;
	// register: 18
	register int xp;
}


// address: 0x80155DD4
// line start: 858
// line end:   867
void AddCandles__Fv() {
	// register: 16
	register int xp;
	// register: 17
	register int yp;
}


// address: 0x80155E5C
// line start: 874
// line end:   951
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


// address: 0x801561F8
// line start: 958
// line end:   985
void AddLeverObj__Fiiiiiiii(int lx1, int ly1, int lx2, int ly2, int x1, int y1, int x2, int y2) {
}


// address: 0x80156200
// line start: 991
// line end:   1040
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


// address: 0x80156414
// line start: 1045
// line end:   1085
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


// address: 0x801565B0
// line start: 1092
// line end:   1104
void AddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x801566E8
// line start: 1111
// line end:   1121
void AddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x801567FC
// line start: 1128
// line end:   1138
void AddL3Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 17
	register int pn;
}


// address: 0x801568FC
// line start: 1144
// line end:   1147
unsigned char WallTrapLocOk__Fii(int xp, int yp) {
}


// address: 0x80156964
// line start: 1154
// line end:   1156
unsigned char TorchLocOK__Fii(int xp, int yp) {
}


// address: 0x801569A4
// line start: 1162
// line end:   1176
void AddL2Torches__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 17
	register int pn;
}


// address: 0x80156B58
// line start: 1183
// line end:   1224
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


// address: 0x80156ED0
// line start: 1231
// line end:   1250
void AddChestTraps__Fv() {
	// register: 18
	register int i;
	// register: 20
	register int j;
}


// address: 0x80157020
// line start: 1265
// line end:   1301
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


// address: 0x8015718C
// line start: 1305
// line end:   1325
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


// address: 0x801572E0
// line start: 1332
// line end:   1357
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


// address: 0x80157430
// line start: 1363
// line end:   1397
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


// address: 0x80157628
// line start: 1403
// line end:   1413
void AddL4Goodies__Fv() {
}


// address: 0x801576D8
// line start: 1419
// line end:   1451
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


// address: 0x8015786C
// line start: 1458
// line end:   1554
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


// address: 0x80157ED0
// line start: 1558
// line end:   1686
void PreObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


