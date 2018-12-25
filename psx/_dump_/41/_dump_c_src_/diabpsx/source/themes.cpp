// C:\diabpsx\SOURCE\THEMES.CPP

#include "types.h"

// address: 0x801578F4
// line start: 106
// line end:   150
unsigned char TFit_Shrine__Fi(int i) {
	// register: 17
	register int xp;
	// register: 21
	register int yp;
	// address: 0xFFFFFFB0
	auto int found;
}


// address: 0x80157BE4
// line start: 157
// line end:   192
unsigned char TFit_Obj5__Fi(int t) {
	// register: 19
	register int xp;
	// register: 20
	register int yp;
	// register: 18
	register int i;
	// register: 22
	register int r;
	// register: 30
	register int rs;
	// register: 21
	register unsigned char found;
}


// address: 0x80157DAC
// line start: 199
// line end:   213
unsigned char TFit_SkelRoom__Fi(int t) {
	// register: 16
	register int i;
}


// address: 0x80157E5C
// line start: 220
// line end:   231
unsigned char TFit_GoatShrine__Fi(int t) {
	// register: 16
	register int i;
}


// address: 0x80157EF4
// line start: 238
// line end:   253
unsigned char CheckThemeObj3__Fiiii(int xp, int yp, int t, int f) {
	{
		// register: 18
		register int i;
	}
}


// address: 0x80158040
// line start: 260
// line end:   273
unsigned char TFit_Obj3__Fi(int t) {
	// register: 16
	register int xp;
	// register: 17
	register int yp;
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char objrnd[4];
}


// address: 0x80158100
// line start: 286
// line end:   318
unsigned char CheckThemeReqs__Fi(int t) {
	// register: 5
	register unsigned char rv;
}


// address: 0x801581CC
// line start: 325
// line end:   380
unsigned char SpecialThemeFit__Fii(int i, int t) {
	// register: 3
	register unsigned char rv;
}


// address: 0x801583A8
// line start: 387
// line end:   426
unsigned char CheckThemeRoom__Fi(int tv) {
	// register: 16
	register int i;
	// register: 17
	register int j;
	// register: 4
	register int tarea;
}


// address: 0x8015866C
// line start: 433
// line end:   498
void InitThemes__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int t;
}


// address: 0x801589B8
// line start: 504
// line end:   524
void HoldThemeRooms__Fv() {
	// register: 6
	register int i;
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x80158A9C
// line start: 530
// line end:   554
void PlaceThemeMonsts__Fii(int t, int f) {
	// register: 17
	register int xp;
	// register: 18
	register int yp;
	// register: 19
	register int mtype;
	// address: 0xFFFFFE18
	// size: 0x1BC
	auto int scattertypes[111];
	// register: 5
	register int numscattypes;
	// register: 3
	register int i;
}


// address: 0x80158C24
// line start: 563
// line end:   581
void Theme_Barrel__Fi(int t) {
	// register: 16
	register int xp;
	// register: 17
	register int yp;
	// register: 4
	register int r;
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char barrnd[4];
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x80158D80
// line start: 588
// line end:   601
void Theme_Shrine__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x80158E68
// line start: 608
// line end:   636
void Theme_MonstPit__Fi(int t) {
	// register: 19
	register int r;
	// register: 16
	register int ixp;
	// register: 17
	register int iyp;
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x80158FB0
// line start: 642
// line end:   695
void Theme_SkelRoom__Fi(int t) {
	// register: 16
	register int xp;
	// register: 18
	register int yp;
	// address: 0xFFFFFFE8
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x801592EC
// line start: 703
// line end:   735
void Theme_Treasure__Fi(int t) {
	// register: 16
	register int xp;
	// register: 18
	register int yp;
	// register: 4
	register int i;
	// address: 0xFFFFFFD0
	// size: 0x4
	auto char treasrnd[4];
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char monstrnd[4];
	{
		{
			{
				{
					{
						{
							// register: 17
							register int rv;
						}
					}
				}
			}
		}
	}
}


// address: 0x80159530
// line start: 742
// line end:   782
void Theme_Library__Fi(int t) {
	// register: 17
	register int xp;
	// register: 19
	register int yp;
	// register: 2
	register int oi;
	// address: 0xFFFFFFD0
	// size: 0x4
	auto char librnd[4];
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char monstrnd[4];
	{
		{
			{
				{
					{
						{
							// register: 16
							register int lnumobjects;
						}
					}
				}
			}
		}
	}
}


// address: 0x801597B4
// line start: 789
// line end:   805
void Theme_Torture__Fi(int t) {
	// register: 17
	register int xp;
	// register: 18
	register int yp;
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char tortrnd[4];
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015990C
// line start: 812
// line end:   817
void Theme_BloodFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x80159980
// line start: 824
// line end:   840
void Theme_Decap__Fi(int t) {
	// register: 17
	register int xp;
	// register: 18
	register int yp;
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char decaprnd[4];
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x80159AD8
// line start: 847
// line end:   852
void Theme_PurifyingFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x80159B4C
// line start: 859
// line end:   882
void Theme_ArmorStand__Fi(int t) {
	// register: 17
	register int xp;
	// register: 18
	register int yp;
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char armorrnd[4];
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x80159CC8
// line start: 889
// line end:   906
void Theme_GoatShrine__Fi(int t) {
	// register: 16
	register int xx;
	// register: 17
	register int yy;
}


// address: 0x80159DFC
// line start: 913
// line end:   918
void Theme_Cauldron__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x80159E70
// line start: 925
// line end:   930
void Theme_MurkyFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x80159EE4
// line start: 937
// line end:   942
void Theme_TearFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x80159F58
// line start: 949
// line end:   967
void Theme_BrnCross__Fi(int t) {
	// register: 17
	register int xp;
	// register: 18
	register int yp;
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char monstrnd[4];
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char bcrossrnd[4];
}


// address: 0x8015A0B4
// line start: 974
// line end:   997
void Theme_WeaponRack__Fi(int t) {
	// register: 17
	register int xp;
	// register: 18
	register int yp;
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char weaponrnd[4];
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015A230
// line start: 1004
// line end:   1012
void UpdateL4Trans__Fv() {
	// register: 4
	register int i;
	// register: 5
	register int j;
}


// address: 0x8015A28C
// line start: 1019
// line end:   1104
void CreateThemeRooms__Fv() {
	// register: 16
	register int i;
}


