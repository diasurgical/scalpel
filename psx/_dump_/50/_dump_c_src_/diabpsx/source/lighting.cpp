// C:\diabpsx\SOURCE\LIGHTING.CPP

#include "types.h"

// address: 0x800471D0
// line start: 322
// line end:   337
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x80047238
// line start: 383
// line end:   405
void set_light_bands__Fv() {
	// register: 2
	register int v;
	// register: 3
	register unsigned char *mt;
}


// address: 0x80047284
// line start: 410
// line end:   417
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x800472F0
// line start: 421
// line end:   774
void DoLighting__Fiiii(int nXPos, int nYPos, int nRadius, int Lnum) {
	// register: 9
	register int xoff;
	// register: 10
	register int yoff;
	// register: 20
	register int x;
	// register: 30
	register int y;
	// register: 4
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
	// register: 6
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
	// register: 19
	register int weirdy;
	// register: 11
	register int cont;
}


// address: 0x80047FC8
// line start: 781
// line end:   835
void DoUnLight__Fv() {
	// register: 9
	register int x;
	// register: 3
	register int y;
	// register: 16
	register int max_x;
	// register: 14
	register int max_y;
	// register: 13
	register int radius_block;
	// register: 12
	register int nXPos;
	// register: 11
	register int nYPos;
	// register: 7
	register unsigned char *r;
	// register: 6
	register unsigned char *g;
	// register: 5
	register unsigned char *b;
}


// address: 0x80048210
// line start: 842
// line end:   858
void DoUnVision__Fiiii(int nXPos, int nYPos, int nRadius, int num) {
	// register: 8
	register int i;
	// register: 7
	register int j;
	// register: 3
	register int x1;
	// register: 11
	register int y1;
	// register: 4
	register int x2;
	// register: 5
	register int y2;
	// register: 9
	register int vis_flag;
}


// address: 0x800482E8
// line start: 865
// line end:   969
void DoVision__FiiiUcUc(int nXPos, int nYPos, int nRadius, unsigned char doautomap, int visible) {
	// register: 18
	register int nCrawlX;
	// register: 19
	register int nCrawlY;
	// register: 9
	register int nLineLen;
	// register: 21
	register int nBlockerFlag;
	// register: 8
	register int j;
	// register: 20
	register int k;
	// register: 2
	register int v;
	// register: 5
	register int x1adj;
	// register: 7
	register int x2adj;
	// register: 4
	register int y1adj;
	// register: 6
	register int y2adj;
	// address: 0xFFFFFFB8
	auto int vis_flag;
}


// address: 0x8004876C
// line start: 974
// line end:   975
void FreeLightTable__Fv() {
}


// address: 0x80048774
// line start: 981
// line end:   982
void InitLightTable__Fv() {
}


// address: 0x8004877C
// line start: 987
// line end:   988
void MakeLightTable__Fv() {
}


// address: 0x80048784
// line start: 1079
// line end:   1082
void InitLightMax__Fv() {
}


// address: 0x800487A8
// line start: 1089
// line end:   1100
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x800487EC
// line start: 1106
// line end:   1124
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80048858
// line start: 1129
// line end:   1135
void AddUnLight__Fi(int i) {
}


// address: 0x80048888
// line start: 1140
// line end:   1151
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x800488B4
// line start: 1156
// line end:   1168
void ChangeLightXY__Fiii(int i, int x, int y) {
	// register: 3
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x800488F0
// line start: 1171
// line end:   1177
void light_fix__Fi(int i) {
}


// address: 0x800488F8
// line start: 1187
// line end:   1200
void ChangeLightOff__Fiii(int i, int x, int y) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x8004892C
// line start: 1205
// line end:   1218
void ChangeLight__Fiiii(int i, int x, int y, int r) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80048964
// line start: 1221
// line end:   1223
void ChangeLightColour__Fii(int i, int c) {
	// register: 4
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x8004898C
// line start: 1238
// line end:   1305
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


// address: 0x80048AB0
// line start: 1310
// line end:   1337
void SavePreLighting__Fv() {
}


// address: 0x80048AB8
// line start: 1342
// line end:   1349
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x80048B08
// line start: 1356
// line end:   1372
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


// address: 0x80048B7C
// line start: 1395
// line end:   1408
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x80048C30
// line start: 1413
// line end:   1430
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 9
	register int i;
	// register: 8
	// size: 0xE
	register struct LightListStruct *vl;
}


// address: 0x80048CB4
// line start: 1459
// line end:   1507
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
	// register: 18
	// size: 0xE
	register struct LightListStruct *vl;
}


