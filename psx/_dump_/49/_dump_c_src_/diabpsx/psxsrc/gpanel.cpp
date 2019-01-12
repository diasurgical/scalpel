// C:\diabpsx\PSXSRC\GPANEL.CPP

#include "types.h"

// address: 0x8008ADDC
// line start: 204
// line end:   218
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8008AE20
// size: 0x10
// line start: 226
// line end:   230
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x8008AE78
// line start: 241
// line end:   334
void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 22
	register int ManaHeight;
	// address: 0xFFFFFFC0
	auto int HealthAnim;
	// address: 0xFFFFFFC8
	auto int ManaAnim;
	// register: 23
	register int BarY;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 21
	register int X;
	// register: 19
	register int Y;
	// register: 16
	register int xof;
}


// address: 0x8008B2EC
// line start: 341
// line end:   409
void DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 17
	register int X;
	// register: 19
	register int Y;
	// register: 21
	register int Loop;
	// register: 6
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 22
	register int Bx;
	// register: 23
	register int By;
}


// address: 0x8008B770
// line start: 416
// line end:   444
void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 19
	register int X;
	// register: 17
	register int Y;
	// register: 2
	register int Anim;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 6
	register int SpellNo;
	// address: 0xFFFFFFA0
	// size: 0x40
	auto int YT[16];
}


// address: 0x8008B8D0
// line start: 452
// line end:   464
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008B91C
// line start: 481
// line end:   544
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008BCD8
// line start: 548
// line end:   567
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008BDCC
// line start: 573
// line end:   591
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


