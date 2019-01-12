// C:\diabpsx\SOURCE\DRLG_L2.CPP

#include "types.h"

// address: 0x801435BC
// line start: 1205
// line end:   1347
unsigned char DRLG_L2PlaceMiniSet__FPUciiiiii(unsigned char *miniset, int tmin, int tmax, int cx, int cy, int setview, int ldir) {
	// register: 10
	register int sx;
	// register: 11
	register int sy;
	// register: 17
	register int sw;
	// register: 18
	register int sh;
	// register: 5
	register int xx;
	// register: 7
	register int yy;
	// register: 16
	register int i;
	// register: 8
	register int ii;
	// register: 22
	register int numt;
	// register: 6
	register int found;
	// address: 0xFFFFFDB8
	// size: 0x200
	auto int randxy[128];
	// register: 19
	register int rcount;
	// register: 13
	register int failed;
	{
		{
		}
	}
}


// address: 0x801438A0
// line start: 1355
// line end:   1401
void DRLG_L2PlaceRndSet__FPUci(unsigned char *miniset, int rndper) {
	// register: 16
	register int sx;
	// register: 19
	register int sy;
	// register: 17
	register int sw;
	// register: 20
	register int sh;
	// register: 4
	register int xx;
	// register: 7
	register int yy;
	// register: 8
	register int ii;
	// register: 4
	register int jj;
	// register: 18
	register int kk;
	// register: 9
	register int found;
}


// address: 0x80143B9C
// line start: 1409
// line end:   1442
void DRLG_L2Subs__Fv() {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 7
	register int i;
	// register: 6
	register int j;
	// register: 4
	register int k;
	// register: 3
	register int rv;
}


// address: 0x80143D90
// line start: 1450
// line end:   1475
void DRLG_L2Shadows__Fv() {
	// register: 9
	register int x;
	// register: 12
	register int y;
	// register: 7
	register int i;
	// register: 6
	register int patflag;
	// address: 0xFFFFFFF8
	// size: 0x4
	auto unsigned char sd[2][2];
}


// address: 0x80143F54
// line start: 1482
// line end:   1491
void InitDungeon__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int j;
}


// address: 0x80143F9C
// line start: 1498
// line end:   1512
void DRLG_LoadL2SP__Fv() {
}


// address: 0x8014403C
// line start: 1520
// line end:   1521
void DRLG_FreeL2SP__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x8014406C
// line start: 1529
// line end:   1557
void DRLG_L2SetRoom__Fii(int rx1, int ry1) {
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


// address: 0x8014416C
// line start: 1565
// line end:   1608
void DefineRoom__Fiiiii(int nX1, int nY1, int nX2, int nY2, int ForceHW) {
	// register: 5
	register int i;
	// register: 3
	register int j;
	// register: 13
	register unsigned char ft;
}


// address: 0x80144370
// line start: 1616
// line end:   1638
void CreateDoorType__Fii(int nX, int nY) {
	// register: 6
	register unsigned char fDoneflag;
}


// address: 0x80144454
// line start: 1646
// line end:   1648
void PlaceHallExt__Fii(int nX, int nY) {
}


// address: 0x8014448C
// line start: 1657
// line end:   1682
void AddHall__Fiiiii(int nX1, int nY1, int nX2, int nY2, int nHd) {
	// register: 3
	// size: 0x18
	register struct NODE *p1;
	// register: 4
	// size: 0x18
	register struct NODE *p2;
}


// address: 0x80144564
// line start: 1691
// line end:   1808
void CreateRoom__Fiiiiiiiii(int nX1, int nY1, int nX2, int nY2, int nRDest, int nHDir, int ForceHW, int nH, int nW) {
	// register: 5
	register int nAw;
	// register: 16
	register int nAh;
	// address: 0xFFFFFFC0
	auto int nRw;
	// register: 19
	register int nRh;
	// register: 21
	register int nRx1;
	// register: 20
	register int nRy1;
	// register: 22
	register int nRx2;
	// register: 23
	register int nRy2;
	// address: 0xFFFFFFC8
	auto int nHx1;
	// address: 0xFFFFFFD0
	auto int nHy1;
	// register: 18
	register int nHx2;
	// register: 17
	register int nHy2;
	// register: 30
	register int nRid;
}


// address: 0x80144BEC
// line start: 1815
// line end:   1825
void GetHall__FPiN40(int *nX1, int *nY1, int *nX2, int *nY2, int *nHd) {
	// register: 16
	// size: 0x18
	register struct NODE *p1;
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80144C84
// line start: 1833
// line end:   1975
void ConnectHall__Fiiiii(int nX1, int nY1, int nX2, int nY2, int nHd) {
	// address: 0xFFFFFFA8
	auto unsigned char fDoneflag;
	// address: 0xFFFFFFB0
	auto unsigned char fInroom;
	// register: 17
	register int nCurrd;
	// register: 21
	register int nDx;
	// register: 20
	register int nDy;
	// register: 16
	register int nRp;
	// address: 0xFFFFFFB8
	auto int nOrigX1;
	// address: 0xFFFFFFC0
	auto int nOrigY1;
	// address: 0xFFFFFFC8
	auto int fMinusFlag;
	// address: 0xFFFFFFD0
	auto int fPlusFlag;
}


// address: 0x801452EC
// line start: 1987
// line end:   2056
void DoPatternCheck__Fii(int i, int j) {
	// register: 25
	register int k;
	// register: 8
	register int l;
	// register: 4
	register int x;
	// register: 7
	register int y;
	// register: 6
	register int nOk;
}


// address: 0x801455C0
// line start: 2064
// line end:   2076
void L2TileFix__Fv() {
	// register: 9
	register int j;
}


// address: 0x801456E4
// line start: 2088
// line end:   2092
unsigned char DL2_Cont__FUcUcUcUc(unsigned char x1f, unsigned char y1f, unsigned char x2f, unsigned char y2f) {
}


// address: 0x80145764
// line start: 2100
// line end:   2106
int DL2_NumNoChar__Fv() {
	// register: 6
	register int t;
	// register: 4
	register int ii;
	// register: 5
	register int jj;
}


// address: 0x801457C0
// line start: 2114
// line end:   2127
void DL2_DrawRoom__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 8
	register int ii;
	// register: 9
	register int jj;
}


// address: 0x801458C4
// line start: 2135
// line end:   2149
void DL2_KnockWalls__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 8
	register int ii;
	// register: 8
	register int jj;
}


// address: 0x80145A94
// line start: 2195
// line end:   2391
unsigned char DL2_FillVoids__Fv() {
	// register: 4
	register int ii;
	// register: 3
	register int jj;
	// register: 17
	register int xx;
	// register: 19
	register int yy;
	// register: 16
	register int x1;
	// register: 18
	register int x2;
	// register: 17
	register int y1;
	// register: 19
	register int y2;
	// register: 23
	register unsigned char xf1;
	// register: 9
	register unsigned char xf2;
	// register: 30
	register unsigned char yf1;
	// register: 8
	register unsigned char yf2;
	// address: 0xFFFFFFC0
	auto int to;
}


// address: 0x80146418
// line start: 2399
// line end:   2476
unsigned char CreateDungeon__Fv() {
	// register: 16
	register int i;
	// register: 17
	register int j;
	// address: 0xFFFFFFD8
	auto int nHx1;
	// address: 0xFFFFFFDC
	auto int nHy1;
	// address: 0xFFFFFFE0
	auto int nHx2;
	// address: 0xFFFFFFE4
	auto int nHy2;
	// address: 0xFFFFFFE8
	auto int nHd;
	// register: 8
	register int ForceH;
	// register: 9
	register int ForceW;
	// register: 10
	register int ForceHW;
}


// address: 0x80146724
// line start: 2484
// line end:   2578
void DRLG_L2Pass3__Fv() {
	// register: 20
	register int i;
	// register: 30
	register int j;
	// register: 17
	register int xx;
	// register: 18
	register int yy;
	// register: 7
	register long v1;
	// register: 22
	register long v2;
	// register: 21
	register long v3;
	// register: 23
	register long v4;
	// register: 2
	register long lv;
}


// address: 0x8014691C
// line start: 2586
// line end:   2621
void DRLG_L2FTVR__Fiiiii(int i, int j, int x, int y, int d) {
}


// address: 0x80146DA4
// line start: 2630
// line end:   2645
void DRLG_L2FloodTVal__Fv() {
	// register: 16
	register int i;
	// register: 20
	register int j;
	// register: 19
	register int xx;
	// register: 21
	register int yy;
}


// address: 0x80146E9C
// line start: 2653
// line end:   2685
void DRLG_L2TransFix__Fv() {
	// register: 13
	register int j;
	// register: 14
	register int yy;
}


// address: 0x801470C8
// line start: 2693
// line end:   2708
void L2DirtFix__Fv() {
	// register: 9
	register int j;
}


// address: 0x80147228
// line start: 2716
// line end:   2758
void L2LockoutFix__Fv() {
	// register: 11
	register int i;
	// register: 12
	register int j;
	// register: 8
	register unsigned char doorok;
}


// address: 0x801475AC
// line start: 2764
// line end:   2774
void L2DoorFix__Fv() {
	// register: 7
	register int j;
}


// address: 0x8014765C
// line start: 2778
// line end:   2810
void DRLG_L2SetWalls__Fv() {
	// register: 8
	register int i;
	// register: 10
	register int j;
	// register: 14
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


// address: 0x80147814
// line start: 2817
// line end:   3018
void DRLG_L2__Fi(int entry) {
	// register: 6
	register int i;
	// register: 7
	register int j;
	// register: 16
	register unsigned char doneflag;
}


// address: 0x80148268
// line start: 3027
// line end:   3061
void DRLG_InitL2Vals__Fv() {
}


// address: 0x80148270
// line start: 3068
// line end:   3147
void LoadL2Dungeon__FPcii(char *sFileName, int vx, int vy) {
	// register: 5
	register int i;
	// register: 7
	register int j;
	// register: 11
	register int rw;
	// register: 12
	register int rh;
	// register: 16
	register unsigned char *pLevelMap;
	// register: 8
	register unsigned char *lm;
	{
	}
}


// address: 0x80148468
// line start: 3155
// line end:   3196
void LoadPreL2Dungeon__FPcii(char *sFileName, int vx, int vy) {
	// register: 5
	register int i;
	// register: 7
	register int j;
	// register: 11
	register int rw;
	// register: 12
	register int rh;
	// register: 15
	register unsigned char *pLevelMap;
	// register: 8
	register unsigned char *lm;
	{
	}
}


// address: 0x8014865C
// line start: 3204
// line end:   3261
void CreateL2Dungeon__FUii(unsigned int rseed, int entry) {
}


