// C:\diabpsx\PSXSRC\CPLAYER.CPP

#include "types.h"

// address: 0x80095418
// size: 0x90
// line start: 72
// line end:   134
struct CPlayer *__7CPlayerbii(struct CPlayer *this, bool Town, int mPlayerNum, int NewNumOfPlayers) {
	// register: 4
	register int SizeToAlloc;
	{
		{
			// register: 16
			register long hnd;
		}
	}
}


// address: 0x80095570
// line start: 147
// line end:   155
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
	{
		{
		}
	}
}


// address: 0x80095600
// line start: 166
// line end:   170
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x8009566C
// line start: 210
// line end:   284
void SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg) {
	// register: 18
	register int ScrX;
	// register: 16
	register int ScrY;
	// register: 16
	register int WorldX;
	// register: 6
	register int WorldY;
	// register: 19
	register int NWorldX;
	// register: 17
	register int NWorldY;
	// register: 2
	register int wtime;
	// register: 21
	register bool ok;
}


// address: 0x80095A50
// line start: 316
// line end:   468
void Print__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg) {
	// register: 30
	register int ScrXOff;
	// register: 23
	register int ScrYOff;
	// register: 16
	register int Action;
	// register: 22
	register int WorldX;
	// register: 21
	register int WorldY;
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	{
		{
			// register: 16
			register int Frame;
			{
				{
					// register: 2
					register int FrmNum;
					// address: 0xFFFFFFC8
					// size: 0x8
					auto struct RECT R;
					// register: 16
					// size: 0x28
					register struct POLY_FT4 *ShadFt4;
					{
						{
							{
								// register: 19
								register int Frame;
								{
									{
										{
											{
												// address: 0xFFFFFFC8
												// size: 0x8
												auto struct RECT R;
												// register: 17
												register int OtPos;
												// register: 16
												// size: 0x28
												register struct POLY_FT4 *ShadFt4;
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
		}
	}
}


// address: 0x80095F88
// line start: 477
// line end:   535
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8009600C
// size: 0x4
// line start: 540
// line end:   574
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x80096090
// line start: 585
// line end:   586
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x80096098
// line start: 595
// line end:   596
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x800960A0
// line start: 606
// line end:   610
void LoadThis__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x80096110
// line start: 626
// line end:   634
void NonBlockingLoadNewGFX__7CPlayeri(struct CPlayer *this, int Id) {
	{
		{
			// register: 2
			// size: 0x8
			register struct PlayerParam *Pp;
		}
	}
}


// address: 0x8009617C
// line start: 641
// line end:   668
void FilthyTask__FP4TASK(struct TASK *T) {
	// register: 16
	// size: 0x90
	register struct CPlayer *ThePlayer;
	// address: 0xFFFFFFE0
	// size: 0xF
	auto char FName[15];
	// register: 17
	register int Id;
	// register: 3
	// size: 0x8
	register struct PlayerParam *Pp;
}


