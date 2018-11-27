// C:\diabpsx\SOURCE\SPELLS.CPP

#include "types.h"

// address: 0x8006FFFC
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


// address: 0x800702C4
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x80070408
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x800704A8
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x80070754
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x80070A08
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


