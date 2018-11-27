// C:\diabpsx\SOURCE\THEMES.CPP

#include "types.h"

// address: 0x8015A360
unsigned char TFit_Shrine__Fi(int i) {
	// register: 13
	register int xp;
	// register: 15
	register int yp;
	// register: 12
	register int found;
}


// address: 0x8015A5D0
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


// address: 0x8015A7A4
unsigned char TFit_SkelRoom__Fi(int t) {
	// register: 16
	register int i;
}


// address: 0x8015A854
unsigned char TFit_GoatShrine__Fi(int t) {
	// register: 16
	register int i;
}


// address: 0x8015A8EC
unsigned char CheckThemeObj3__Fiiii(int xp, int yp, int t, int f) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8015AA3C
unsigned char TFit_Obj3__Fi(int t) {
	// register: 16
	register int xp;
	// register: 17
	register int yp;
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char objrnd[4];
}


// address: 0x8015AAFC
unsigned char CheckThemeReqs__Fi(int t) {
	// register: 5
	register unsigned char rv;
}


// address: 0x8015ABC8
unsigned char SpecialThemeFit__Fii(int i, int t) {
	// register: 3
	register unsigned char rv;
}


// address: 0x8015ADA4
unsigned char CheckThemeRoom__Fi(int tv) {
	// register: 4
	register int i;
	// register: 11
	register int j;
	// register: 5
	register int tarea;
}


// address: 0x8015B050
void InitThemes__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int t;
}


// address: 0x8015B39C
void HoldThemeRooms__Fv() {
	// register: 7
	register int i;
	// register: 4
	register int x;
	// register: 6
	register int y;
}


// address: 0x8015B484
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


// address: 0x8015B628
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


// address: 0x8015B7A0
void Theme_Shrine__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015B888
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


// address: 0x8015B9AC
void Theme_SkelRoom__Fi(int t) {
	// register: 16
	register int xp;
	// register: 18
	register int yp;
	// address: 0xFFFFFFE8
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015BCB0
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


// address: 0x8015BF14
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


// address: 0x8015C184
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


// address: 0x8015C2F4
void Theme_BloodFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015C368
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


// address: 0x8015C4D8
void Theme_PurifyingFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015C54C
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


// address: 0x8015C6E4
void Theme_GoatShrine__Fi(int t) {
	// register: 16
	register int xx;
	// register: 18
	register int yy;
}


// address: 0x8015C834
void Theme_Cauldron__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015C8A8
void Theme_MurkyFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015C91C
void Theme_TearFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015C990
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


// address: 0x8015CB08
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


// address: 0x8015CCA0
void UpdateL4Trans__Fv() {
	// register: 4
	register int i;
	// register: 6
	register int j;
}


// address: 0x8015CD00
void CreateThemeRooms__Fv() {
	// register: 16
	register int i;
}


