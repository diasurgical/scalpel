// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x8013AB4C
// line start: 1212
// line end:   1239
void DrawBackTSK__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen BackScreen;
}


// address: 0x8013C018
// line start: 1161
// line end:   1190
void DrawBackTSK__FP4TASK_addr_8013C018(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen_dup_14 BackScreen;
}


// address: 0x8013A0CC
// line start: 1469
// line end:   1471
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


// address: 0x801221AC
// line start: 994
// line end:   1010
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x8013AAD4
// line start: 1182
// line end:   1196
void FadeFEOut__Fv() {
}


// address: 0x801419F4
// line start: 267
// line end:   274
void FeAddEntry__Fii8TXT_JUSTPcP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, char *Str, struct FeTable *MenuPtr, struct CFont_dup_1 *Font) {
}


// address: 0x80124F5C
// line start: 167
// line end:   174
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80137A14
// line start: 168
// line end:   175
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont_addr_80137A14(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont_dup_10 *Font) {
}


// address: 0x80139F7C
// line start: 168
// line end:   175
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont_addr_80139F7C(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont_dup_14 *Font) {
}


// address: 0x80122C04
// line start: 163
// line end:   170
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x8013937C
// line start: 188
// line end:   204
void FeAddNameTable__FPUci(unsigned char *Table, int Count) {
	{
		// register: 17
		register int YLoop;
		{
			{
				// register: 3
				register int XLoop;
			}
		}
	}
}


// address: 0x80122C74
// line start: 174
// line end:   179
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80137D98
// line start: 179
// line end:   184
void FeAddTable__FP11FeMenuTablei_addr_80137D98(struct FeMenuTable_dup_11 *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80137A88
// line start: 179
// line end:   184
void FeAddTable__FP11FeMenuTablei_addr_80137A88(struct FeMenuTable_dup_10 *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80139FF0
// line start: 179
// line end:   184
void FeAddTable__FP11FeMenuTablei_addr_80139FF0(struct FeMenuTable_dup_14 *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80124FD0
// line start: 178
// line end:   183
void FeAddTable__FP11FeMenuTablei_addr_80124FD0(struct FeMenuTable_dup_7 *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80124758
// line start: 909
// line end:   942
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80121B88
// line start: 755
// line end:   767
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80124390
// line start: 731
// line end:   738
void FeCopyPlayerInfoForReturn__Fv_addr_80124390() {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x801245C0
// line start: 826
// line end:   841
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80137D24
// line start: 188
// line end:   262
void FeDrawBuffer__Fv() {
	// address: 0xFFFFFFA8
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT ARect;
	// register: 16
	register int X;
	// register: 17
	register int Y;
	// register: 18
	// size: 0x4
	register enum TXT_JUST Just;
	// register: 18
	register int SelX;
	// register: 20
	register int SelY;
	// address: 0xFFFFFFC8
	// size: 0x2
	auto char Text[2];
	{
		{
			{
				{
					{
						{
							{
								// register: 21
								register int Loop;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80122CF4
// line start: 195
// line end:   251
void FeDrawBuffer__Fv_addr_80122CF4() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT FeRect;
	// register: 16
	register int X;
	// register: 17
	register int Y;
	// register: 18
	// size: 0x4
	register enum TXT_JUST Just;
	// register: 18
	register int SelX;
	// register: 20
	register int SelY;
	// address: 0xFFFFFFC8
	// size: 0x2
	auto char Text[2];
	{
		{
			{
				{
					// register: 21
					register int Loop;
				}
			}
		}
	}
}


// address: 0x801203DC
// line start: 197
// line end:   256
void FeDrawBuffer__Fv_addr_801203DC() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT FeRect;
	// register: 16
	register int X;
	// register: 17
	register int Y;
	// register: 18
	// size: 0x4
	register enum TXT_JUST Just;
	// register: 18
	register int SelX;
	// register: 20
	register int SelY;
	// address: 0xFFFFFFC8
	// size: 0x2
	auto char Text[2];
	{
		{
			{
				{
					// register: 21
					register int Loop;
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x80141A64
// line start: 289
// line end:   346
void FeDrawBuffer__Fv_addr_80141A64() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT FeRect;
	// register: 5
	register int X;
	// register: 6
	register int Y;
	// register: 3
	// size: 0x4
	register enum TXT_JUST Just;
	// register: 17
	register int SelX;
	// register: 20
	register int SelY;
	// address: 0xFFFFFFC8
	// size: 0x2
	auto char Text[2];
	{
		{
			{
				{
					// register: 21
					register int Loop;
				}
			}
		}
	}
}


// address: 0x80125834
// line start: 188
// line end:   259
void FeDrawBuffer__Fv_addr_80125834() {
	// address: 0xFFFFFFA8
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT ARect;
	// register: 16
	register int X;
	// register: 17
	register int Y;
	// register: 18
	// size: 0x4
	register enum TXT_JUST Just;
	// register: 18
	register int SelX;
	// register: 20
	register int SelY;
	// address: 0xFFFFFFC8
	// size: 0x2
	auto char Text[2];
	{
		{
			{
				{
					{
						{
							{
								// register: 21
								register int Loop;
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


// address: 0x80137B04
// line start: 189
// line end:   265
void FeDrawBuffer__Fv_addr_80137B04() {
	// address: 0xFFFFFFA8
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT ARect;
	// register: 16
	register int X;
	// register: 17
	register int Y;
	// register: 19
	// size: 0x4
	register enum TXT_JUST Just;
	// register: 22
	register int SelY;
	// address: 0xFFFFFFC8
	// size: 0x2
	auto char Text[2];
	{
		{
			{
				{
					{
						{
							{
								// register: 20
								register int Loop;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8012504C
// line start: 188
// line end:   257
void FeDrawBuffer__Fv_addr_8012504C() {
	// address: 0xFFFFFFA8
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT ARect;
	// register: 16
	register int X;
	// register: 17
	register int Y;
	// register: 18
	// size: 0x4
	register enum TXT_JUST Just;
	// register: 18
	register int SelX;
	// register: 20
	register int SelY;
	// address: 0xFFFFFFC8
	// size: 0x2
	auto char Text[2];
	{
		{
			{
				{
					// register: 21
					register int Loop;
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x801239CC
// line start: 536
// line end:   578
void FeDrawChrClass__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFC8
	// size: 0x4
	auto char TempStr[4];
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


// address: 0x80124434
// line start: 745
// line end:   750
void FeEnterGame__Fv() {
}


// address: 0x80123434
// line start: 325
// line end:   326
int FeGetCursor__Fv() {
}


// address: 0x80124678
// line start: 878
// line end:   884
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801246C0
// line start: 888
// line end:   894
void FeInitBook1Menu__Fv() {
}


// address: 0x8012470C
// line start: 898
// line end:   904
void FeInitBook2Menu__Fv() {
}


// address: 0x80122BDC
// line start: 152
// line end:   157
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x8012457C
// line start: 816
// line end:   821
void FeInitDifficultyMenu__Fv() {
}


// address: 0x801244A4
// line start: 777
// line end:   786
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80124510
// line start: 790
// line end:   799
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8012445C
// line start: 766
// line end:   772
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80123744
// line start: 430
// line end:   439
void FeInitMainMenu__Fv() {
}


// address: 0x801237A4
// line start: 456
// line end:   462
void FeInitNewGameMenu__Fv() {
}


// address: 0x80123E68
// line start: 623
// line end:   630
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80123EB8
// line start: 634
// line end:   640
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x801238E4
// line start: 507
// line end:   513
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80123934
// line start: 517
// line end:   523
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x8012348C
// line start: 340
// line end:   384
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x8013A900
// line start: 386
// line end:   437
void FeMainKeyCtrl__FP7CScreen_addr_8013A900(struct CScreen_dup_14 *FeScreen) {
}


// address: 0x8014211C
// line start: 435
// line end:   489
void FeMainKeyCtrl__FP7CScreen_addr_8014211C(struct CScreen_dup_1 *FeScreen) {
}


// address: 0x801397DC
// line start: 500
// line end:   533
void FeNewGameMenuCtrl__Fv() {
	{
		{
		}
	}
}


// address: 0x801237F0
// line start: 467
// line end:   489
void FeNewGameMenuCtrl__Fv_addr_801237F0() {
}


// address: 0x80130754
// line start: 260
// line end:   273
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80123184
// line start: 255
// line end:   268
void FeNewMenu__FP7FeTable_addr_80123184(struct FeTable *Menu) {
	// register: 2
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80123F08
// line start: 645
// line end:   722
void FeNewNameMenuCtrl__Fv() {
	{
		{
			{
				{
					{
						{
							{
								{
									// address: 0xFFFFFFD8
									// size: 0x2
									auto char asd[2];
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80126378
// line start: 789
// line end:   895
void FeNewNameMenuCtrl__Fv_addr_80126378() {
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
											// address: 0xFFFFFFD8
											// size: 0x2
											auto char asd[2];
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


// address: 0x80123984
// line start: 528
// line end:   531
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x801231F0
// line start: 272
// line end:   284
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80123350
// line start: 306
// line end:   317
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80123268
// line start: 290
// line end:   301
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80123448
// line start: 330
// line end:   331
void FeSelect__Fv() {
}


// address: 0x80124968
// line start: 968
// line end:   1119
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen FeScreen;
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


// address: 0x801442F8
// line start: 1085
// line end:   1222
void FrontEndTask__FP4TASK_addr_801442F8(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// address: 0xFFFFFF80
	// size: 0x74
	auto struct CScreen_dup_1 FeScreen;
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


// address: 0x8013AC3C
// line start: 1248
// line end:   1384
void FrontEndTask__FP4TASK_addr_8013AC3C(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// register: 17
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x80124A94
// line start: 971
// line end:   1131
void FrontEndTask__FP4TASK_addr_80124A94(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// address: 0xFFFFFF78
	// size: 0x78
	auto struct CScreen FeScreen;
	// register: 17
	register int fadeval;
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


// address: 0x80139C04
// line start: 1188
// line end:   1322
void FrontEndTask__FP4TASK_addr_80139C04(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen FeScreen;
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


// address: 0x80123678
// line start: 388
// line end:   389
void InitDummyMenu__Fv() {
}


// address: 0x80123680
// line start: 395
// line end:   413
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x801225C8
// line start: 1154
// line end:   1276
void McMainCharKeyCtrl__Fv() {
	// register: 19
	register int j;
	// register: 22
	register int Spacing;
	// register: 3
	register int fileno;
	// register: 18
	register int sr;
	// register: 17
	register int sg;
	// register: 16
	register int sb;
}


// address: 0x80139CC4
// line start: 1331
// line end:   1464
void McMainCharKeyCtrl__Fv_addr_80139CC4() {
	// register: 23
	register int j;
	// register: 30
	register int Spacing;
	// register: 20
	register int fileno;
	// register: 22
	register int sr;
	// register: 21
	register int sg;
	// register: 19
	register int sb;
	// register: 17
	register int SelX;
	// register: 16
	register int len;
}


// address: 0x80124D0C
// line start: 1124
// line end:   1232
void McMainCharKeyCtrl__Fv_addr_80124D0C() {
	// register: 16
	register int j;
	// register: 19
	register int Spacing;
	// register: 9
	register int fileno;
	// register: 8
	register int sr;
	// register: 3
	register int sg;
	// register: 2
	register int sb;
}


// address: 0x80124954
// line start: 950
// line end:   951
void PlayDemo__Fv() {
}


// address: 0x8013C51C
// line start: 1419
// line end:   1474
void DrawBackTSK__FP4TASK_addr_8013C51C(struct TASK *T) {
}


// address: 0x8013CBFC
// line start: 1722
// line end:   1724
void DrawFeTwinkle__Fii_addr_8013CBFC(int TwinkX, int TwinkY) {
}


// address: 0x80139DA0
// line start: 178
// line end:   186
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont_addr_80139DA0(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont_dup_18 *Font) {
}


// address: 0x80139EA8
// line start: 178
// line end:   186
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont_addr_80139EA8(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont_dup_17 *Font) {
}


// address: 0x80135718
// line start: 178
// line end:   186
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont_addr_80135718(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont_dup_19 *Font) {
}


// address: 0x80139FA8
// line start: 199
// line end:   215
void FeAddNameTable__FPUci_addr_80139FA8(unsigned char *Table, int Count) {
	{
		// register: 21
		register int YLoop;
		{
			{
				// register: 3
				register int XLoop;
			}
		}
	}
}


// address: 0x80139F2C
// line start: 190
// line end:   195
void FeAddTable__FP11FeMenuTablei_addr_80139F2C(struct FeMenuTable_dup_17 *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x8013579C
// line start: 190
// line end:   195
void FeAddTable__FP11FeMenuTablei_addr_8013579C(struct FeMenuTable_dup_19 *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80139E24
// line start: 190
// line end:   195
void FeAddTable__FP11FeMenuTablei_addr_80139E24(struct FeMenuTable_dup_18 *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x8013BCF8
// line start: 1080
// line end:   1105
void FeCopyPlayerInfoForReturn__Fv_addr_8013BCF8() {
	{
		// register: 16
		register int Loop;
		{
			{
				{
					{
						// register: 2
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x80139FC8
// line start: 222
// line end:   336
void FeDrawBuffer__Fv_addr_80139FC8() {
	// address: 0xFFFFFF98
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT ARect;
	// register: 17
	register int X;
	// register: 19
	register int Y;
	// register: 20
	// size: 0x4
	register enum TXT_JUST Just;
	// address: 0xFFFFFFC0
	// size: 0x70
	auto struct TextDat_dup_18 *PanelGfx;
	// register: 4
	register int SelX;
	// register: 18
	register int SelY;
	// address: 0xFFFFFFB8
	// size: 0x2
	auto char Text[2];
	{
		{
			{
				{
					{
						{
							{
								// register: 21
								register int Loop;
								{
									{
										{
											{
												{
													{
														{
															// register: 2
															// size: 0x28
															register struct POLY_FT4 *Ft4;
															{
																{
																	{
																		// register: 18
																		register int Loop;
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


// address: 0x80135940
// line start: 222
// line end:   336
void FeDrawBuffer__Fv_addr_80135940() {
	// address: 0xFFFFFF98
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT ARect;
	// register: 17
	register int X;
	// register: 19
	register int Y;
	// register: 20
	// size: 0x4
	register enum TXT_JUST Just;
	// address: 0xFFFFFFC0
	// size: 0x70
	auto struct TextDat *PanelGfx;
	// register: 4
	register int SelX;
	// register: 18
	register int SelY;
	// address: 0xFFFFFFB8
	// size: 0x2
	auto char Text[2];
	{
		{
			{
				{
					{
						{
							{
								// register: 21
								register int Loop;
								{
									{
										{
											{
												{
													{
														{
															// register: 2
															// size: 0x28
															register struct POLY_FT4 *Ft4;
															{
																{
																	{
																		// register: 18
																		register int Loop;
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


// address: 0x8013A0D0
// line start: 222
// line end:   336
void FeDrawBuffer__Fv_addr_8013A0D0() {
	// address: 0xFFFFFF98
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT ARect;
	// register: 17
	register int X;
	// register: 19
	register int Y;
	// register: 20
	// size: 0x4
	register enum TXT_JUST Just;
	// address: 0xFFFFFFC0
	// size: 0x70
	auto struct TextDat_dup_17 *PanelGfx;
	// register: 4
	register int SelX;
	// register: 18
	register int SelY;
	// address: 0xFFFFFFB8
	// size: 0x2
	auto char Text[2];
	{
		{
			{
				{
					{
						{
							{
								// register: 21
								register int Loop;
								{
									{
										{
											{
												{
													{
														{
															// register: 2
															// size: 0x28
															register struct POLY_FT4 *Ft4;
															{
																{
																	{
																		// register: 18
																		register int Loop;
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


// address: 0x8013BF8C
// line start: 1189
// line end:   1212
void FeInitDifficultyMenu__Fv_addr_8013BF8C() {
	// register: 4
	register int MaxLevel;
}


// address: 0x8013C6A4
// line start: 1483
// line end:   1502
void FeInitMainStuff__FP4TASK(struct TASK *T2) {
}


// address: 0x8013AAF8
// line start: 474
// line end:   527
void FeMainKeyCtrl__FP7CScreen_addr_8013AAF8(struct CScreen_dup_17 *FeScreen) {
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


// address: 0x8013A9F0
// line start: 474
// line end:   527
void FeMainKeyCtrl__FP7CScreen_addr_8013A9F0(struct CScreen_dup_18 *FeScreen) {
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


// address: 0x801363B0
// line start: 474
// line end:   527
void FeMainKeyCtrl__FP7CScreen_addr_801363B0(struct CScreen *FeScreen) {
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


// address: 0x80136368
// line start: 474
// line end:   527
void FeMainKeyCtrl__FP7CScreen_addr_80136368(struct CScreen_dup_19 *FeScreen) {
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


// address: 0x8013B730
// line start: 944
// line end:   1074
void FeNewNameMenuCtrl__Fv_addr_8013B730() {
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
													// address: 0xFFFFFFD8
													// size: 0x2
													auto char asd[2];
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


// address: 0x8013C750
// line start: 1515
// line end:   1713
void FrontEndTask__FP4TASK_addr_8013C750(struct TASK *T) {
	// register: 16
	register int len;
	// register: 17
	register int Fefadeval;
	// register: 19
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x80136580
// line start: 538
// line end:   577
void InitFrontEnd__FP9FE_CREATE_addr_80136580(struct FE_CREATE_dup_20 *CreateStruct) {
}


