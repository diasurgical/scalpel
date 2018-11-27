// C:\diabpsx\SOURCE\THEMES.CPP

#include "types.h"

// address: 0x80143C78
// line start: 106
// line end:   144
unsigned char TFit_Shrine__Fi(int i) {
	// register: 13
	register int xp;
	// register: 15
	register int yp;
	// register: 12
	register int found;
}


// address: 0x80143EE8
// line start: 151
// line end:   184
unsigned char TFit_Obj5__Fi(int t) {
	// register: 16
	register int xp;
	// register: 17
	register int yp;
	// register: 8
	register int i;
	// register: 9
	register int r;
	// register: 12
	register int rs;
	// register: 5
	register unsigned char found;
}


// address: 0x801440BC
// line start: 191
// line end:   205
unsigned char TFit_SkelRoom__Fi(int t) {
	// register: 16
	register int i;
}


// address: 0x8014416C
// line start: 212
// line end:   223
unsigned char TFit_GoatShrine__Fi(int t) {
	// register: 16
	register int i;
}


// address: 0x80144204
// line start: 230
// line end:   244
unsigned char CheckThemeObj3__Fiiii(int xp, int yp, int t, int f) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80144354
// line start: 251
// line end:   264
unsigned char TFit_Obj3__Fi(int t) {
	// register: 16
	register int xp;
	// register: 17
	register int yp;
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char objrnd[4];
}


// address: 0x80144414
// line start: 277
// line end:   309
unsigned char CheckThemeReqs__Fi(int t) {
	// register: 5
	register unsigned char rv;
}


// address: 0x801444E0
// line start: 316
// line end:   371
unsigned char SpecialThemeFit__Fii(int i, int t) {
	// register: 3
	register unsigned char rv;
}


// address: 0x801446BC
// line start: 378
// line end:   412
unsigned char CheckThemeRoom__Fi(int tv) {
	// register: 4
	register int i;
	// register: 11
	register int j;
	// register: 5
	register int tarea;
}


// address: 0x80144968
// line start: 419
// line end:   484
void InitThemes__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int t;
}


// address: 0x80144CB4
// line start: 490
// line end:   510
void HoldThemeRooms__Fv() {
	// register: 7
	register int i;
	// register: 4
	register int x;
	// register: 6
	register int y;
}


// address: 0x80144D9C
// line start: 516
// line end:   539
void PlaceThemeMonsts__Fii(int t, int f) {
	// register: 17
	register int xp;
	// register: 18
	register int yp;
	// register: 20
	register int mtype;
	// address: 0xFFFFFE18
	// size: 0x1BC
	auto int scattertypes[111];
	// register: 5
	register int numscattypes;
	// register: 3
	register int i;
}


// address: 0x80144F40
// line start: 548
// line end:   565
void Theme_Barrel__Fi(int t) {
	// register: 17
	register int xp;
	// register: 18
	register int yp;
	// register: 4
	register int r;
	// address: 0xFFFFFFD0
	// size: 0x4
	auto char barrnd[4];
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x801450B8
// line start: 572
// line end:   585
void Theme_Shrine__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x801451A0
// line start: 592
// line end:   613
void Theme_MonstPit__Fi(int t) {
	// register: 8
	register int r;
	// register: 4
	register int ixp;
	// register: 5
	register int iyp;
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x801452CC
// line start: 620
// line end:   662
void Theme_SkelRoom__Fi(int t) {
	// register: 16
	register int xp;
	// register: 18
	register int yp;
	// address: 0xFFFFFFE8
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x801455D0
// line start: 669
// line end:   700
void Theme_Treasure__Fi(int t) {
	// register: 17
	register int xp;
	// register: 20
	register int yp;
	// register: 4
	register int i;
	// address: 0xFFFFFFC8
	// size: 0x4
	auto char treasrnd[4];
	// address: 0xFFFFFFD0
	// size: 0x4
	auto char monstrnd[4];
	{
		{
			{
				{
					{
						{
							// register: 16
							register int rv;
						}
					}
				}
			}
		}
	}
}


// address: 0x80145834
// line start: 707
// line end:   743
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
}


// address: 0x80145AA4
// line start: 750
// line end:   765
void Theme_Torture__Fi(int t) {
	// register: 17
	register int xp;
	// register: 19
	register int yp;
	// address: 0xFFFFFFD0
	// size: 0x4
	auto char tortrnd[4];
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x80145C14
// line start: 772
// line end:   777
void Theme_BloodFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x80145C88
// line start: 784
// line end:   799
void Theme_Decap__Fi(int t) {
	// register: 17
	register int xp;
	// register: 19
	register int yp;
	// address: 0xFFFFFFD0
	// size: 0x4
	auto char decaprnd[4];
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x80145DF8
// line start: 806
// line end:   811
void Theme_PurifyingFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x80145E6C
// line start: 818
// line end:   840
void Theme_ArmorStand__Fi(int t) {
	// register: 17
	register int xp;
	// register: 19
	register int yp;
	// address: 0xFFFFFFD0
	// size: 0x4
	auto char armorrnd[4];
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x80146004
// line start: 847
// line end:   863
void Theme_GoatShrine__Fi(int t) {
	// register: 16
	register int xx;
	// register: 18
	register int yy;
}


// address: 0x80146154
// line start: 870
// line end:   875
void Theme_Cauldron__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x801461C8
// line start: 882
// line end:   887
void Theme_MurkyFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8014623C
// line start: 894
// line end:   899
void Theme_TearFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x801462B0
// line start: 906
// line end:   923
void Theme_BrnCross__Fi(int t) {
	// register: 17
	register int xp;
	// register: 19
	register int yp;
	// address: 0xFFFFFFD0
	// size: 0x4
	auto char monstrnd[4];
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char bcrossrnd[4];
}


// address: 0x80146428
// line start: 930
// line end:   952
void Theme_WeaponRack__Fi(int t) {
	// register: 17
	register int xp;
	// register: 19
	register int yp;
	// address: 0xFFFFFFD0
	// size: 0x4
	auto char weaponrnd[4];
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x801465C0
// line start: 959
// line end:   967
void UpdateL4Trans__Fv() {
	// register: 4
	register int i;
	// register: 6
	register int j;
}


// address: 0x80146620
// line start: 974
// line end:   1042
void CreateThemeRooms__Fv() {
	// register: 16
	register int i;
}


