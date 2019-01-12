#include "types.h"

// === [ Overlay ID d ] ===

// address: 0x80122258
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x801238BC
// size: 0x22600
extern unsigned char img_buf[140800];

// address: 0x80122104
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x80126D80
// size: 0xF000
extern unsigned char map_buf[61440];

// address: 0x80122F08
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x80123878
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x801239E0
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

// address: 0x80122898
// size: 0x30
extern struct DR_MODE mdec_drmd[2][2];

// address: 0x80122158
// size: 0x100
extern struct DR_ENV mdec_env[2][2];

// address: 0x801238A0
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x80123A60
// size: 0x84
extern int (*stream_buf[504])[33];

// address: 0x8014B5EC
// size: 0x78
extern int (*stream_buf[504])[30];

// address: 0x80123AE4
// size: 0x84
extern struct strheader *stream_bufh[33];

// address: 0x8014B664
// size: 0x78
extern struct strheader *stream_bufh[30];

// address: 0x80123558
// size: 0x320
extern struct SVECTOR temp_offs[10][10];

// address: 0x801228C8
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x80122F18
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x80140560
// line start: 2641
// line end:   2665
void AddAcidpud__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int monst;
}


// address: 0x8014280C
// line start: 3435
// line end:   3446
void AddDiabApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 19
	register int pnum;
}


// address: 0x8014125C
// line start: 2982
// line end:   3030
void AddFirewallC__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 21
	register int i;
	// register: 22
	register int k;
	// register: 2
	register int l;
	// register: 20
	register int j;
	// register: 16
	register int tx;
	// register: 17
	register int ty;
	// address: 0xFFFFFFB0
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x8014094C
// line start: 2745
// line end:   2790
void AddGolem__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 19
	register int i;
	// register: 3
	register int mx;
	// address: 0xFFFFFFA8
	// size: 0x18
	auto int CrawlNum[6];
	{
		// register: 21
		register int k;
		{
			// register: 2
			register int l;
			// register: 20
			register int j;
			{
				{
					// register: 17
					register int tx;
					// register: 18
					register int ty;
				}
			}
		}
	}
}


// address: 0x8013FB38
// line start: 2225
// line end:   2284
void AddGuardian__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 19
	register int i;
	// register: 22
	register int k;
	// register: 2
	register int l;
	// register: 21
	register int j;
	// register: 17
	register int tx;
	// register: 18
	register int ty;
	// address: 0xFFFFFFA8
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x80142948
// line start: 3451
// line end:   3525
int AddMissile__Fiiiiiiciii(int sx, int sy, int v1, int v2, int midir, int mitype, int micaster, int id, int v3, int spllvl) {
	// register: 16
	register int mi;
	// address: 0xFFFFFF98
	// size: 0x40
	auto int xyoffs[16];
}


// address: 0x8013DB50
// line start: 1646
// line end:   1698
void AddRndTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 19
	register int r1;
	// register: 18
	register int r2;
	// register: 17
	register unsigned char dirok;
	// register: 20
	register int nTries;
	{
		{
			// register: 3
			register int oi;
		}
	}
}


// address: 0x801426EC
// line start: 3412
// line end:   3431
void AddRportal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int m2;
	{
		{
			// register: 2
			// size: 0x50
			register struct MissileStruct_dup_17 *miss;
		}
	}
}


// address: 0x801425E4
// line start: 3412
// line end:   3431
void AddRportal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int m2;
	{
		{
			// register: 2
			// size: 0x50
			register struct MissileStruct *miss;
		}
	}
}


// address: 0x80140640
// line start: 2669
// line end:   2731
void AddStone__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 6
	register int i;
	// register: 8
	register int j;
	// register: 10
	register int k;
	// register: 2
	register int l;
	// register: 9
	register int tx;
	// register: 11
	register int ty;
	// register: 4
	register int mid;
	// address: 0xFFFFFFE0
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x8013E1B4
// line start: 1791
// line end:   1828
void AddTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 21
	register int i;
	// register: 22
	register int k;
	// register: 2
	register int l;
	// register: 20
	register int j;
	// register: 17
	register int tx;
	// register: 18
	register int ty;
	// address: 0xFFFFFFC0
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x8013F0CC
// line start: 2050
// line end:   2123
void AddTown__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 21
	register int i;
	// register: 30
	register int k;
	// register: 2
	register int l;
	// register: 23
	register int j;
	// register: 19
	register int tx;
	// register: 20
	register int ty;
	// register: 3
	register int mx;
	// address: 0xFFFFFFA8
	// size: 0x18
	auto int CrawlNum[6];
	// register: 16
	register int omp;
}


// address: 0x80161B7C
// line start: 202
// line end:   209
void AmDrawPlayer__Fiiiii(int x0, int y0, int x1, int y1, int PNum) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
}


// address: 0x8014BA48
// line start: 521
// line end:   550
void CD_stream_handler(struct TASK *T) {
	// register: 16
	register int chunkcount;
	{
	}
}


// address: 0x80123ED0
// line start: 496
// line end:   517
void CD_stream_handler(struct TASK *T) {
}


// address: 0x80137730
// line start: 517
// line end:   538
void CD_stream_handler(struct TASK *T) {
	{
	}
}


// address: 0x8013A454
// line start: 443
// line end:   463
int CheckBlock__Fiiii(int fx, int fy, int tx, int ty) {
	// register: 20
	register int coll;
}


// address: 0x8013EF24
// line start: 2028
// line end:   2046
unsigned char CheckIfTrig__Fii(int x, int y) {
	// register: 19
	register int i;
}


// address: 0x8015F460
// line start: 3207
// line end:   3330
char CheckInvHLight__Fv() {
	// register: 16
	register int r;
	// register: 19
	register char rv;
	// register: 17
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct_dup_18 *p;
	{
		{
			// register: 17
			register int nGold;
		}
	}
}


// address: 0x8015ADD8
// line start: 3207
// line end:   3330
char CheckInvHLight__Fv() {
	// register: 16
	register int r;
	// register: 19
	register char rv;
	// register: 17
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *p;
	{
		{
			// register: 17
			register int nGold;
		}
	}
}


// address: 0x8015F568
// line start: 3207
// line end:   3330
char CheckInvHLight__Fv() {
	// register: 16
	register int r;
	// register: 19
	register char rv;
	// register: 17
	// size: 0x6C
	register struct ItemStruct_dup_17 *pi;
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct_dup_17 *p;
	{
		{
			// register: 17
			register int nGold;
		}
	}
}


// address: 0x8015A884
// line start: 1754
// line end:   2185
void CheckInvPaste__Fiii(int pnum, int mx, int my) {
	// register: 20
	register int r;
	// register: 22
	register int sx;
	// register: 23
	register int sy;
	// register: 16
	register int i;
	// register: 9
	register int j;
	// register: 7
	register int xx;
	// register: 10
	register int yy;
	// register: 8
	register int ii;
	// address: 0xFFFFFF68
	auto unsigned char done;
	// register: 17
	register unsigned char done2h;
	// register: 19
	register int il;
	// register: 21
	register int cn;
	// register: 2
	register int it;
	// register: 17
	register int iv;
	// register: 5
	register int ig;
	// register: 5
	register long gt;
	// address: 0xFFFFFEF8
	// size: 0x6C
	auto struct ItemStruct tempitem;
}


// address: 0x8015A98C
// line start: 1754
// line end:   2185
void CheckInvPaste__Fiii(int pnum, int mx, int my) {
	// register: 20
	register int r;
	// register: 22
	register int sx;
	// register: 23
	register int sy;
	// register: 16
	register int i;
	// register: 9
	register int j;
	// register: 7
	register int xx;
	// register: 10
	register int yy;
	// register: 8
	register int ii;
	// address: 0xFFFFFF68
	auto unsigned char done;
	// register: 17
	register unsigned char done2h;
	// register: 19
	register int il;
	// register: 21
	register int cn;
	// register: 2
	register int it;
	// register: 17
	register int iv;
	// register: 5
	register int ig;
	// register: 5
	register long gt;
	// address: 0xFFFFFEF8
	// size: 0x6C
	auto struct ItemStruct_dup_17 tempitem;
}


// address: 0x8015D52C
// line start: 2430
// line end:   2439
void CheckItemStats__Fi(int pnum) {
	// register: 4
	// size: 0x19E8
	register struct PlayerStruct_dup_18 *p;
}


// address: 0x8015D634
// line start: 2430
// line end:   2439
void CheckItemStats__Fi(int pnum) {
	// register: 4
	// size: 0x19E8
	register struct PlayerStruct_dup_17 *p;
}


// address: 0x80158EA4
// line start: 2430
// line end:   2439
void CheckItemStats__Fi(int pnum) {
	// register: 4
	// size: 0x19E8
	register struct PlayerStruct *p;
}


// address: 0x8013CFC0
// line start: 1261
// line end:   1355
void CheckMissileCol__FiiiUciiUcb(int i, int mindam, int maxdam, unsigned char shift, int mx, int my, int nodel, bool HurtPlr) {
	// register: 5
	register int oi;
	// register: 17
	// size: 0x50
	register struct MissileStruct_dup_17 *miss;
	// register: 30
	// size: 0x8
	register struct map_info_dup_17 *dm;
}


// address: 0x8013CEB8
// line start: 1261
// line end:   1355
void CheckMissileCol__FiiiUciiUcb(int i, int mindam, int maxdam, unsigned char shift, int mx, int my, int nodel, bool HurtPlr) {
	// register: 5
	register int oi;
	// register: 17
	// size: 0x50
	register struct MissileStruct *miss;
	// register: 30
	// size: 0x8
	register struct map_info *dm;
}


// address: 0x80124774
// line start: 911
// line end:   919
void DCT_out_handler() {
}


// address: 0x80154AC4
// line start: 4546
// line end:   4611
unsigned char DirOK__Fii(int i, int mdir) {
	// register: 16
	register long fx;
	// register: 17
	register long fy;
}


// address: 0x8014E5C0
// line start: 2009
// line end:   2054
void DoEnding__Fi(int p) {
}


// address: 0x80159230
// line start: 1249
// line end:   1482
void DoThatDrawInv__Fv() {
	// register: 16
	register int Loop;
	// register: 3
	register int ii;
	// register: 8
	register int ItemX;
	// register: 5
	register int ItemY;
	// register: 6
	register int ItemNo;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT ClipRect;
}


// address: 0x80162128
// line start: 383
// line end:   424
void DrawAutoMapHorzDoor__Fii(int X, int Y) {
	// register: 9
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 20
	register int Ly;
	// register: 18
	register int Frac;
	// register: 20
	register int y0;
	// register: 17
	register int x1;
	// register: 21
	register int y1;
	// register: 22
	register int y2;
	// register: 19
	register int x3;
}


// address: 0x80162380
// line start: 449
// line end:   462
void DrawAutoMapHorzGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 4
	register int Ly;
}


// address: 0x801627B4
// line start: 628
// line end:   658
void DrawAutoMapStairs__Fii(int X, int Y) {
	// register: 3
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 19
	register int Ly;
	// register: 18
	register int Frac;
	// register: 20
	register int x1;
	// register: 21
	register int y1;
	// register: 19
	register int y2;
}


// address: 0x80161F6C
// line start: 335
// line end:   377
void DrawAutoMapVertDoor__Fii(int X, int Y) {
	// register: 8
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 22
	register int Ly;
	// register: 18
	register int Frac;
	// register: 22
	register int y0;
	// register: 21
	register int x1;
	// register: 19
	register int y1;
	// register: 16
	register int y2;
	// register: 20
	register int x3;
}


// address: 0x801622E8
// line start: 430
// line end:   443
void DrawAutoMapVertGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 4
	register int Ly;
}


// address: 0x80161C00
// line start: 221
// line end:   285
void DrawAutomapPlr__Fv() {
	// register: 18
	register int x;
	// register: 19
	register int y;
	// register: 23
	register int automaps3;
	// register: 22
	register int automaps4;
	// register: 21
	register int automaps5;
	{
		// register: 20
		register int pc;
	}
}


// address: 0x8016292C
// line start: 666
// line end:   1167
void DrawAutomap__Fv() {
	// register: 6
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 5
	register int Lx;
	// register: 4
	register int Ly;
	// register: 3
	register int LineY;
	// register: 21
	register int MapX;
	// register: 20
	register int MapY;
	// address: 0xFFFFFF90
	auto int LLSx;
	// address: 0xFFFFFF98
	auto int LLSy;
	// address: 0xFFFFFFA0
	auto int LRSx;
	// address: 0xFFFFFFA8
	auto int LRSy;
	// address: 0xFFFFFFB0
	auto int LSx;
	// address: 0xFFFFFFB8
	auto int LSy;
	// address: 0xFFFFFFC0
	auto int RSx;
	// address: 0xFFFFFFC8
	auto int RSy;
	// register: 17
	register int LLen;
	// register: 19
	register int RLen;
	// register: 22
	register int LLLen;
	// register: 23
	register int LRLen;
	// register: 18
	register unsigned char AMLWallFlag;
	// register: 18
	register unsigned char AMRWallFlag;
	// address: 0xFFFFFF48
	auto unsigned short AmTile;
	// register: 16
	register unsigned char AmTileType;
	// address: 0xFFFFFFD0
	auto unsigned char *AmTileTypePtr;
	// register: 5
	register int P1x;
	// register: 6
	register int P1y;
	// register: 7
	register int P2x;
	// register: 8
	register int P2y;
	// address: 0xFFFFFF50
	// size: 0x40
	auto char levname[64];
	// register: 2
	register int len;
	{
		{
			{
				{
					// register: 3
					register int PAx;
					// register: 4
					register int PAy;
				}
			}
		}
	}
}


// address: 0x80162680
// line start: 546
// line end:   579
void DrawHorzArch__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 16
	register int Ly;
	// register: 2
	register int Frac;
	// register: 22
	register int x0;
	// register: 23
	register int y0;
	// register: 19
	register int x1;
	// register: 18
	register int y1;
	// register: 21
	register int x2;
	// register: 20
	register int y2;
	// register: 17
	register int x3;
	// register: 16
	register int y3;
}


// address: 0x80158144
// line start: 783
// line end:   904
void DrawInvCursor__Fv() {
	// register: 17
	register int ItemX;
	// register: 16
	register int ItemY;
	// register: 4
	register int LoopX;
	// register: 5
	register int LoopY;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 18
	// size: 0x70
	register struct TextDat_dup_17 *TData;
	{
		{
			{
				{
					{
						{
							// register: 3
							register int GoldAmount;
						}
					}
				}
			}
		}
	}
}


// address: 0x8015803C
// line start: 783
// line end:   904
void DrawInvCursor__Fv() {
	// register: 17
	register int ItemX;
	// register: 16
	register int ItemY;
	// register: 4
	register int LoopX;
	// register: 5
	register int LoopY;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 18
	// size: 0x70
	register struct TextDat_dup_18 *TData;
	{
		{
			{
				{
					{
						{
							// register: 3
							register int GoldAmount;
						}
					}
				}
			}
		}
	}
}


// address: 0x801539B4
// line start: 783
// line end:   904
void DrawInvCursor__Fv() {
	// register: 17
	register int ItemX;
	// register: 16
	register int ItemY;
	// register: 4
	register int LoopX;
	// register: 5
	register int LoopY;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 18
	// size: 0x70
	register struct TextDat *TData;
	{
		{
			{
				{
					{
						{
							// register: 3
							register int GoldAmount;
						}
					}
				}
			}
		}
	}
}


// address: 0x801588DC
// line start: 966
// line end:   1021
void DrawInvHelpTxt__Fv() {
	// address: 0xFFFFFF78
	// size: 0x80
	auto char TempStr[128];
}


// address: 0x80158710
// line start: 910
// line end:   958
void DrawInvMsg__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT InfoRect;
	// register: 2
	register int InfoY;
	// register: 2
	register int InfoW;
	// register: 20
	register int InfoH;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct Dialog InvBack;
	// register: 17
	register int OldOt;
}


// address: 0x80158C0C
// line start: 1053
// line end:   1242
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 21
	register int omp;
	// register: 20
	register int osel;
	// register: 19
	// size: 0x108
	register struct CBlocks_dup_17 *BgBlocks;
	{
		// register: 16
		register int OldOt;
		{
			{
				{
					{
						// register: 16
						register int PInvNo;
					}
				}
			}
		}
	}
}


// address: 0x80158B04
// line start: 1053
// line end:   1242
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 21
	register int omp;
	// register: 20
	register int osel;
	// register: 19
	// size: 0x108
	register struct CBlocks_dup_18 *BgBlocks;
	{
		// register: 16
		register int OldOt;
		{
			{
				{
					{
						// register: 16
						register int PInvNo;
					}
				}
			}
		}
	}
}


// address: 0x801544C4
// line start: 1053
// line end:   1242
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 21
	register int omp;
	// register: 20
	register int osel;
	// register: 19
	// size: 0x108
	register struct CBlocks *BgBlocks;
	{
		// register: 16
		register int OldOt;
		{
			{
				{
					{
						// register: 16
						register int PInvNo;
					}
				}
			}
		}
	}
}


// address: 0x8015447C
// line start: 1053
// line end:   1242
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 21
	register int omp;
	// register: 20
	register int osel;
	// register: 19
	// size: 0x108
	register struct CBlocks_dup_19 *BgBlocks;
	{
		// register: 16
		register int OldOt;
		{
			{
				{
					{
						// register: 16
						register int PInvNo;
					}
				}
			}
		}
	}
}


// address: 0x8016254C
// line start: 507
// line end:   540
void DrawVertArch__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 16
	register int Ly;
	// register: 2
	register int Frac;
	// register: 22
	register int x0;
	// register: 23
	register int y0;
	// register: 19
	register int x1;
	// register: 18
	register int y1;
	// register: 21
	register int x2;
	// register: 20
	register int y2;
	// register: 17
	register int x3;
	// register: 16
	register int y3;
}


// address: 0x80135E80
// line start: 210
// line end:   211
void DsDataCallback() {
}


// address: 0x80135E88
// line start: 214
// line end:   215
void DsReadyCallback() {
}


// address: 0x80161A04
// line start: 228
// line end:   228
void DumpMonsters__7CBlocks(struct CBlocks_dup_17 *this) {
}


// address: 0x801618FC
// line start: 228
// line end:   228
void DumpMonsters__7CBlocks(struct CBlocks_dup_18 *this) {
}


// address: 0x8015D274
// line start: 228
// line end:   228
void DumpMonsters__7CBlocks(struct CBlocks_dup_19 *this) {
}


// address: 0x80123B68
// line start: 254
// line end:   256
void EA_cd_seek(int secnum) {
}


// address: 0x80137060
// line start: 957
// line end:   960
unsigned long FMVAllocMem(unsigned long MemSize) {
}


// address: 0x80137080
// line start: 964
// line end:   965
void FMVFreeMem(unsigned long *Addr) {
}


// address: 0x80136F94
// line start: 924
// line end:   925
unsigned short GetDCT_MODE() {
}


// address: 0x80136EF0
// line start: 894
// line end:   901
long GetDCToutSize() {
	// register: 3
	register unsigned short h;
}


// address: 0x80139D54
// line start: 274
// line end:   425
void GetDamageAmt__FiPiT1(int i, int *mind, int *maxd) {
	// register: 4
	register int k;
	// register: 5
	register int sl;
	// register: 5
	// size: 0x19E8
	register struct PlayerStruct_dup_18 *plr;
	// register: 9
	register int _pMagic;
	// register: 8
	register char _pLevel;
	// register: 10
	register char _pClass;
}


// address: 0x80139E5C
// line start: 274
// line end:   425
void GetDamageAmt__FiPiT1(int i, int *mind, int *maxd) {
	// register: 4
	register int k;
	// register: 5
	register int sl;
	// register: 5
	// size: 0x19E8
	register struct PlayerStruct_dup_17 *plr;
	// register: 9
	register int _pMagic;
	// register: 8
	register char _pLevel;
	// register: 10
	register char _pClass;
}


// address: 0x801356CC
// line start: 274
// line end:   425
void GetDamageAmt__FiPiT1(int i, int *mind, int *maxd) {
	// register: 4
	register int k;
	// register: 5
	register int sl;
	// register: 5
	// size: 0x19E8
	register struct PlayerStruct *plr;
	// register: 9
	register int _pMagic;
	// register: 8
	register char _pLevel;
	// register: 10
	register char _pClass;
}


// address: 0x8015F15C
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_8015F15C() {
}


// address: 0x8015F164
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_8015F164() {
}


// address: 0x801637EC
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_801637EC() {
}


// address: 0x801638F4
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_801638F4() {
}


// address: 0x8014EDE0
// line start: 2267
// line end:   2343
void GroupUnity__Fi(int i) {
	// register: 19
	register int leader;
	// register: 3
	register int tmp;
	// register: 5
	register int m;
	// register: 23
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pMonster;
	// register: 22
	register int _mx;
	// register: 21
	register int _my;
}


// address: 0x8014ECD8
// line start: 2267
// line end:   2343
void GroupUnity__Fi(int i) {
	// register: 19
	register int leader;
	// register: 3
	register int tmp;
	// register: 5
	register int m;
	// register: 23
	// size: 0x6C
	register struct MonsterStruct *pMonster;
	// register: 22
	register int _mx;
	// register: 21
	register int _my;
}


// address: 0x80152938
// line start: 508
// line end:   523
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x70
	register struct TextDat *TData;
}


// address: 0x80156FC0
// line start: 508
// line end:   523
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x70
	register struct TextDat_dup_18 *TData;
}


// address: 0x801570C8
// line start: 508
// line end:   523
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x70
	register struct TextDat_dup_17 *TData;
}


// address: 0x8015EC88
// line start: 2953
// line end:   3086
int InvPutItem__Fiii(int pnum, int x, int y) {
	// register: 16
	register int ii;
	// register: 18
	register unsigned char done;
	{
		{
			{
				// register: 17
				register int Dist;
				{
					{
						// register: 16
						register int d;
					}
				}
			}
		}
	}
}


// address: 0x8014B288
// line start: 809
// line end:   861
void M2MStartHit__Fiii(int mid, int i, int dam) {
	// register: 3
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x8014B390
// line start: 809
// line end:   861
void M2MStartHit__Fiii(int mid, int i, int dam) {
	// register: 3
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x8014BAAC
// line start: 996
// line end:   1059
void M2MStartKill__Fii(int i, int mid) {
	// register: 6
	register int md;
	// register: 23
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 21
	register int _mx;
	// register: 22
	register int _my;
	{
		{
			// register: 16
			register int omp;
		}
	}
}


// address: 0x8014B9A4
// line start: 996
// line end:   1059
void M2MStartKill__Fii(int i, int mid) {
	// register: 6
	register int md;
	// register: 23
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 21
	register int _mx;
	// register: 22
	register int _my;
	{
		{
			// register: 16
			register int omp;
		}
	}
}


// address: 0x8014FDEC
// line start: 2634
// line end:   2707
void MAI_Bat__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 23
	register int mx;
	// register: 30
	register int my;
	// register: 19
	register int md;
	// register: 20
	register int v;
	// address: 0xFFFFFFD0
	auto int pnum;
	// register: 17
	register int fx;
	// register: 21
	register int fy;
}


// address: 0x8014FCE4
// line start: 2634
// line end:   2707
void MAI_Bat__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 23
	register int mx;
	// register: 30
	register int my;
	// register: 19
	register int md;
	// register: 20
	register int v;
	// address: 0xFFFFFFD0
	auto int pnum;
	// register: 17
	register int fx;
	// register: 21
	register int fy;
}


// address: 0x80150F74
// line start: 3063
// line end:   3083
void MAI_Cleaver__Fi(int i) {
	// register: 17
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 16
	register int md;
}


// address: 0x80150E6C
// line start: 3063
// line end:   3083
void MAI_Cleaver__Fi(int i) {
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 16
	register int md;
}


// address: 0x801530D0
// line start: 3834
// line end:   3928
void MAI_Counselor__Fi(int i, unsigned char counsmiss[4], int _mx, int _my) {
	// register: 30
	register int fx;
	// address: 0xFFFFFFB8
	auto int fy;
	// register: 19
	register int mx;
	// register: 21
	register int my;
	// register: 20
	register int md;
	// address: 0xFFFFFFC0
	auto int v;
	// register: 23
	register int dist;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x801531D8
// line start: 3834
// line end:   3928
void MAI_Counselor__Fi(int i, unsigned char counsmiss[4], int _mx, int _my) {
	// register: 30
	register int fx;
	// address: 0xFFFFFFB8
	auto int fy;
	// register: 19
	register int mx;
	// register: 21
	register int my;
	// register: 20
	register int md;
	// address: 0xFFFFFFC0
	auto int v;
	// register: 23
	register int dist;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x80150C5C
// line start: 2977
// line end:   3055
void MAI_Fallen__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 5
	register int x;
	// register: 6
	register int y;
	// register: 4
	register int xpos;
	// register: 3
	register int ypos;
	// register: 3
	register int m;
	// register: 7
	register int rad;
	// register: 16
	register int my;
	// register: 2
	register int aitype;
}


// address: 0x80150B54
// line start: 2977
// line end:   3055
void MAI_Fallen__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 5
	register int x;
	// register: 6
	register int y;
	// register: 4
	register int xpos;
	// register: 3
	register int ypos;
	// register: 3
	register int m;
	// register: 7
	register int rad;
	// register: 16
	register int my;
	// register: 2
	register int aitype;
}


// address: 0x8015029C
// line start: 2760
// line end:   2787
void MAI_Fat__Fi(int i) {
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 21
	register int md;
	// register: 16
	register int v;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x801503A4
// line start: 2760
// line end:   2787
void MAI_Fat__Fi(int i) {
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 21
	register int md;
	// register: 16
	register int v;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x80150848
// line start: 2889
// line end:   2965
void MAI_Fireman__Fi(int i) {
	// register: 22
	register int mx;
	// register: 23
	register int my;
	// register: 20
	register int md;
	// register: 21
	register int pnum;
	// register: 18
	register int fx;
	// register: 19
	register int fy;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x80150950
// line start: 2889
// line end:   2965
void MAI_Fireman__Fi(int i) {
	// register: 22
	register int mx;
	// register: 23
	register int my;
	// register: 20
	register int md;
	// register: 21
	register int pnum;
	// register: 18
	register int fx;
	// register: 19
	register int fy;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x8015357C
// line start: 3936
// line end:   3975
void MAI_Garbud__Fi(int i) {
	// register: 20
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x80153684
// line start: 3936
// line end:   3975
void MAI_Garbud__Fi(int i) {
	// register: 20
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x80151B34
// line start: 3357
// line end:   3397
void MAI_Garg__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 17
	register int mx;
	// register: 19
	register int my;
	// register: 20
	register int md;
}


// address: 0x80151A2C
// line start: 3357
// line end:   3397
void MAI_Garg__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 17
	register int mx;
	// register: 19
	register int my;
	// register: 20
	register int md;
}


// address: 0x80156508
// line start: 5559
// line end:   5734
void MAI_Golum__Fi(int i) {
	// register: 18
	register int ok;
	// register: 16
	register int j;
	// register: 5
	register int k;
	// register: 3
	register int mid;
	// register: 16
	register int mx;
	// register: 21
	register int my;
	// register: 17
	register int md;
	// register: 30
	register int cursm;
	// address: 0xFFFFFFC0
	auto int sdata;
	// register: 23
	register int omp;
	// register: 19
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *pMonster;
	{
		{
			{
				{
					{
						{
							{
								{
									// register: 2
									register int nd;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80156610
// line start: 5559
// line end:   5734
void MAI_Golum__Fi(int i) {
	// register: 18
	register int ok;
	// register: 16
	register int j;
	// register: 5
	register int k;
	// register: 3
	register int mid;
	// register: 16
	register int mx;
	// register: 21
	register int my;
	// register: 17
	register int md;
	// register: 30
	register int cursm;
	// address: 0xFFFFFFC0
	auto int sdata;
	// register: 23
	register int omp;
	// register: 19
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pMonster;
	{
		{
			{
				{
					{
						{
							{
								{
									// register: 2
									register int nd;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x801540BC
// line start: 4178
// line end:   4212
void MAI_Lachdanan__Fi(int i) {
	// register: 20
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x80153FB4
// line start: 4178
// line end:   4212
void MAI_Lachdanan__Fi(int i) {
	// register: 20
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x80153E7C
// line start: 4137
// line end:   4171
void MAI_Lazhelp__Fi(int i) {
	// register: 4
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 19
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x80153F84
// line start: 4137
// line end:   4171
void MAI_Lazhelp__Fi(int i) {
	// register: 4
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 19
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x80153BD8
// line start: 4077
// line end:   4129
void MAI_Lazurus__Fi(int i) {
	// register: 17
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 18
	register int _mx;
	// register: 17
	register int _my;
}


// address: 0x80153CE0
// line start: 4077
// line end:   4129
void MAI_Lazurus__Fi(int i) {
	// register: 17
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 18
	register int _mx;
	// register: 17
	register int _my;
}


// address: 0x801522C4
// line start: 3527
// line end:   3619
void MAI_RR2__Fiii(int i, int mistype, int dam) {
	// register: 22
	register int fx;
	// register: 23
	register int fy;
	// register: 18
	register int mx;
	// register: 19
	register int my;
	// register: 30
	register int md;
	// register: 21
	register int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x801521BC
// line start: 3527
// line end:   3619
void MAI_RR2__Fiii(int i, int mistype, int dam) {
	// register: 22
	register int fx;
	// register: 23
	register int fy;
	// register: 18
	register int mx;
	// register: 19
	register int my;
	// register: 30
	register int md;
	// register: 21
	register int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x801514DC
// line start: 3177
// line end:   3230
void MAI_Ranged__FiiUc(int i, int missile_type, unsigned char special) {
	// register: 22
	register int fx;
	// register: 23
	register int fy;
	// register: 17
	register int mx;
	// register: 18
	register int my;
	// register: 20
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x801513D4
// line start: 3177
// line end:   3230
void MAI_Ranged__FiiUc(int i, int missile_type, unsigned char special) {
	// register: 22
	register int fx;
	// register: 23
	register int fy;
	// register: 17
	register int mx;
	// register: 18
	register int my;
	// register: 20
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x80152C10
// line start: 3739
// line end:   3825
void MAI_Rhino__Fi(int i) {
	// register: 22
	register int fx;
	// address: 0xFFFFFFC8
	auto int fy;
	// register: 20
	register int mx;
	// register: 21
	register int my;
	// address: 0xFFFFFFD0
	auto int md;
	// register: 30
	register int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 19
	register int _mx;
	// register: 23
	register int _my;
	{
		{
			{
				{
					{
						{
							// register: 16
							register int mi;
						}
					}
				}
			}
		}
	}
}


// address: 0x80152D18
// line start: 3739
// line end:   3825
void MAI_Rhino__Fi(int i) {
	// register: 22
	register int fx;
	// address: 0xFFFFFFC8
	auto int fy;
	// register: 20
	register int mx;
	// register: 21
	register int my;
	// address: 0xFFFFFFD0
	auto int md;
	// register: 30
	register int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 19
	register int _mx;
	// register: 23
	register int _my;
	{
		{
			{
				{
					{
						{
							// register: 16
							register int mi;
						}
					}
				}
			}
		}
	}
}


// address: 0x80151D14
// line start: 3410
// line end:   3501
void MAI_RoundRanged__FiiUciUc(int i, int missile_type, unsigned char checkdoors, int dam, int lessmissiles) {
	// register: 23
	register int fx;
	// register: 30
	register int fy;
	// register: 21
	register int mx;
	// register: 22
	register int my;
	// address: 0xFFFFFFD0
	auto int md;
	// register: 19
	register int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x80151C0C
// line start: 3410
// line end:   3501
void MAI_RoundRanged__FiiUciUc(int i, int missile_type, unsigned char checkdoors, int dam, int lessmissiles) {
	// register: 23
	register int fx;
	// register: 30
	register int fy;
	// register: 21
	register int mx;
	// register: 22
	register int my;
	// address: 0xFFFFFFD0
	auto int md;
	// register: 19
	register int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x80151078
// line start: 3091
// line end:   3164
void MAI_Round__FiUc(int i, unsigned char special) {
	// register: 20
	register int mx;
	// register: 21
	register int my;
	// register: 23
	register int md;
	// register: 30
	register int v;
	// register: 19
	register int fx;
	// register: 22
	register int fy;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x80150F70
// line start: 3091
// line end:   3164
void MAI_Round__FiUc(int i, unsigned char special) {
	// register: 20
	register int mx;
	// register: 21
	register int my;
	// register: 23
	register int md;
	// register: 30
	register int v;
	// register: 19
	register int fx;
	// register: 22
	register int fy;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x80151770
// line start: 3261
// line end:   3347
void MAI_Scav__Fi(int i) {
	// register: 18
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 17
	register int x;
	// register: 16
	register int y;
	// register: 19
	register unsigned char done;
}


// address: 0x80151668
// line start: 3261
// line end:   3347
void MAI_Scav__Fi(int i) {
	// register: 18
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 17
	register int x;
	// register: 16
	register int y;
	// register: 19
	register unsigned char done;
}


// address: 0x801501A8
// line start: 2716
// line end:   2752
void MAI_SkelBow__Fi(int i) {
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 21
	register int md;
	// register: 19
	register int fx;
	// register: 20
	register int fy;
	// register: 22
	register unsigned char walking;
	// register: 16
	register int v;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x801500A0
// line start: 2716
// line end:   2752
void MAI_SkelBow__Fi(int i) {
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 21
	register int md;
	// register: 19
	register int fx;
	// register: 20
	register int fy;
	// register: 22
	register unsigned char walking;
	// register: 16
	register int v;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x801527D0
// line start: 3632
// line end:   3730
void MAI_SkelKing__Fi(int i) {
	// register: 19
	register int fx;
	// address: 0xFFFFFFC8
	auto int fy;
	// register: 22
	register int mx;
	// register: 23
	register int my;
	// register: 21
	register int md;
	// register: 30
	register int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 18
	register int nx;
	// register: 16
	register int ny;
	// register: 18
	register int _mx;
	// address: 0xFFFFFFD0
	auto int _my;
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


// address: 0x801526C8
// line start: 3632
// line end:   3730
void MAI_SkelKing__Fi(int i) {
	// register: 19
	register int fx;
	// address: 0xFFFFFFC8
	auto int fy;
	// register: 22
	register int mx;
	// register: 23
	register int my;
	// register: 21
	register int md;
	// register: 30
	register int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 18
	register int nx;
	// register: 16
	register int ny;
	// register: 18
	register int _mx;
	// address: 0xFFFFFFD0
	auto int _my;
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


// address: 0x8014F83C
// line start: 2525
// line end:   2551
void MAI_SkelSd__Fi(int i) {
	// register: 17
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 16
	register int md;
}


// address: 0x8014F734
// line start: 2525
// line end:   2551
void MAI_SkelSd__Fi(int i) {
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 16
	register int md;
}


// address: 0x8014F9F0
// line start: 2563
// line end:   2626
void MAI_Snake__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 19
	register int fx;
	// register: 21
	register int fy;
	// register: 20
	register int mx;
	// register: 23
	register int my;
	// register: 22
	register int md;
	// register: 30
	register int pnum;
	// address: 0xFFFFFFD0
	// size: 0x6
	auto char pattern[6];
	// register: 3
	register int tmp;
}


// address: 0x8014F8E8
// line start: 2563
// line end:   2626
void MAI_Snake__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 19
	register int fx;
	// register: 21
	register int fy;
	// register: 20
	register int mx;
	// register: 23
	register int my;
	// register: 22
	register int md;
	// register: 30
	register int pnum;
	// address: 0xFFFFFFD0
	// size: 0x6
	auto char pattern[6];
	// register: 3
	register int tmp;
}


// address: 0x80150570
// line start: 2796
// line end:   2878
void MAI_Sneak__Fi(int i) {
	// register: 20
	register int mx;
	// register: 22
	register int my;
	// register: 18
	register int md;
	// register: 30
	register int v;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 23
	register int dist;
}


// address: 0x80150468
// line start: 2796
// line end:   2878
void MAI_Sneak__Fi(int i) {
	// register: 20
	register int mx;
	// register: 22
	register int my;
	// register: 18
	register int md;
	// register: 30
	register int v;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 23
	register int dist;
}


// address: 0x80153A90
// line start: 4024
// line end:   4069
void MAI_SnotSpil__Fi(int i) {
	// register: 20
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
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


// address: 0x80153988
// line start: 4024
// line end:   4069
void MAI_SnotSpil__Fi(int i) {
	// register: 20
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
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


// address: 0x80154164
// line start: 4220
// line end:   4254
void MAI_Warlord__Fi(int i) {
	// register: 18
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 19
	register int _mx;
	// register: 18
	register int _my;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8015426C
// line start: 4220
// line end:   4254
void MAI_Warlord__Fi(int i) {
	// register: 18
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 19
	register int _mx;
	// register: 18
	register int _my;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80153894
// line start: 3983
// line end:   4016
void MAI_Zhar__Fi(int i) {
	// register: 20
	register int mx;
	// register: 18
	register int my;
	// register: 21
	register int md;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 16
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x8015378C
// line start: 3983
// line end:   4016
void MAI_Zhar__Fi(int i) {
	// register: 20
	register int mx;
	// register: 18
	register int my;
	// register: 21
	register int md;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 16
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x8014F638
// line start: 2482
// line end:   2516
void MAI_Zombie__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 17
	register int mx;
	// register: 19
	register int my;
	// register: 20
	register int md;
	// register: 22
	register int v;
}


// address: 0x8014F530
// line start: 2482
// line end:   2516
void MAI_Zombie__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 17
	register int mx;
	// register: 19
	register int my;
	// register: 20
	register int md;
	// register: 22
	register int v;
}


// address: 0x80147F80
// line start: 5219
// line end:   5244
void MI_Apoca__Fi(int i) {
	// register: 18
	register int j;
	// register: 17
	register int k;
	// register: 21
	register int id;
	// register: 20
	register unsigned char exit;
}


// address: 0x80146850
// line start: 4545
// line end:   4581
void MI_Chain__Fi(int i) {
	// register: 20
	// size: 0x50
	register struct MissileStruct_dup_17 *miss;
	// register: 23
	register int sx;
	// register: 22
	register int sy;
	// address: 0xFFFFFFD0
	auto int id;
	// register: 18
	register int l;
	// register: 2
	register int n;
	// register: 21
	register int m;
	// register: 19
	register int k;
	// register: 30
	register int rad;
	// register: 16
	register int tx;
	// register: 17
	register int ty;
	// address: 0xFFFFFF80
	// size: 0x4C
	auto int CrawlNum[19];
}


// address: 0x801461FC
// line start: 4426
// line end:   4469
void MI_Firemove__Fi(int i) {
	// register: 18
	register int j;
	// address: 0xFFFFFFA8
	// size: 0x38
	auto int ExpLight[14];
	// register: 17
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x80146304
// line start: 4426
// line end:   4469
void MI_Firemove__Fi(int i) {
	// register: 18
	register int j;
	// address: 0xFFFFFFA8
	// size: 0x38
	auto int ExpLight[14];
	// register: 17
	// size: 0x50
	register struct MissileStruct_dup_17 *miss;
}


// address: 0x80147CA0
// line start: 5163
// line end:   5199
void MI_FirewallC__Fi(int i) {
	// register: 16
	// size: 0x50
	register struct MissileStruct_dup_17 *miss;
	// register: 18
	register int tx;
	// register: 19
	register int ty;
	// register: 17
	register int id;
}


// address: 0x80147B98
// line start: 5163
// line end:   5199
void MI_FirewallC__Fi(int i) {
	// register: 16
	// size: 0x50
	register struct MissileStruct *miss;
	// register: 18
	register int tx;
	// register: 19
	register int ty;
	// register: 17
	register int id;
}


// address: 0x80148B30
// line start: 5450
// line end:   5477
void MI_Flamec__Fi(int i) {
	// register: 18
	register int id;
}


// address: 0x80145E38
// line start: 4257
// line end:   4282
void MI_Flash2__Fi(int i) {
	// register: 17
	// size: 0x50
	register struct MissileStruct_dup_17 *miss;
}


// address: 0x80145ACC
// line start: 4219
// line end:   4252
void MI_Flash__Fi(int i) {
	// register: 17
	// size: 0x50
	register struct MissileStruct_dup_17 *miss;
}


// address: 0x80142F94
// line start: 3591
// line end:   3622
void MI_Golem__Fi(int i) {
	// register: 30
	register int id;
	// register: 19
	register int j;
	// register: 22
	register int k;
	// register: 2
	register int l;
	// register: 20
	register int m;
	// register: 17
	register int tx;
	// register: 18
	register int ty;
	// address: 0xFFFFFFC0
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x801465A0
// line start: 4473
// line end:   4540
void MI_Guardian__Fi(int i) {
	// register: 18
	register int j;
	// register: 22
	register int k;
	// register: 30
	register int sx1;
	// register: 23
	register int sy1;
	// register: 3
	register int ex;
	// register: 17
	// size: 0x50
	register struct MissileStruct_dup_17 *miss;
}


// address: 0x801452E8
// line start: 4070
// line end:   4137
void MI_Lightctrl__Fi(int i) {
	// register: 19
	register int dam;
	// register: 3
	register int p;
	// register: 16
	register int mx;
	// register: 18
	register int my;
	// register: 17
	// size: 0x50
	register struct MissileStruct_dup_17 *miss;
}


// address: 0x801451E0
// line start: 4070
// line end:   4137
void MI_Lightctrl__Fi(int i) {
	// register: 19
	register int dam;
	// register: 3
	register int p;
	// register: 16
	register int mx;
	// register: 18
	register int my;
	// register: 17
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x80145594
// line start: 4140
// line end:   4159
void MI_Lightning__Fi(int i) {
	// register: 16
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x8014569C
// line start: 4140
// line end:   4159
void MI_Lightning__Fi(int i) {
	// register: 16
	// size: 0x50
	register struct MissileStruct_dup_17 *miss;
}


// address: 0x80145F04
// line start: 4288
// line end:   4379
void MI_Manashield__Fi(int i, int xoffset[8][3]) {
	// register: 3
	register int j;
	// register: 18
	register int id;
	// register: 5
	register long diff;
	// register: 4
	register long pct;
	// register: 17
	// size: 0x50
	register struct MissileStruct *miss;
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct_dup_18 *player;
}


// address: 0x8014600C
// line start: 4288
// line end:   4379
void MI_Manashield__Fi(int i, int xoffset[8][3]) {
	// register: 3
	register int j;
	// register: 18
	register int id;
	// register: 5
	register long diff;
	// register: 4
	register long pct;
	// register: 17
	// size: 0x50
	register struct MissileStruct_dup_17 *miss;
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct_dup_17 *player;
}


// address: 0x8014187C
// line start: 4288
// line end:   4379
void MI_Manashield__Fi(int i, int xoffset[8][3]) {
	// register: 3
	register int j;
	// register: 18
	register int id;
	// register: 5
	register long diff;
	// register: 4
	register long pct;
	// register: 17
	// size: 0x50
	register struct MissileStruct *miss;
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x801478B0
// line start: 5008
// line end:   5081
void MI_Rhino__Fi(int i) {
	// register: 16
	register int mix;
	// register: 17
	register int miy;
	// register: 23
	register int mix2;
	// register: 22
	register int miy2;
	// register: 21
	register int omx;
	// register: 30
	register int omy;
	// register: 18
	register int monst;
}


// address: 0x801475F8
// line start: 4964
// line end:   4991
void MI_Stone__Fi(int i) {
	// register: 4
	register int m;
}


// address: 0x8014718C
// line start: 4797
// line end:   4847
void MI_Teleport__Fi(int i) {
	// register: 18
	register int id;
	// register: 19
	// size: 0x108
	register struct CBlocks_dup_18 *gblocks;
}


// address: 0x80142B4C
// line start: 4797
// line end:   4847
void MI_Teleport__Fi(int i) {
	// register: 18
	register int id;
	// register: 19
	// size: 0x108
	register struct CBlocks *gblocks;
}


// address: 0x80147294
// line start: 4797
// line end:   4847
void MI_Teleport__Fi(int i) {
	// register: 18
	register int id;
	// register: 19
	// size: 0x108
	register struct CBlocks_dup_17 *gblocks;
}


// address: 0x80142B04
// line start: 4797
// line end:   4847
void MI_Teleport__Fi(int i) {
	// register: 18
	register int id;
	// register: 19
	// size: 0x108
	register struct CBlocks_dup_19 *gblocks;
}


// address: 0x80140FFC
// line start: 4166
// line end:   4216
void MI_Town__Fi(int i) {
	// register: 4
	register int p;
	// address: 0xFFFFFFA8
	// size: 0x44
	auto int ExpLight[17];
	{
		{
			// register: 5
			// size: 0x19E8
			register struct PlayerStruct *player;
		}
	}
}


// address: 0x8014578C
// line start: 4166
// line end:   4216
void MI_Town__Fi(int i) {
	// register: 4
	register int p;
	// address: 0xFFFFFFA8
	// size: 0x44
	auto int ExpLight[17];
	{
		{
			// register: 5
			// size: 0x19E8
			register struct PlayerStruct_dup_17 *player;
		}
	}
}


// address: 0x80145684
// line start: 4166
// line end:   4216
void MI_Town__Fi(int i) {
	// register: 4
	register int p;
	// address: 0xFFFFFFA8
	// size: 0x44
	auto int ExpLight[17];
	{
		{
			// register: 5
			// size: 0x19E8
			register struct PlayerStruct_dup_18 *player;
		}
	}
}


// address: 0x801481F8
// line start: 5249
// line end:   5305
void MI_Wave__Fi(int i) {
	// address: 0xFFFFFF88
	auto int dira;
	// address: 0xFFFFFF90
	auto int dirb;
	// register: 17
	register int nxa;
	// register: 16
	register int nya;
	// register: 20
	register int nxb;
	// register: 18
	register int nyb;
	// register: 2
	register int sd;
	// register: 21
	register int j;
	// address: 0xFFFFFF98
	auto int f1;
	// address: 0xFFFFFFA0
	auto int f2;
	// register: 22
	register int id;
	// register: 30
	register int sx;
	// address: 0xFFFFFFA8
	auto int sy;
}


// address: 0x80123B70
// line start: 260
// line end:   264
void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8014F39C
// line start: 2403
// line end:   2416
unsigned char M_CallWalk2__Fii(int i, int md) {
	// register: 20
	register int mdtemp;
	// register: 16
	register unsigned char ok;
}


// address: 0x8014C3B8
// line start: 1188
// line end:   1259
void M_ChangeLightOffset__Fi(int monst) {
	// register: 5
	register int lx;
	// register: 4
	register int ly;
	// register: 6
	register int xm;
	// register: 9
	register int ym;
	// register: 5
	register int x2;
	// register: 4
	register int y2;
	// register: 2
	register int ox;
	// register: 4
	register int oy;
	// register: 10
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
}


// address: 0x8014C2B0
// line start: 1188
// line end:   1259
void M_ChangeLightOffset__Fi(int monst) {
	// register: 5
	register int lx;
	// register: 4
	register int ly;
	// register: 6
	register int xm;
	// register: 9
	register int ym;
	// register: 5
	register int x2;
	// register: 4
	register int y2;
	// register: 2
	register int ox;
	// register: 4
	register int oy;
	// register: 10
	// size: 0x6C
	register struct MonsterStruct *pmonster;
}


// address: 0x8014AF60
// line start: 744
// line end:   802
void M_DiabloDeath__FiUci(int i, unsigned char sendmsg, int pnum) {
	// register: 22
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 30
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
	// register: 3
	register int steps;
	{
		// register: 20
		register int j;
		{
			// register: 19
			register int k;
			{
				{
					// register: 18
					register int _moldx;
					// register: 17
					register int _moldy;
				}
			}
		}
	}
}


// address: 0x8014B068
// line start: 744
// line end:   802
void M_DiabloDeath__FiUci(int i, unsigned char sendmsg, int pnum) {
	// register: 22
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 30
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
	// register: 3
	register int steps;
	{
		// register: 20
		register int j;
		{
			// register: 19
			register int k;
			{
				{
					// register: 18
					register int _moldx;
					// register: 17
					register int _moldy;
				}
			}
		}
	}
}


// address: 0x8014D4D8
// line start: 1627
// line end:   1666
int M_DoAttack__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 21
	register unsigned char mMinDamage;
	// register: 19
	register unsigned char mMaxDamage;
	// register: 20
	register unsigned char mHit;
	// register: 18
	register int _menemy;
}


// address: 0x8014D3D0
// line start: 1627
// line end:   1666
int M_DoAttack__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 21
	register unsigned char mMinDamage;
	// register: 19
	register unsigned char mMaxDamage;
	// register: 20
	register unsigned char mHit;
	// register: 18
	register int _menemy;
}


// address: 0x8014E7B0
// line start: 2090
// line end:   2133
int M_DoDeath__Fi(int i) {
	// register: 3
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pMonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
	{
		{
		}
	}
}


// address: 0x8014E6A8
// line start: 2090
// line end:   2133
int M_DoDeath__Fi(int i) {
	// register: 3
	// size: 0x6C
	register struct MonsterStruct *pMonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
	{
		{
		}
	}
}


// address: 0x8014DCFC
// line start: 1793
// line end:   1813
int M_DoHeal__Fi(int i) {
	// register: 4
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x8014DBF4
// line start: 1793
// line end:   1813
int M_DoHeal__Fi(int i) {
	// register: 4
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x8014C520
// line start: 1268
// line end:   1287
int M_DoStand__Fi(int i) {
	// register: 4
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x8014C418
// line start: 1268
// line end:   1287
int M_DoStand__Fi(int i) {
	// register: 4
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x8014DD98
// line start: 1820
// line end:   1927
int M_DoTalk__Fi(int i) {
	// register: 16
	register int tren;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 20
	register int _mx;
	// register: 21
	register int _my;
	// register: 19
	register int mName;
}


// address: 0x8014DC90
// line start: 1820
// line end:   1927
int M_DoTalk__Fi(int i) {
	// register: 16
	register int tren;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 20
	register int _mx;
	// register: 21
	register int _my;
	// register: 19
	register int mName;
}


// address: 0x8014AB64
// line start: 614
// line end:   674
void M_GetKnockback__Fii(int i, int d) {
	{
		{
			// register: 19
			// size: 0x6C
			register struct MonsterStruct_dup_17 *pmonster;
			// register: 18
			register int _mx;
			// register: 17
			register int _my;
		}
	}
}


// address: 0x8014AA5C
// line start: 614
// line end:   674
void M_GetKnockback__Fii(int i, int d) {
	{
		{
			// register: 19
			// size: 0x6C
			register struct MonsterStruct *pmonster;
			// register: 18
			register int _mx;
			// register: 17
			register int _my;
		}
	}
}


// address: 0x80156B3C
// line start: 5778
// line end:   5798
void M_StartAttack__Fi(int i) {
	// register: 18
	register int md;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80156A34
// line start: 5778
// line end:   5798
void M_StartAttack__Fi(int i) {
	// register: 18
	register int md;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8014A984
// line start: 591
// line end:   607
void M_StartEat__Fi(int i) {
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8014AA8C
// line start: 591
// line end:   607
void M_StartEat__Fi(int i) {
	// register: 2
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8014C328
// line start: 1169
// line end:   1181
void M_StartHeal__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x8014C220
// line start: 1169
// line end:   1181
void M_StartHeal__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x8014AD80
// line start: 681
// line end:   739
void M_StartHit__Fiii(int i, int pnum, int dam) {
	{
		{
			// register: 2
			// size: 0x6C
			register struct MonsterStruct_dup_17 *pmonster;
			// register: 17
			register int _moldx;
			// register: 16
			register int _moldy;
		}
	}
}


// address: 0x8014AC78
// line start: 681
// line end:   739
void M_StartHit__Fiii(int i, int pnum, int dam) {
	{
		{
			// register: 2
			// size: 0x6C
			register struct MonsterStruct *pmonster;
			// register: 17
			register int _moldx;
			// register: 16
			register int _moldy;
		}
	}
}


// address: 0x8014BE74
// line start: 1066
// line end:   1085
void M_StartKill__Fii(int i, int pnum) {
	// register: 3
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 17
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x8014BD6C
// line start: 1066
// line end:   1085
void M_StartKill__Fii(int i, int pnum) {
	// register: 3
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 17
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x8014A708
// line start: 501
// line end:   523
void M_StartRAttack__Fiii(int i, int missile_type, int dam) {
	// register: 18
	register int md;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8014A600
// line start: 501
// line end:   523
void M_StartRAttack__Fiii(int i, int missile_type, int dam) {
	// register: 18
	register int md;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8014A720
// line start: 531
// line end:   556
void M_StartRSpAttack__Fiii(int i, int missile_type, int dam) {
	// register: 21
	register int md;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x8014A828
// line start: 531
// line end:   556
void M_StartRSpAttack__Fiii(int i, int missile_type, int dam) {
	// register: 21
	register int md;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x8014A894
// line start: 563
// line end:   583
void M_StartSpAttack__Fi(int i) {
	// register: 18
	register int md;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8014A99C
// line start: 563
// line end:   583
void M_StartSpAttack__Fi(int i) {
	// register: 18
	register int md;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80156C2C
// line start: 5802
// line end:   5833
void M_StartWalk__Fiiiiii(int i, int xvel, int yvel, int xadd, int yadd, int EndDir) {
	// register: 8
	register long fx;
	// register: 11
	register long fy;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 9
	register int _mx;
	// register: 10
	register int _my;
}


// address: 0x80156B24
// line start: 5802
// line end:   5833
void M_StartWalk__Fiiiiii(int i, int xvel, int yvel, int xadd, int yadd, int EndDir) {
	// register: 8
	register long fx;
	// register: 11
	register long fy;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 9
	register int _mx;
	// register: 10
	register int _my;
}


// address: 0x8014BF6C
// line start: 1092
// line end:   1109
void M_SyncStartKill__Fiiii(int i, int x, int y, int pnum) {
}


// address: 0x8014E33C
// line start: 1937
// line end:   1983
void M_Teleport__Fi(int i) {
	// register: 21
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 22
	register unsigned char done;
	// address: 0xFFFFFFC0
	auto int mulx;
	// register: 3
	register int muly;
	// register: 19
	register int x;
	// register: 23
	register int y;
	// register: 18
	register int a;
	// register: 16
	register int b;
	// register: 16
	register int px;
	// address: 0xFFFFFFC8
	auto int py;
}


// address: 0x8014E234
// line start: 1937
// line end:   1983
void M_Teleport__Fi(int i) {
	// register: 21
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 22
	register unsigned char done;
	// address: 0xFFFFFFC0
	auto int mulx;
	// register: 3
	register int muly;
	// register: 19
	register int x;
	// register: 23
	register int y;
	// register: 18
	register int a;
	// register: 16
	register int b;
	// register: 16
	register int px;
	// address: 0xFFFFFFC8
	auto int py;
}


// address: 0x8014CDB8
// line start: 1471
// line end:   1621
void M_TryH2HHit__Fiiiii(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	// register: 17
	// size: 0x19E8
	register struct PlayerStruct_dup_18 *ptrplr;
	// register: 22
	register int hit;
	// register: 16
	register int hper;
	// register: 4
	register int tac;
	// register: 16
	register long dam;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 6
	register int blk;
	// register: 3
	register int blkper;
	// register: 6
	register int mdam;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *pMonster;
	// address: 0xFFFFFFC8
	auto int _mx;
	// address: 0xFFFFFFD0
	auto int _my;
	// register: 23
	register int _px;
	// register: 30
	register int _py;
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
											// register: 20
											register bool KnockOk;
											// register: 18
											register int newx;
											// register: 16
											register int newy;
											{
												{
													// register: 3
													// size: 0x19E8
													register struct PlayerStruct_dup_18 *plr2;
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


// address: 0x8014CEC0
// line start: 1471
// line end:   1621
void M_TryH2HHit__Fiiiii(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	// register: 17
	// size: 0x19E8
	register struct PlayerStruct_dup_17 *ptrplr;
	// register: 22
	register int hit;
	// register: 16
	register int hper;
	// register: 4
	register int tac;
	// register: 16
	register long dam;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 6
	register int blk;
	// register: 3
	register int blkper;
	// register: 6
	register int mdam;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pMonster;
	// address: 0xFFFFFFC8
	auto int _mx;
	// address: 0xFFFFFFD0
	auto int _my;
	// register: 23
	register int _px;
	// register: 30
	register int _py;
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
											// register: 20
											register bool KnockOk;
											// register: 18
											register int newx;
											// register: 16
											register int newy;
											{
												{
													// register: 3
													// size: 0x19E8
													register struct PlayerStruct_dup_17 *plr2;
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


// address: 0x80148730
// line start: 1471
// line end:   1621
void M_TryH2HHit__Fiiiii(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	// register: 17
	// size: 0x19E8
	register struct PlayerStruct *ptrplr;
	// register: 22
	register int hit;
	// register: 16
	register int hper;
	// register: 4
	register int tac;
	// register: 16
	register long dam;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 6
	register int blk;
	// register: 3
	register int blkper;
	// register: 6
	register int mdam;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *pMonster;
	// address: 0xFFFFFFC8
	auto int _mx;
	// address: 0xFFFFFFD0
	auto int _my;
	// register: 23
	register int _px;
	// register: 30
	register int _py;
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
											// register: 20
											register bool KnockOk;
											// register: 18
											register int newx;
											// register: 16
											register int newy;
											{
												{
													// register: 3
													// size: 0x19E8
													register struct PlayerStruct *plr2;
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


// address: 0x8014CC80
// line start: 1420
// line end:   1465
void M_TryM2MHit__Fiiiii(int i, int mid, int hper, int mind, int maxd) {
	// register: 19
	register int hit;
	// register: 6
	register int dam;
	// address: 0xFFFFFFD0
	auto unsigned char ret;
}


// address: 0x80151060
// line start: 5180
// line end:   5282
void MissToMonst__Fiii(int i, int x, int y) {
	// register: 20
	register int oldx;
	// register: 21
	register int oldy;
	// register: 16
	register int newx;
	// register: 18
	register int newy;
	// register: 3
	// size: 0x50
	register struct MissileStruct *Miss;
	// register: 18
	register int m;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 17
	register int pnum;
	{
		{
			{
				{
					{
						{
							// register: 22
							register bool KnockOk;
							{
								{
									// register: 5
									// size: 0x19E8
									register struct PlayerStruct *ptrplr;
									// register: 5
									// size: 0x19E8
									register struct PlayerStruct *plr2;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x801556E8
// line start: 5180
// line end:   5282
void MissToMonst__Fiii(int i, int x, int y) {
	// register: 20
	register int oldx;
	// register: 21
	register int oldy;
	// register: 16
	register int newx;
	// register: 18
	register int newy;
	// register: 3
	// size: 0x50
	register struct MissileStruct *Miss;
	// register: 18
	register int m;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 17
	register int pnum;
	{
		{
			{
				{
					{
						{
							// register: 22
							register bool KnockOk;
							{
								{
									// register: 5
									// size: 0x19E8
									register struct PlayerStruct_dup_18 *ptrplr;
									// register: 5
									// size: 0x19E8
									register struct PlayerStruct_dup_18 *plr2;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x801557F0
// line start: 5180
// line end:   5282
void MissToMonst__Fiii(int i, int x, int y) {
	// register: 20
	register int oldx;
	// register: 21
	register int oldy;
	// register: 16
	register int newx;
	// register: 18
	register int newy;
	// register: 3
	// size: 0x50
	register struct MissileStruct_dup_17 *Miss;
	// register: 18
	register int m;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 17
	register int pnum;
	{
		{
			{
				{
					{
						{
							// register: 22
							register bool KnockOk;
							{
								{
									// register: 5
									// size: 0x19E8
									register struct PlayerStruct_dup_17 *ptrplr;
									// register: 5
									// size: 0x19E8
									register struct PlayerStruct_dup_17 *plr2;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8014B64C
// line start: 867
// line end:   943
void MonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg) {
	// register: 2
	register int md;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 3
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 16
	register int _mx;
	// register: 19
	register int _my;
	{
		{
			// register: 16
			register int omp;
		}
	}
}


// address: 0x8014B544
// line start: 867
// line end:   943
void MonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg) {
	// register: 2
	register int md;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 3
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 16
	register int _mx;
	// register: 19
	register int _my;
	{
		{
			// register: 16
			register int omp;
		}
	}
}


// address: 0x8013B5DC
// line start: 906
// line end:   1023
unsigned char MonsterMHit__FiiiiiiUc(int pnum, int m, int mindam, int maxdam, int dist, int t, int shift) {
	// register: 21
	register int hit;
	// register: 16
	register int hper;
	// register: 16
	register long dam;
	// register: 4
	register int mor;
	// register: 5
	register int mir;
	// register: 23
	register unsigned char resist;
	// address: 0xFFFFFFC8
	auto unsigned char ret;
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


// address: 0x8014A608
// line start: 205
// line end:   205
void MoveToScrollTarget__7CBlocks(struct CBlocks_dup_17 *this) {
}


// address: 0x80145E78
// line start: 205
// line end:   205
void MoveToScrollTarget__7CBlocks(struct CBlocks_dup_19 *this) {
}


// address: 0x8014A500
// line start: 205
// line end:   205
void MoveToScrollTarget__7CBlocks(struct CBlocks_dup_18 *this) {
}


// address: 0x80126128
// line start: 1682
// line end:   1860
short PlayFMVOverLay(char *filename, int w, int h) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT r;
}


// address: 0x8013016C
// line start: 83
// line end:   84
short PlayFMVOverLay(char *filename, int w, int h) {
}


// address: 0x80149F00
// line start: 1681
// line end:   1859
short PlayFMVOverLay(char *filename, int w, int h) {
	// register: 20
	register int start_time;
	// register: 22
	register int start_frame;
	// register: 2
	register int afrm;
	// register: 4
	register int efrm;
	// register: 19
	register int br;
	// register: 21
	register int fade;
	// register: 23
	register int user_quit;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT r;
}


// address: 0x80139868
// line start: 1688
// line end:   1868
short PlayFMVOverLay(char *filename, int w, int h) {
	// register: 20
	register int start_time;
	// register: 22
	register int start_frame;
	// register: 2
	register int afrm;
	// register: 4
	register int efrm;
	// register: 19
	register int br;
	// register: 21
	register int fade;
	// register: 17
	register int user_quit;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT r;
}


// address: 0x80135E98
// line start: 238
// line end:   384
short PlayFMVOverLay(struct StrInfo *str) {
	// address: 0xFFFFFFC0
	// size: 0x18
	auto struct CdlFILE fp;
	// register: 16
	register unsigned long *frame;
	// register: 17
	register short frameRetry;
	// register: 18
	register short strQuit;
	// address: 0xFFFFFFD8
	auto short fadeVol;
	{
		// register: 2
		// size: 0x6C
		register struct CPad *P1;
	}
}


// address: 0x8013A0AC
// line start: 1696
// line end:   1886
short PlayFMVOverLay(char *filename, int w, int h) {
	// register: 20
	register int start_time;
	// register: 23
	register int start_frame;
	// register: 2
	register int afrm;
	// register: 4
	register int efrm;
	// register: 19
	register int br;
	// register: 22
	register int fade;
	// register: 21
	register int user_quit;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT r;
	// register: 17
	// size: 0x6C
	register struct CPad *P1;
	// register: 18
	// size: 0x6C
	register struct CPad *P2;
}


// address: 0x8013BDA4
// line start: 1030
// line end:   1155
unsigned char PlayerMHit__FiiiiiiUcUc(int pnum, int m, int dist, int mind, int maxd, int mtype, int shift, int earflag) {
	// address: 0xFFFFFFD0
	auto int hit;
	// register: 17
	register int hper;
	// register: 4
	register int tac;
	// register: 5
	register long dam;
	// register: 21
	register int blk;
	// register: 20
	register int blkper;
	// register: 2
	register int blkdir;
	// register: 19
	register int resper;
}


// address: 0x80155CB4
// line start: 5346
// line end:   5386
unsigned char PosOkMonst3__Fiii(int i, int x, int y) {
	// register: 18
	register unsigned char ret;
	// register: 3
	register int oi;
	// register: 4
	register int objtype;
	// register: 4
	register int mi;
	// register: 20
	register unsigned char fire;
	// register: 17
	register unsigned char isdoor;
}


// address: 0x8014E668
// line start: 2060
// line end:   2083
void PrepDoEnding__Fi(int pnum) {
	{
		// register: 6
		register int i;
	}
}


// address: 0x80136FB8
// line start: 935
// line end:   945
void PrintVLCBufSize() {
}


// address: 0x8014A064
// line start: 5764
// line end:   5828
void ProcessMissiles__Fv() {
	// register: 17
	register short i;
	// register: 3
	register short j;
	// register: 3
	register short mi;
	// register: 16
	// size: 0x50
	register struct MissileStruct *miss;
	// register: 18
	register short *pmissileactive;
}


// address: 0x8014A16C
// line start: 5764
// line end:   5828
void ProcessMissiles__Fv() {
	// register: 17
	register short i;
	// register: 3
	register short j;
	// register: 3
	register short mi;
	// register: 16
	// size: 0x50
	register struct MissileStruct_dup_17 *miss;
	// register: 18
	register short *pmissileactive;
}


// address: 0x801544F8
// line start: 4293
// line end:   4537
void ProcessMonsters__Fv(unsigned int WipeCount, bool DoWipe, struct MonsterStruct_dup_17 *Monst, int oldmode) {
	// register: 22
	register int i;
	// register: 18
	register int mi;
	// register: 19
	register int raflag;
	// register: 20
	register int mx;
	// register: 21
	register int my;
	// register: 16
	register int _menemy;
}


// address: 0x801543F0
// line start: 4293
// line end:   4537
void ProcessMonsters__Fv(unsigned int WipeCount, bool DoWipe, struct MonsterStruct *Monst, int oldmode) {
	// register: 22
	register int i;
	// register: 18
	register int mi;
	// register: 19
	register int raflag;
	// register: 20
	register int mx;
	// register: 21
	register int my;
	// register: 16
	register int _menemy;
}


// address: 0x8013AD8C
// line start: 656
// line end:   705
void PutMissile__Fi(int i) {
	// register: 8
	register int mx;
	// register: 9
	register int my;
	// register: 4
	register char m;
	{
		{
			{
				{
					// register: 5
					register char dMiss;
				}
			}
		}
	}
}


// address: 0x80136300
// line start: 425
// line end:   426
void STR_CallBack(int handle) {
}


// address: 0x80136390
// line start: 459
// line end:   518
unsigned long *STR_GetNext() {
	// register: 19
	register unsigned long *addr;
	// register: 18
	register int count;
	// register: 16
	// size: 0x8
	register struct chunkhdrstruct *chunk;
	// register: 17
	register int frameoff;
	{
		// register: 4
		register int i;
		{
			{
				// register: 4
				register int i;
			}
		}
	}
}


// address: 0x8013636C
// line start: 447
// line end:   448
void STR_RingEnd() {
}


// address: 0x80136310
// line start: 432
// line end:   442
void STR_SetRing() {
}


// address: 0x80136F60
// line start: 910
// line end:   915
unsigned short ScalePPW(unsigned short n) {
}


// address: 0x80135E90
// line start: 226
// line end:   228
void SetDecDCT() {
}


// address: 0x80136A40
// line start: 693
// line end:   699
void StrClearVRAM() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x80139FEC
// line start: 1673
// line end:   1686
void StrClearVRAM() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x801361F8
// line start: 392
// line end:   415
void StrDecDCToutCB() {
}


// address: 0x80136DE8
// line start: 845
// line end:   864
void StrDrawDecodeSync() {
	// register: 3
	register long timer;
}


// address: 0x80136980
// line start: 655
// line end:   683
void StrEnd() {
}


// address: 0x80136EBC
// line start: 873
// line end:   884
short StrFadeOutVol(short *fadeVol) {
}


// address: 0x80136B64
// line start: 732
// line end:   802
unsigned long *StrGetNextFrame() {
	// register: 16
	register long timer;
	// register: 17
	register unsigned long *addr;
	// register: 16
	// size: 0x20
	register struct StHEADER *sector;
}


// address: 0x8013654C
// line start: 528
// line end:   633
void StrInit(struct StrInfo *str) {
	// register: 23
	register short x;
	// register: 22
	register short y;
	// register: 30
	register short w;
	// register: 21
	register short h;
	// register: 20
	register short scrWidth;
	// register: 16
	register unsigned long imageBufSize;
	{
		// register: 4
		register int i;
	}
}


// address: 0x80136AB0
// line start: 708
// line end:   723
short StrKickCD(struct CdlLOC *loc) {
	// register: 16
	register short seekRetry;
	// register: 17
	register short readRetry;
}


// address: 0x80136D40
// line start: 814
// line end:   837
void StrVLCFrame(unsigned long *frame) {
}


// address: 0x8015A878
// line start: 1741
// line end:   1747
int SwapItem__FP10ItemStructT0(struct ItemStruct_dup_17 *a, struct ItemStruct_dup_17 *b) {
	// address: 0xFFFFFF90
	// size: 0x6C
	auto struct ItemStruct_dup_17 h;
}


// address: 0x8015A770
// line start: 1741
// line end:   1747
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF90
	// size: 0x6C
	auto struct ItemStruct h;
}


// address: 0x8014B958
// line start: 950
// line end:   989
void SyncMonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg) {
	// register: 2
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x8014B850
// line start: 950
// line end:   989
void SyncMonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg) {
	// register: 2
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x801560D8
// line start: 5438
// line end:   5471
void TalktoMonster__Fi(int i) {
	// register: 17
	register int pnum;
	// address: 0xFFFFFFE8
	auto int itm;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x80155FD0
// line start: 5438
// line end:   5471
void TalktoMonster__Fi(int i) {
	// register: 17
	register int pnum;
	// address: 0xFFFFFFE8
	auto int itm;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x8015EB48
// line start: 2897
// line end:   2923
unsigned char TryInvPut__Fv() {
	// register: 17
	register int Dist;
	{
		{
			// register: 16
			register int d;
			{
			}
		}
	}
}


// address: 0x8015FF74
// line start: 3492
// line end:   3622
unsigned char UseInvItem__Fii(int pnum, int cii) {
	// register: 18
	register int c;
	// register: 3
	register int idata;
	// register: 3
	register int it;
	// register: 17
	// size: 0x6C
	register struct ItemStruct_dup_17 *Item;
	// register: 19
	register unsigned char speedlist;
}


// address: 0x8015FE6C
// line start: 3492
// line end:   3622
unsigned char UseInvItem__Fii(int pnum, int cii) {
	// register: 18
	register int c;
	// register: 3
	register int idata;
	// register: 3
	register int it;
	// register: 17
	// size: 0x6C
	register struct ItemStruct *Item;
	// register: 19
	register unsigned char speedlist;
}


// address: 0x8015FD4C
// line start: 3395
// line end:   3402
void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct_dup_17 *ptrplr) {
}


// address: 0x8015FC44
// line start: 3395
// line end:   3402
void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct_dup_18 *ptrplr) {
}


// address: 0x80124204
// line start: 659
// line end:   689
void cdstream_discard_chunk() {
}


// address: 0x801240CC
// line start: 599
// line end:   634
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
	{
		{
			// register: 4
			register unsigned char *ptr;
		}
	}
}


// address: 0x801241EC
// line start: 646
// line end:   647
int cdstream_is_last_chunk() {
}


// address: 0x80124034
// line start: 543
// line end:   565
void cdstream_service() {
	// register: 4
	register int timeout_occured;
}


// address: 0x80123BD8
// line start: 304
// line end:   316
int check_complete_frame(struct strheader *h) {
	// register: 7
	register int ok;
	// register: 5
	register int i;
}


// address: 0x80124DE8
// line start: 1072
// line end:   1073
void clear_mdec_frame() {
}


// address: 0x80126098
// line start: 1652
// line end:   1655
void clear_mdec_queue() {
}


// address: 0x80124304
// line start: 699
// line end:   716
void close_cdstream() {
}


// address: 0x80125DF8
// line start: 1548
// line end:   1606
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x80125C48
// line start: 1486
// line end:   1529
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80125B5C
// line start: 1460
// line end:   1479
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80124DF4
// line start: 1082
// line end:   1127
void draw_mdec_polys() {
	// register: 10
	register int i;
	// register: 16
	register unsigned char cdbuf;
}


// address: 0x80123BB4
// line start: 288
// line end:   295
void flush_cdstream() {
}


// address: 0x80156578
// line start: 5549
// line end:   5555
bool gSameRoom__Fii(int m, int i) {
	// register: 2
	// size: 0x6C
	register struct MonsterStruct_dup_17 *m1;
	// register: 3
	// size: 0x6C
	register struct MonsterStruct_dup_17 *m2;
}


// address: 0x80156470
// line start: 5549
// line end:   5555
bool gSameRoom__Fii(int m, int i) {
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *m1;
	// register: 3
	// size: 0x6C
	register struct MonsterStruct *m2;
}


// address: 0x80123BA4
// line start: 277
// line end:   283
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x80124810
// line start: 929
// line end:   941
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x8014D0F8
// line start: 1280
// line end:   1318
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
	{
		// register: 3
		register int i;
	}
}


// address: 0x8012566C
// line start: 1249
// line end:   1279
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
}


// address: 0x80124874
// line start: 953
// line end:   956
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x80138964
// line start: 1180
// line end:   1223
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT r;
	// register: 9
	register int i;
}


// address: 0x80125164
// line start: 1158
// line end:   1212
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	// address: 0xFFFFFF50
	// size: 0x8
	auto struct RECT r;
	// address: 0xFFFFFF58
	// size: 0x5C
	auto struct DRAWENV de;
	// register: 9
	register int i;
}


// address: 0x8012561C
// line start: 1238
// line end:   1243
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x80123FC4
// line start: 523
// line end:   532
void install_stream_handlers() {
}


// address: 0x80125144
// line start: 1134
// line end:   1135
void invalidate_mdec_frame() {
}


// address: 0x80125158
// line start: 1144
// line end:   1145
int is_frame_decoded() {
}


// address: 0x80125724
// line start: 1285
// line end:   1287
void kill_mdec_audio() {
}


// address: 0x80123C80
// line start: 347
// line end:   359
void kill_stream_handlers() {
}


// address: 0x80124450
// line start: 757
// line end:   823
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
}


// address: 0x80125778
// line start: 1300
// line end:   1410
void play_mdec_audio(unsigned char *data, struct asec *h) {
	// register: 16
	register int i;
	// register: 7
	register int b;
	// register: 19
	register int offs;
	// address: 0xFFFFFF90
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 5
	register unsigned char *dp;
	// register: 20
	register int hsize;
}


// address: 0x8014D250
// line start: 1338
// line end:   1448
void play_mdec_audio(unsigned char *data, struct asec *h) {
	// register: 16
	register int i;
	// register: 6
	register int b;
	// register: 17
	register int offs;
	// address: 0xFFFFFF98
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 4
	register unsigned char *dp;
	// register: 19
	register int hsize;
}


// address: 0x8014D004
// line start: 1333
// line end:   1438
void play_mdec_audio(unsigned char *data, struct asec *h) {
	// register: 16
	register int i;
	// register: 6
	register int b;
	// register: 19
	register int offs;
	// address: 0xFFFFFF90
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 4
	register unsigned char *dp;
	// register: 20
	register int hsize;
}


// address: 0x80125FE4
// line start: 1626
// line end:   1645
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80124C14
// line start: 1047
// line end:   1061
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x80123C58
// line start: 339
// line end:   342
void reset_cdstream() {
}


// address: 0x80125AE0
// line start: 1436
// line end:   1438
void resync_audio() {
}


// address: 0x80125A14
// line start: 1417
// line end:   1430
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x801245BC
// line start: 842
// line end:   853
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x801255B4
// line start: 1217
// line end:   1226
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x80138028
// line start: 998
// line end:   1067
int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct) {
	// register: 30
	register int xx;
	// register: 20
	register int x;
	// register: 22
	register int y;
	// register: 23
	register int xs;
	// address: 0xFFFFFFA8
	auto int ys;
	// register: 19
	register int w;
	// register: 21
	register int h;
	// address: 0xFFFFFFB0
	auto int n;
	// address: 0xFFFFFFB8
	auto int ox;
	// address: 0xFFFFFFC0
	auto int oy;
}


// address: 0x80124890
// line start: 970
// line end:   1038
int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct) {
	// register: 30
	register int xx;
	// register: 20
	register int x;
	// register: 23
	register int y;
	// register: 22
	register int xs;
	// register: 15
	register int ys;
	// register: 19
	register int w;
	// register: 21
	register int h;
	// address: 0xFFFFFF98
	auto int n;
	// register: 9
	register int ox;
	// register: 13
	register int oy;
}


// address: 0x801245F0
// line start: 867
// line end:   903
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
	// register: 5
	register int sz;
}


// address: 0x80125754
// line start: 1292
// line end:   1293
void stop_mdec_audio() {
}


// address: 0x80125B10
// line start: 1447
// line end:   1454
void stop_mdec_stream() {
}


// address: 0x80145498
// line start: 396
// line end:   505
void stream_cdready_handler(unsigned char status, unsigned char *result, int idx, int i, int sec, struct CdlLOC subcode[3]) {
}


// address: 0x80123CF0
// line start: 369
// line end:   492
void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec) {
	{
		{
			// register: 2
			register unsigned long *ptr;
		}
	}
}


// address: 0x8014BCE0
// line start: 705
// line end:   720
void wait_cdstream() {
}


// address: 0x80124398
// line start: 729
// line end:   740
void wait_cdstream() {
	// address: 0xFFFFFFF0
	auto int start_wait;
}


