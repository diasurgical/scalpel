// C:\diabpsx\PSXSRC\BLOCK.CPP

#include "types.h"

// address: 0x80084BF8
// line start: 234
// line end:   240
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x80084C38
// line start: 245
// line end:   274
void CycleSelCols__Fv() {
}


// address: 0x80084DC8
// line start: 282
// line end:   290
int FindTownCreature__7CBlocksi(struct CBlocks *this, int GameEqu) {
	{
		// register: 17
		register unsigned int f;
		{
			// register: 2
			register int Creature;
		}
	}
}


// address: 0x80084E3C
// line start: 299
// line end:   305
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80084E90
// size: 0xE0
// line start: 314
// line end:   368
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x80084FE4
// line start: 378
// line end:   380
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008501C
// line start: 389
// line end:   400
void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List) {
	// register: 16
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	// size: 0x10
	register struct MonstList *MList;
}


// address: 0x800850E4
// line start: 410
// line end:   422
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x8008516C
// line start: 432
// line end:   439
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x800851D4
// line start: 448
// line end:   455
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x8008523C
// line start: 465
// line end:   470
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x80085298
// line start: 480
// line end:   486
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x800852E8
// line start: 494
// line end:   529
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x80085634
// line start: 540
// line end:   550
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x800856E0
// line start: 561
// line end:   572
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x800857B4
// line start: 582
// line end:   593
void MakeGt4Table__7CBlocks(struct CBlocks *this) {
	{
		// register: 17
		register unsigned int f;
		{
			// address: 0xFFFFFFB8
			// size: 0x34
			auto struct POLY_GT4 ThisGt4;
		}
	}
}


// address: 0x800858BC
// line start: 603
// line end:   661
void MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(struct CBlocks *this, struct POLY_GT4 *GT4, struct FRAME_HDR *Fr) {
	// register: 3
	register int W;
	// register: 2
	register int Rotated;
	// register: 9
	register int Tpage;
	// register: 4
	register int zU;
	// register: 7
	register int zV;
	// register: 6
	register int zW;
	// register: 8
	register int zH;
}


// address: 0x800859F8
// size: 0xC
// line start: 671
// line end:   673
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x80085A70
// line start: 684
// line end:   685
void Print__7CBlocks(struct CBlocks *this) {
}


// address: 0x80085A98
// line start: 695
// line end:   698
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x80085AC0
// line start: 708
// line end:   710
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x80085AD8
// line start: 752
// line end:   1210
void PrintMap__7CBlocksii(struct CBlocks *this, int x, int y) {
	// address: 0xFFFFFF10
	auto int XPos;
	// address: 0xFFFFFF18
	auto int YPos;
	// address: 0xFFFFFF20
	auto int xx;
	// address: 0xFFFFFF28
	auto int block_trans;
	// address: 0xFFFFFF30
	auto unsigned short nlval1;
	// address: 0xFFFFFF38
	auto int BlankBlock;
	// register: 16
	register int XPix;
	// register: 17
	register int YPix;
	// address: 0xFFFFFF40
	auto int CLeft;
	// address: 0xFFFFFF48
	auto int CRight;
	// address: 0xFFFFFF50
	auto int CTop;
	// address: 0xFFFFFF58
	auto int CBottom;
	{
		// address: 0xFFFFFF60
		auto int ThisY;
		// address: 0xFFFFFF68
		auto int OtPos;
		// address: 0xFFFFFF70
		auto int ThisXPos;
		// register: 8
		register int ThisYPos;
		// address: 0xFFFFFF78
		auto int Height;
		{
			// register: 23
			// size: 0x8
			register struct CPart *Parts;
			// register: 5
			// size: 0xC
			register struct CBlock *MyBlock;
			// register: 16
			register int BlockNum;
			// address: 0xFFFFFF80
			auto bool Hi;
			{
				{
					// register: 7
					register int bx;
					// register: 3
					register int by;
					{
						{
							{
								{
									{
										{
											{
												// register: 11
												register int MyOt;
												// register: 16
												// size: 0x8
												register struct RECT *BlockR;
												// register: 4
												register int clipx;
												// register: 3
												register int clipy;
												{
													{
														// register: 13
														register int NumOfParts;
														{
															// register: 12
															register int f;
															{
																// register: 18
																register int X;
																// register: 16
																register int Y;
																// register: 19
																register int W;
																// register: 20
																register int H;
																// address: 0xFFFFFEF8
																// size: 0x34
																auto struct POLY_GT4 *DestGt4;
																{
																	{
																		// register: 17
																		// size: 0x10
																		register struct LittleGt4 *ThisGt4;
																		{
																			{
																				{
																					// address: 0xFFFFFF88
																					auto int MyOt;
																					// register: 16
																					// size: 0x8
																					register struct RECT *BlockR;
																					// register: 4
																					register int clipx;
																					// register: 3
																					register int clipy;
																					{
																						{
																							// register: 10
																							register int NumOfParts;
																							{
																								// register: 22
																								register int f;
																								{
																									// register: 18
																									register int X;
																									// register: 17
																									register int Y;
																									// register: 19
																									register int W;
																									// register: 20
																									register int H;
																									// address: 0xFFFFFEFC
																									// size: 0x34
																									auto struct POLY_GT4 *DestGt4;
																									{
																										{
																											// register: 16
																											// size: 0x10
																											register struct LittleGt4 *ThisGt4;
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


// address: 0x80086FD8
// line start: 1222
// line end:   1245
void PrintGameSprites__7CBlocksiiiii(struct CBlocks *this, int ThisXPos, int ThisYPos, int OtPos, int ScrX, int ScrY) {
	// register: 17
	// size: 0xC
	register struct map_info *p1;
	// register: 18
	// size: 0xC
	register struct map_info *p2;
	// register: 16
	// size: 0xC
	register struct map_info *p3;
}


// address: 0x80087148
// line start: 1255
// line end:   1625
void PrintGameSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks *this, struct map_info *piece, int OtPos, int ScrX, int ScrY, int R, int G, int B) {
	// register: 30
	register int nMonster;
	// register: 20
	register int bItem;
	// register: 2
	register int bObject;
	// register: 21
	register int bFlags;
	// address: 0xFFFFFFB0
	auto int vFlags;
	// address: 0xFFFFFFB8
	auto int bDead;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *ShadFt4;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			// register: 16
			// size: 0x6C
			register struct TextDat *ObjDat;
			{
				{
					// register: 18
					register int ObjIndex;
					// register: 17
					// size: 0x2C
					register struct ObjectStruct *OStr;
					// register: 2
					register int LoadIndex;
					// register: 3
					register int TexDat;
					{
						{
							// register: 5
							register int Col;
							{
								{
									// register: 2
									register int gnMI;
									{
										{
											// register: 5
											register int ScrXOff;
											// register: 6
											register int ScrYOff;
											{
												{
													// register: 16
													// size: 0x94
													register struct ItemStruct *pItem;
													{
														{
															// register: 23
															// size: 0xC
															register struct FRAME_HDR *Fr;
															// register: 18
															register int W;
															// register: 19
															register int H;
															// register: 4
															register short height;
															{
																{
																	// register: 2
																	register int it;
																	{
																		// register: 5
																		register int Col;
																		{
																			{
																				{
																					{
																						// register: 18
																						// size: 0x70
																						register struct MonsterStruct *MyMonst;
																						// register: 21
																						// size: 0x6C
																						register struct TextDat *CMonstGraphics;
																						// address: 0xFFFFFFC0
																						auto int mi;
																						{
																							{
																								// register: 16
																								register int Frame;
																								// register: 19
																								register int Action;
																								// register: 20
																								register int Dir;
																								// register: 16
																								register int PhysFrame;
																								// register: 17
																								register int Creature;
																								// register: 30
																								register int ScrXOff;
																								// register: 23
																								register int ScrYOff;
																								{
																									{
																										// register: 2
																										register char transfile;
																										// register: 5
																										register int Col;
																										{
																											{
																												// register: 2
																												register int MG_No;
																												// register: 5
																												register int SPal;
																												{
																													{
																														// register: 18
																														// size: 0x1C
																														register struct CMonster *MyMonst;
																														// register: 2
																														register int Frame;
																														// register: 16
																														register int PhysFrame;
																														// register: 17
																														register int Creature;
																														// register: 2
																														register char transfile;
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


// address: 0x80087E60
// line start: 1634
// line end:   1815
void PrintSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks *this, struct map_info *piece, int OtPos, int ScrX, int ScrY, int R, int G, int B) {
	// address: 0xFFFFFFC8
	auto int Monster;
	// register: 20
	register int bItem;
	// address: 0xFFFFFFD0
	auto int bFlags;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			// register: 17
			// size: 0x94
			register struct ItemStruct *pItem;
			{
				{
					// register: 2
					// size: 0xC
					register struct FRAME_HDR *Fr;
					// register: 19
					register int W;
					// register: 21
					register int H;
					// register: 4
					register short height;
					{
						{
							// register: 2
							register int it;
							{
								// register: 5
								register int Col;
								{
									{
										// register: 2
										register int gnMI;
										{
											{
												// register: 5
												register int ScrXOff;
												// register: 6
												register int ScrYOff;
												{
													{
														// register: 20
														register int Creature;
														// register: 18
														register int mi;
														// address: 0xFFFFFFB8
														// size: 0x28
														auto struct POLY_FT4 *Ft4;
														// register: 17
														// size: 0x6C
														register struct TextDat *ThisData;
														// register: 16
														register int PhysFrame;
														// register: 19
														register int GameFrame;
														// register: 16
														register int Dir;
														{
															{
																// register: 5
																register int Col;
																{
																	{
																		// register: 16
																		// size: 0x28
																		register struct POLY_FT4 *ShadFt4;
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
	}
}


// address: 0x80088520
// line start: 1823
// line end:   1843
void PrintSprites__7CBlocksiiiii(struct CBlocks *this, int ThisXPos, int ThisYPos, int OtPos, int ScrX, int ScrY) {
	// register: 17
	// size: 0xC
	register struct map_info *p1;
	// register: 18
	// size: 0xC
	register struct map_info *p2;
	// register: 16
	// size: 0xC
	register struct map_info *p3;
}


// address: 0x80088690
// line start: 1853
// line end:   1854
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x800886A4
// line start: 1864
// line end:   1865
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x800886B8
// line start: 1875
// line end:   1877
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008877C
// line start: 1887
// line end:   1894
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 3
	register int YDiff;
}


// address: 0x800887E4
// line start: 1904
// line end:   1914
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x80088884
// line start: 1925
// line end:   1936
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x80088958
// line start: 1993
// line end:   2020
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 6
	register int W;
}


// address: 0x800889D8
// line start: 2032
// line end:   2033
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x800889E0
// line start: 2043
// line end:   2044
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x800889F4
// size: 0xE0
// line start: 2080
// line end:   2087
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x80088A7C
// line start: 97
// line end:   105
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x80088B00
// line start: 97
// line end:   105
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x80088C68
// line start: 174
// line end:   176
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


