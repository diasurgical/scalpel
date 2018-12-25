// C:\diabpsx\SOURCE\OBJECTS.CPP

#include "types.h"

// address: 0x80052CCC
// line start: 262
// line end:   276
void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x80052DB4
// line start: 283
// line end:   301
void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x80052F00
// line start: 308
// line end:   318
void PostAddArmorStand__Fi(int i) {
}


// address: 0x80052F88
// line start: 357
// line end:   373
void PostAddObjLight__Fii(int i, int r) {
}


// address: 0x8005304C
// line start: 380
// line end:   390
void PostAddWeaponRack__Fi(int i) {
}


// address: 0x800530D4
// line start: 399
// line end:   426
void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


// address: 0x80053170
// line start: 433
// line end:   474
void InitObjectGFX__Fv() {
	// address: 0xFFFFFF88
	// size: 0x38
	auto unsigned char fileload[56];
	// register: 3
	register int i;
	// register: 5
	register int t;
	{
		{
			{
				{
					// address: 0xFFFFFFC0
					// size: 0x20
					auto char filestr[32];
				}
			}
		}
	}
}


// address: 0x8005338C
// line start: 479
// line end:   483
void FreeObjectGFX__Fv() {
}


// address: 0x80053398
// line start: 487
// line end:   498
void DeleteObject__Fii(int oi, int i) {
	// register: 5
	register int ox;
	// register: 3
	register int oy;
}


// address: 0x8005343C
// line start: 506
// line end:   540
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x800536C0
// line start: 547
// line end:   553
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x80053720
// line start: 560
// line end:   562
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x80053748
// line start: 586
// line end:   628
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x80053858
// line start: 634
// line end:   747
void PostAddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x80053CC0
// line start: 753
// line end:   790
void Obj_Light__Fii(int i, int lr) {
	// register: 22
	register int ox;
	// register: 23
	register int oy;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 19
	register int p;
	// register: 21
	register int tr;
	// register: 20
	register unsigned char turnon;
}


// address: 0x80053EE0
// line start: 796
// line end:   848
void Obj_Circle__Fi(int i) {
	// register: 2
	register int px;
	// register: 3
	register int py;
	// register: 20
	register int ox;
	// register: 19
	register int oy;
	// register: 22
	register int v1;
	// register: 23
	register int v2;
	// address: 0xFFFFFFD0
	auto bool done;
	{
		// register: 17
		register int pnum;
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


// address: 0x80054224
// line start: 854
// line end:   859
void Obj_StopAnim__Fi(int i) {
}


// address: 0x80054288
// line start: 890
// line end:   954
void DrawExpl__Fiiiiiccc(int sx, int sy, int f, int ot, int scale, int rtint, int gtint, int btint) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 30
	register int PhysFrame;
	// register: 20
	// size: 0x70
	register struct TextDat *ObjDat;
	// register: 5
	register int temp;
	// register: 17
	register int bright;
	// register: 2
	register int W;
	// register: 2
	register int H;
}


// address: 0x80054580
// line start: 959
// line end:   967
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x800545F0
// line start: 976
// line end:   1001
void Obj_Door__Fi(int i) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 16
	register unsigned char dok;
}


// address: 0x80054760
// line start: 1009
// line end:   1011
void Obj_Sarc__Fi(int i) {
}


// address: 0x800547AC
// line start: 1018
// line end:   1029
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x800548BC
// line start: 1036
// line end:   1077
void Obj_FlameTrap__Fi(int i) {
	// register: 16
	register int xp;
	// register: 18
	register int yp;
	// register: 19
	register int j;
}


// address: 0x80054BA0
// line start: 1086
// line end:   1137
void Obj_Trap__Fi(int i) {
	// register: 19
	register int oti;
	// register: 5
	register unsigned char otrig;
	// address: 0xFFFFFFC0
	auto int sx;
	// address: 0xFFFFFFC8
	auto int sy;
	// register: 20
	register int dx;
	// register: 21
	register int dy;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 22
	register int ax;
}


// address: 0x80054EE4
// line start: 1146
// line end:   1177
void Obj_BCrossDamage__Fi(int i) {
	// register: 3
	register int resist;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto int damage[4];
	{
		// register: 21
		register int pnum;
	}
}


// address: 0x8005512C
// line start: 1184
// line end:   1268
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x800553A4
// line start: 1278
// line end:   1301
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x80055514
// line start: 1318
// line end:   1357
void ObjSetMini__Fiii(int x, int y, int v) {
	// register: 16
	register long v2;
	// register: 17
	register long v3;
	// register: 19
	register long v4;
	// register: 22
	register int xx;
	// register: 21
	register int yy;
}


// address: 0x800555FC
// line start: 1364
// line end:   1388
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x80055604
// line start: 1394
// line end:   1423
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8005560C
// line start: 1429
// line end:   1450
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x80055870
// line start: 1457
// line end:   1464
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x80055914
// line start: 1471
// line end:   1520
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 19
	register int dx;
	// register: 20
	register int dy;
	// register: 16
	register unsigned char dok;
}


// address: 0x80055C74
// line start: 1526
// line end:   1575
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 20
	register int dx;
	// register: 19
	register int dy;
	// register: 16
	register unsigned char dok;
}


// address: 0x8005600C
// line start: 1581
// line end:   1622
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 16
	register unsigned char dok;
}


// address: 0x80056378
// line start: 1628
// line end:   1669
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 16
	register unsigned char dok;
}


// address: 0x800566E4
// line start: 1675
// line end:   1714
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 16
	register unsigned char dok;
}


// address: 0x800569C0
// line start: 1718
// line end:   1775
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 16
	register unsigned char dok;
}


// address: 0x80056C9C
// line start: 1781
// line end:   1825
void MonstCheckDoors__Fi(int m) {
	// register: 20
	register int i;
	// register: 16
	register int oi;
	// register: 19
	register int dpx;
	// register: 18
	register int dpy;
	// register: 21
	register int mx;
	// register: 23
	register int my;
}


// address: 0x80057170
// line start: 1831
// line end:   1844
void PostAddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x80057278
// line start: 1851
// line end:   1862
void PostAddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x80057374
// line start: 1869
// line end:   1885
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x8005752C
// line start: 1894
// line end:   1904
void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 8
	register int i;
	// register: 5
	register int j;
}


// address: 0x800575C8
// line start: 1912
// line end:   1930
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80057740
// line start: 1936
// line end:   1943
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x8005789C
// line start: 1950
// line end:   1975
void OperateLever__Fii(int pnum, int i) {
	// register: 6
	register unsigned char mapflag;
	// register: 5
	register int j;
	// register: 2
	register int oi;
	// register: 2
	register int ot;
}


// address: 0x80057A80
// line start: 1981
// line end:   2058
void OperateBook__Fii(int pnum, int i) {
	// register: 21
	register int v1;
	// register: 19
	register int v2;
	// register: 16
	register int j;
	// register: 3
	register int oi;
	// register: 3
	register int ot;
	// register: 16
	register int itm;
	{
		{
			// register: 6
			register unsigned char found;
			{
				{
					// register: 5
					register unsigned char dowarp;
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x80058138
// line start: 2064
// line end:   2135
void OperateBookLever__Fii(int pnum, int i) {
	// register: 19
	register int x;
	// register: 18
	register int y;
	// register: 16
	register int tren;
}


// address: 0x800585A8
// line start: 2141
// line end:   2174
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x800587E4
// line start: 2180
// line end:   2227
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int j;
	// register: 8
	register int mdir;
	// register: 21
	register int mtype;
}


// address: 0x80058BA4
// line start: 2233
// line end:   2272
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x80058D98
// line start: 2278
// line end:   2303
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x80058F4C
// line start: 2309
// line end:   2335
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005919C
// line start: 2341
// line end:   2364
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x8005936C
// line start: 2372
// line end:   2395
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80059524
// line start: 2401
// line end:   2408
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80059680
// line start: 2415
// line end:   2422
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x800597DC
// line start: 2428
// line end:   2462
void LoadMapObjs__FPUcii(unsigned char *pMap, int startx, int starty) {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 19
	register int rw;
	// register: 20
	register int rh;
	// register: 17
	register unsigned char *lm;
	// register: 2
	register long mapoff;
}


// address: 0x800598E4
// line start: 2470
// line end:   2560
void OperatePedistal__Fii(int pnum, int i) {
	// address: 0xFFFFFFE0
	auto int jstn;
	// register: 19
	register bool JustOperated;
	{
		{
			{
				{
					{
						{
							// register: 16
							register unsigned char *setp;
							{
								{
									{
										{
											// register: 17
											register unsigned char *setp;
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


// address: 0x80059DFC
// line start: 2566
// line end:   2592
void TryDisarm__Fii(int pnum, int i) {
	// register: 6
	register int j;
	// register: 3
	register int oi;
	// register: 2
	register int oti;
	// register: 16
	register int trapdisper;
	// register: 2
	register unsigned char checkflag;
}


// address: 0x80059FB0
// line start: 2598
// line end:   2601
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x8005A020
// line start: 2608
// line end:   3209
void OperateShrine__Fiii(int pnum, int i, int sType) {
	// register: 18
	register int r;
	// register: 4
	register int xx;
	// register: 5
	register int yy;
	// register: 6
	register int sc;
	// register: 17
	register int v1;
	// register: 21
	register int v2;
	// register: 22
	register int v3;
	// register: 20
	register int v4;
	// register: 16
	register unsigned long lv;
	// register: 6
	register unsigned long t;
	// register: 21
	register unsigned char done;
	{
		{
			{
				{
					// register: 3
					register int mypnum;
				}
			}
		}
	}
}


// address: 0x8005C414
// line start: 3215
// line end:   3233
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005C590
// line start: 3239
// line end:   3274
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005C7A8
// line start: 3280
// line end:   3295
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005C890
// line start: 3301
// line end:   3336
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x8005CA00
// line start: 3348
// line end:   3370
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x8005CAF0
// line start: 3377
// line end:   3390
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x8005CB98
// line start: 3397
// line end:   3411
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x8005CC3C
// line start: 3418
// line end:   3517
unsigned char OperateFountains__Fii(int pnum, int i) {
	// register: 21
	register int ii;
	// register: 19
	register unsigned char rv;
	{
		{
			{
				{
					// register: 16
					register int rndVal;
					// register: 19
					register int statVal;
					// register: 20
					register int saveRnd;
					// register: 22
					register int status;
				}
			}
		}
	}
}


// address: 0x8005D1E8
// line start: 3524
// line end:   3574
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x8005D394
// line start: 3580
// line end:   3595
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x8005D488
// line start: 3603
// line end:   3628
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x8005D5C0
// line start: 3634
// line end:   3753
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 3
	register unsigned char senditemmsg;
}


// address: 0x8005D9F8
// line start: 3761
// line end:   3771
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x8005DB0C
// line start: 3777
// line end:   3787
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x8005DC20
// line start: 3793
// line end:   3803
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x8005DD34
// line start: 3809
// line end:   3901
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x8005DF44
// line start: 3909
// line end:   3940
void BreakCrux__Fii(int pnum, int i) {
	// register: 5
	register int j;
	// register: 3
	register int ot;
	// register: 2
	register int oi;
	// register: 6
	register unsigned char mapflag;
}


// address: 0x8005E178
// line start: 3946
// line end:   4014
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 5
	register int oi;
}


// address: 0x8005E6D0
// line start: 4020
// line end:   4041
void BreakObject__Fii(int pnum, int oi) {
	// register: 6
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x8005E834
// line start: 4049
// line end:   4060
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x8005E8B0
// line start: 4068
// line end:   4092
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x8005E9C8
// line start: 4098
// line end:   4114
void SyncCrux__Fi(int i) {
	// register: 6
	register int j;
	// register: 3
	register int ot;
	// register: 2
	register int oi;
	// register: 7
	register unsigned char mapflag;
}


// address: 0x8005EB00
// line start: 4121
// line end:   4126
void SyncLever__Fi(int i) {
}


// address: 0x8005EB84
// line start: 4133
// line end:   4145
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x8005EC7C
// line start: 4154
// line end:   4172
void SyncPedistal__Fi(int i) {
}


// address: 0x8005EC84
// line start: 4178
// line end:   4202
void SyncL2Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005EDEC
// line start: 4210
// line end:   4233
void SyncL3Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005EF18
// line start: 4241
// line end:   4280
void SyncObjectAnim__Fi(int o) {
	// register: 5
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x8005F058
// line start: 4288
// line end:   4429
void GetObjectStr__Fi(int i) {
}


// address: 0x8005F474
// line start: 4434
// line end:   4437
void AddLamp__Fiii(int x, int y, int r) {
}


// address: 0x8005F4B4
// line start: 4440
// line end:   4608
void RestoreObjectLight__Fv() {
	// register: 17
	register int i;
	// register: 2
	register int oi;
	// register: 4
	register int ox;
	// register: 5
	register int oy;
	// register: 3
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


