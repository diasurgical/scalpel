// C:\diabpsx\SOURCE\DRLG_L1.CPP

#include "types.h"

// address: 0x8012B0D8
// line start: 269
// line end:   306
void DRLG_PlaceDoor__Fii(int x, int y) {
	// register: 7
	register unsigned char c;
	// register: 8
	register unsigned char df;
}


// address: 0x8012B5AC
// line start: 327
// line end:   391
void DRLG_L1Shadows__Fv() {
	// register: 11
	register int x;
	// register: 7
	register int y;
	// register: 9
	register int i;
	// register: 5
	register int patflag;
	// address: 0xFFFFFFE8
	// size: 0x4
	auto unsigned char sd[2][2];
	// register: 2
	register unsigned char tnv3;
}


// address: 0x8012B9C4
// line start: 397
// line end:   564
int DRLG_PlaceMiniSet__FPCUciiiiiii(unsigned char *miniset, int tmin, int tmax, int cx, int cy, int setview, int noquad, int ldir) {
	// register: 16
	register int sx;
	// register: 17
	register int sy;
	// register: 18
	register int sw;
	// register: 20
	register int sh;
	// register: 5
	register int xx;
	// register: 7
	register int yy;
	// register: 19
	register int i;
	// register: 9
	register int ii;
	// address: 0xFFFFFF98
	auto int numt;
	// register: 8
	register int found;
	// register: 12
	register int abort;
}


// address: 0x8012BE30
// line start: 612
// line end:   624
void DRLG_L1Floor__Fv() {
	// register: 19
	register int i;
	// register: 20
	register int j;
	// register: 3
	register long rv;
}


// address: 0x8012BF1C
// line start: 638
// line end:   647
void StoreBlock__FPiii(int *Bl, int xx, int yy) {
}


// address: 0x8012BFC8
// line start: 651
// line end:   731
void DRLG_L1Pass3__Fv() {
	// register: 12
	register int i;
	// register: 24
	register int j;
	// register: 8
	register int xx;
	// register: 15
	register int yy;
	// register: 13
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


// address: 0x8012C19C
// line start: 739
// line end:   751
void DRLG_LoadL1SP__Fv() {
}


// address: 0x8012C278
// line start: 757
// line end:   758
void DRLG_FreeL1SP__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x8012C2A8
// line start: 764
// line end:   799
void DRLG_Init_Globals__Fv() {
	// register: 4
	register int x;
	// register: 6
	register int y;
}


// address: 0x8012C34C
// line start: 806
// line end:   816
void set_restore_lighting__Fv() {
	// register: 10
	register int x;
	// register: 6
	register int y;
}


// address: 0x8012C3DC
// line start: 821
// line end:   851
void DRLG_InitL1Vals__Fv() {
}


// address: 0x8012C3E4
// line start: 856
// line end:   915
void LoadL1Dungeon__FPcii(char *sFileName, int vx, int vy) {
	// register: 6
	register int i;
	// register: 7
	register int j;
	// register: 10
	register int rw;
	// register: 11
	register int rh;
	// register: 16
	register unsigned char *pLevelMap;
	// register: 9
	register unsigned char *lm;
	{
	}
}


// address: 0x8012C5B0
// line start: 922
// line end:   966
void LoadPreL1Dungeon__FPcii(char *sFileName, int vx, int vy) {
	// register: 4
	register int i;
	// register: 7
	register int j;
	// register: 10
	register int rw;
	// register: 11
	register int rh;
	// register: 16
	register unsigned char *pLevelMap;
	// register: 9
	register unsigned char *lm;
	{
	}
}


// address: 0x8012C768
// line start: 1005
// line end:   1013
void InitL5Dungeon__Fv() {
	// register: 6
	register int i;
	// register: 7
	register int j;
}


// address: 0x8012C7C8
// line start: 1019
// line end:   1024
void L5ClearFlags__Fv() {
	// register: 5
	register int i;
	// register: 6
	register int j;
}


// address: 0x8012C814
// line start: 1030
// line end:   1038
void L5drawRoom__Fiiii(int x, int y, int w, int h) {
	// register: 8
	register int i;
	// register: 9
	register int j;
}


// address: 0x8012C880
// line start: 1045
// line end:   1054
unsigned char L5checkRoom__Fiiii(int x, int y, int width, int height) {
	// register: 8
	register int i;
	// register: 9
	register int j;
}


// address: 0x8012C914
// line start: 1061
// line end:   1136
void L5roomGen__Fiiiii(int x, int y, int w, int h, int dir) {
	// register: 23
	register int rx;
	// register: 30
	register int ry;
	// register: 19
	register int ry2;
	// register: 18
	register int height;
	// register: 20
	register int width;
	// register: 19
	register int cx1;
	// register: 16
	register int cy1;
	// register: 21
	register int cw;
	// register: 17
	register int ch;
	// register: 22
	register int num;
	// register: 3
	register int dirProb;
	// register: 3
	register int ran;
}


// address: 0x8012CC10
// line start: 1144
// line end:   1195
void L5firstRoom__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
	// register: 17
	register int xs;
	// register: 16
	register int xe;
	// register: 17
	register int ys;
	// register: 16
	register int ye;
}


// address: 0x8012CFCC
// line start: 1202
// line end:   1212
long L5GetArea__Fv() {
	// register: 4
	register int i;
	// register: 5
	register int j;
	// register: 6
	register long rv;
}


// address: 0x8012D02C
// line start: 1218
// line end:   1231
void L5makeDungeon__Fv() {
	// register: 10
	register int i;
	// register: 11
	register int j;
	// register: 9
	register int l;
}


// address: 0x8012D0B8
// line start: 1237
// line end:   1258
void L5makeDmt__Fv() {
	// register: 7
	register int i;
	// register: 8
	register int j;
	// register: 2
	register int idx;
	// register: 2
	register int val;
	// register: 12
	register int dmty;
}


// address: 0x8012D1A0
// line start: 1265
// line end:   1280
int L5HWallOk__Fii(int i, int j) {
	// register: 9
	register int x;
	// register: 4
	register unsigned char wallok;
}


// address: 0x8012D2DC
// line start: 1286
// line end:   1301
int L5VWallOk__Fii(int i, int j) {
	// register: 8
	register int y;
	// register: 4
	register unsigned char wallok;
}


// address: 0x8012D428
// line start: 1307
// line end:   1339
void L5HorizWall__Fiici(int i, int j, char p, int dx) {
	// register: 6
	register int xx;
	// register: 18
	register char wt;
	// register: 16
	register char dt;
}


// address: 0x8012D668
// line start: 1346
// line end:   1378
void L5VertWall__Fiici(int i, int j, char p, int dy) {
	// register: 5
	register int yy;
	// register: 19
	register char wt;
	// register: 16
	register char dt;
}


// address: 0x8012D89C
// line start: 1386
// line end:   1419
void L5AddWall__Fv() {
	// register: 16
	register int i;
	// register: 17
	register int j;
	// register: 2
	register int x;
	// register: 2
	register int y;
}


// address: 0x8012DB0C
// line start: 1425
// line end:   1479
void DRLG_L5GChamber__Fiiiiii(int sx, int sy, int topflag, int bottomflag, int leftflag, int rightflag) {
	// register: 4
	register int i;
	// register: 5
	register int j;
}


// address: 0x8012DDCC
// line start: 1485
// line end:   1500
void DRLG_L5GHall__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 8
	register int i;
}


// address: 0x8012DE80
// line start: 1507
// line end:   1570
void L5tileFix__Fv() {
	// register: 16
	register int i;
	// register: 10
	register int j;
}


// address: 0x8012E744
// line start: 1576
// line end:   1610
void DRLG_L5Subs__Fv() {
	// register: 23
	register int x;
	// register: 18
	register int y;
	// register: 4
	register int i;
	// register: 3
	register int rv;
}


// address: 0x8012E93C
// line start: 1616
// line end:   1644
void DRLG_L5SetRoom__Fii(int rx1, int ry1) {
	// register: 12
	register int rw;
	// register: 13
	register int rh;
	// register: 7
	register int i;
	// register: 10
	register int j;
	// register: 8
	register unsigned char *sp;
}


// address: 0x8012EA3C
// line start: 1650
// line end:   1726
void L5FillChambers__Fv() {
	// register: 16
	register int c;
}


// address: 0x8012F128
// line start: 1735
// line end:   1773
void DRLG_L5FTVR__Fiiiii(int i, int j, int x, int y, int d) {
}


// address: 0x8012F670
// line start: 1780
// line end:   1795
void DRLG_L5FloodTVal__Fv() {
	// register: 16
	register int i;
	// register: 20
	register int j;
	// register: 19
	register int xx;
	// register: 21
	register int yy;
}


// address: 0x8012F774
// line start: 1801
// line end:   1833
void DRLG_L5TransFix__Fv() {
	// register: 13
	register int j;
}


// address: 0x8012F984
// line start: 1838
// line end:   1851
void DRLG_L5DirtFix__Fv() {
	// register: 9
	register int j;
}


// address: 0x8012FAE0
// line start: 1858
// line end:   1873
void DRLG_L5CornerFix__Fv() {
	// register: 10
	register int i;
	// register: 11
	register int j;
}


// address: 0x8012FBF0
// line start: 1879
// line end:   2000
void DRLG_L5__Fi(int entry) {
	// register: 20
	register long minarea;
	// register: 16
	register unsigned char doneflag;
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 22
	register int yy;
}


// address: 0x80130110
// line start: 2018
// line end:   2035
void CreateL5Dungeon__FUii(unsigned int rseed, int entry) {
}


