// C:\diabpsx\SOURCE\DRLG_L4.CPP

#include "types.h"

// address: 0x801447A0
// line start: 144
// line end:   160
void DRLG_L4Shadows__Fv() {
	// register: 6
	register int x;
	// register: 8
	register int y;
	// register: 2
	register unsigned char okflag;
}


// address: 0x80144864
// line start: 166
// line end:   175
void InitL4Dungeon__Fv() {
	{
		// register: 7
		register int j;
		{
			{
				// register: 6
				register int i;
			}
		}
	}
}


// address: 0x80144900
// line start: 182
// line end:   191
void DRLG_LoadL4SP__Fv() {
}


// address: 0x801449A4
// line start: 197
// line end:   199
void DRLG_FreeL4SP__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x801449D4
// line start: 206
// line end:   231
void DRLG_L4SetSPRoom__Fii(int rx1, int ry1) {
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


// address: 0x80144AD4
// line start: 238
// line end:   255
void L4makeDmt__Fv() {
	// register: 10
	register int i;
	// register: 11
	register int j;
	// register: 2
	register int idx;
	// register: 2
	register int val;
	// register: 12
	register int dmty;
}


// address: 0x80144B78
// line start: 261
// line end:   280
int L4HWallOk__Fii(int i, int j) {
	// register: 9
	register int x;
	// register: 3
	register unsigned char wallok;
}


// address: 0x80144CC8
// line start: 286
// line end:   306
int L4VWallOk__Fii(int i, int j) {
	// register: 8
	register int y;
	// register: 3
	register unsigned char wallok;
}


// address: 0x80144E44
// line start: 312
// line end:   333
void L4HorizWall__Fiii(int i, int j, int dx) {
	// register: 4
	register int xx;
}


// address: 0x80145014
// line start: 339
// line end:   361
void L4VertWall__Fiii(int i, int j, int dy) {
	// register: 3
	register int yy;
}


// address: 0x801451DC
// line start: 368
// line end:   439
void L4AddWall__Fv() {
	// register: 16
	register int i;
	// register: 17
	register int j;
	// register: 2
	register int x;
	// register: 2
	register int y;
}


// address: 0x801456BC
// line start: 445
// line end:   653
void L4tileFix__Fv() {
	// register: 15
	register int j;
}


// address: 0x801478A4
// line start: 659
// line end:   692
void DRLG_L4Subs__Fv() {
	// register: 17
	register int x;
	// register: 19
	register int y;
	// register: 4
	register int i;
	// register: 3
	register int rv;
}


// address: 0x80147A7C
// line start: 698
// line end:   745
void L4makeDungeon__Fv() {
	// register: 6
	register int i;
	// register: 7
	register int j;
	// register: 10
	register int l;
}


// address: 0x80147CB4
// line start: 752
// line end:   816
void uShape__Fv() {
	// register: 6
	register int j;
	// register: 7
	register int i;
	// register: 4
	register int rv;
}


// address: 0x80147F58
// line start: 822
// line end:   832
long GetArea__Fv() {
	// register: 4
	register int i;
	// register: 5
	register int j;
	// register: 6
	register long rv;
}


// address: 0x80147FB4
// line start: 838
// line end:   845
void L4drawRoom__Fiiii(int x, int y, int width, int height) {
	// register: 8
	register int i;
	// register: 9
	register int j;
}


// address: 0x8014801C
// line start: 852
// line end:   863
unsigned char L4checkRoom__Fiiii(int x, int y, int width, int height) {
	// register: 8
	register int i;
	// register: 9
	register int j;
}


// address: 0x801480B8
// line start: 870
// line end:   945
void L4roomGen__Fiiiii(int x, int y, int w, int h, int dir) {
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


// address: 0x801483B4
// line start: 952
// line end:   1014
void L4firstRoom__Fv() {
	// register: 19
	register int x;
	// register: 16
	register int y;
	// register: 18
	register int w;
	// register: 17
	register int h;
	// register: 4
	register int rndx;
	// register: 5
	register int rndy;
	// register: 16
	register int xmin;
	// register: 5
	register int xmax;
	// register: 16
	register int ymin;
	// register: 5
	register int ymax;
}


// address: 0x801485D0
// line start: 1022
// line end:   1034
void L4SaveQuads__Fv() {
	// register: 5
	register int i;
	// register: 8
	register int j;
	// register: 10
	register int x;
	// register: 11
	register int y;
}


// address: 0x80148670
// line start: 1040
// line end:   1060
void DRLG_L4SetRoom__FPUcii(unsigned char *pSetPiece, int rx1, int ry1) {
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


// address: 0x80148744
// line start: 1076
// line end:   1128
void DRLG_LoadDiabQuads__FUc(unsigned char preflag) {
	// register: 4
	register unsigned char *ptrSetPiece;
}


// address: 0x80148940
// line start: 1136
// line end:   1283
unsigned char DRLG_L4PlaceMiniSet__FPCUciiiiii(unsigned char *miniset, int tmin, int tmax, int cx, int cy, int setview, int ldir) {
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


// address: 0x80148D58
// line start: 1289
// line end:   1324
void DRLG_L4FTVR__Fiiiii(int i, int j, int x, int y, int d) {
}


// address: 0x801492A0
// line start: 1331
// line end:   1346
void DRLG_L4FloodTVal__Fv() {
	// register: 16
	register int i;
	// register: 20
	register int j;
	// register: 19
	register int xx;
	// register: 21
	register int yy;
}


// address: 0x801493A4
// line start: 1352
// line end:   1356
unsigned char IsDURWall__Fc(char d) {
}


// address: 0x801493D4
// line start: 1362
// line end:   1366
unsigned char IsDLLWall__Fc(char dd) {
}


// address: 0x80149404
// line start: 1371
// line end:   1412
void DRLG_L4TransFix__Fv() {
	// register: 7
	register int j;
}


// address: 0x8014975C
// line start: 1418
// line end:   1430
void DRLG_L4Corners__Fv() {
	// register: 7
	register int i;
	// register: 9
	register int j;
}


// address: 0x801497F0
// line start: 1436
// line end:   1438
void L4FixRim__Fv() {
	{
		{
			// register: 3
			register int j;
		}
	}
}


// address: 0x8014982C
// line start: 1444
// line end:   1453
void DRLG_L4GeneralFix__Fv() {
	// register: 6
	register int i;
	// register: 8
	register int j;
}


// address: 0x801498D0
// line start: 1459
// line end:   1613
void DRLG_L4__Fi(int entry) {
	// register: 4
	register unsigned char doneflag;
	// register: 16
	register int i;
	// register: 17
	register int j;
	// register: 5
	register int spi;
	// register: 3
	register int spj;
}


// address: 0x8014A1CC
// line start: 1620
// line end:   1708
void DRLG_L4Pass3__Fv() {
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


// address: 0x8014A388
// line start: 1715
// line end:   1753
void CreateL4Dungeon__FUii(unsigned int rseed, int entry) {
	{
		// register: 4
		register void *p__p;
		{
			// register: 4
			register void *p__p;
			{
				// register: 4
				register void *p__p;
				{
					// register: 4
					register void *p__p;
				}
			}
		}
	}
}


