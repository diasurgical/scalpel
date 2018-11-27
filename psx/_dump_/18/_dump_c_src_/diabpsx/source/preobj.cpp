// C:\diabpsx\SOURCE\PREOBJ.CPP

#include "types.h"

// address: 0x8014BF80
void AddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8014C0B8
void AddSCambBook__Fi(int i) {
}


// address: 0x8014C158
void AddChest__Fii(int i, int t) {
}


// address: 0x8014C338
void AddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8014C484
void AddL3Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8014C518
void AddSarc__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int y;
}


// address: 0x8014C5F4
void AddFlameTrap__Fi(int i) {
}


// address: 0x8014C650
void AddTrap__Fii(int i, int ot) {
	// register: 4
	register int mt;
}


// address: 0x8014C748
void AddArmorStand__Fi(int i) {
}


// address: 0x8014C7D0
void AddObjLight__Fii(int i, int r) {
}


// address: 0x8014C878
void AddBarrel__Fii(int i, int ot) {
}


// address: 0x8014C928
void AddShrine__Fi(int i) {
	// register: 3
	register int st;
	// address: 0xFFFFFFD0
	// size: 0x1A
	auto unsigned char slist[26];
}


// address: 0x8014CA78
void AddBookcase__Fi(int i) {
}


// address: 0x8014CAD0
void AddBookstand__Fi(int i) {
}


// address: 0x8014CB18
void AddBloodFtn__Fi(int i) {
}


// address: 0x8014CB60
void AddPurifyingFountain__Fi(int i) {
	// register: 5
	register int x;
	// register: 7
	register int y;
}


// address: 0x8014CC3C
void AddGoatShrine__Fi(int i) {
}


// address: 0x8014CC84
void AddCauldron__Fi(int i) {
}


// address: 0x8014CCCC
void AddMurkyFountain__Fi(int i) {
	// register: 5
	register int x;
	// register: 7
	register int y;
}


// address: 0x8014CDA8
void AddTearFountain__Fi(int i) {
}


// address: 0x8014CDF0
void AddDecap__Fi(int i) {
}


// address: 0x8014CE6C
void AddVilebook__Fi(int i) {
}


// address: 0x8014CEBC
void AddMagicCircle__Fi(int i) {
}


// address: 0x8014CF30
void AddBrnCross__Fi(int i) {
}


// address: 0x8014CF78
void AddPedistal__Fi(int i) {
}


// address: 0x8014CFEC
void AddStoryBook__Fi(int i) {
	// register: 4
	register int bookframe;
}


// address: 0x8014D1BC
void AddWeaponRack__Fi(int i) {
}


// address: 0x8014D244
void AddTorturedBody__Fi(int i) {
}


// address: 0x8014D2C0
void AddFlameLvr__Fi(int i) {
}


// address: 0x8014D300
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


// address: 0x8014D40C
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


// address: 0x8014D530
void AddSlainHero__Fv() {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x8014D570
unsigned char RndLocOk__Fii(int xp, int yp) {
}


// address: 0x8014D654
unsigned char TrapLocOk__Fii(int xp, int yp) {
}


// address: 0x8014D6BC
unsigned char RoomLocOk__Fii(int xp, int yp) {
}


// address: 0x8014D754
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


// address: 0x8014D900
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


// address: 0x8014DAF8
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


// address: 0x8014DC20
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


// address: 0x8014DEC0
void ClrAllObjects__Fv() {
	// register: 4
	register int i;
}


// address: 0x8014DFB0
void AddTortures__Fv() {
	// register: 19
	register int yp;
	// register: 18
	register int xp;
}


// address: 0x8014E13C
void AddCandles__Fv() {
	// register: 16
	register int xp;
	// register: 17
	register int yp;
}


// address: 0x8014E1C4
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


// address: 0x8014E560
void AddLeverObj__Fiiiiiiii(int lx1, int ly1, int lx2, int ly2, int x1, int y1, int x2, int y2) {
}


// address: 0x8014E568
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


// address: 0x8014E77C
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


// address: 0x8014E918
void AddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x8014EA50
void AddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x8014EB64
void AddL3Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 17
	register int pn;
}


// address: 0x8014EC64
unsigned char WallTrapLocOk__Fii(int xp, int yp) {
}


// address: 0x8014ECCC
unsigned char TorchLocOK__Fii(int xp, int yp) {
}


// address: 0x8014ED0C
void AddL2Torches__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 17
	register int pn;
}


// address: 0x8014EEC0
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


// address: 0x8014F238
void AddChestTraps__Fv() {
	// register: 18
	register int i;
	// register: 20
	register int j;
}


// address: 0x8014F388
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


// address: 0x8014F4F4
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


// address: 0x8014F648
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


// address: 0x8014F798
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


// address: 0x8014F990
void AddL4Goodies__Fv() {
}


// address: 0x8014FA40
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


// address: 0x8014FBD4
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


// address: 0x80150238
void PreObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


