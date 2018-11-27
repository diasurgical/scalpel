// C:\diabpsx\SOURCE\DRLG_L1.CPP

#include "types.h"

// address: 0x8013BFF0
void DRLG_PlaceDoor__Fii(int x, int y) {
	// register: 7
	register unsigned char c;
	// register: 8
	register unsigned char df;
}


// address: 0x8013C4C4
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


// address: 0x8013C8DC
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


// address: 0x8013CD48
void DRLG_L1Floor__Fv() {
	// register: 19
	register int i;
	// register: 20
	register int j;
	// register: 3
	register long rv;
}


// address: 0x8013CE34
void StoreBlock__FPiii(int *Bl, int xx, int yy) {
}


// address: 0x8013CEE0
void DRLG_L1Pass3__Fv() {
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


// address: 0x8013D094
void DRLG_LoadL1SP__Fv() {
}


// address: 0x8013D170
void DRLG_FreeL1SP__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x8013D1A0
void DRLG_Init_Globals__Fv() {
	// register: 4
	register int x;
	// register: 6
	register int y;
}


// address: 0x8013D244
void set_restore_lighting__Fv() {
	// register: 10
	register int x;
	// register: 6
	register int y;
}


// address: 0x8013D2D4
void DRLG_InitL1Vals__Fv() {
}


// address: 0x8013D2DC
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


// address: 0x8013D4A8
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


// address: 0x8013D660
void InitL5Dungeon__Fv() {
	// register: 6
	register int i;
	// register: 7
	register int j;
}


// address: 0x8013D6C0
void L5ClearFlags__Fv() {
	// register: 5
	register int i;
	// register: 6
	register int j;
}


// address: 0x8013D70C
void L5drawRoom__Fiiii(int x, int y, int w, int h) {
	// register: 8
	register int i;
	// register: 9
	register int j;
}


// address: 0x8013D778
unsigned char L5checkRoom__Fiiii(int x, int y, int width, int height) {
	// register: 8
	register int i;
	// register: 9
	register int j;
}


// address: 0x8013D80C
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


// address: 0x8013DB08
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


// address: 0x8013DEC4
long L5GetArea__Fv() {
	// register: 4
	register int i;
	// register: 5
	register int j;
	// register: 6
	register long rv;
}


// address: 0x8013DF24
void L5makeDungeon__Fv() {
	// register: 10
	register int i;
	// register: 11
	register int j;
	// register: 9
	register int l;
}


// address: 0x8013DFB0
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


// address: 0x8013E098
int L5HWallOk__Fii(int i, int j) {
	// register: 9
	register int x;
	// register: 4
	register unsigned char wallok;
}


// address: 0x8013E1D4
int L5VWallOk__Fii(int i, int j) {
	// register: 8
	register int y;
	// register: 4
	register unsigned char wallok;
}


// address: 0x8013E320
void L5HorizWall__Fiici(int i, int j, char p, int dx) {
	// register: 6
	register int xx;
	// register: 18
	register char wt;
	// register: 16
	register char dt;
}


// address: 0x8013E560
void L5VertWall__Fiici(int i, int j, char p, int dy) {
	// register: 5
	register int yy;
	// register: 19
	register char wt;
	// register: 16
	register char dt;
}


// address: 0x8013E794
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


// address: 0x8013EA04
void DRLG_L5GChamber__Fiiiiii(int sx, int sy, int topflag, int bottomflag, int leftflag, int rightflag) {
	// register: 4
	register int i;
	// register: 5
	register int j;
}


// address: 0x8013ECC4
void DRLG_L5GHall__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 8
	register int i;
}


// address: 0x8013ED78
void L5tileFix__Fv() {
	// register: 16
	register int i;
	// register: 10
	register int j;
}


// address: 0x8013F63C
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


// address: 0x8013F834
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


// address: 0x8013F934
void L5FillChambers__Fv() {
	// register: 16
	register int c;
}


// address: 0x80140020
void DRLG_L5FTVR__Fiiiii(int i, int j, int x, int y, int d) {
}


// address: 0x80140568
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


// address: 0x8014066C
void DRLG_L5TransFix__Fv() {
	// register: 13
	register int j;
}


// address: 0x8014087C
void DRLG_L5DirtFix__Fv() {
	// register: 9
	register int j;
}


// address: 0x801409D8
void DRLG_L5CornerFix__Fv() {
	// register: 10
	register int i;
	// register: 11
	register int j;
}


// address: 0x80140AE8
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


// address: 0x80141008
void CreateL5Dungeon__FUii(unsigned int rseed, int entry) {
}


