// C:\diabpsx\SOURCE\LIGHTING.CPP

#include "types.h"

// address: 0x8004BA70
// line start: 328
// line end:   343
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x8004BAD8
// line start: 390
// line end:   412
void set_light_bands__Fv() {
	// register: 3
	register int v;
	// register: 5
	register int y;
	// register: 4
	register unsigned char *l;
}


// address: 0x8004BB48
// line start: 416
// line end:   423
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x8004BBB4
// line start: 427
// line end:   438
void SetWeirdFX__Fv() {
}


// address: 0x8004BC28
// line start: 443
// line end:   826
void DoLighting__Fiiii(int nXPos, int nYPos, int nRadius, int Lnum) {
	// register: 9
	register int xoff;
	// register: 10
	register int yoff;
	// register: 20
	register int x;
	// register: 30
	register int y;
	// register: 3
	register int v;
	// register: 22
	register int colour_mask;
	// register: 17
	register int shift_mask;
	// register: 12
	register int shake;
	// address: 0xFFFFFFA8
	auto int light_x;
	// address: 0xFFFFFFB0
	auto int light_y;
	// address: 0xFFFFFFB8
	auto int block_x;
	// register: 9
	register int block_y;
	// register: 23
	register int dist_y;
	// register: 11
	register int max_x;
	// register: 5
	register int mult;
	// register: 7
	register int mult_st;
	// register: 21
	register int radius_block;
	// register: 7
	register int scr_x;
	// register: 8
	register int scr_y;
	// register: 6
	register int temp_x;
	// register: 5
	register int temp_y;
	// register: 18
	register int weirdy;
	// register: 11
	register int cont;
}


// address: 0x8004C8FC
// line start: 833
// line end:   885
void DoUnLight__Fv() {
	// register: 9
	register int x;
	// register: 3
	register int y;
	// register: 16
	register int max_x;
	// register: 15
	register int max_y;
	// register: 13
	register int nXPos;
	// register: 14
	register int nYPos;
	// register: 7
	register unsigned char *r;
	// register: 6
	register unsigned char *g;
	// register: 5
	register unsigned char *b;
	// register: 24
	register int radius_block_x;
	// register: 25
	register int radius_block_y;
}


// address: 0x8004CB40
// line start: 892
// line end:   932
void DoUnVision__Fiiii(int nXPos, int nYPos, int nRadius, int num) {
	// register: 9
	register int i;
	// register: 3
	register int j;
	// register: 3
	register int x1;
	// register: 12
	register int y1;
	// register: 4
	register int x2;
	// register: 5
	register int y2;
	// register: 7
	register int vis_flag;
}


// address: 0x8004CC48
// line start: 939
// line end:   1046
void DoVision__FiiiUcUc(int nXPos, int nYPos, int nRadius, unsigned char doautomap, int visible) {
	// register: 18
	register int nCrawlX;
	// register: 19
	register int nCrawlY;
	// address: 0xFFFFFFA0
	auto int nLineLen;
	// register: 6
	register int nBlockerFlag;
	// address: 0xFFFFFFA8
	auto int j;
	// register: 30
	register int k;
	// register: 3
	register int v;
	// register: 21
	register int x1adj;
	// register: 23
	register int x2adj;
	// register: 20
	register int y1adj;
	// register: 22
	register int y2adj;
	// address: 0xFFFFFFB0
	auto int vis_flag;
}


// address: 0x8004D070
// line start: 1051
// line end:   1052
void FreeLightTable__Fv() {
}


// address: 0x8004D078
// line start: 1058
// line end:   1059
void InitLightTable__Fv() {
}


// address: 0x8004D080
// line start: 1064
// line end:   1065
void MakeLightTable__Fv() {
}


// address: 0x8004D088
// line start: 1156
// line end:   1159
void InitLightMax__Fv() {
}


// address: 0x8004D0AC
// line start: 1166
// line end:   1178
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x8004D0F0
// line start: 1184
// line end:   1202
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x8004D148
// line start: 1207
// line end:   1213
void AddUnLight__Fi(int i) {
}


// address: 0x8004D16C
// line start: 1218
// line end:   1229
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x8004D18C
// line start: 1234
// line end:   1246
void ChangeLightXY__Fiii(int i, int x, int y) {
	// register: 3
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x8004D1B8
// line start: 1249
// line end:   1255
void light_fix__Fi(int i) {
}


// address: 0x8004D1C0
// line start: 1265
// line end:   1278
void ChangeLightOff__Fiii(int i, int x, int y) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x8004D1E8
// line start: 1283
// line end:   1296
void ChangeLight__Fiiii(int i, int x, int y, int r) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x8004D214
// line start: 1299
// line end:   1301
void ChangeLightColour__Fii(int i, int c) {
	// register: 4
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x8004D23C
// line start: 1316
// line end:   1380
void ProcessLightList__Fv() {
	// register: 7
	register int i;
	// register: 16
	register int j;
	// register: 4
	register unsigned char temp;
	// register: 3
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x8004D354
// line start: 1390
// line end:   1417
void SavePreLighting__Fv() {
}


// address: 0x8004D35C
// line start: 1422
// line end:   1429
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x8004D3B0
// line start: 1436
// line end:   1452
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	// register: 8
	register int vid;
	{
		{
			// register: 2
			// size: 0xE
			register struct LightListStruct *vl;
		}
	}
}


// address: 0x8004D424
// line start: 1475
// line end:   1488
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x8004D4D8
// line start: 1493
// line end:   1510
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 9
	register int i;
	// register: 8
	// size: 0xE
	register struct LightListStruct *vl;
}


// address: 0x8004D55C
// line start: 1539
// line end:   1587
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
	// register: 18
	// size: 0xE
	register struct LightListStruct *vl;
}


