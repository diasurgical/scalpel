// C:\diabpsx\SOURCE\DRLG_L3.CPP

#include "types.h"

// address: 0x801490F0
// line start: 399
// line end:   417
void InitL3Dungeon__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int j;
}


// address: 0x80149174
// line start: 421
// line end:   427
void SetBlankL3Dungeon__Fv() {
	// register: 5
	register int x;
	// register: 6
	register int y;
}


// address: 0x801491D0
// line start: 431
// line end:   438
void FixL3Dungeon__Fv() {
	// register: 5
	register int x;
	// register: 6
	register int y;
}


// address: 0x80149244
// line start: 444
// line end:   477
int DRLG_L3FillRoom__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 16
	register int i;
	// register: 17
	register int j;
	// register: 4
	register int v;
	// register: 2
	register int rv;
}


// address: 0x801494A0
// line start: 483
// line end:   534
void DRLG_L3CreateBlock__Fiiii(int x, int y, int obs, int dir) {
	// register: 17
	register int blksizex;
	// register: 16
	register int blksizey;
	// register: 18
	register int x1;
	// register: 19
	register int y1;
	// register: 22
	register int x2;
	// register: 30
	register int y2;
	// register: 20
	register int contflag;
}


// address: 0x8014973C
// line start: 541
// line end:   547
void DRLG_L3FloorArea__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x801497A4
// line start: 553
// line end:   577
void DRLG_L3FillDiags__Fv() {
	// register: 22
	register int j;
	// register: 16
	register int v;
}


// address: 0x801498D4
// line start: 583
// line end:   604
void DRLG_L3FillSingles__Fv() {
	// register: 12
	register int i;
	// register: 13
	register int j;
	// register: 3
	register int v;
}


// address: 0x801499A0
// line start: 610
// line end:   711
void DRLG_L3FillStraights__Fv() {
	// register: 19
	register int i;
	// register: 18
	register int j;
	// register: 5
	register int xc;
	// register: 22
	register int xs;
	// register: 4
	register int yc;
	// address: 0xFFFFFFD0
	auto int ys;
	// register: 16
	register int k;
}


// address: 0x80149D64
// line start: 717
// line end:   721
void DRLG_L3Edges__Fv() {
	// register: 3
	register int j;
}


// address: 0x80149DA4
// line start: 727
// line end:   735
int DRLG_L3GetFloorArea__Fv() {
	// register: 4
	register int i;
	// register: 5
	register int j;
	// register: 6
	register int gfa;
}


// address: 0x80149DF4
// line start: 741
// line end:   768
void DRLG_L3MakeMegas__Fv() {
	// register: 6
	register int v;
}


// address: 0x80149F38
// line start: 774
// line end:   982
void DRLG_L3River__Fv() {
	// register: 16
	register int rx;
	// register: 18
	register int ry;
	// register: 6
	register int px;
	// register: 7
	register int py;
	// register: 17
	register int dir;
	// register: 30
	register int pdir;
	// address: 0xFFFFFF98
	auto int nodir;
	// register: 19
	register int nodir2;
	// register: 20
	register int dircheck;
	// address: 0xFFFFFAE8
	// size: 0x4B0
	auto int river[100][3];
	// register: 21
	register int rivercnt;
	// address: 0xFFFFFFA0
	auto int riveramt;
	// register: 10
	register int i;
	// address: 0xFFFFFFA8
	auto int trys;
	// register: 9
	register int found;
	// register: 16
	register int bridge;
	// register: 18
	register int lpcnt;
	// register: 19
	register int bail;
}


// address: 0x8014A978
// line start: 987
// line end:   1011
int DRLG_L3SpawnEdge__FiiPi(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x8014880C
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8014AC04
// line start: 1017
// line end:   1046
int DRLG_L3Spawn__FiiPi(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x8014881C
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8014AE10
// line start: 1052
// line end:   1099
void DRLG_L3Pool__Fv() {
	// register: 8
	register int i;
	// register: 4
	register int j;
	// register: 16
	register int found;
	// register: 17
	register int dunx;
	// register: 18
	register int duny;
	// address: 0xFFFFFFD8
	auto int totarea;
	// register: 4
	register int poolchance;
	// register: 3
	register unsigned char k;
	// address: 0x8014882C
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x8014B064
// line start: 1105
// line end:   1138
void DRLG_L3PoolFix__Fv() {
	// register: 10
	register int duny;
}


// address: 0x8014B284
// line start: 1145
// line end:   1283
int DRLG_L3PlaceMiniSet__FPCUciiiiii(unsigned char *miniset, int tmin, int tmax, int cx, int cy, int setview, int ldir) {
	// register: 17
	register int sx;
	// register: 16
	register int sy;
	// register: 18
	register int sw;
	// register: 19
	register int sh;
	// register: 5
	register int xx;
	// register: 7
	register int yy;
	// register: 30
	register int i;
	// register: 9
	register int ii;
	// address: 0xFFFFFFA0
	auto int numt;
	// register: 8
	register int found;
	// register: 20
	register int trys;
}


// address: 0x8014B604
// line start: 1289
// line end:   1342
void DRLG_L3PlaceRndSet__FPCUci(unsigned char *miniset, int rndper) {
	// register: 17
	register int sx;
	// register: 22
	register int sy;
	// register: 18
	register int sw;
	// register: 21
	register int sh;
	// register: 4
	register int xx;
	// register: 7
	register int yy;
	// register: 9
	register int ii;
	// register: 16
	register int kk;
	// register: 8
	register int found;
}


// address: 0x8014B944
// line start: 1389
// line end:   1400
unsigned char WoodVertU__Fii(int i, int y) {
}


// address: 0x8014B9F0
// line start: 1406
// line end:   1415
unsigned char WoodVertD__Fii(int i, int y) {
}


// address: 0x8014BA8C
// line start: 1421
// line end:   1432
unsigned char WoodHorizL__Fii(int x, int j) {
}


// address: 0x8014BB20
// line start: 1438
// line end:   1447
unsigned char WoodHorizR__Fii(int x, int j) {
}


// address: 0x8014BBA4
// line start: 1459
// line end:   1477
void AddFenceDoors__Fv() {
	// register: 8
	register int j;
}


// address: 0x8014BC88
// line start: 1490
// line end:   1524
void FenceDoorFix__Fv() {
	// register: 11
	register int j;
}


// address: 0x8014BE7C
// line start: 1530
// line end:   1696
void DRLG_L3Wood__Fv() {
	// register: 22
	register int i;
	// register: 23
	register int j;
	// register: 18
	register int x;
	// register: 19
	register int y;
	// register: 16
	register int xx;
	// register: 17
	register int yy;
	// address: 0xFFFFFFC8
	auto int rt;
	// register: 3
	register int rp;
	// register: 20
	register int skip;
	// register: 16
	register int x1;
	// register: 16
	register int y1;
	// register: 17
	register int x2;
	// register: 17
	register int y2;
}


// address: 0x8014C66C
// line start: 1703
// line end:   1769
int DRLG_L3Anvil__Fv() {
	// register: 18
	register int sx;
	// register: 11
	register int sy;
	// register: 17
	register int sw;
	// register: 19
	register int sh;
	// register: 5
	register int xx;
	// register: 7
	register int yy;
	// register: 8
	register int ii;
	// register: 6
	register int found;
	// register: 12
	register int trys;
}


// address: 0x8014C8CC
// line start: 1776
// line end:   1802
void FixL3Warp__Fv() {
	// register: 10
	register int j;
}


// address: 0x8014C9B4
// line start: 1808
// line end:   1834
void FixL3HallofHeroes__Fv() {
	// register: 6
	register int i;
	// register: 9
	register int j;
}


// address: 0x8014CB08
// line start: 1844
// line end:   1852
void DRLG_L3LockRec__Fii(int x, int y) {
}


// address: 0x8014CBA4
// line start: 1857
// line end:   1878
unsigned char DRLG_L3Lockout__Fv() {
	// register: 7
	register int i;
	// register: 3
	register int j;
	// register: 16
	register int t;
	// register: 4
	register int fx;
	// register: 5
	register int fy;
}


// address: 0x8014CC64
// line start: 1884
// line end:   1915
void DRLG_L3SetWalls__Fv() {
	// register: 6
	register int i;
	// register: 7
	register int j;
	// register: 9
	register int yy;
	{
		{
			{
				{
					// register: 3
					register int v;
				}
			}
		}
	}
}


// address: 0x8014CD18
// line start: 1919
// line end:   2073
void DRLG_L3__Fi(int entry) {
	// register: 19
	register int x1;
	// register: 18
	register int y1;
	// register: 16
	register int x2;
	// register: 17
	register int y2;
	// register: 4
	register int sx1;
	// register: 6
	register int i;
	// register: 7
	register int j;
	// register: 16
	register int found;
	// register: 2
	register unsigned char genok;
}


// address: 0x8014D440
// line start: 2081
// line end:   2144
void DRLG_L3Pass3__Fv() {
	// register: 23
	register int i;
	// register: 30
	register int j;
	// register: 17
	register int xx;
	// register: 18
	register int yy;
	// register: 6
	register long v1;
	// register: 22
	register long v2;
	// register: 20
	register long v3;
	// register: 21
	register long v4;
	// register: 2
	register long lv;
}


// address: 0x8014D658
// line start: 2153
// line end:   2210
void CreateL3Dungeon__FUii(unsigned int rseed, int entry) {
}


// address: 0x8014D6D0
// line start: 2218
// line end:   2280
void LoadL3Dungeon__FPcii(char *sFileName, int vx, int vy) {
	// register: 5
	register int i;
	// register: 6
	register int j;
	// register: 9
	register int rw;
	// register: 10
	register int rh;
	// register: 16
	register unsigned char *pLevelMap;
	// register: 8
	register unsigned char *lm;
	{
	}
}


// address: 0x8014D854
// line start: 2286
// line end:   2321
void LoadPreL3Dungeon__FPcii(char *sFileName, int vx, int vy) {
	// register: 5
	register int i;
	// register: 6
	register int j;
	// register: 9
	register int rw;
	// register: 10
	register int rh;
	// register: 12
	register unsigned char *pLevelMap;
	// register: 8
	register unsigned char *lm;
	{
	}
}


