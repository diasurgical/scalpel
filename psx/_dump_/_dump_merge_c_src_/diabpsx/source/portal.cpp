// C:\diabpsx\SOURCE\PORTAL.CPP

#include "types.h"

// address: 0x8013FD98
// line start: 128
// line end:   136
void ActivatePortal__FiiiiiUc(int i, int x, int y, int lvl, int lvltype, int sp) {
}


// address: 0x8013FD5C
// line start: 120
// line end:   121
void AddInTownPortal__Fi(int i) {
}


// address: 0x8013FB4C
// line start: 70
// line end:   92
void AddWarpMissile__Fiii(int i, int x, int y) {
	// register: 2
	register int mi;
}


// address: 0x8013FE08
// line start: 144
// line end:   146
void DeactivatePortal__Fi(int i) {
}


// address: 0x80140008
// line start: 188
// line end:   214
void GetPortalLevel__Fv() {
}


// address: 0x801401D4
// line start: 220
// line end:   233
void GetPortalLvlPos__Fv() {
}


// address: 0x8013FE28
// line start: 153
// line end:   157
unsigned char PortalOnLevel__Fi(int i) {
}


// address: 0x8013FE60
// line start: 164
// line end:   176
void RemovePortalMissile__Fi(int id) {
	// register: 16
	register int i;
	// register: 17
	register int mi;
}


// address: 0x8013FFFC
// line start: 182
// line end:   183
void SetCurrentPortal__Fi(int p) {
}


// address: 0x8013FC54
// line start: 98
// line end:   112
void SyncPortals__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8007A000
// line start: 149
// line end:   178
void AddWarpMissile__Fiii_addr_8007A000(int i, int x, int y) {
	// register: 3
	register int mi;
}


// address: 0x8007A350
// line start: 249
// line end:   256
void DelMis__Fii(int mi, int i) {
}


// address: 0x8007A3B0
// line start: 262
// line end:   277
void RemovePortalMissile__Fi_addr_8007A3B0(int id) {
	// register: 17
	register int i;
	// register: 18
	register int mi;
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
}


// address: 0x80080FD0
// line start: 285
// line end:   300
void RemovePortalMissile__Fi_addr_80080FD0(int id) {
	// register: 17
	register int i;
	// register: 18
	register int mi;
	// register: 16
	// size: 0x50
	register struct MissileStruct_dup_17 *m;
}


// address: 0x80080D38
// line start: 189
// line end:   219
void SyncPortals__Fv_addr_80080D38() {
	{
		// register: 17
		register int i;
		{
			{
				{
					{
						{
							{
								// register: 6
								register int x;
								{
									{
										// register: 4
										register int y;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80079E2C
// line start: 70
// line end:   140
int lAddMissile__Fiiici(int sx, int sy, int midir, char micaster, int id) {
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
	// register: 18
	register int mi;
}


