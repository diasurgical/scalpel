// C:\diabpsx\SOURCE\DRLG_L1.CPP

#include "types.h"

// address: 0x8013BF08
// line start: 271
// line end:   308
void DRLG_PlaceDoor__Fii(int x, int y) {
	// register: 7
	register unsigned char c;
	// register: 8
	register unsigned char df;
}


// address: 0x8013C3E8
// line start: 329
// line end:   393
void DRLG_L1Shadows__Fv() {
	// register: 11
	register int x;
	// register: 13
	register int y;
	// register: 7
	register int i;
	// register: 5
	register int patflag;
	// address: 0xFFFFFFE8
	// size: 0x4
	auto unsigned char sd[2][2];
	// register: 2
	register unsigned char tnv3;
}


// address: 0x8013C7F8
// line start: 399
// line end:   566
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
	// address: 0xFFFFFF90
	auto int numt;
	// register: 8
	register int found;
	// register: 12
	register int abort;
}


// address: 0x8013CC6C
// line start: 614
// line end:   645
void DRLG_SetWalls__Fv() {
	// register: 5
	register int i;
	// register: 6
	register int j;
	// register: 8
	register int yy;
	{
		{
			{
				{
					// register: 2
					register int v;
				}
			}
		}
	}
}


// address: 0x8013CD28
// line start: 649
// line end:   662
void DRLG_L1Floor__Fv() {
	// register: 17
	register int i;
	// register: 19
	register int j;
	// register: 3
	register long rv;
}


// address: 0x8013CE0C
// line start: 689
// line end:   775
void DRLG_L1Pass3__Fv() {
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


// address: 0x8013D004
// line start: 787
// line end:   799
void DRLG_LoadL1SP__Fv() {
}


// address: 0x8013D0E0
// line start: 805
// line end:   806
void DRLG_FreeL1SP__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x8013D110
// line start: 812
// line end:   848
void DRLG_Init_Globals__Fv() {
}


// address: 0x8013D130
// line start: 855
// line end:   865
void set_restore_lighting__Fv() {
	// register: 10
	register int x;
	// register: 6
	register int y;
}


// address: 0x8013D1C0
// line start: 870
// line end:   900
void DRLG_InitL1Vals__Fv() {
}


// address: 0x8013D1C8
// line start: 905
// line end:   964
void LoadL1Dungeon__FPcii(char *sFileName, int vx, int vy) {
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


// address: 0x8013D39C
// line start: 971
// line end:   1015
void LoadPreL1Dungeon__FPcii(char *sFileName, int vx, int vy) {
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


// address: 0x8013D55C
// line start: 1054
// line end:   1075
void InitL5Dungeon__Fv() {
	// register: 4
	register int i;
	// register: 5
	register int j;
}


// address: 0x8013D5E0
// line start: 1081
// line end:   1086
void L5ClearFlags__Fv() {
	// register: 4
	register int i;
	// register: 6
	register int j;
}


// address: 0x8013D630
// line start: 1092
// line end:   1101
void L5drawRoom__Fiiii(int x, int y, int w, int h) {
	// register: 8
	register int i;
	// register: 9
	register int j;
}


// address: 0x8013D69C
// line start: 1108
// line end:   1117
unsigned char L5checkRoom__Fiiii(int x, int y, int width, int height) {
	// register: 8
	register int i;
	// register: 9
	register int j;
}


// address: 0x8013D730
// line start: 1124
// line end:   1208
void L5roomGen__Fiiiii(int x, int y, int w, int h, int dir) {
	// register: 23
	register int rx;
	// register: 30
	register int ry;
	// register: 20
	register int ry2;
	// register: 18
	register int height;
	// register: 19
	register int width;
	// register: 20
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


// address: 0x8013DA74
// line start: 1216
// line end:   1267
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


// address: 0x8013DE30
// line start: 1274
// line end:   1284
long L5GetArea__Fv() {
	// register: 4
	register int i;
	// register: 5
	register int j;
	// register: 6
	register long rv;
}


// address: 0x8013DE90
// line start: 1290
// line end:   1303
void L5makeDungeon__Fv() {
	// register: 10
	register int i;
	// register: 11
	register int j;
	// register: 9
	register int l;
}


// address: 0x8013DF1C
// line start: 1309
// line end:   1330
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


// address: 0x8013E004
// line start: 1337
// line end:   1352
int L5HWallOk__Fii(int i, int j) {
	// register: 9
	register int x;
	// register: 4
	register unsigned char wallok;
}


// address: 0x8013E140
// line start: 1358
// line end:   1373
int L5VWallOk__Fii(int i, int j) {
	// register: 8
	register int y;
	// register: 4
	register unsigned char wallok;
}


// address: 0x8013E288
// line start: 1379
// line end:   1411
void L5HorizWall__Fiici(int i, int j, char p, int dx) {
	// register: 6
	register int xx;
	// register: 18
	register char wt;
	// register: 16
	register char dt;
}


// address: 0x8013E4C8
// line start: 1418
// line end:   1450
void L5VertWall__Fiici(int i, int j, char p, int dy) {
	// register: 5
	register int yy;
	// register: 19
	register char wt;
	// register: 16
	register char dt;
}


// address: 0x8013E6FC
// line start: 1458
// line end:   1491
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


// address: 0x8013E96C
// line start: 1497
// line end:   1551
void DRLG_L5GChamber__Fiiiiii(int sx, int sy, int topflag, int bottomflag, int leftflag, int rightflag) {
	// register: 5
	register int i;
	// register: 6
	register int j;
}


// address: 0x8013EC2C
// line start: 1557
// line end:   1572
void DRLG_L5GHall__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 8
	register int i;
}


// address: 0x8013ECE0
// line start: 1579
// line end:   1642
void L5tileFix__Fv() {
	// register: 16
	register int i;
	// register: 10
	register int j;
}


// address: 0x8013F5A4
// line start: 1648
// line end:   1682
void DRLG_L5Subs__Fv() {
	// register: 21
	register int x;
	// register: 22
	register int y;
	// register: 4
	register int i;
	// register: 3
	register int rv;
}


// address: 0x8013F7B4
// line start: 1688
// line end:   1716
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


// address: 0x8013F8B4
// line start: 1722
// line end:   1798
void L5FillChambers__Fv() {
	// register: 16
	register int c;
}


// address: 0x8013FFA0
// line start: 1807
// line end:   1845
void DRLG_L5FTVR__Fiiiii(int i, int j, int x, int y, int d) {
}


// address: 0x80140428
// line start: 1852
// line end:   1867
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


// address: 0x80140520
// line start: 1875
// line end:   1982
void DRLG_L5TransFix__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int yy;
	// register: 6
	register int v;
}


// address: 0x80140964
// line start: 1987
// line end:   2001
void DRLG_L5DirtFix__Fv() {
	// register: 9
	register int j;
}


// address: 0x80140AE0
// line start: 2008
// line end:   2023
void DRLG_L5CornerFix__Fv() {
	// register: 9
	register int i;
	// register: 11
	register int j;
}


// address: 0x80140BEC
// line start: 2029
// line end:   2158
void DRLG_L5__Fi(int entry) {
	// register: 20
	register long minarea;
	// register: 16
	register unsigned char doneflag;
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 22
	register int yy;
}


// address: 0x80141120
// line start: 2176
// line end:   2193
void CreateL5Dungeon__FUii(unsigned int rseed, int entry) {
}


