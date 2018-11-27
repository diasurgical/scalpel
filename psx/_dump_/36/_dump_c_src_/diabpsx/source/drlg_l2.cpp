// C:\diabpsx\SOURCE\DRLG_L2.CPP

#include "types.h"

// address: 0x8013EBF8
unsigned char DRLG_L2PlaceMiniSet__FPUciiiiii(unsigned char *miniset, int tmin, int tmax, int cx, int cy, int setview, int ldir) {
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
	register int bailcnt;
}


// address: 0x8013EFEC
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


// address: 0x8013F2EC
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


// address: 0x8013F4E0
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


// address: 0x8013F6A4
void InitDungeon__Fv() {
	// register: 7
	register int i;
	// register: 6
	register int j;
}


// address: 0x8013F704
void DRLG_LoadL2SP__Fv() {
}


// address: 0x8013F7C4
void DRLG_FreeL2SP__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x8013F7F4
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


// address: 0x8013F8F4
void DefineRoom__Fiiiii(int nX1, int nY1, int nX2, int nY2, int ForceHW) {
	// register: 5
	register int i;
	// register: 6
	register int j;
	// register: 13
	register unsigned char ft;
}


// address: 0x8013FB00
void CreateDoorType__Fii(int nX, int nY) {
	// register: 6
	register unsigned char fDoneflag;
}


// address: 0x8013FBE4
void PlaceHallExt__Fii(int nX, int nY) {
}


// address: 0x8013FC1C
void AddHall__Fiiiii(int nX1, int nY1, int nX2, int nY2, int nHd) {
	// register: 3
	// size: 0x18
	register struct NODE *p1;
	// register: 4
	// size: 0x18
	register struct NODE *p2;
}


// address: 0x8013FCF4
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


// address: 0x8014037C
void GetHall__FPiN40(int *nX1, int *nY1, int *nX2, int *nY2, int *nHd) {
	// register: 16
	// size: 0x18
	register struct NODE *p1;
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80140414
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


// address: 0x80140A7C
void DoPatternCheck__Fii(int i, int j) {
	// register: 8
	register int l;
	// register: 4
	register int x;
	// register: 7
	register int y;
	// register: 6
	register int nOk;
}


// address: 0x80140D34
void L2TileFix__Fv() {
	// register: 9
	register int j;
}


// address: 0x80140E58
unsigned char DL2_Cont__FUcUcUcUc(unsigned char x1f, unsigned char y1f, unsigned char x2f, unsigned char y2f) {
}


// address: 0x80140ED8
int DL2_NumNoChar__Fv() {
	// register: 6
	register int t;
	// register: 4
	register int ii;
	// register: 5
	register int jj;
}


// address: 0x80140F34
void DL2_DrawRoom__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 8
	register int ii;
	// register: 9
	register int jj;
}


// address: 0x80141038
void DL2_KnockWalls__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 8
	register int ii;
	// register: 8
	register int jj;
}


// address: 0x80141208
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


// address: 0x80141B8C
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


// address: 0x80141E98
void DRLG_L2Pass3__Fv() {
	// register: 11
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
	// register: 3
	register long v3;
	// register: 12
	register long v4;
	// register: 2
	register long lv;
}


// address: 0x80142030
void DRLG_L2FTVR__Fiiiii(int i, int j, int x, int y, int d) {
}


// address: 0x80142578
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


// address: 0x8014267C
void DRLG_L2TransFix__Fv() {
	// register: 13
	register int j;
}


// address: 0x8014288C
void L2DirtFix__Fv() {
	// register: 9
	register int j;
}


// address: 0x801429EC
void L2LockoutFix__Fv() {
	// register: 13
	register int i;
	// register: 11
	register int j;
	// register: 10
	register unsigned char doorok;
}


// address: 0x80142D78
void L2DoorFix__Fv() {
	// register: 7
	register int j;
}


// address: 0x80142E28
void DRLG_L2__Fi(int entry) {
	// register: 6
	register int i;
	// register: 7
	register int j;
	// register: 16
	register unsigned char doneflag;
}


// address: 0x80143874
void DRLG_InitL2Vals__Fv() {
}


// address: 0x8014387C
void LoadL2Dungeon__FPcii(char *sFileName, int vx, int vy) {
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


// address: 0x80143A6C
void LoadPreL2Dungeon__FPcii(char *sFileName, int vx, int vy) {
	// register: 5
	register int i;
	// register: 8
	register int j;
	// register: 11
	register int rw;
	// register: 12
	register int rh;
	// register: 4
	register unsigned char *pLevelMap;
	// register: 10
	register unsigned char *lm;
	{
	}
}


// address: 0x80143C58
void CreateL2Dungeon__FUii(unsigned int rseed, int entry) {
}


