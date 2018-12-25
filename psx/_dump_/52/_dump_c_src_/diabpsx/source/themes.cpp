// C:\diabpsx\SOURCE\THEMES.CPP

#include "types.h"

// address: 0x80157CC0
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


// address: 0x80157F30
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


// address: 0x80158104
// line start: 191
// line end:   205
unsigned char TFit_SkelRoom__Fi(int t) {
	// register: 16
	register int i;
}


// address: 0x801581B4
// line start: 212
// line end:   223
unsigned char TFit_GoatShrine__Fi(int t) {
	// register: 16
	register int i;
}


// address: 0x8015824C
// line start: 230
// line end:   244
unsigned char CheckThemeObj3__Fiiii(int xp, int yp, int t, int f) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8015839C
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


// address: 0x8015845C
// line start: 277
// line end:   309
unsigned char CheckThemeReqs__Fi(int t) {
	// register: 5
	register unsigned char rv;
}


// address: 0x80158528
// line start: 316
// line end:   371
unsigned char SpecialThemeFit__Fii(int i, int t) {
	// register: 3
	register unsigned char rv;
}


// address: 0x80158704
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


// address: 0x801589B0
// line start: 419
// line end:   484
void InitThemes__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int t;
}


// address: 0x80158CFC
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


// address: 0x80158DE4
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


// address: 0x80158F88
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


// address: 0x80159100
// line start: 572
// line end:   585
void Theme_Shrine__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x801591E8
// line start: 592
// line end:   619
void Theme_MonstPit__Fi(int t) {
	// register: 7
	register int r;
	// register: 4
	register int ixp;
	// register: 5
	register int iyp;
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015930C
// line start: 625
// line end:   667
void Theme_SkelRoom__Fi(int t) {
	// register: 16
	register int xp;
	// register: 18
	register int yp;
	// address: 0xFFFFFFE8
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x80159610
// line start: 674
// line end:   705
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


// address: 0x80159874
// line start: 712
// line end:   748
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


// address: 0x80159AE4
// line start: 755
// line end:   770
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


// address: 0x80159C54
// line start: 777
// line end:   782
void Theme_BloodFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x80159CC8
// line start: 789
// line end:   804
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


// address: 0x80159E38
// line start: 811
// line end:   816
void Theme_PurifyingFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x80159EAC
// line start: 823
// line end:   845
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


// address: 0x8015A044
// line start: 852
// line end:   868
void Theme_GoatShrine__Fi(int t) {
	// register: 16
	register int xx;
	// register: 18
	register int yy;
}


// address: 0x8015A194
// line start: 875
// line end:   880
void Theme_Cauldron__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015A208
// line start: 887
// line end:   892
void Theme_MurkyFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015A27C
// line start: 899
// line end:   904
void Theme_TearFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015A2F0
// line start: 911
// line end:   928
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


// address: 0x8015A468
// line start: 935
// line end:   957
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


// address: 0x8015A600
// line start: 964
// line end:   972
void UpdateL4Trans__Fv() {
	// register: 4
	register int i;
	// register: 6
	register int j;
}


// address: 0x8015A660
// line start: 979
// line end:   1064
void CreateThemeRooms__Fv() {
	// register: 16
	register int i;
}


