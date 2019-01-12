// C:\DIABPSX\GLIBDEV\SOURCE\GAL.C

#include "types.h"

// address: 0x800212D4
// line start: 175
// line end:   176
void GAL_SetErrorChecking(unsigned char OnOff);

// address: 0x800212E4
// line start: 195
// line end:   247
long GAL_SplitBlock(long CurBlock, unsigned long Size) {
	// register: 19
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 17
	// size: 0x1C
	register struct MEM_HDR *MemHdr;
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *SplitBlock;
}


// address: 0x80021404
// line start: 255
// line end:   277
void GAL_InitModule() {
	// register: 17
	register int f;
}


// address: 0x800214BC
// line start: 290
// line end:   360
unsigned char GAL_AddMemType(struct MEM_INIT_INFO *M) {
	// register: 4
	// size: 0x28
	register struct MEM_INIT_INFO *P;
	// register: 17
	// size: 0x1C
	register struct MEM_HDR *FreeMemHdr;
	// register: 5
	register unsigned long Addr1;
	// register: 3
	register unsigned long Addr2;
}


// address: 0x800215DC
// line start: 375
// line end:   452
long GAL_Alloc(unsigned long Size, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *Block;
	// register: 18
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 19
	register unsigned long FullSize;
	// register: 20
	// size: 0x1C
	register struct MEM_HDR *(*FRoute)();
	// register: 23
	register unsigned char High;
	{
	}
}


// address: 0x80021774
// line start: 466
// line end:   488
void *GAL_Lock(long Handle) {
	// register: 3
	// size: 0x1C
	register struct MEM_HDR *MemHdr;
}


// address: 0x800217DC
// line start: 501
// line end:   532
unsigned char GAL_Unlock(long Handle) {
	// register: 4
	// size: 0x1C
	register struct MEM_HDR *MemHdr;
}


// address: 0x80021860
// line start: 544
// line end:   583
unsigned char GAL_Free(long Handle) {
	// register: 16
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 17
	// size: 0x1C
	register struct MEM_HDR *MemHdr;
}


// address: 0x80021908
// line start: 596
// line end:   620
unsigned long GAL_GetFreeMem(unsigned long Type) {
	// register: 16
	register unsigned long FreeMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 3
		// size: 0x1C
		register struct MEM_HDR *Block;
	}
}


// address: 0x8002197C
// line start: 634
// line end:   658
unsigned long GAL_GetUsedMem(unsigned long Type) {
	// register: 16
	register unsigned long FreeMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 3
		// size: 0x1C
		register struct MEM_HDR *Block;
	}
}


// address: 0x800219F0
// line start: 673
// line end:   699
unsigned long GAL_LargestFreeBlock(unsigned long Type) {
	// register: 5
	register unsigned long Largest;
	// register: 3
	// size: 0x1C
	register struct MEM_HDR *Index;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *MI;
}


// address: 0x80021A6C
// line start: 711
// line end:   717
void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80021A8C
// line start: 731
// line end:   738
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80021AD8
// line start: 753
// line end:   766
unsigned char IsActiveValidHandle(long Handle) {
}


// address: 0x80021B10
// line start: 780
// line end:   790
void *AlignPtr(void *P, unsigned long Align) {
	// register: 4
	register unsigned long Addr;
	// register: 2
	register unsigned long Temp;
}


// address: 0x80021B40
// line start: 803
// line end:   804
unsigned long AlignSize(unsigned long Size, unsigned long Align);

// address: 0x80021B70
// size: 0x1C
// line start: 818
// line end:   843
struct MEM_HDR *FindClosestSizedBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x1C
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x1C
	register struct MEM_HDR *Index;
}


// address: 0x80021BC8
// size: 0x1C
// line start: 855
// line end:   888
struct MEM_HDR *FindHighestMemBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x1C
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x1C
	register struct MEM_HDR *Index;
	// register: 7
	register void *Highest;
}


// address: 0x80021C30
// size: 0x1C
// line start: 899
// line end:   934
struct MEM_HDR *FindLowestMemBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x1C
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x1C
	register struct MEM_HDR *Index;
	// register: 7
	register unsigned long Lowest;
}


// address: 0x80021C98
// size: 0x28
// line start: 946
// line end:   967
struct MEM_INIT_INFO *GetMemInitInfoBlockFromType(unsigned long Type) {
	// register: 3
	// size: 0x28
	register struct MEM_INIT_INFO *P;
}


// address: 0x80021CD4
// line start: 980
// line end:   1033
void MergeToEmptyList(struct MEM_INIT_INFO *MI, struct MEM_HDR *M) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *Index;
	// register: 18
	// size: 0x1C
	register struct MEM_HDR *NextIndex;
	// register: 19
	register void *Start;
	// register: 21
	register void *End;
	{
		// register: 2
		register void *ThisStart;
		// register: 4
		register void *ThisEnd;
	}
}


// address: 0x80021DA8
// line start: 1055
// line end:   1085
long GAL_AllocAt(unsigned long Size, void *Addr, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *Block;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80021E84
// line start: 1109
// line end:   1196
long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *SplitBlock;
	// register: 20
	register unsigned long PhysSize;
}


// address: 0x8002201C
// size: 0x1C
// line start: 1212
// line end:   1239
struct MEM_HDR *FindBlockInTheseBounds(struct MEM_HDR *Head, void *Addr, unsigned long Size) {
	// register: 4
	// size: 0x1C
	register struct MEM_HDR *Index;
	// register: 7
	register unsigned char Done;
	// register: 3
	register unsigned long ThisStart;
	// register: 2
	register unsigned long ThisEnd;
	// register: 5
	register unsigned long Start;
	// register: 6
	register unsigned long End;
}


// address: 0x80022088
// size: 0x1C
// line start: 1251
// line end:   1268
struct MEM_HDR *GetFreeMemHdrBlock() {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *RetBlock;
}


// address: 0x80022110
// line start: 1281
// line end:   1283
void ReleaseMemHdrBlock(struct MEM_HDR *Index);

// address: 0x80022150
// line start: 1295
// line end:   1315
void GAL_IterateEmptyMem(unsigned long MemType, void (*Func)()) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 16
		// size: 0x1C
		register struct MEM_HDR *Block;
	}
}


// address: 0x800221D4
// line start: 1325
// line end:   1345
void GAL_IterateUsedMem(unsigned long MemType, void (*Func)()) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 16
		// size: 0x1C
		register struct MEM_HDR *Block;
	}
}


// address: 0x80022270
// line start: 1356
// line end:   1360
unsigned char GAL_SetMemName(long Hnd, char *Text);

// address: 0x800222E0
// line start: 1380
// line end:   1394
unsigned long GAL_TotalMem(unsigned long Type) {
	// register: 16
	register unsigned long TotalMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80022334
// line start: 1408
// line end:   1424
void *GAL_MemBase(unsigned long Type) {
	// register: 16
	register void *Ret;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80022388
// line start: 1438
// line end:   1455
unsigned char GAL_DefragMem(unsigned long type) {
}


// address: 0x8002240C
// line start: 1468
// line end:   1473
unsigned char GSetError(enum GAL_ERROR_CODE Err);

// address: 0x80022468
// line start: 1488
// line end:   1540
unsigned char GAL_CheckMem(unsigned long Type) {
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *MemHdr;
	// register: 18
	register unsigned long TotalMem;
}


// address: 0x80022564
// line start: 1555
// line end:   1580
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *CheckHdr;
}


// address: 0x80022610
// line start: 1593
// line end:   1608
unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2) {
	// register: 5
	register unsigned long Addr1;
	// register: 6
	register unsigned long Addr2;
}


// address: 0x80022668
// line start: 1620
// line end:   1622
char *GAL_GetErrorText(enum GAL_ERROR_CODE Err);

// address: 0x80022698
// size: 0x4
// line start: 1635
// line end:   1636
enum GAL_ERROR_CODE GAL_GetLastErrorCode();

// address: 0x800226A8
// line start: 1647
// line end:   1648
char *GAL_GetLastErrorText();

// address: 0x800226D0
// line start: 1660
// line end:   1687
int GAL_HowManyEmptyRegions(unsigned long Type) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *m;
	// register: 3
	register int Count;
	{
		// register: 2
		// size: 0x1C
		register struct MEM_HDR *mh;
	}
}


// address: 0x80022738
// line start: 1697
// line end:   1722
int GAL_HowManyUsedRegions(unsigned long Type) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *m;
	// register: 3
	register int Count;
	{
		// register: 2
		// size: 0x1C
		register struct MEM_HDR *mh;
	}
}


// address: 0x800227A0
// line start: 1731
// line end:   1732
void GAL_SetTimeStamp(int Time);

// address: 0x800227B0
// line start: 1742
// line end:   1743
void GAL_IncTimeStamp();

// address: 0x800227D0
// line start: 1752
// line end:   1753
int GAL_GetTimeStamp();

// address: 0x800227E0
// line start: 1769
// line end:   1780
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *Mi;
}


// address: 0x80022830
// line start: 1800
// line end:   1805
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}


// address: 0x80022880
// line start: 1820
// line end:   1837
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	// register: 17
	register unsigned int TotalMem;
	// register: 18
	register int f;
}


// address: 0x8002292C
// line start: 1848
// line end:   1859
long GAL_GetSize(long hnd) {
}


// address: 0x80022988
// line start: 1873
// line end:   1965
unsigned char GazDefragMem(unsigned long MemType) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct MEM_HDR *LockedBlocks;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct MEM_REG Reg;
	{
		// register: 5
		// size: 0x1C
		register struct MEM_HDR *NewEmptyBlock;
		// address: 0xFFFFFFE4
		// size: 0x1C
		auto struct MEM_HDR *ListOfBlocksInRegion;
		// register: 18
		register unsigned long ShuffledSize;
		// register: 16
		register int GapSize;
	}
}


// address: 0x80022AF0
// line start: 1978
// line end:   2002
void PutBlocksInRegionIntoList(struct MEM_REG *Reg, struct MEM_HDR **ToList, struct MEM_HDR **FromList) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *ThisBlock;
	{
		// register: 17
		// size: 0x1C
		register struct MEM_HDR *NextBlock;
		// address: 0xFFFFFFE0
		// size: 0x8
		auto struct MEM_REG MemReg;
	}
}


// address: 0x80022B94
// line start: 2015
// line end:   2021
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2);

// address: 0x80022BC8
// line start: 2034
// line end:   2044
void DeleteEmptyBlocks(struct MEM_INIT_INFO *M) {
	{
		// register: 16
		// size: 0x1C
		register struct MEM_HDR *ThisBlock;
	}
}


// address: 0x80022C34
// line start: 2062
// line end:   2097
unsigned char GetRegion(struct MEM_REG *Reg, struct MEM_HDR *LockedBlocks, struct MEM_INIT_INFO *M) {
	// register: 3
	// size: 0x1C
	register struct MEM_HDR *FirstBlock;
	// register: 2
	// size: 0x1C
	register struct MEM_HDR *SecondBlock;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct MEM_REG NewReg;
}


// address: 0x80022D2C
// size: 0x1C
// line start: 2136
// line end:   2155
struct MEM_HDR *FindNextBlock(void *Addr, struct MEM_HDR *Blocks) {
	{
		// register: 2
		register unsigned long BlockAddr;
	}
}


// address: 0x80022D68
// line start: 2169
// line end:   2198
unsigned long ShuffleBlocks(struct MEM_HDR *Blocks, struct MEM_REG *Reg, struct MEM_INIT_INFO *M) {
	// register: 18
	register unsigned long NewSize;
	// register: 17
	register void *MemBase;
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *ThisBlock;
}


// address: 0x80022DF8
// line start: 2210
// line end:   2229
void PutAllLockedBlocksOntoList(struct MEM_HDR **ToHead, struct MEM_HDR **FromHead) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *CurHdr;
	{
		// register: 17
		// size: 0x1C
		register struct MEM_HDR *NextCurHdr;
	}
}


// address: 0x80022E74
// line start: 2242
// line end:   2292
void SortMemHdrListByAddr(struct MEM_HDR **Head) {
	// register: 7
	register unsigned char DidASwap;
	// register: 5
	// size: 0x1C
	register struct MEM_HDR *CurHdr;
	// register: 6
	// size: 0x1C
	register struct MEM_HDR *NextHdr;
	{
		// register: 3
		// size: 0x1C
		register struct MEM_HDR *OldPrev;
	}
}


// address: 0x80022F28
// line start: 2303
// line end:   2326
void GraftMemHdrList(struct MEM_HDR **ToList, struct MEM_HDR **FromList) {
	// register: 6
	// size: 0x1C
	register struct MEM_HDR *OldFirst;
	{
		// register: 3
		// size: 0x1C
		register struct MEM_HDR *LastHdr;
	}
}


// address: 0x80022F84
// line start: 2337
// line end:   2342
void GAL_MemDump(unsigned long Type);

// address: 0x80022FF8
// line start: 2356
// line end:   2357
void GAL_SetVerbosity(enum GAL_VERB_LEV G);

// address: 0x80023008
// line start: 2370
// line end:   2384
int CountFreeBlocks() {
	// register: 3
	// size: 0x1C
	register struct MEM_HDR *RetBlock;
	// register: 2
	register int Count;
}


// address: 0x80023034
// line start: 2396
// line end:   2408
void SetBlockName(struct MEM_HDR *MemHdr, char *NewName) {
	// register: 6
	register int IndexSoFar;
}


// address: 0x8002307C
// line start: 2417
// line end:   2418
int GAL_GetNumFreeHeaders();

// address: 0x8002308C
// line start: 2422
// line end:   2423
unsigned long GAL_GetLastTypeAlloced();

// address: 0x8002309C
// line start: 2433
// line end:   2440
void (*GAL_SetAllocFilter(void (*NewFilter)()))() {
	// register: 2
	register void (*OldFilter)();
}


// address: 0x800230B4
// line start: 2449
// line end:   2461
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80023108
// line start: 2464
// line end:   2465
unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x80023118
// line start: 2477
// line end:   2489
unsigned char GAL_SortUsedRegionsByAddress(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x8002316C
// line start: 2492
// line end:   2493
unsigned char SortAddr(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x8002317C
// line start: 2507
// line end:   2556
void SortMemHdrList(struct MEM_HDR **Head, unsigned char (*CompFunc)()) {
	// register: 18
	register unsigned char DidASwap;
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *CurHdr;
	// register: 17
	// size: 0x1C
	register struct MEM_HDR *NextHdr;
	{
		// register: 3
		// size: 0x1C
		register struct MEM_HDR *OldPrev;
	}
}


