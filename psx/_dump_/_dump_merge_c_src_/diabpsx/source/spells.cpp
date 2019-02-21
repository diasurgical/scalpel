// C:\diabpsx\SOURCE\SPELLS.CPP

#include "types.h"

// address: 0x80070A50
// line start: 171
// line end:   194
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x800709B0
// line start: 143
// line end:   164
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x80070F68
// line start: 241
// line end:   264
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x80077530
// line start: 250
// line end:   312
void DoResurrect__Fii(int pnum, int rid) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct_dup_17 *ptrplr;
}


// address: 0x80077460
// line start: 250
// line end:   312
void DoResurrect__Fii_addr_80077460(int pnum, int rid) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct_dup_18 *ptrplr;
}


// address: 0x80070CB4
// line start: 201
// line end:   236
void DoResurrect__Fii_addr_80070CB4(int pnum, int rid) {
}


// address: 0x80077398
// line start: 250
// line end:   312
void DoResurrect__Fii_addr_80077398(int pnum, int rid) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *ptrplr;
}


// address: 0x800705A4
// line start: 44
// line end:   93
int GetManaAmount__Fii(int id, int sn) {
	// register: 3
	register int i;
	// register: 8
	register int sl;
	// register: 6
	register int ma;
	// register: 7
	register int adj;
}


// address: 0x8007086C
// line start: 100
// line end:   137
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


