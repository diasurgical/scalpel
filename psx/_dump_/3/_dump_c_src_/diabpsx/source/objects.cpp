// C:\diabpsx\SOURCE\OBJECTS.CPP

#include "types.h"

// address: 0x8004F38C
// line start: 253
// line end:   294
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


// address: 0x8004F5C8
// line start: 299
// line end:   303
void FreeObjectGFX__Fv() {
}


// address: 0x8004F5D4
// line start: 307
// line end:   318
void DeleteObject__Fii(int oi, int i) {
	// register: 4
	register int ox;
	// register: 4
	register int oy;
}


// address: 0x8004F6CC
// line start: 326
// line end:   360
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004F974
// line start: 367
// line end:   373
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004FA40
// line start: 380
// line end:   382
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004FAAC
// line start: 406
// line end:   443
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004FBD4
// line start: 451
// line end:   479
void Obj_Light__Fii(int i, int lr) {
	// register: 23
	register int ox;
	// register: 22
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


// address: 0x8004FE00
// line start: 485
// line end:   528
void Obj_Circle__Fi(int i) {
	// register: 3
	register int px;
	// register: 2
	register int py;
	// register: 5
	register int ox;
	// register: 6
	register int oy;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80050144
// line start: 535
// line end:   540
void Obj_StopAnim__Fi(int i) {
}


// address: 0x800501E0
// line start: 571
// line end:   633
void DrawExpl__Fiiiiiccc(int sx, int sy, int f, int ot, int scale, int rtint, int gtint, int btint) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 30
	register int PhysFrame;
	// register: 21
	// size: 0x68
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


// address: 0x800504C4
// line start: 638
// line end:   646
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x80050534
// line start: 655
// line end:   673
void Obj_Door__Fi(int i) {
	// register: 4
	register int dx;
	// register: 6
	register int dy;
	// register: 5
	register unsigned char dok;
}


// address: 0x80050700
// line start: 681
// line end:   683
void Obj_Sarc__Fi(int i) {
}


// address: 0x80050784
// line start: 690
// line end:   701
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x80050894
// line start: 708
// line end:   749
void Obj_FlameTrap__Fi(int i) {
	// register: 4
	register int xp;
	// register: 5
	register int yp;
	// register: 7
	register int j;
}


// address: 0x80050B84
// line start: 758
// line end:   809
void Obj_Trap__Fi(int i) {
	// register: 16
	register int oti;
	// register: 17
	register unsigned char otrig;
	// register: 20
	register int sx;
	// register: 21
	register int sy;
	// register: 18
	register int dx;
	// register: 17
	register int dy;
	// register: 3
	register int x;
	// register: 5
	register int y;
	// register: 8
	register int ax;
	// register: 9
	register int ay;
}


// address: 0x80050EF4
// line start: 818
// line end:   844
void Obj_BCrossDamage__Fi(int i) {
	// register: 2
	register int resist;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto int damage[4];
}


// address: 0x800511B0
// line start: 853
// line end:   935
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x80051470
// line start: 943
// line end:   944
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x800514A8
// line start: 957
// line end:   996
void ObjSetMini__Fiii(int x, int y, int v) {
	// register: 16
	register long v2;
	// register: 17
	register long v3;
	// register: 18
	register long v4;
	// register: 22
	register int xx;
	// register: 21
	register int yy;
}


// address: 0x8005157C
// line start: 1003
// line end:   1027
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x80051584
// line start: 1033
// line end:   1062
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8005158C
// line start: 1068
// line end:   1089
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x8005182C
// line start: 1096
// line end:   1103
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x800518D0
// line start: 1110
// line end:   1157
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x80051C94
// line start: 1163
// line end:   1211
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 17
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8005208C
// line start: 1217
// line end:   1258
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x80052444
// line start: 1264
// line end:   1305
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x800527FC
// line start: 1311
// line end:   1350
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x80052B24
// line start: 1354
// line end:   1411
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x80052E4C
// line start: 1417
// line end:   1461
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
	// register: 22
	register int my;
}


// address: 0x80053368
// line start: 1467
// line end:   1482
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80053520
// line start: 1490
// line end:   1504
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80053690
// line start: 1511
// line end:   1518
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80053808
// line start: 1525
// line end:   1550
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


// address: 0x80053A14
// line start: 1556
// line end:   1614
void OperateBook__Fii(int pnum, int i) {
	// register: 21
	register int v1;
	// register: 20
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
			// register: 5
			register unsigned char dowarp;
			{
				{
				}
			}
		}
	}
}


// address: 0x80053F28
// line start: 1620
// line end:   1665
void OperateBookLever__Fii(int pnum, int i) {
	// register: 19
	register int x;
	// register: 18
	register int y;
	// register: 16
	register int tren;
}


// address: 0x80054314
// line start: 1671
// line end:   1695
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x8005450C
// line start: 1701
// line end:   1742
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int j;
	// register: 8
	register int mdir;
	// register: 21
	register int mtype;
}


// address: 0x800548FC
// line start: 1748
// line end:   1774
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80054AE4
// line start: 1780
// line end:   1803
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80054C7C
// line start: 1809
// line end:   1835
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80054EF0
// line start: 1841
// line end:   1864
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x800550F0
// line start: 1872
// line end:   1888
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800552C8
// line start: 1894
// line end:   1901
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80055440
// line start: 1908
// line end:   1915
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x800555B8
// line start: 1921
// line end:   1955
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


// address: 0x800556C0
// line start: 1960
// line end:   1994
void OperatePedistal__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int jstn;
	{
		{
			{
				{
					// register: 16
					register unsigned char *setp;
					{
					}
				}
			}
		}
	}
}


// address: 0x80055998
// line start: 2003
// line end:   2029
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


// address: 0x80055B7C
// line start: 2035
// line end:   2038
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x80055BEC
// line start: 2045
// line end:   2598
void OperateShrine__Fiii(int pnum, int i, int sType) {
	// register: 18
	register int r;
	// register: 4
	register int xx;
	// register: 5
	register int yy;
	// register: 6
	register int sc;
	// register: 16
	register int v1;
	// register: 20
	register int v2;
	// register: 21
	register int v3;
	// register: 17
	register int v4;
	// register: 16
	register unsigned long lv;
	// register: 6
	register unsigned long t;
	// register: 21
	register unsigned char done;
}


// address: 0x800581F0
// line start: 2604
// line end:   2615
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005838C
// line start: 2621
// line end:   2642
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005857C
// line start: 2648
// line end:   2656
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80058684
// line start: 2662
// line end:   2690
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x80058814
// line start: 2702
// line end:   2724
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x80058904
// line start: 2731
// line end:   2737
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x800589CC
// line start: 2744
// line end:   2751
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x80058AA0
// line start: 2758
// line end:   2850
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


// address: 0x8005906C
// line start: 2857
// line end:   2897
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x80059238
// line start: 2903
// line end:   2913
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x80059350
// line start: 2919
// line end:   2932
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x80059464
// line start: 2938
// line end:   3055
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 18
	register unsigned char senditemmsg;
}


// address: 0x800598CC
// line start: 3063
// line end:   3073
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 17
	register unsigned char opok;
}


// address: 0x80059A0C
// line start: 3079
// line end:   3089
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 17
	register unsigned char opok;
}


// address: 0x80059B4C
// line start: 3095
// line end:   3105
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 17
	register unsigned char opok;
}


// address: 0x80059C8C
// line start: 3111
// line end:   3194
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x80059F0C
// line start: 3202
// line end:   3228
void BreakCrux__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int ot;
	// register: 2
	register int oi;
	// register: 6
	register unsigned char mapflag;
}


// address: 0x8005A118
// line start: 3236
// line end:   3297
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 5
	register int oi;
}


// address: 0x8005A690
// line start: 3303
// line end:   3324
void BreakObject__Fii(int pnum, int oi) {
	// register: 17
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x8005A814
// line start: 3332
// line end:   3338
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x8005A8AC
// line start: 3346
// line end:   3370
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x8005A9E0
// line start: 3376
// line end:   3392
void SyncCrux__Fi(int i) {
	// register: 17
	register int j;
	// register: 3
	register int ot;
	// register: 16
	register int oi;
	// register: 19
	register unsigned char mapflag;
}


// address: 0x8005AB5C
// line start: 3399
// line end:   3402
void SyncLever__Fi(int i) {
}


// address: 0x8005AC00
// line start: 3410
// line end:   3420
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x8005AD18
// line start: 3429
// line end:   3444
void SyncPedistal__Fi(int i) {
	// register: 16
	register unsigned char *setp;
	{
		{
			{
			}
		}
	}
}


// address: 0x8005AE94
// line start: 3452
// line end:   3476
void SyncL2Doors__Fi(int i) {
	// register: 4
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005B010
// line start: 3484
// line end:   3507
void SyncL3Doors__Fi(int i) {
	// register: 4
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005B150
// line start: 3515
// line end:   3554
void SyncObjectAnim__Fi(int o) {
	// register: 4
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x8005B2B8
// line start: 3562
// line end:   3698
void GetObjectStr__Fi(int i) {
}


// address: 0x8005B6F0
// line start: 3703
// line end:   3859
void RestoreObjectLight__Fv() {
	// register: 18
	register int i;
	// register: 2
	register int oi;
	// register: 16
	register int ox;
	// register: 17
	register int oy;
}


