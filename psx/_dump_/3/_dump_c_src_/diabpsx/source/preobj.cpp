// C:\diabpsx\SOURCE\PREOBJ.CPP

#include "types.h"

// address: 0x8014AC98
void AddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8014AE28
void AddSCambBook__Fi(int i) {
}


// address: 0x8014AF00
void AddChest__Fii(int i, int t) {
}


// address: 0x8014B100
void AddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8014B270
void AddL3Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8014B34C
void AddSarc__Fi(int i) {
	// register: 6
	register int x;
	// register: 2
	register int y;
}


// address: 0x8014B450
void AddFlameTrap__Fi(int i) {
}


// address: 0x8014B4E4
void AddTrap__Fii(int i, int ot) {
	// register: 17
	register int mt;
}


// address: 0x8014B600
void AddObjLight__Fii(int i, int r) {
}


// address: 0x8014B6DC
void AddBarrel__Fii(int i, int ot) {
}


// address: 0x8014B7AC
void AddShrine__Fi(int i) {
	// register: 3
	register int st;
	// address: 0xFFFFFFD0
	// size: 0x1A
	auto unsigned char slist[26];
}


// address: 0x8014B918
void AddBookcase__Fi(int i) {
}


// address: 0x8014B990
void AddBookstand__Fi(int i) {
}


// address: 0x8014B9F8
void AddBloodFtn__Fi(int i) {
}


// address: 0x8014BA60
void AddPurifyingFountain__Fi(int i) {
	// register: 4
	register int x;
	// register: 7
	register int y;
}


// address: 0x8014BB64
void AddArmorStand__Fi(int i) {
}


// address: 0x8014BC0C
void AddGoatShrine__Fi(int i) {
}


// address: 0x8014BC74
void AddCauldron__Fi(int i) {
}


// address: 0x8014BCDC
void AddMurkyFountain__Fi(int i) {
	// register: 4
	register int x;
	// register: 7
	register int y;
}


// address: 0x8014BDE0
void AddTearFountain__Fi(int i) {
}


// address: 0x8014BE48
void AddDecap__Fi(int i) {
}


// address: 0x8014BEE0
void AddVilebook__Fi(int i) {
}


// address: 0x8014BF64
void AddMagicCircle__Fi(int i) {
}


// address: 0x8014BFF8
void AddBrnCross__Fi(int i) {
}


// address: 0x8014C060
void AddPedistal__Fi(int i) {
}


// address: 0x8014C10C
void AddStoryBook__Fi(int i) {
}


// address: 0x8014C2C8
void AddWeaponRack__Fi(int i) {
}


// address: 0x8014C370
void AddTorturedBody__Fi(int i) {
}


// address: 0x8014C408
void AddFlameLvr__Fi(int i) {
}


// address: 0x8014C480
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
void AddSlainHero__Fv() {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x8014C6F0
unsigned char RndLocOk__Fii(int xp, int yp) {
}


// address: 0x8014C7D4
unsigned char TrapLocOk__Fii(int xp, int yp) {
}


// address: 0x8014C83C
unsigned char RoomLocOk__Fii(int xp, int yp) {
}


// address: 0x8014C8D4
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
void ClrAllObjects__Fv() {
	// register: 4
	register int i;
}


// address: 0x8014D154
void AddTortures__Fv() {
	// register: 19
	register int yp;
	// register: 18
	register int xp;
}


// address: 0x8014D2E0
void AddCandles__Fv() {
	// register: 16
	register int xp;
	// register: 17
	register int yp;
}


// address: 0x8014D368
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
void AddLeverObj__Fiiiiiiii(int lx1, int ly1, int lx2, int ly2, int x1, int y1, int x2, int y2) {
}


// address: 0x8014D70C
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
void AddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x8014DC54
void AddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x8014DD68
void AddL3Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 17
	register int pn;
}


// address: 0x8014DE68
unsigned char TorchLocOK__Fii(int xp, int yp) {
}


// address: 0x8014DEA8
void AddL2Torches__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 17
	register int pn;
}


// address: 0x8014E05C
unsigned char WallTrapLocOk__Fii(int xp, int yp) {
}


// address: 0x8014E0C4
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
void AddChestTraps__Fv() {
	// register: 18
	register int i;
	// register: 20
	register int j;
}


// address: 0x8014E58C
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
void AddL4Goodies__Fv() {
}


// address: 0x8014EC44
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
void PreObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


