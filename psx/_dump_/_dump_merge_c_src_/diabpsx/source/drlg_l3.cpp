// C:\diabpsx\SOURCE\DRLG_L3.CPP

#include "types.h"

// address: 0x8013453C
// line start: 1416
// line end:   1434
void AddFenceDoors__Fv() {
	// register: 8
	register int j;
}


// address: 0x80135EBC
// line start: 2053
// line end:   2108
void CreateL3Dungeon__FUii(unsigned int rseed, int entry) {
	// register: 16
	register int i;
	// register: 17
	register int j;
}


// address: 0x80135004
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


// address: 0x80131F14
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


// address: 0x801327D8
// line start: 687
// line end:   691
void DRLG_L3Edges__Fv() {
	// register: 3
	register int j;
}


// address: 0x80132218
// line start: 523
// line end:   547
void DRLG_L3FillDiags__Fv() {
	// register: 22
	register int j;
	// register: 16
	register int v;
}


// address: 0x80131CB8
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


// address: 0x80132348
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


// address: 0x80132414
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


// address: 0x801321B0
// line start: 511
// line end:   517
void DRLG_L3FloorArea__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x80132818
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


// address: 0x8013549C
// line start: 1789
// line end:   1797
void DRLG_L3LockRec__Fii(int x, int y) {
}


// address: 0x80135538
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


// address: 0x80132868
// line start: 711
// line end:   738
void DRLG_L3MakeMegas__Fv() {
	// register: 6
	register int v;
}


// address: 0x80142460
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
	// register: 9
	register long v3;
	// register: 3
	register long v4;
	// register: 2
	register long lv;
}


// address: 0x80135D18
// line start: 1991
// line end:   2044
void DRLG_L3Pass3__Fv_addr_80135D18() {
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


// address: 0x80133C14
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


// address: 0x80133F94
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


// address: 0x80133AE0
// line start: 1075
// line end:   1095
void DRLG_L3PoolFix__Fv() {
	// register: 9
	register int dunx;
	// register: 10
	register int duny;
}


// address: 0x8013F778
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
	// address: 0x8013D22C
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x801488B4
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_801488B4() {
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


// address: 0x80134F54
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_80134F54() {
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
	// address: 0x80132A08
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x8014626C
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_8014626C() {
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
	// address: 0x80143D20
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x80149924
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_80149924() {
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
	// address: 0x801473D8
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x8013FFD4
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_8013FFD4() {
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
	// address: 0x8013DA88
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x801364FC
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_801364FC() {
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
	// address: 0x80133FB0
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x8013388C
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_8013388C() {
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
	// address: 0x80131340
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x801491DC
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_801491DC() {
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
	// address: 0x80146C90
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x80149D1C
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_80149D1C() {
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
	// address: 0x801477D0
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x801497EC
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_801497EC() {
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
	// address: 0x801472A0
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x80149F64
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_80149F64() {
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
	// address: 0x80147A18
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x801341CC
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_801341CC() {
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
	// address: 0x80131C80
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x801339B4
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_801339B4() {
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
	// address: 0x80131468
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x80130F74
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_80130F74() {
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
	// address: 0x8012EA28
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x801486BC
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_801486BC() {
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
	// address: 0x80146170
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x8013270C
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_8013270C() {
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
	// address: 0x801301C0
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x80140E34
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_80140E34() {
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
	// address: 0x8013E8E8
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x80139D7C
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_80139D7C() {
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
	// address: 0x80137830
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x801489CC
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_801489CC() {
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
	// address: 0x80146480
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x80135BDC
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_80135BDC() {
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
	// address: 0x80133690
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x8014AC54
// line start: 1022
// line end:   1069
void DRLG_L3Pool__Fv_addr_8014AC54() {
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


// address: 0x801329AC
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


// address: 0x8013605C
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x80133F90
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80145DCC
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_80145DCC(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x80143D00
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80149484
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_80149484(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x801473B8
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80148D3C
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_80148D3C(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x80146C70
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8014987C
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_8014987C(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x801477B0
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8013573C
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_8013573C(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x80133670
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8014934C
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_8014934C(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x80147280
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x801333EC
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_801333EC(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x80131320
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8014852C
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_8014852C(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x80146460
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80140994
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_80140994(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x8013E8C8
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8013226C
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_8013226C(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x801301A0
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80130AD4
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_80130AD4(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x8012EA08
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8014821C
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_8014821C(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x80146150
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x801398DC
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_801398DC(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x80137810
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8013F2D8
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_8013F2D8(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x8013D20C
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8013FB34
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_8013FB34(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x8013DA68
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8014A7B4
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_8014A7B4(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x801486E8
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80133D2C
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_80133D2C(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x80131C60
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80148414
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_80148414(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x80146348
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80149AC4
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_80149AC4(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x801479F8
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80133514
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_80133514(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x80131448
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80134AB4
// line start: 957
// line end:   981
int DRLG_L3SpawnEdge__FiiPi_addr_80134AB4(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x801329E8
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80149D50
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x80147A08
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8013F564
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_8013F564(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x8013D21C
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80133FB8
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_80133FB8(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x80131C70
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80134D40
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_80134D40(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x801329F8
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x801337A0
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_801337A0(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x80131458
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8013FDC0
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_8013FDC0(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x8013DA78
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x801486A0
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_801486A0(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x80146358
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x801362E8
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_801362E8(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x80133FA0
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x801484A8
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_801484A8(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x80146160
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80130D60
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_80130D60(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x8012EA18
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80133678
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_80133678(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x80131330
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x801324F8
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_801324F8(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x801301B0
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80148FC8
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_80148FC8(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x80146C80
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80139B68
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_80139B68(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x80137820
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80140C20
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_80140C20(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x8013E8D8
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x801487B8
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_801487B8(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x80146470
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80149B08
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_80149B08(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x801477C0
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80146058
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_80146058(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x80143D10
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x801359C8
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_801359C8(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x80133680
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x801495D8
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_801495D8(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x80147290
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80149710
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_80149710(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x801473C8
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8014AA40
// line start: 987
// line end:   1016
int DRLG_L3Spawn__FiiPi_addr_8014AA40(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x801486F8
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80134814
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


// address: 0x801355F8
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


// address: 0x80134620
// line start: 1447
// line end:   1481
void FenceDoorFix__Fv() {
	// register: 11
	register int j;
}


// address: 0x80135348
// line start: 1753
// line end:   1779
void FixL3HallofHeroes__Fv() {
	// register: 6
	register int i;
	// register: 9
	register int j;
}


// address: 0x80135260
// line start: 1721
// line end:   1747
void FixL3Warp__Fv() {
	// register: 10
	register int j;
}


// address: 0x80131C30
// line start: 398
// line end:   408
void InitL3Dungeon__Fv() {
	// register: 7
	register int i;
	// register: 6
	register int j;
}


// address: 0x80135FD0
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


// address: 0x801361F4
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


// address: 0x80134424
// line start: 1378
// line end:   1389
unsigned char WoodHorizL__Fii(int x, int j) {
}


// address: 0x801344B8
// line start: 1395
// line end:   1404
unsigned char WoodHorizR__Fii(int x, int j) {
}


// address: 0x80134388
// line start: 1363
// line end:   1372
unsigned char WoodVertD__Fii(int i, int y) {
}


// address: 0x801342DC
// line start: 1346
// line end:   1357
unsigned char WoodVertU__Fii(int i, int y) {
}


// address: 0x8014D658
// line start: 2153
// line end:   2210
void CreateL3Dungeon__FUii_addr_8014D658(unsigned int rseed, int entry) {
}


// address: 0x8014D440
// line start: 2081
// line end:   2144
void DRLG_L3Pass3__Fv_addr_8014D440() {
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


// address: 0x8014B064
// line start: 1105
// line end:   1138
void DRLG_L3PoolFix__Fv_addr_8014B064() {
	// register: 10
	register int duny;
}


// address: 0x80146680
// line start: 1052
// line end:   1099
void DRLG_L3Pool__Fv_addr_80146680() {
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
	// address: 0x8014409C
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x8014AD08
// line start: 1052
// line end:   1099
void DRLG_L3Pool__Fv_addr_8014AD08() {
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
	// address: 0x80148724
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x801466A8
// line start: 1052
// line end:   1099
void DRLG_L3Pool__Fv_addr_801466A8() {
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
	// address: 0x801440C4
	// size: 0xF
	static unsigned char poolsub[15];
}


// address: 0x8014AE10
// line start: 1052
// line end:   1099
void DRLG_L3Pool__Fv_addr_8014AE10() {
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


// address: 0x801461E8
// line start: 987
// line end:   1011
int DRLG_L3SpawnEdge__FiiPi_addr_801461E8(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x8014407C
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8014A870
// line start: 987
// line end:   1011
int DRLG_L3SpawnEdge__FiiPi_addr_8014A870(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x80148704
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80146210
// line start: 987
// line end:   1011
int DRLG_L3SpawnEdge__FiiPi_addr_80146210(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x801440A4
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8014A978
// line start: 987
// line end:   1011
int DRLG_L3SpawnEdge__FiiPi_addr_8014A978(int x, int y, int *totarea) {
	// register: 17
	register unsigned char i;
	// address: 0x8014880C
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8014AAFC
// line start: 1017
// line end:   1046
int DRLG_L3Spawn__FiiPi_addr_8014AAFC(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x80148714
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x80146474
// line start: 1017
// line end:   1046
int DRLG_L3Spawn__FiiPi_addr_80146474(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x8014408C
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8014649C
// line start: 1017
// line end:   1046
int DRLG_L3Spawn__FiiPi_addr_8014649C(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x801440B4
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8014AC04
// line start: 1017
// line end:   1046
int DRLG_L3Spawn__FiiPi_addr_8014AC04(int x, int y, int *totarea) {
	// register: 19
	register unsigned char i;
	// address: 0x8014881C
	// size: 0xF
	static unsigned char spawntable[15];
}


// address: 0x8014BE7C
// line start: 1530
// line end:   1696
void DRLG_L3Wood__Fv_addr_8014BE7C() {
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


// address: 0x801491D0
// line start: 431
// line end:   438
void FixL3Dungeon__Fv() {
	// register: 5
	register int x;
	// register: 6
	register int y;
}


// address: 0x801490F0
// line start: 399
// line end:   417
void InitL3Dungeon__Fv_addr_801490F0() {
	// register: 5
	register int i;
	// register: 4
	register int j;
}


// address: 0x8014D6D0
// line start: 2218
// line end:   2280
void LoadL3Dungeon__FPcii_addr_8014D6D0(char *sFileName, int vx, int vy) {
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


// address: 0x80149174
// line start: 421
// line end:   427
void SetBlankL3Dungeon__Fv() {
	// register: 5
	register int x;
	// register: 6
	register int y;
}


