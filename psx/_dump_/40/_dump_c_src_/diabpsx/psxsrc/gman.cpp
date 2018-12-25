// C:\diabpsx\PSXSRC\GMAN.CPP

#include "types.h"

// address: 0x800B0494
// line start: 1398
// line end:   1403
void GM_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80091A18
// size: 0x70
// line start: 123
// line end:   125
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x80091A4C
// line start: 129
// line end:   134
void OnceOnlyInit__7TextDat(struct TextDat *this) {
}


// address: 0x80091A6C
// line start: 144
// line end:   145
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x80091AB4
// line start: 155
// line end:   158
void ReloadTP__7TextDat(struct TextDat *this) {
}


// address: 0x80091AF4
// line start: 170
// line end:   246
void Use__7TextDatlbi(struct TextDat *this, long NewHndDat, bool DatLoaded, int size) {
	{
		{
			// address: 0xFFFFFFB0
			// size: 0x28
			auto char NameBuff[40];
			{
				{
					{
						{
							// address: 0xFFFFFFD8
							// size: 0x8
							auto struct RECT R;
							// register: 17
							register int DecompSize;
						}
					}
				}
			}
		}
	}
}


// address: 0x80091D34
// line start: 263
// line end:   288
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8011C880
	static int TpX;
	// address: 0x8011C884
	static int TpY;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
	// register: 2
	register int Dx;
	// register: 2
	register int Dy;
}


// address: 0x80091DDC
// line start: 292
// line end:   306
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x80091E94
// line start: 316
// line end:   333
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x80091F2C
// line start: 343
// line end:   347
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x80091F78
// line start: 375
// line end:   398
long MakeOffsetTab__C9CBlockHdr(struct CBlockHdr *this) {
	// register: 18
	// size: 0xC
	register struct CBlock *MyBlock;
	// register: 21
	register long hndRet;
	// register: 19
	register int *Tab;
	{
		// register: 16
		register unsigned int f;
	}
}


// address: 0x800920A4
// line start: 408
// line end:   466
void SetUVTp__7TextDatP9FRAME_HDRP8POLY_FT4ii(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4, int XFlip, int YFlip) {
	// register: 2
	register int Rotated;
	// register: 12
	register int Tpage;
	// register: 3
	register int U;
	// register: 9
	register int V;
	// register: 8
	register int W;
	// register: 10
	register int H;
}


// address: 0x800921A4
// line start: 481
// line end:   488
bool IsCompressed__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Dir, int Frame) {
}


// address: 0x800921F0
// size: 0x28
// line start: 495
// line end:   504
struct POLY_FT4 *PrintMonster__7TextDatiiiiiii(struct TextDat *this, int Creature, int Action, int Dir, int Frame, int x, int y, int OtPos) {
	// register: 16
	register int PhysFrame;
}


// address: 0x8009229C
// size: 0x28
// line start: 508
// line end:   625
struct POLY_FT4 *PrintMonsterA__7TextDatiiibi(struct TextDat *this, int Frm, int X, int Y, bool XFlip, int OtPos) {
	{
		{
			// address: 0xFFFFFFC8
			// size: 0x28
			auto struct POLY_FT4 *FT4;
			// register: 18
			// size: 0xC
			register struct FRAME_HDR *Fr;
			// register: 3
			register int W;
			// register: 7
			register int H;
			{
				{
					// register: 16
					register unsigned char *Dest;
					// register: 2
					register int DecompSize;
					// register: 16
					register unsigned char *CompFrAddr;
					// register: 17
					// size: 0x44
					register struct DR_LOAD2 *DrPtr;
					// register: 22
					register unsigned long NumOfPrims;
					// register: 3
					register int VH;
					// register: 5
					register int TpX;
					// register: 6
					register int TpY;
					// register: 5
					register int U;
					// register: 3
					register int V;
					// register: 2
					register int W;
					// register: 7
					register int H;
					// register: 4
					register int u0;
					// register: 5
					register int u1;
					// register: 6
					register int u2;
					// register: 8
					register int u3;
					{
						// register: 19
						register unsigned int f;
						{
							// address: 0xFFFFFFD0
							// size: 0x8
							auto struct RECT mrect;
						}
					}
				}
			}
		}
	}
}


// address: 0x80092644
// line start: 630
// line end:   698
void PrepareFt4__7TextDatP8POLY_FT4iiiii(struct TextDat *this, struct POLY_FT4 *FT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 22
	register int W;
	// register: 21
	register int H;
	{
		{
			{
				{
					{
						{
							// address: 0xFFFFFFD0
							// size: 0x8
							auto struct RECT R;
							{
								{
									// register: 4
									register unsigned char sw;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800928D8
// line start: 706
// line end:   740
unsigned char *GetDecompBufffer__7TextDati(struct TextDat *this, int Size) {
	// register: 18
	register long *DecArray;
	// register: 19
	register int DecIndex;
	// register: 16
	register long hnd;
	// register: 20
	register unsigned char *RetAddr;
}


// address: 0x80092A38
// line start: 745
// line end:   803
void SetUVTpGT4__7TextDatP9FRAME_HDRP8POLY_GT4ii(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT4 *FT4, int XFlip, int YFlip) {
	// register: 2
	register int Rotated;
	// register: 12
	register int Tpage;
	// register: 3
	register int U;
	// register: 9
	register int V;
	// register: 8
	register int W;
	// register: 10
	register int H;
}


// address: 0x80092B38
// line start: 807
// line end:   878
void PrepareGt4__7TextDatP8POLY_GT4iiiii(struct TextDat *this, struct POLY_GT4 *GT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 22
	register int W;
	// register: 20
	register int H;
	// register: 4
	register unsigned char sw;
	// register: 17
	// size: 0x8
	register struct PAL *Pal;
	{
		{
			{
				// address: 0xFFFFFFD0
				// size: 0x8
				auto struct RECT R;
				{
					{
						// register: 2
						register int DecX;
						// register: 2
						register int DecY;
						// address: 0xFFFFFFD0
						// size: 0x8
						auto struct RECT R;
					}
				}
			}
		}
	}
}


// address: 0x80092D90
// line start: 885
// line end:   912
void SetUVTpGT3__7TextDatP9FRAME_HDRP8POLY_GT3(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT3 *GT3) {
	// register: 2
	register int Rotated;
	// register: 10
	register int Tpage;
	// register: 4
	register int U;
	// register: 9
	register int V;
	// register: 3
	register int W;
	// register: 8
	register int H;
}


// address: 0x80092E14
// line start: 917
// line end:   975
void PrepareGt3__7TextDatP8POLY_GT3iii(struct TextDat *this, struct POLY_GT3 *GT3, int Frm, int X, int Y) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 22
	register int W;
	// register: 21
	register int H;
	// register: 16
	// size: 0x8
	register struct PAL *Pal;
	{
		{
			{
				// address: 0xFFFFFFD8
				// size: 0x8
				auto struct RECT R;
				{
					{
						// register: 2
						register int DecX;
						// register: 2
						register int DecY;
						// address: 0xFFFFFFD8
						// size: 0x8
						auto struct RECT R;
					}
				}
			}
		}
	}
}


// address: 0x80092FDC
// size: 0x28
// line start: 989
// line end:   1006
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x80093130
// size: 0x34
// line start: 1012
// line end:   1031
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x80093284
// line start: 1058
// line end:   1096
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x800933DC
// line start: 1105
// line end:   1135
void MakeCreatureOffsetTab__7TextDat(struct TextDat *this) {
	// register: 17
	register int NumOfCreatures;
	{
		{
			// register: 16
			register unsigned char *ThisAddr;
			{
				// register: 17
				register unsigned int f;
				{
					// register: 16
					register int f;
					{
					}
				}
			}
		}
	}
}


// address: 0x8009351C
// line start: 1145
// line end:   1176
void MakePalOffsetTab__7TextDat(struct TextDat *this) {
	// register: 5
	// size: 0x8
	register struct PAL *ThisPal;
	{
		// register: 6
		register unsigned int f;
	}
}


// address: 0x80093618
// line start: 1231
// line end:   1242
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x80093648
// line start: 1252
// line end:   1288
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x80093770
// line start: 1292
// line end:   1299
void DumpHdr__7TextDat(struct TextDat *this) {
}


// address: 0x800937D4
// size: 0x70
// line start: 1312
// line end:   1333
struct TextDat *GM_UseTexData__Fi(int Id) {
	{
		{
			// register: 18
			// size: 0x70
			register struct TextDat *Dat2Use;
			// register: 20
			// size: 0x4
			register struct CTextFileInfo **Tab;
			{
				// register: 17
				register int f;
			}
		}
	}
}


// address: 0x80093908
// line start: 1337
// line end:   1339
void GM_ForceTpLoad__Fi(int Id) {
}


// address: 0x80093944
// line start: 1349
// line end:   1353
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x80093998
// line start: 1358
// line end:   1386
void SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4) {
	// register: 17
	// size: 0x8
	register struct PAL *Pal;
	{
		{
			{
				// address: 0xFFFFFFE8
				// size: 0x8
				auto struct RECT R;
			}
		}
	}
}


// address: 0x80093A5C
// line start: 1413
// line end:   1414
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x80093AB0
// line start: 1418
// line end:   1419
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x80093B08
// line start: 1428
// line end:   1458
void DoDecompRequests__7TextDat(struct TextDat *this) {
	// register: 17
	register long *DecArray;
	{
		// register: 18
		register int f;
		{
		}
	}
}


// address: 0x80093C2C
// line start: 1496
// line end:   1522
void FindDecompArea__7TextDatR4RECT(struct TextDat *this, struct RECT *R) {
	// register: 8
	register int NumOfFrames;
	// register: 4
	register int Widest;
	// register: 16
	register int Tallest;
	{
		// register: 7
		register int f;
		{
			// register: 5
			register int w;
			// register: 3
			register int h;
		}
	}
}


// address: 0x80093D04
// size: 0x4
// line start: 1526
// line end:   1528
struct CTextFileInfo *GetFileInfo__7TextDati(int Id) {
}


// address: 0x80093D54
// line start: 1534
// line end:   1535
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x80093D7C
// line start: 1539
// line end:   1545
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x80093DAC
// line start: 1551
// line end:   1579
void InitDirRemap__15CCreatureAction(struct CCreatureAction *this) {
	// address: 0xFFFFFFE0
	// size: 0x20
	auto bool Dir2Remap[8];
	// register: 7
	register int f;
	// register: 11
	register int RemapNum;
	{
		{
			{
				{
					// register: 9
					register int OrigNum;
					{
						// register: 6
						register int g;
					}
				}
			}
		}
	}
}


// address: 0x80093E6C
// line start: 1583
// line end:   1587
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x80093EB0
// size: 0xE
// line start: 1591
// line end:   1599
struct CCreatureAction *GetAction__C12CCreatureHdri(struct CCreatureHdr *this, int ActNum) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x80093F40
// line start: 1603
// line end:   1610
void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x80093FB0
// line start: 1616
// line end:   1627
int GetSize__C12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 18
	register int Size;
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
		{
			// register: 2
			register int ThisSize;
		}
	}
}


// address: 0x8009401C
// line start: 1635
// line end:   1656
void LoadDat__C13CTextFileInfoli(struct CTextFileInfo *this, long hnd, int size) {
	// address: 0xFFFFFFD8
	// size: 0xD
	auto char FName[13];
	// register: 16
	register unsigned char *Dest;
	// register: 17
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x80094150
// line start: 1661
// line end:   1663
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x800941A8
// line start: 1667
// line end:   1668
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x800941D0
// line start: 1672
// line end:   1674
void MakeFname__C13CTextFileInfoPcPCc(struct CTextFileInfo *this, char *Dest, char *Ext) {
}


// address: 0x80094218
// line start: 1678
// line end:   1691
long GetFile__C13CTextFileInfoPcUl(struct CTextFileInfo *this, char *Ext, unsigned long RamId) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	register long hnd;
}


// address: 0x800942B8
// line start: 1696
// line end:   1711
bool HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x8009434C
// line start: 1743
// line end:   1785
void Un64__FPUcT0l(unsigned char *Src, unsigned char *Dest, long SizeBytes) {
	// register: 9
	register unsigned char *EndDest;
	// register: 7
	register unsigned long *BigDest;
	// register: 8
	register unsigned long Code;
	// register: 6
	register unsigned long Run;
	// register: 3
	register unsigned long BigCode;
}


// address: 0x80094420
// size: 0x7C
// line start: 1799
// line end:   1800
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x80094454
// line start: 1804
// line end:   1882
void Load__7CScreeniii(struct CScreen *this, int Id, int tpx, int tpy) {
	// register: 8
	register unsigned char r;
	// register: 5
	register unsigned char g;
	// register: 6
	register unsigned char b;
	{
		{
			// register: 16
			// size: 0xC
			register struct FRAME_HDR *Fr;
			// address: 0xFFFFFDE0
			// size: 0x8
			auto struct RECT R;
			// register: 18
			// size: 0x8
			register struct PAL *Pal;
			// address: 0xFFFFFDE8
			// size: 0x200
			auto unsigned short MyPal[256];
			{
				// register: 5
				register int i;
				{
					// register: 16
					register int i;
					{
						// register: 11
						register int nocols;
						{
							// register: 10
							register int v;
							{
								// register: 2
								register unsigned short c;
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


// address: 0x80094768
// line start: 1891
// line end:   1893
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x8009478C
// line start: 1897
// line end:   1926
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x80094A6C
// line start: 1934
// line end:   1942
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80094AE8
// line start: 1946
// line end:   1990
void GetBoundingBox__6CBlockR7TextDatR4RECT(struct CBlock *this, struct TextDat *TDat, struct RECT *R) {
	// register: 18
	register int left;
	// register: 22
	register int right;
	// register: 17
	register int top;
	// register: 21
	register int bottom;
	{
		{
			// address: 0xFFFFFFC8
			// size: 0x8
			auto struct RECT Pr;
			{
				// register: 16
				register unsigned int f;
			}
		}
	}
}


// address: 0x80094C44
// line start: 2021
// line end:   2021
void _GLOBAL__D_DatPool() {
}


// address: 0x80094C9C
// line start: 2021
// line end:   2021
void _GLOBAL__I_DatPool() {
}


