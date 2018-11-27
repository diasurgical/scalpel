// C:\diabpsx\SOURCE\DRLG_L3.CPP

#include "types.h"

// address: 0x80148FF8
void InitL3Dungeon__Fv() {
	// register: 7
	register int i;
	// register: 6
	register int j;
}


// address: 0x80149080
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


// address: 0x801492DC
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


// address: 0x80149578
void DRLG_L3FloorArea__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x801495E0
void DRLG_L3FillDiags__Fv() {
	// register: 22
	register int j;
	// register: 16
	register int v;
}


// address: 0x80149710
void DRLG_L3FillSingles__Fv() {
	// register: 12
	register int i;
	// register: 13
	register int j;
	// register: 3
	register int v;
}


// address: 0x801497DC
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


// address: 0x80149BA0
void DRLG_L3Edges__Fv() {
	// register: 3
	register int j;
}


// address: 0x80149BE0
int DRLG_L3GetFloorArea__Fv() {
	// register: 4
	register int i;
	// register: 5
	register int j;
	// register: 6
	register int gfa;
}


// address: 0x80149C30
void DRLG_L3MakeMegas__Fv() {
	// register: 6
	register int v;
}


// address: 0x80149D74
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


// address: 0x8014A7B4
int DRLG_L3SpawnEdge__FiiPi(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x801486E8
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8014AA40
int DRLG_L3Spawn__FiiPi(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x801486F8
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8014AC54
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
	// address: 0x80148708
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x8014AEA8
void DRLG_L3PoolFix__Fv() {
	// register: 9
	register int dunx;
	// register: 10
	register int duny;
}


// address: 0x8014AFDC
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


// address: 0x8014B35C
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


// address: 0x8014B6A4
unsigned char WoodVertU__Fii(int i, int y) {
}


// address: 0x8014B750
unsigned char WoodVertD__Fii(int i, int y) {
}


// address: 0x8014B7EC
unsigned char WoodHorizL__Fii(int x, int j) {
}


// address: 0x8014B880
unsigned char WoodHorizR__Fii(int x, int j) {
}


// address: 0x8014B904
void AddFenceDoors__Fv() {
	// register: 8
	register int j;
}


// address: 0x8014B9E8
void FenceDoorFix__Fv() {
	// register: 11
	register int j;
}


// address: 0x8014BBDC
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


// address: 0x8014C3CC
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


// address: 0x8014C628
void FixL3Warp__Fv() {
	// register: 10
	register int j;
}


// address: 0x8014C710
void FixL3HallofHeroes__Fv() {
	// register: 6
	register int i;
	// register: 9
	register int j;
}


// address: 0x8014C864
void DRLG_L3LockRec__Fii(int x, int y) {
}


// address: 0x8014C900
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


// address: 0x8014C9C0
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


// address: 0x8014D0E0
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


// address: 0x8014D284
void CreateL3Dungeon__FUii(unsigned int rseed, int entry) {
	// register: 16
	register int i;
	// register: 17
	register int j;
}


// address: 0x8014D398
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


// address: 0x8014D5BC
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


