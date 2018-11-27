// C:\diabpsx\SOURCE\OBJECTS.CPP

#include "types.h"

// address: 0x8004F38C
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
void FreeObjectGFX__Fv() {
}


// address: 0x8004F5D4
void DeleteObject__Fii(int oi, int i) {
	// register: 4
	register int ox;
	// register: 4
	register int oy;
}


// address: 0x8004F6CC
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004F974
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004FA40
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004FAAC
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004FBD4
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
void Obj_StopAnim__Fi(int i) {
}


// address: 0x800501E0
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
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x80050534
void Obj_Door__Fi(int i) {
	// register: 4
	register int dx;
	// register: 6
	register int dy;
	// register: 5
	register unsigned char dok;
}


// address: 0x80050700
void Obj_Sarc__Fi(int i) {
}


// address: 0x80050784
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x80050894
void Obj_FlameTrap__Fi(int i) {
	// register: 4
	register int xp;
	// register: 5
	register int yp;
	// register: 7
	register int j;
}


// address: 0x80050B84
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
void Obj_BCrossDamage__Fi(int i) {
	// register: 2
	register int resist;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto int damage[4];
}


// address: 0x800511B0
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x80051470
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x800514A8
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
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x80051584
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8005158C
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x8005182C
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x800518D0
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x80051C94
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 17
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8005208C
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x80052444
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x800527FC
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x80052B24
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x80052E4C
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
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80053520
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80053690
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80053808
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
void OperateBookLever__Fii(int pnum, int i) {
	// register: 19
	register int x;
	// register: 18
	register int y;
	// register: 16
	register int tren;
}


// address: 0x80054314
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x8005450C
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int j;
	// register: 8
	register int mdir;
	// register: 21
	register int mtype;
}


// address: 0x800548FC
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80054AE4
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80054C7C
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80054EF0
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x800550F0
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800552C8
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80055440
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x800555B8
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
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x80055BEC
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
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005838C
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005857C
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80058684
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x80058814
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x80058904
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x800589CC
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x80058AA0
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
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x80059238
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x80059350
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x80059464
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 18
	register unsigned char senditemmsg;
}


// address: 0x800598CC
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 17
	register unsigned char opok;
}


// address: 0x80059A0C
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 17
	register unsigned char opok;
}


// address: 0x80059B4C
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 17
	register unsigned char opok;
}


// address: 0x80059C8C
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x80059F0C
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
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 5
	register int oi;
}


// address: 0x8005A690
void BreakObject__Fii(int pnum, int oi) {
	// register: 17
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x8005A814
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x8005A8AC
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x8005A9E0
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
void SyncLever__Fi(int i) {
}


// address: 0x8005AC00
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x8005AD18
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
void SyncL2Doors__Fi(int i) {
	// register: 4
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005B010
void SyncL3Doors__Fi(int i) {
	// register: 4
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005B150
void SyncObjectAnim__Fi(int o) {
	// register: 4
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x8005B2B8
void GetObjectStr__Fi(int i) {
}


// address: 0x8005B6F0
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


