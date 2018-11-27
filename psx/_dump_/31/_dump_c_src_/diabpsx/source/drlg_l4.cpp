// C:\diabpsx\SOURCE\DRLG_L4.CPP

#include "types.h"

// address: 0x8014D180
void DRLG_L4Shadows__Fv() {
	// register: 6
	register int x;
	// register: 8
	register int y;
	// register: 2
	register unsigned char okflag;
}


// address: 0x8014D244
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


// address: 0x8014D2E0
void DRLG_LoadL4SP__Fv() {
}


// address: 0x8014D384
void DRLG_FreeL4SP__Fv() {
}


// address: 0x8014D3AC
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


// address: 0x8014D4AC
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


// address: 0x8014D550
int L4HWallOk__Fii(int i, int j) {
	// register: 9
	register int x;
	// register: 3
	register unsigned char wallok;
}


// address: 0x8014D6A0
int L4VWallOk__Fii(int i, int j) {
	// register: 8
	register int y;
	// register: 3
	register unsigned char wallok;
}


// address: 0x8014D81C
void L4HorizWall__Fiii(int i, int j, int dx) {
	// register: 4
	register int xx;
}


// address: 0x8014D9EC
void L4VertWall__Fiii(int i, int j, int dy) {
	// register: 3
	register int yy;
}


// address: 0x8014DBB4
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


// address: 0x8014E094
void L4tileFix__Fv() {
	// register: 15
	register int j;
}


// address: 0x8015027C
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


// address: 0x80150454
void L4makeDungeon__Fv() {
	// register: 6
	register int i;
	// register: 7
	register int j;
	// register: 10
	register int l;
}


// address: 0x8015068C
void uShape__Fv() {
	// register: 6
	register int j;
	// register: 7
	register int i;
	// register: 4
	register int rv;
}


// address: 0x80150930
long GetArea__Fv() {
	// register: 4
	register int i;
	// register: 5
	register int j;
	// register: 6
	register long rv;
}


// address: 0x8015098C
void L4drawRoom__Fiiii(int x, int y, int width, int height) {
	// register: 8
	register int i;
	// register: 9
	register int j;
}


// address: 0x801509F4
unsigned char L4checkRoom__Fiiii(int x, int y, int width, int height) {
	// register: 8
	register int i;
	// register: 9
	register int j;
}


// address: 0x80150A90
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


// address: 0x80150D8C
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


// address: 0x80150FA8
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


// address: 0x80151048
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


// address: 0x8015111C
void DRLG_LoadDiabQuads__FUc(unsigned char preflag) {
}


// address: 0x801512A0
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


// address: 0x801516B8
void DRLG_L4FTVR__Fiiiii(int i, int j, int x, int y, int d) {
}


// address: 0x80151C00
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


// address: 0x80151D04
unsigned char IsDURWall__Fc(char d) {
}


// address: 0x80151D34
unsigned char IsDLLWall__Fc(char dd) {
}


// address: 0x80151D64
void DRLG_L4TransFix__Fv() {
	// register: 7
	register int j;
}


// address: 0x801520BC
void DRLG_L4Corners__Fv() {
	// register: 7
	register int i;
	// register: 9
	register int j;
}


// address: 0x80152150
void L4FixRim__Fv() {
	{
		{
			// register: 3
			register int j;
		}
	}
}


// address: 0x8015218C
void DRLG_L4GeneralFix__Fv() {
	// register: 6
	register int i;
	// register: 8
	register int j;
}


// address: 0x80152230
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


// address: 0x80152B2C
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
	// register: 3
	register long v3;
	// register: 9
	register long v4;
	// register: 2
	register long lv;
}


// address: 0x80152CD0
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


