// C:\diabpsx\SOURCE\LIGHTING.CPP

#include "types.h"

// address: 0x8004352C
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x80043594
void set_light_bands__Fv() {
	// register: 2
	register int v;
	// register: 4
	register int y;
	// register: 5
	register int c;
	// register: 3
	register unsigned char *mt;
}


// address: 0x80043610
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x8004367C
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


// address: 0x8004432C
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


// address: 0x80044574
void DoUnVision__Fiii(int nXPos, int nYPos, int nRadius) {
	// register: 4
	register int i;
	// register: 6
	register int j;
	// register: 3
	register int x1;
	// register: 9
	register int y1;
	// register: 8
	register int x2;
	// register: 5
	register int y2;
}


// address: 0x80044638
void DoVision__FiiiUcUc(int nXPos, int nYPos, int nRadius, unsigned char doautomap, int visible) {
	// register: 16
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
}


// address: 0x80044B48
void FreeLightTable__Fv() {
}


// address: 0x80044B50
void InitLightTable__Fv() {
}


// address: 0x80044B58
void MakeLightTable__Fv() {
}


// address: 0x80044B60
void InitLightMax__Fv() {
}


// address: 0x80044B84
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x80044BC8
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80044C34
void AddUnLight__Fi(int i) {
}


// address: 0x80044C64
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x80044C90
void ChangeLightXY__Fiii(int i, int x, int y) {
	// register: 3
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80044CCC
void light_fix__Fi(int i) {
}


// address: 0x80044CD4
void ChangeLightOff__Fiii(int i, int x, int y) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80044D08
void ChangeLight__Fiiii(int i, int x, int y, int r) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80044D40
void ChangeLightColour__Fii(int i, int c) {
	// register: 4
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80044D68
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


// address: 0x80044E8C
void SavePreLighting__Fv() {
}


// address: 0x80044E94
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x80044EE4
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	// register: 9
	register int vid;
	{
		{
			// register: 3
			// size: 0xE
			register struct LightListStruct *vl;
		}
	}
}


// address: 0x80044F60
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x80045014
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 9
	register int i;
	// register: 8
	// size: 0xE
	register struct LightListStruct *vl;
}


// address: 0x80045094
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
	// register: 18
	// size: 0xE
	register struct LightListStruct *vl;
}


