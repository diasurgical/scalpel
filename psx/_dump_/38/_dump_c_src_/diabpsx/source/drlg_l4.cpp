// C:\diabpsx\SOURCE\DRLG_L4.CPP

#include "types.h"

// address: 0x8014F6B0
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


// address: 0x8014F774
// line start: 166
// line end:   179
void InitL4Dungeon__Fv() {
	{
		// register: 5
		register int j;
		{
			{
				// register: 4
				register int i;
				{
					// register: 7
					register int j;
					{
						{
							// register: 4
							register int i;
						}
					}
				}
			}
		}
	}
}


// address: 0x8014F828
// line start: 187
// line end:   196
void DRLG_LoadL4SP__Fv() {
}


// address: 0x8014F8CC
// line start: 202
// line end:   204
void DRLG_FreeL4SP__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x8014F8FC
// line start: 211
// line end:   236
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


// address: 0x8014F9FC
// line start: 243
// line end:   260
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


// address: 0x8014FAA0
// line start: 266
// line end:   285
int L4HWallOk__Fii(int i, int j) {
	// register: 9
	register int x;
	// register: 3
	register unsigned char wallok;
}


// address: 0x8014FBF0
// line start: 291
// line end:   311
int L4VWallOk__Fii(int i, int j) {
	// register: 10
	register int y;
	// register: 3
	register unsigned char wallok;
}


// address: 0x8014FD60
// line start: 317
// line end:   338
void L4HorizWall__Fiii(int i, int j, int dx) {
	// register: 4
	register int xx;
}


// address: 0x8014FF30
// line start: 344
// line end:   366
void L4VertWall__Fiii(int i, int j, int dy) {
	// register: 3
	register int yy;
}


// address: 0x801500F8
// line start: 373
// line end:   444
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


// address: 0x801505D8
// line start: 450
// line end:   658
void L4tileFix__Fv() {
	// register: 15
	register int j;
}


// address: 0x801527C0
// line start: 664
// line end:   697
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


// address: 0x801529A8
// line start: 703
// line end:   750
void L4makeDungeon__Fv() {
	// register: 6
	register int i;
	// register: 7
	register int j;
	// register: 10
	register int l;
}


// address: 0x80152BE0
// line start: 757
// line end:   821
void uShape__Fv() {
	// register: 6
	register int j;
	// register: 7
	register int i;
	// register: 4
	register int rv;
}


// address: 0x80152E84
// line start: 827
// line end:   837
long GetArea__Fv() {
	// register: 4
	register int i;
	// register: 5
	register int j;
	// register: 6
	register long rv;
}


// address: 0x80152EE0
// line start: 843
// line end:   850
void L4drawRoom__Fiiii(int x, int y, int width, int height) {
	// register: 8
	register int i;
	// register: 9
	register int j;
}


// address: 0x80152F48
// line start: 857
// line end:   868
unsigned char L4checkRoom__Fiiii(int x, int y, int width, int height) {
	// register: 8
	register int i;
	// register: 9
	register int j;
}


// address: 0x80152FE4
// line start: 875
// line end:   950
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


// address: 0x801532E0
// line start: 957
// line end:   1019
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


// address: 0x801534FC
// line start: 1027
// line end:   1039
void L4SaveQuads__Fv() {
	// register: 6
	register int i;
	// register: 9
	register int j;
	// register: 11
	register int x;
	// register: 12
	register int y;
}


// address: 0x801535BC
// line start: 1045
// line end:   1065
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


// address: 0x80153690
// line start: 1081
// line end:   1133
void DRLG_LoadDiabQuads__FUc(unsigned char preflag) {
	// register: 4
	register unsigned char *ptrSetPiece;
}


// address: 0x8015388C
// line start: 1141
// line end:   1289
unsigned char DRLG_L4PlaceMiniSet__FPCUciiiiii(unsigned char *miniset, int tmin, int tmax, int cx, int cy, int setview, int ldir) {
	// register: 17
	register int sx;
	// register: 16
	register int sy;
	// register: 18
	register int sw;
	// register: 20
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
	// register: 19
	register int bailcnt;
}


// address: 0x80153CBC
// line start: 1299
// line end:   1337
void DRLG_L4FTVR__Fiiiii(int i, int j, int x, int y, int d) {
}


// address: 0x80154164
// line start: 1343
// line end:   1381
void DRLG_L4FloodTVal__Fv() {
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 20
	register int xx;
	// register: 21
	register int yy;
}


// address: 0x8015437C
// line start: 1388
// line end:   1392
unsigned char IsDURWall__Fc(char d) {
}


// address: 0x801543AC
// line start: 1398
// line end:   1402
unsigned char IsDLLWall__Fc(char dd) {
}


// address: 0x801543DC
// line start: 1407
// line end:   1448
void DRLG_L4TransFix__Fv() {
	// register: 7
	register int j;
	// address: 0xFFFFFFB8
	auto int yy;
}


// address: 0x80154748
// line start: 1454
// line end:   1466
void DRLG_L4Corners__Fv() {
	// register: 7
	register int i;
	// register: 9
	register int j;
}


// address: 0x801547DC
// line start: 1472
// line end:   1474
void L4FixRim__Fv() {
	{
		{
			// register: 3
			register int j;
		}
	}
}


// address: 0x80154818
// line start: 1480
// line end:   1489
void DRLG_L4GeneralFix__Fv() {
	// register: 6
	register int i;
	// register: 8
	register int j;
}


// address: 0x801548BC
// line start: 1493
// line end:   1524
void DRLG_L4SetWalls__Fv() {
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


// address: 0x8015496C
// line start: 1530
// line end:   1689
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


// address: 0x8015526C
// line start: 1696
// line end:   1794
void DRLG_L4Pass3__Fv() {
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


// address: 0x80155484
// line start: 1801
// line end:   1841
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


