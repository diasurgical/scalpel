// C:\diabpsx\SOURCE\SPELLS.CPP

#include "types.h"

// address: 0x80073780
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


// address: 0x80073A48
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x80073B60
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x80073C00
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x80073E64
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x80074118
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


