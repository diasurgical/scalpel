// C:\DIABPSX\GLIBDEV\SOURCE\GAL.C

#include "types.h"

// address: 0x8002035C
// line start: 774
// line end:   784
void *AlignPtr(void *P, unsigned long Align) {
	// register: 4
	register unsigned long Addr;
	// register: 2
	register unsigned long Temp;
}


// address: 0x8002038C
// line start: 797
// line end:   798
unsigned long AlignSize(unsigned long Size, unsigned long Align);

// address: 0x80022610
// line start: 1593
// line end:   1608
unsigned char AreBlocksColliding(struct MEM_HDR_dup_17 *Hdr1, struct MEM_HDR_dup_17 *Hdr2) {
	// register: 5
	register unsigned long Addr1;
	// register: 6
	register unsigned long Addr2;
}


// address: 0x80020E54
// line start: 1587
// line end:   1602
unsigned char AreBlocksColliding_addr_80020E54(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2) {
	// register: 5
	register unsigned long Addr1;
	// register: 6
	register unsigned long Addr2;
}


// address: 0x80021A6C
// line start: 711
// line end:   717
void AttachHdrToList(struct MEM_HDR_dup_17 **Head, struct MEM_HDR_dup_17 *Block);

// address: 0x800202C0
// line start: 705
// line end:   711
void AttachHdrToList_addr_800202C0(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80020DA8
// line start: 1549
// line end:   1574
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CheckHdr;
}


// address: 0x80022564
// line start: 1555
// line end:   1580
unsigned char CheckCollisions_addr_80022564(struct MEM_INIT_INFO *M, struct MEM_HDR_dup_17 *MemHdr) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR_dup_17 *CheckHdr;
}


// address: 0x80022564
// line start: 1555
// line end:   1580
unsigned char CheckCollisions_addr_80022564(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *CheckHdr;
}


// address: 0x800213D0
// line start: 2009
// line end:   2015
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2);

// address: 0x80023008
// line start: 2370
// line end:   2384
int CountFreeBlocks() {
	// register: 3
	// size: 0x1C
	register struct MEM_HDR_dup_17 *RetBlock;
	// register: 2
	register int Count;
}


// address: 0x80021844
// line start: 2364
// line end:   2378
int CountFreeBlocks_addr_80021844() {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *RetBlock;
	// register: 2
	register int Count;
}


// address: 0x80023008
// line start: 2370
// line end:   2384
int CountFreeBlocks_addr_80023008() {
	// register: 3
	// size: 0x1C
	register struct MEM_HDR *RetBlock;
	// register: 2
	register int Count;
}


// address: 0x80021404
// line start: 2028
// line end:   2038
void DeleteEmptyBlocks(struct MEM_INIT_INFO *M) {
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *ThisBlock;
	}
}


// address: 0x80022BC8
// line start: 2034
// line end:   2044
void DeleteEmptyBlocks_addr_80022BC8(struct MEM_INIT_INFO *M) {
	{
		// register: 16
		// size: 0x1C
		register struct MEM_HDR *ThisBlock;
	}
}


// address: 0x80022BC8
// line start: 2034
// line end:   2044
void DeleteEmptyBlocks_addr_80022BC8(struct MEM_INIT_INFO *M) {
	{
		// register: 16
		// size: 0x1C
		register struct MEM_HDR_dup_17 *ThisBlock;
	}
}


// address: 0x800202E0
// line start: 725
// line end:   732
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80021A8C
// line start: 731
// line end:   738
void DetachHdrFromList_addr_80021A8C(struct MEM_HDR_dup_17 **Head, struct MEM_HDR_dup_17 *Block);

// address: 0x8002201C
// size: 0x1C
// line start: 1212
// line end:   1239
struct MEM_HDR_dup_17 *FindBlockInTheseBounds(struct MEM_HDR_dup_17 *Head, void *Addr, unsigned long Size) {
	// register: 4
	// size: 0x1C
	register struct MEM_HDR_dup_17 *Index;
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


// address: 0x80020868
// size: 0x20
// line start: 1206
// line end:   1233
struct MEM_HDR *FindBlockInTheseBounds_addr_80020868(struct MEM_HDR *Head, void *Addr, unsigned long Size) {
	// register: 4
	// size: 0x20
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


// address: 0x8002201C
// size: 0x1C
// line start: 1212
// line end:   1239
struct MEM_HDR *FindBlockInTheseBounds_addr_8002201C(struct MEM_HDR *Head, void *Addr, unsigned long Size) {
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


// address: 0x800203BC
// size: 0x20
// line start: 812
// line end:   837
struct MEM_HDR *FindClosestSizedBlock_addr_800203BC(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
}


// address: 0x80021B70
// size: 0x1C
// line start: 818
// line end:   843
struct MEM_HDR_dup_17 *FindClosestSizedBlock_addr_80021B70(struct MEM_HDR_dup_17 *Head, unsigned long Size) {
	// register: 6
	// size: 0x1C
	register struct MEM_HDR_dup_17 *Closest;
	// register: 4
	// size: 0x1C
	register struct MEM_HDR_dup_17 *Index;
}


// address: 0x80021BC8
// size: 0x1C
// line start: 855
// line end:   888
struct MEM_HDR_dup_17 *FindHighestMemBlock(struct MEM_HDR_dup_17 *Head, unsigned long Size) {
	// register: 6
	// size: 0x1C
	register struct MEM_HDR_dup_17 *Closest;
	// register: 4
	// size: 0x1C
	register struct MEM_HDR_dup_17 *Index;
	// register: 7
	register void *Highest;
}


// address: 0x80020414
// size: 0x20
// line start: 849
// line end:   882
struct MEM_HDR *FindHighestMemBlock_addr_80020414(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 7
	register void *Highest;
}


// address: 0x80021BC8
// size: 0x1C
// line start: 855
// line end:   888
struct MEM_HDR *FindHighestMemBlock_addr_80021BC8(struct MEM_HDR *Head, unsigned long Size) {
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
struct MEM_HDR_dup_17 *FindLowestMemBlock(struct MEM_HDR_dup_17 *Head, unsigned long Size) {
	// register: 6
	// size: 0x1C
	register struct MEM_HDR_dup_17 *Closest;
	// register: 4
	// size: 0x1C
	register struct MEM_HDR_dup_17 *Index;
	// register: 7
	register unsigned long Lowest;
}


// address: 0x80021C30
// size: 0x1C
// line start: 899
// line end:   934
struct MEM_HDR *FindLowestMemBlock_addr_80021C30(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x1C
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x1C
	register struct MEM_HDR *Index;
	// register: 7
	register unsigned long Lowest;
}


// address: 0x8002047C
// size: 0x20
// line start: 893
// line end:   928
struct MEM_HDR *FindLowestMemBlock_addr_8002047C(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 7
	register unsigned long Lowest;
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


// address: 0x80022D2C
// size: 0x1C
// line start: 2136
// line end:   2155
struct MEM_HDR_dup_17 *FindNextBlock_addr_80022D2C(void *Addr, struct MEM_HDR_dup_17 *Blocks) {
	{
		// register: 2
		register unsigned long BlockAddr;
	}
}


// address: 0x80021568
// size: 0x20
// line start: 2130
// line end:   2149
struct MEM_HDR *FindNextBlock_addr_80021568(void *Addr, struct MEM_HDR *Blocks) {
	{
		// register: 2
		register unsigned long BlockAddr;
	}
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


// address: 0x800214BC
// line start: 290
// line end:   360
unsigned char GAL_AddMemType_addr_800214BC(struct MEM_INIT_INFO *M) {
	// register: 4
	// size: 0x28
	register struct MEM_INIT_INFO *P;
	// register: 17
	// size: 0x1C
	register struct MEM_HDR_dup_17 *FreeMemHdr;
	// register: 5
	register unsigned long Addr1;
	// register: 3
	register unsigned long Addr2;
}


// address: 0x8001FD28
// line start: 284
// line end:   354
unsigned char GAL_AddMemType_addr_8001FD28(struct MEM_INIT_INFO *M) {
	// register: 4
	// size: 0x28
	register struct MEM_INIT_INFO *P;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *FreeMemHdr;
	// register: 5
	register unsigned long Addr1;
	// register: 3
	register unsigned long Addr2;
}


// address: 0x80021024
// line start: 1763
// line end:   1774
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *Mi;
}


// address: 0x800215DC
// line start: 375
// line end:   452
long GAL_Alloc(unsigned long Size, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR_dup_17 *Block;
	// register: 18
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 19
	register unsigned long FullSize;
	// register: 20
	// size: 0x1C
	register struct MEM_HDR_dup_17 *(*FRoute)();
	// register: 23
	register unsigned char High;
	{
	}
}


// address: 0x800215DC
// line start: 375
// line end:   452
long GAL_Alloc_addr_800215DC(unsigned long Size, unsigned long Type, char *Name) {
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


// address: 0x8001FE48
// line start: 369
// line end:   446
long GAL_Alloc_addr_8001FE48(unsigned long Size, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *Block;
	// register: 18
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 19
	register unsigned long FullSize;
	// register: 20
	// size: 0x20
	register struct MEM_HDR *(*FRoute)();
	// register: 23
	register unsigned char High;
	{
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


// address: 0x80021DA8
// line start: 1055
// line end:   1085
long GAL_AllocAt_addr_80021DA8(unsigned long Size, void *Addr, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR_dup_17 *Block;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x800205F4
// line start: 1049
// line end:   1079
long GAL_AllocAt_addr_800205F4(unsigned long Size, void *Addr, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *Block;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80021074
// line start: 1794
// line end:   1799
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}


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


// address: 0x80022468
// line start: 1488
// line end:   1540
unsigned char GAL_CheckMem_addr_80022468(unsigned long Type) {
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 16
	// size: 0x1C
	register struct MEM_HDR_dup_17 *MemHdr;
	// register: 18
	register unsigned long TotalMem;
}


// address: 0x80020CAC
// line start: 1482
// line end:   1534
unsigned char GAL_CheckMem_addr_80020CAC(unsigned long Type) {
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *MemHdr;
	// register: 18
	register unsigned long TotalMem;
}


// address: 0x80020BCC
// line start: 1432
// line end:   1449
unsigned char GAL_DefragMem(unsigned long type) {
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


// address: 0x80021860
// line start: 544
// line end:   583
unsigned char GAL_Free_addr_80021860(long Handle) {
	// register: 16
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 17
	// size: 0x1C
	register struct MEM_HDR_dup_17 *MemHdr;
}


// address: 0x800200BC
// line start: 538
// line end:   577
unsigned char GAL_Free_addr_800200BC(long Handle) {
	// register: 16
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x80020EAC
// line start: 1614
// line end:   1616
char *GAL_GetErrorText(enum GAL_ERROR_CODE Err);

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


// address: 0x8002015C
// line start: 590
// line end:   614
unsigned long GAL_GetFreeMem_addr_8002015C(unsigned long Type) {
	// register: 16
	register unsigned long FreeMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *Block;
	}
}


// address: 0x80021908
// line start: 596
// line end:   620
unsigned long GAL_GetFreeMem_addr_80021908(unsigned long Type) {
	// register: 16
	register unsigned long FreeMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 3
		// size: 0x1C
		register struct MEM_HDR_dup_17 *Block;
	}
}


// address: 0x80020EDC
// size: 0x4
// line start: 1629
// line end:   1630
enum GAL_ERROR_CODE GAL_GetLastErrorCode();

// address: 0x80020EEC
// line start: 1641
// line end:   1642
char *GAL_GetLastErrorText();

// address: 0x800218C8
// line start: 2416
// line end:   2417
unsigned long GAL_GetLastTypeAlloced();

// address: 0x800218B8
// line start: 2411
// line end:   2412
int GAL_GetNumFreeHeaders();

// address: 0x80021170
// line start: 1842
// line end:   1853
long GAL_GetSize(long hnd) {
}


// address: 0x80021014
// line start: 1746
// line end:   1747
int GAL_GetTimeStamp();

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
		register struct MEM_HDR_dup_17 *Block;
	}
}


// address: 0x800201D0
// line start: 628
// line end:   652
unsigned long GAL_GetUsedMem_addr_800201D0(unsigned long Type) {
	// register: 16
	register unsigned long FreeMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *Block;
	}
}


// address: 0x8002197C
// line start: 634
// line end:   658
unsigned long GAL_GetUsedMem_addr_8002197C(unsigned long Type) {
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
		register struct MEM_HDR_dup_17 *mh;
	}
}


// address: 0x800226D0
// line start: 1660
// line end:   1687
int GAL_HowManyEmptyRegions_addr_800226D0(unsigned long Type) {
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


// address: 0x80020F14
// line start: 1654
// line end:   1681
int GAL_HowManyEmptyRegions_addr_80020F14(unsigned long Type) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *m;
	// register: 3
	register int Count;
	{
		// register: 2
		// size: 0x20
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
		register struct MEM_HDR_dup_17 *mh;
	}
}


// address: 0x80020F7C
// line start: 1691
// line end:   1716
int GAL_HowManyUsedRegions_addr_80020F7C(unsigned long Type) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *m;
	// register: 3
	register int Count;
	{
		// register: 2
		// size: 0x20
		register struct MEM_HDR *mh;
	}
}


// address: 0x80022738
// line start: 1697
// line end:   1722
int GAL_HowManyUsedRegions_addr_80022738(unsigned long Type) {
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


// address: 0x80020FF4
// line start: 1736
// line end:   1737
void GAL_IncTimeStamp();

// address: 0x8001FC70
// line start: 249
// line end:   271
void GAL_InitModule() {
	// register: 17
	register int f;
}


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
		register struct MEM_HDR_dup_17 *Block;
	}
}


// address: 0x8002099C
// line start: 1289
// line end:   1309
void GAL_IterateEmptyMem_addr_8002099C(unsigned long MemType, void (*Func)()) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *Block;
	}
}


// address: 0x80022150
// line start: 1295
// line end:   1315
void GAL_IterateEmptyMem_addr_80022150(unsigned long MemType, void (*Func)()) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 16
		// size: 0x1C
		register struct MEM_HDR *Block;
	}
}


// address: 0x80020A20
// line start: 1319
// line end:   1339
void GAL_IterateUsedMem(unsigned long MemType, void (*Func)()) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *Block;
	}
}


// address: 0x800221D4
// line start: 1325
// line end:   1345
void GAL_IterateUsedMem_addr_800221D4(unsigned long MemType, void (*Func)()) {
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
void GAL_IterateUsedMem_addr_800221D4(unsigned long MemType, void (*Func)()) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 16
		// size: 0x1C
		register struct MEM_HDR_dup_17 *Block;
	}
}


// address: 0x80020244
// line start: 667
// line end:   693
unsigned long GAL_LargestFreeBlock(unsigned long Type) {
	// register: 5
	register unsigned long Largest;
	// register: 3
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *MI;
}


// address: 0x800219F0
// line start: 673
// line end:   699
unsigned long GAL_LargestFreeBlock_addr_800219F0(unsigned long Type) {
	// register: 5
	register unsigned long Largest;
	// register: 3
	// size: 0x1C
	register struct MEM_HDR *Index;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *MI;
}


// address: 0x800219F0
// line start: 673
// line end:   699
unsigned long GAL_LargestFreeBlock_addr_800219F0(unsigned long Type) {
	// register: 5
	register unsigned long Largest;
	// register: 3
	// size: 0x1C
	register struct MEM_HDR_dup_17 *Index;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *MI;
}


// address: 0x8001FFE0
// line start: 460
// line end:   482
void *GAL_Lock(long Handle) {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x80021774
// line start: 466
// line end:   488
void *GAL_Lock_addr_80021774(long Handle) {
	// register: 3
	// size: 0x1C
	register struct MEM_HDR *MemHdr;
}


// address: 0x80021774
// line start: 466
// line end:   488
void *GAL_Lock_addr_80021774(long Handle) {
	// register: 3
	// size: 0x1C
	register struct MEM_HDR_dup_17 *MemHdr;
}


// address: 0x80020B78
// line start: 1402
// line end:   1418
void *GAL_MemBase(unsigned long Type) {
	// register: 16
	register void *Ret;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x800217C0
// line start: 2331
// line end:   2336
void GAL_MemDump(unsigned long Type);

// address: 0x800210C4
// line start: 1814
// line end:   1831
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	// register: 17
	register unsigned int TotalMem;
	// register: 18
	register int f;
}


// address: 0x800218D8
// line start: 2427
// line end:   2434
void (*GAL_SetAllocFilter(void (*NewFilter)()))() {
	// register: 2
	register void (*OldFilter)();
}


// address: 0x8001FB2C
// line start: 170
// line end:   171
void GAL_SetErrorChecking(unsigned char OnOff);

// address: 0x80020ABC
// line start: 1350
// line end:   1354
unsigned char GAL_SetMemName(long Hnd, char *Text);

// address: 0x80020FE4
// line start: 1725
// line end:   1726
void GAL_SetTimeStamp(int Time);

// address: 0x80021834
// line start: 2350
// line end:   2351
void GAL_SetVerbosity(enum GAL_VERB_LEV G);

// address: 0x80023118
// line start: 2477
// line end:   2489
unsigned char GAL_SortUsedRegionsByAddress(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x800218F0
// line start: 2443
// line end:   2455
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x8001FB3C
// line start: 190
// line end:   241
long GAL_SplitBlock(long CurBlock, unsigned long Size) {
	// register: 19
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *MemHdr;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *SplitBlock;
}


// address: 0x800212E4
// line start: 195
// line end:   247
long GAL_SplitBlock_addr_800212E4(long CurBlock, unsigned long Size) {
	// register: 19
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 17
	// size: 0x1C
	register struct MEM_HDR_dup_17 *MemHdr;
	// register: 16
	// size: 0x1C
	register struct MEM_HDR_dup_17 *SplitBlock;
}


// address: 0x800212E4
// line start: 195
// line end:   247
long GAL_SplitBlock_addr_800212E4(long CurBlock, unsigned long Size) {
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


// address: 0x800210B8
// line start: 194
// line end:   245
long GAL_SplitBlock_addr_800210B8(long CurBlock, unsigned long Size) {
	// register: 19
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *MemHdr;
	// register: 17
	// size: 0x1C
	register struct MEM_HDR *SplitBlock;
}


// address: 0x80020B24
// line start: 1374
// line end:   1388
unsigned long GAL_TotalMem(unsigned long Type) {
	// register: 16
	register unsigned long TotalMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020040
// line start: 495
// line end:   526
unsigned char GAL_Unlock(long Handle) {
	// register: 4
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x800217DC
// line start: 501
// line end:   532
unsigned char GAL_Unlock_addr_800217DC(long Handle) {
	// register: 4
	// size: 0x1C
	register struct MEM_HDR *MemHdr;
}


// address: 0x800217DC
// line start: 501
// line end:   532
unsigned char GAL_Unlock_addr_800217DC(long Handle) {
	// register: 4
	// size: 0x1C
	register struct MEM_HDR_dup_17 *MemHdr;
}


// address: 0x80020C50
// line start: 1462
// line end:   1467
unsigned char GSetError(enum GAL_ERROR_CODE Err);

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


// address: 0x800211C4
// line start: 1867
// line end:   1959
unsigned char GazDefragMem_addr_800211C4(unsigned long MemType) {
	// address: 0xFFFFFFE0
	// size: 0x20
	auto struct MEM_HDR *LockedBlocks;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct MEM_REG Reg;
	{
		// register: 5
		// size: 0x20
		register struct MEM_HDR *NewEmptyBlock;
		// address: 0xFFFFFFE4
		// size: 0x20
		auto struct MEM_HDR *ListOfBlocksInRegion;
		// register: 18
		register unsigned long ShuffledSize;
		// register: 16
		register int GapSize;
	}
}


// address: 0x80022988
// line start: 1873
// line end:   1965
unsigned char GazDefragMem_addr_80022988(unsigned long MemType) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct MEM_HDR_dup_17 *LockedBlocks;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct MEM_REG Reg;
	{
		// register: 5
		// size: 0x1C
		register struct MEM_HDR_dup_17 *NewEmptyBlock;
		// address: 0xFFFFFFE4
		// size: 0x1C
		auto struct MEM_HDR_dup_17 *ListOfBlocksInRegion;
		// register: 18
		register unsigned long ShuffledSize;
		// register: 16
		register int GapSize;
	}
}


// address: 0x800208D4
// size: 0x20
// line start: 1245
// line end:   1262
struct MEM_HDR *GetFreeMemHdrBlock() {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *RetBlock;
}


// address: 0x80022088
// size: 0x1C
// line start: 1251
// line end:   1268
struct MEM_HDR *GetFreeMemHdrBlock_addr_80022088() {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *RetBlock;
}


// address: 0x80022088
// size: 0x1C
// line start: 1251
// line end:   1268
struct MEM_HDR_dup_17 *GetFreeMemHdrBlock_addr_80022088() {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR_dup_17 *RetBlock;
}


// address: 0x800204E4
// size: 0x28
// line start: 940
// line end:   961
struct MEM_INIT_INFO *GetMemInitInfoBlockFromType(unsigned long Type) {
	// register: 3
	// size: 0x28
	register struct MEM_INIT_INFO *P;
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


// address: 0x80021470
// line start: 2056
// line end:   2091
unsigned char GetRegion_addr_80021470(struct MEM_REG *Reg, struct MEM_HDR *LockedBlocks, struct MEM_INIT_INFO *M) {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *FirstBlock;
	// register: 2
	// size: 0x20
	register struct MEM_HDR *SecondBlock;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct MEM_REG NewReg;
}


// address: 0x80022C34
// line start: 2062
// line end:   2097
unsigned char GetRegion_addr_80022C34(struct MEM_REG *Reg, struct MEM_HDR_dup_17 *LockedBlocks, struct MEM_INIT_INFO *M) {
	// register: 3
	// size: 0x1C
	register struct MEM_HDR_dup_17 *FirstBlock;
	// register: 2
	// size: 0x1C
	register struct MEM_HDR_dup_17 *SecondBlock;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct MEM_REG NewReg;
}


// address: 0x80022F28
// line start: 2303
// line end:   2326
void GraftMemHdrList(struct MEM_HDR_dup_17 **ToList, struct MEM_HDR_dup_17 **FromList) {
	// register: 6
	// size: 0x1C
	register struct MEM_HDR_dup_17 *OldFirst;
	{
		// register: 3
		// size: 0x1C
		register struct MEM_HDR_dup_17 *LastHdr;
	}
}


// address: 0x80022F28
// line start: 2303
// line end:   2326
void GraftMemHdrList_addr_80022F28(struct MEM_HDR **ToList, struct MEM_HDR **FromList) {
	// register: 6
	// size: 0x1C
	register struct MEM_HDR *OldFirst;
	{
		// register: 3
		// size: 0x1C
		register struct MEM_HDR *LastHdr;
	}
}


// address: 0x80021764
// line start: 2297
// line end:   2320
void GraftMemHdrList_addr_80021764(struct MEM_HDR **ToList, struct MEM_HDR **FromList) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *OldFirst;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *LastHdr;
	}
}


// address: 0x8002032C
// line start: 747
// line end:   760
unsigned char IsActiveValidHandle(long Handle) {
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


// address: 0x800206D0
// line start: 1103
// line end:   1190
long LoAlloc_addr_800206D0(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *SplitBlock;
	// register: 20
	register unsigned long PhysSize;
}


// address: 0x80021E84
// line start: 1109
// line end:   1196
long LoAlloc_addr_80021E84(struct MEM_INIT_INFO *M, struct MEM_HDR_dup_17 *Block, void *Addr, unsigned long Size, char *Name) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR_dup_17 *SplitBlock;
	// register: 20
	register unsigned long PhysSize;
}


// address: 0x80021CD4
// line start: 980
// line end:   1033
void MergeToEmptyList(struct MEM_INIT_INFO *MI, struct MEM_HDR_dup_17 *M) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR_dup_17 *Index;
	// register: 18
	// size: 0x1C
	register struct MEM_HDR_dup_17 *NextIndex;
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


// address: 0x80021CD4
// line start: 980
// line end:   1033
void MergeToEmptyList_addr_80021CD4(struct MEM_INIT_INFO *MI, struct MEM_HDR *M) {
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


// address: 0x80020520
// line start: 974
// line end:   1027
void MergeToEmptyList_addr_80020520(struct MEM_INIT_INFO *MI, struct MEM_HDR *M) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 18
	// size: 0x20
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


// address: 0x80022DF8
// line start: 2210
// line end:   2229
void PutAllLockedBlocksOntoList(struct MEM_HDR_dup_17 **ToHead, struct MEM_HDR_dup_17 **FromHead) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR_dup_17 *CurHdr;
	{
		// register: 17
		// size: 0x1C
		register struct MEM_HDR_dup_17 *NextCurHdr;
	}
}


// address: 0x80021634
// line start: 2204
// line end:   2223
void PutAllLockedBlocksOntoList_addr_80021634(struct MEM_HDR **ToHead, struct MEM_HDR **FromHead) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CurHdr;
	{
		// register: 17
		// size: 0x20
		register struct MEM_HDR *NextCurHdr;
	}
}


// address: 0x80022DF8
// line start: 2210
// line end:   2229
void PutAllLockedBlocksOntoList_addr_80022DF8(struct MEM_HDR **ToHead, struct MEM_HDR **FromHead) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *CurHdr;
	{
		// register: 17
		// size: 0x1C
		register struct MEM_HDR *NextCurHdr;
	}
}


// address: 0x8002132C
// line start: 1972
// line end:   1996
void PutBlocksInRegionIntoList(struct MEM_REG *Reg, struct MEM_HDR **ToList, struct MEM_HDR **FromList) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *ThisBlock;
	{
		// register: 17
		// size: 0x20
		register struct MEM_HDR *NextBlock;
		// address: 0xFFFFFFE0
		// size: 0x8
		auto struct MEM_REG MemReg;
	}
}


// address: 0x80022AF0
// line start: 1978
// line end:   2002
void PutBlocksInRegionIntoList_addr_80022AF0(struct MEM_REG *Reg, struct MEM_HDR **ToList, struct MEM_HDR **FromList) {
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


// address: 0x80022AF0
// line start: 1978
// line end:   2002
void PutBlocksInRegionIntoList_addr_80022AF0(struct MEM_REG *Reg, struct MEM_HDR_dup_17 **ToList, struct MEM_HDR_dup_17 **FromList) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR_dup_17 *ThisBlock;
	{
		// register: 17
		// size: 0x1C
		register struct MEM_HDR_dup_17 *NextBlock;
		// address: 0xFFFFFFE0
		// size: 0x8
		auto struct MEM_REG MemReg;
	}
}


// address: 0x80022110
// line start: 1281
// line end:   1283
void ReleaseMemHdrBlock(struct MEM_HDR_dup_17 *Index);

// address: 0x8002095C
// line start: 1275
// line end:   1277
void ReleaseMemHdrBlock_addr_8002095C(struct MEM_HDR *Index);

// address: 0x80021870
// line start: 2390
// line end:   2402
void SetBlockName(struct MEM_HDR *MemHdr, char *NewName) {
	// register: 6
	register int IndexSoFar;
}


// address: 0x80023034
// line start: 2396
// line end:   2408
void SetBlockName_addr_80023034(struct MEM_HDR_dup_17 *MemHdr, char *NewName) {
	// register: 6
	register int IndexSoFar;
}


// address: 0x80022D68
// line start: 2169
// line end:   2198
unsigned long ShuffleBlocks(struct MEM_HDR_dup_17 *Blocks, struct MEM_REG *Reg, struct MEM_INIT_INFO *M) {
	// register: 18
	register unsigned long NewSize;
	// register: 17
	register void *MemBase;
	// register: 16
	// size: 0x1C
	register struct MEM_HDR_dup_17 *ThisBlock;
}


// address: 0x800215A4
// line start: 2163
// line end:   2192
unsigned long ShuffleBlocks_addr_800215A4(struct MEM_HDR *Blocks, struct MEM_REG *Reg, struct MEM_INIT_INFO *M) {
	// register: 18
	register unsigned long NewSize;
	// register: 17
	register void *MemBase;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *ThisBlock;
}


// address: 0x80022D68
// line start: 2169
// line end:   2198
unsigned long ShuffleBlocks_addr_80022D68(struct MEM_HDR *Blocks, struct MEM_REG *Reg, struct MEM_INIT_INFO *M) {
	// register: 18
	register unsigned long NewSize;
	// register: 17
	register void *MemBase;
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *ThisBlock;
}


// address: 0x8002316C
// line start: 2492
// line end:   2493
unsigned char SortAddr(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x8002316C
// line start: 2492
// line end:   2493
unsigned char SortAddr_addr_8002316C(struct MEM_HDR_dup_17 *B1, struct MEM_HDR_dup_17 *B2);

// address: 0x80021954
// line start: 2472
// line end:   2521
void SortMemHdrList(struct MEM_HDR **Head, unsigned char (*CompFunc)()) {
	// register: 18
	register unsigned char DidASwap;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CurHdr;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *NextHdr;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *OldPrev;
	}
}


// address: 0x8002317C
// line start: 2507
// line end:   2556
void SortMemHdrList_addr_8002317C(struct MEM_HDR_dup_17 **Head, unsigned char (*CompFunc)()) {
	// register: 18
	register unsigned char DidASwap;
	// register: 16
	// size: 0x1C
	register struct MEM_HDR_dup_17 *CurHdr;
	// register: 17
	// size: 0x1C
	register struct MEM_HDR_dup_17 *NextHdr;
	{
		// register: 3
		// size: 0x1C
		register struct MEM_HDR_dup_17 *OldPrev;
	}
}


// address: 0x8002317C
// line start: 2507
// line end:   2556
void SortMemHdrList_addr_8002317C(struct MEM_HDR **Head, unsigned char (*CompFunc)()) {
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


// address: 0x80022E74
// line start: 2242
// line end:   2292
void SortMemHdrListByAddr(struct MEM_HDR_dup_17 **Head) {
	// register: 7
	register unsigned char DidASwap;
	// register: 5
	// size: 0x1C
	register struct MEM_HDR_dup_17 *CurHdr;
	// register: 6
	// size: 0x1C
	register struct MEM_HDR_dup_17 *NextHdr;
	{
		// register: 3
		// size: 0x1C
		register struct MEM_HDR_dup_17 *OldPrev;
	}
}


// address: 0x80022E74
// line start: 2242
// line end:   2292
void SortMemHdrListByAddr_addr_80022E74(struct MEM_HDR **Head) {
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


// address: 0x800216B0
// line start: 2236
// line end:   2286
void SortMemHdrListByAddr_addr_800216B0(struct MEM_HDR **Head) {
	// register: 7
	register unsigned char DidASwap;
	// register: 5
	// size: 0x20
	register struct MEM_HDR *CurHdr;
	// register: 6
	// size: 0x20
	register struct MEM_HDR *NextHdr;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *OldPrev;
	}
}


// address: 0x80023108
// line start: 2464
// line end:   2465
unsigned char SortSize(struct MEM_HDR_dup_17 *B1, struct MEM_HDR_dup_17 *B2);

// address: 0x80021944
// line start: 2458
// line end:   2459
unsigned char SortSize_addr_80021944(struct MEM_HDR *B1, struct MEM_HDR *B2);

