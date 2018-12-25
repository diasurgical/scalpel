// C:\diabpsx\SOURCE\CONTROL.CPP

#include "types.h"

// address: 0x8003017C
// line start: 542
// line end:   545
unsigned char TrimCol__Fs_addr_8003017C(short col) {
}


// address: 0x800301B4
// line start: 551
// line end:   728
void DrawSpellCel__FllUclUcc(long xp, long yp, unsigned char Trans, long nCel, int w, int sel) {
	// address: 0xFFFFFF78
	// size: 0x70
	auto struct TextDat *ThisDat;
	// register: 17
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 6
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 19
	// size: 0x34
	register struct POLY_GT4 *GT4;
	// address: 0xFFFFFF80
	// size: 0x4
	auto struct TP_LOAD_HDR *Tp;
	// register: 19
	register int SpellW;
	// register: 16
	register int SpellH;
	// register: 18
	register unsigned char r;
	// address: 0xFFFFFF88
	auto unsigned char g;
	// address: 0xFFFFFF90
	auto unsigned char b;
	// register: 13
	register int x0;
	// register: 12
	register int x1;
	// register: 16
	register int x2;
	// register: 15
	register int x3;
	// register: 24
	register int y0;
	// register: 11
	register int y1;
	// register: 9
	register int y2;
	// register: 14
	register int y3;
	// register: 4
	register int u0;
	// register: 5
	register int u1;
	// register: 10
	register int u2;
	// register: 8
	register int u3;
	// register: 6
	register int v0;
	// register: 7
	register int v1;
	// register: 3
	register int v2;
	// register: 2
	register int v3;
	// address: 0xFFFFFF98
	auto int otpos;
	{
		{
			{
				{
					// register: 22
					register int X;
					// register: 23
					register int Y;
					// register: 21
					register int SW;
					// register: 20
					register int SH;
					// register: 3
					// size: 0x8
					register struct PAL *Pal;
					// address: 0xFFFFFFD0
					auto int st;
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x80030D38
// line start: 742
// line end:   743
void SetSpellTrans__Fc(char t) {
}


// address: 0x80030D44
// line start: 754
// line end:   798
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	// register: 17
	register int CountDown;
	// register: 16
	register int i;
	{
		// register: 16
		register int omp;
	}
}


// address: 0x80030E9C
// line start: 804
// line end:   825
void DrawSpeedSpellTSK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 17
	register int pnum;
	// register: 19
	register bool alive;
	{
		// register: 18
		register int old_opts;
	}
}


// address: 0x80030FCC
// line start: 830
// line end:   862
void ToggleSpell__Fi(int pnum) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80031080
// line start: 888
// line end:   1238
void DrawSpellList__Fv() {
	// register: 18
	register int x;
	// register: 20
	register int y;
	// register: 22
	register int i;
	// register: 19
	register int j;
	// register: 4
	register int t;
	// address: 0xFFFFFFA0
	auto unsigned long mask;
	// address: 0xFFFFFFA8
	auto unsigned long spl;
	// register: 5
	register int s;
	// register: 17
	register int c;
	// register: 23
	register int v;
	// address: 0xFFFFFFB0
	auto int NoSpells;
	// register: 6
	register unsigned char trans;
	// register: 21
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 18
	// size: 0xEC
	register struct CPad *P;
	// register: 21
	register int lx;
	// register: 22
	register int ly;
	// register: 16
	register int NoYSpells;
	// register: 17
	register int NoXSpells;
	// register: 19
	register int PLEFT;
	// register: 20
	register int PRIGHT;
	{
		{
			{
				{
					{
						{
							// register: 4
							register bool Flag;
						}
					}
				}
			}
		}
	}
}


// address: 0x80031D24
// line start: 1244
// line end:   1257
void SetSpell__Fi(int pnum) {
}


// address: 0x80031E30
// line start: 1268
// line end:   1274
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x80031EF0
// line start: 1280
// line end:   1282
void ClearPanel__Fv() {
}


// address: 0x80031F20
// line start: 1335
// line end:   1336
void InitPanelStr__Fv() {
}


// address: 0x80031F40
// line start: 1422
// line end:   1572
void InitControlPan__Fv() {
	// register: 3
	register int i;
}


// address: 0x8003216C
// line start: 1578
// line end:   1581
void DrawCtrlPan__Fv() {
}


// address: 0x80032198
// line start: 1661
// line end:   1673
void DoAutoMap__Fv() {
}


// address: 0x800321F8
// line start: 1680
// line end:   1771
void CheckPanelInfo__Fv() {
	// register: 17
	// size: 0x4
	register int (*_pSpell)[1];
	// register: 16
	register int c;
	// register: 5
	register int s;
	// register: 16
	register int v;
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											{
												{
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


// address: 0x80032918
// line start: 1845
// line end:   1861
void FreeControlPan__Fv() {
	{
		// register: 4
		register void *p__p;
		{
			// register: 4
			register void *p__p;
			{
				// register: 4
				register void *p__p;
				{
					// register: 4
					register void *p__p;
					{
						// register: 4
						register void *p__p;
						{
							// register: 4
							register void *p__p;
							{
								// register: 4
								register void *p__p;
								{
									// register: 4
									register void *p__p;
									{
										// register: 4
										register void *p__p;
										{
											// register: 4
											register void *p__p;
											{
												// register: 4
												register void *p__p;
												{
													// register: 4
													register void *p__p;
													{
														// register: 4
														register void *p__p;
														{
															// register: 4
															register void *p__p;
															{
																// register: 4
																register void *p__p;
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
	}
}


// address: 0x80032A28
// line start: 1883
// line end:   1911
int CPrintString__FiPci(int No, char *pszStr, int Just) {
	// register: 6
	// size: 0x4
	register enum TXT_JUST Justify;
	// register: 8
	register unsigned char R;
	// register: 5
	register unsigned char G;
	// register: 3
	register unsigned char B;
}


// address: 0x80032B44
// line start: 1955
// line end:   2062
void PrintInfo__Fv() {
	// register: 18
	register int NoOfLines;
	// register: 20
	register int nOffset1;
	// register: 19
	register int nlines;
	// register: 22
	register int PageOffset;
	{
		{
			{
				// register: 17
				register int i;
				{
					{
						{
							{
								// register: 17
								register int i;
								{
									// register: 16
									register int i;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80032F74
// line start: 2068
// line end:   2189
void DrawInfoBox__FP4RECT(struct RECT *InfoRect) {
	// register: 16
	register int pnum;
	{
		{
			{
				{
					{
						{
							// register: 17
							register int nGold;
							{
								{
									{
										{
											{
												{
													{
														{
															{
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
	}
}


// address: 0x800336A8
// line start: 2242
// line end:   2381
void MY_PlrStringXY__Fv() {
	// register: 22
	// size: 0x28
	register struct CSDATA *ptr;
	// address: 0xFFFFFFB8
	auto char r;
	// address: 0xFFFFFFC0
	auto char g;
	// address: 0xFFFFFFC8
	auto char b;
	// register: 23
	register int x;
	// register: 30
	register int y;
	// address: 0xFFFFFFD0
	auto int w;
	// register: 21
	register int len;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT Angle;
}


// address: 0x80033DB8
// line start: 2387
// line end:   2403
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	// register: 16
	// size: 0x28
	register struct CSDATA *ptr;
}


// address: 0x80033E60
// line start: 2433
// line end:   2482
void DrawPlus__Fii(int n, int pnum) {
	// register: 17
	// size: 0x70
	register struct TextDat *ThisDat;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 18
	register int otpos;
	// register: 3
	register int x;
	// register: 7
	register int y;
}


// address: 0x80033FF8
// line start: 2489
// line end:   2543
void ChrCheckValidButton__Fi(int move) {
	// register: 2
	register int pc;
	// register: 3
	register int count;
	{
		// register: 6
		register int i;
	}
}


// address: 0x80034304
// line start: 2553
// line end:   2580
void DrawArrows__Fv() {
	// register: 18
	// size: 0x70
	register struct TextDat *ThisDat;
	// register: 10
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 16
	register unsigned char flip;
	// register: 17
	register int x;
	// register: 19
	register int otpos;
}


// address: 0x80034404
// line start: 2585
// line end:   2792
void BuildChr__Fv() {
	// register: 17
	register char c;
	// address: 0xFFFFFFB0
	// size: 0x40
	auto char chrstr[64];
	// register: 18
	register long mind;
	// register: 16
	register long maxd;
	// register: 16
	register int hper;
	// register: 16
	register int ac;
	{
		{
		}
	}
}


// address: 0x80035668
// line start: 2797
// line end:   2894
void DrawChr__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x40
	auto char chrstr[64];
	// register: 2
	register int pc;
	// register: 17
	// size: 0xEC
	register struct CPad *P;
	{
		{
			// register: 18
			register int llus;
			// register: 16
			register int move;
		}
	}
}


// address: 0x80035B08
// line start: 2948
// line end:   2973
void DrawChrTSK__FP4TASK(struct TASK *T) {
	// register: 16
	register int omp;
}


// address: 0x80035C18
// line start: 2982
// line end:   2990
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x80035CAC
// line start: 2995
// line end:   3046
void CheckChrBtns__Fv() {
	// register: 16
	register int pc;
}


// address: 0x80036034
// line start: 3053
// line end:   3093
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x800360B8
// line start: 3101
// line end:   3116
void RedBack__Fv() {
	// register: 16
	// size: 0x70
	register struct TextDat *ThisDat;
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x800361B0
// line start: 3122
// line end:   3188
void PrintSBookStr__FiiiPCcUcUc(int x, int y, int cspel, char *pszStr, int bright, int Staff) {
	// register: 4
	register unsigned char r;
	// register: 3
	register unsigned char g;
	// register: 5
	register unsigned char b;
}


// address: 0x80036438
// line start: 3195
// line end:   3215
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	// register: 16
	register char st;
}


// address: 0x80036698
// line start: 3242
// line end:   3451
void DrawSpellBook__Fb(bool DrawBg) {
	// register: 18
	register int i;
	// register: 17
	register int ii;
	// register: 19
	register int x;
	// register: 20
	register int y;
	// address: 0xFFFFFFC0
	auto int mind;
	// address: 0xFFFFFFC4
	auto int maxd;
	// register: 23
	register int sx;
	// register: 22
	register int sy;
	// address: 0xFFFFFFC8
	auto unsigned long tspls;
	// register: 19
	register char st;
	// register: 17
	register char c;
	// register: 16
	register int v;
	// register: 21
	register unsigned char bright;
	// address: 0xFFFFFFB8
	// size: 0x4
	auto char Num[4];
	// register: 22
	register int bw;
	// register: 16
	// size: 0xEC
	register struct CPad *P;
	// register: 18
	register int lsbooktab;
	// register: 19
	register int lcur_spel;
}


// address: 0x80037208
// line start: 3456
// line end:   3514
void CheckSBook__Fv() {
	// register: 6
	register unsigned long tspls;
	// register: 7
	register char st;
	// register: 8
	register int cspel;
	{
		{
			{
				// register: 2
				register bool splok;
			}
		}
	}
}


// address: 0x800374A4
// line start: 3528
// line end:   3530
char *get_pieces_str__Fi(int nGold) {
}


// address: 0x800374D8
// line start: 4039
// line end:   4039
void _GLOBAL__D_DrawLevelUpFlag() {
}


// address: 0x80037500
// line start: 4039
// line end:   4039
void _GLOBAL__I_DrawLevelUpFlag() {
}


