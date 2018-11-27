// C:\diabpsx\PSXSRC\CPLAYER.CPP

#include "types.h"

// address: 0x8008D270
// size: 0x80
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x8008D354
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x8008D3AC
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x8008D404
void SetBlockXY__7CPlayerR7CBlocksR12PlayerStruct(struct CPlayer *this, struct CBlocks *Bg, struct PlayerStruct *Plr) {
	// register: 17
	register int ScrX;
	// register: 16
	register int ScrY;
	// register: 16
	register int WorldX;
	// register: 7
	register int WorldY;
}


// address: 0x8008D550
void SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg) {
	// register: 17
	register int ScrX;
	// register: 16
	register int ScrY;
	// register: 17
	register int NWorldX;
	// register: 16
	register int NWorldY;
	// register: 3
	register int pdir;
	// register: 4
	register int wtime;
}


// address: 0x8008D97C
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x8008D9FC
void Print__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg) {
	// address: 0xFFFFFFD0
	auto int ScrXOff;
	// register: 30
	register int ScrYOff;
	// register: 17
	register int Action;
	// register: 22
	register int WorldX;
	// register: 20
	register int WorldY;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	{
		{
			{
				{
					// register: 21
					register int Frame;
					{
						{
							// register: 16
							register int FrmNum;
							// address: 0xFFFFFFC0
							// size: 0x8
							auto struct RECT R;
							// register: 20
							register int pOtPos;
							// register: 17
							register int PhaseFlag;
							// register: 16
							register int TeleFlag;
							// register: 16
							// size: 0x28
							register struct POLY_FT4 *ShadFt4;
							{
								{
									// register: 3
									register int SpellFr;
									{
										{
											// register: 17
											register int zX;
											// register: 16
											register int zY;
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
}


// address: 0x8008DE4C
void SetpNscrnxy__7CPlayeriiii(struct CPlayer *this, int x, int y, int px, int py) {
}


// address: 0x8008DEB4
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008DF30
// size: 0x4
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008DF98
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008DFA0
void Dump__7CPlayer(struct CPlayer *this) {
}


