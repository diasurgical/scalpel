// C:\diabpsx\SOURCE\SPELLS.CPP

#include "types.h"

// address: 0x80076C64
// line start: 54
// line end:   102
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


// address: 0x80076F18
// line start: 110
// line end:   164
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x800770A8
// line start: 170
// line end:   196
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x80077148
// line start: 203
// line end:   245
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x80077460
// line start: 250
// line end:   312
void DoResurrect__Fii(int pnum, int rid) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *ptrplr;
}


// address: 0x800776C8
// line start: 320
// line end:   343
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


