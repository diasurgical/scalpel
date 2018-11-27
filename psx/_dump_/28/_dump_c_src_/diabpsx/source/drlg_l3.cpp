// C:\diabpsx\SOURCE\DRLG_L3.CPP

#include "types.h"

// address: 0x80146C58
// line start: 398
// line end:   408
void InitL3Dungeon__Fv() {
	// register: 7
	register int i;
	// register: 6
	register int j;
}


// address: 0x80146CE0
// line start: 414
// line end:   447
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


// address: 0x80146F3C
// line start: 453
// line end:   504
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


// address: 0x801471D8
// line start: 511
// line end:   517
void DRLG_L3FloorArea__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x80147240
// line start: 523
// line end:   547
void DRLG_L3FillDiags__Fv() {
	// register: 22
	register int j;
	// register: 16
	register int v;
}


// address: 0x80147370
// line start: 553
// line end:   574
void DRLG_L3FillSingles__Fv() {
	// register: 12
	register int i;
	// register: 13
	register int j;
	// register: 3
	register int v;
}


// address: 0x8014743C
// line start: 580
// line end:   681
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


// address: 0x80147800
// line start: 687
// line end:   691
void DRLG_L3Edges__Fv() {
	// register: 3
	register int j;
}


// address: 0x80147840
// line start: 697
// line end:   705
int DRLG_L3GetFloorArea__Fv() {
	// register: 4
	register int i;
	// register: 5
	register int j;
	// register: 6
	register int gfa;
}


// address: 0x80147890
// line start: 711
// line end:   738
void DRLG_L3MakeMegas__Fv() {
	// register: 6
	register int v;
}


// address: 0x801479D4
// line start: 744
// line end:   952
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


// address: 0x80148414
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x80146348
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x801486A0
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x80146358
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x801488B4
// line start: 1022
// line end:   1069
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
	// address: 0x80146368
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x80148B08
// line start: 1075
// line end:   1095
void DRLG_L3PoolFix__Fv() {
	// register: 9
	register int dunx;
	// register: 10
	register int duny;
}


// address: 0x80148C3C
// line start: 1102
// line end:   1240
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


// address: 0x80148FBC
// line start: 1246
// line end:   1299
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


// address: 0x80149304
// line start: 1346
// line end:   1357
unsigned char WoodVertU__Fii(int i, int y) {
}


// address: 0x801493B0
// line start: 1363
// line end:   1372
unsigned char WoodVertD__Fii(int i, int y) {
}


// address: 0x8014944C
// line start: 1378
// line end:   1389
unsigned char WoodHorizL__Fii(int x, int j) {
}


// address: 0x801494E0
// line start: 1395
// line end:   1404
unsigned char WoodHorizR__Fii(int x, int j) {
}


// address: 0x80149564
// line start: 1416
// line end:   1434
void AddFenceDoors__Fv() {
	// register: 8
	register int j;
}


// address: 0x80149648
// line start: 1447
// line end:   1481
void FenceDoorFix__Fv() {
	// register: 11
	register int j;
}


// address: 0x8014983C
// line start: 1487
// line end:   1641
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
	// register: 16
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


// address: 0x8014A02C
// line start: 1648
// line end:   1714
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


// address: 0x8014A288
// line start: 1721
// line end:   1747
void FixL3Warp__Fv() {
	// register: 10
	register int j;
}


// address: 0x8014A370
// line start: 1753
// line end:   1779
void FixL3HallofHeroes__Fv() {
	// register: 6
	register int i;
	// register: 9
	register int j;
}


// address: 0x8014A4C4
// line start: 1789
// line end:   1797
void DRLG_L3LockRec__Fii(int x, int y) {
}


// address: 0x8014A560
// line start: 1802
// line end:   1823
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


// address: 0x8014A620
// line start: 1830
// line end:   1983
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


// address: 0x8014AD40
// line start: 1991
// line end:   2044
void DRLG_L3Pass3__Fv() {
	// register: 11
	register int i;
	// register: 14
	register int j;
	// register: 8
	register int xx;
	// register: 15
	register int yy;
	// register: 10
	register long v1;
	// register: 4
	register long v2;
	// register: 3
	register long v3;
	// register: 9
	register long v4;
	// register: 2
	register long lv;
}


// address: 0x8014AEE4
// line start: 2053
// line end:   2108
void CreateL3Dungeon__FUii(unsigned int rseed, int entry) {
	// register: 16
	register int i;
	// register: 17
	register int j;
}


// address: 0x8014AFF8
// line start: 2116
// line end:   2178
void LoadL3Dungeon__FPcii(char *sFileName, int vx, int vy) {
	// register: 16
	register int i;
	// register: 17
	register int j;
	// register: 7
	register int rw;
	// register: 8
	register int rh;
	// register: 20
	register unsigned char *pLevelMap;
	// register: 6
	register unsigned char *lm;
	{
	}
}


// address: 0x8014B21C
// line start: 2184
// line end:   2219
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


