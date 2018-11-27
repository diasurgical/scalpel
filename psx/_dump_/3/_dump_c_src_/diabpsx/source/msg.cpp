// C:\diabpsx\SOURCE\MSG.CPP

#include "types.h"

// address: 0x8004973C
void run_delta_info__Fv() {
}


// address: 0x80049744
void delta_init__Fv() {
}


// address: 0x800497A4
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 2
	// size: 0xC
	register struct DMonsterStr *p;
}


// address: 0x800498D8
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 4
	// size: 0xC
	register struct DMonsterStr *p;
}


// address: 0x800499A8
void delta_sync_monster__FPC12TSyncMonsterUc(struct TSyncMonster *pSync, unsigned char bLevel) {
	// register: 6
	// size: 0xC
	register struct DMonsterStr *pD;
}


// address: 0x80049A80
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 3
	// size: 0xC
	register struct DMonsterStr *pD;
}


// address: 0x80049B64
void delta_leave_sync__FUc(unsigned char bLevel) {
	{
		// register: 19
		register int i;
		{
			// register: 4
			register int ii;
			// register: 16
			// size: 0xC
			register struct DMonsterStr *pD;
		}
	}
}


// address: 0x80049DDC
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x80049E90
unsigned char delta_get_item__FPC9TCmdGItemUc(struct TCmdGItem *pI, unsigned char bLevel) {
	// register: 24
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 6
	register int i;
}


// address: 0x8004A0D0
void delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI, int x, int y, unsigned char bLevel) {
	// register: 16
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 18
	register int i;
}


// address: 0x8004A300
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x8004A360
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x8004A3C0
void DeltaAddItem__Fi(int ii) {
	// register: 4
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 7
	register int i;
}


// address: 0x8004A634
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x8004A664
int DeltaImportData__FPc(char *Src) {
}


// address: 0x8004A698
void DeltaSaveLevel__Fv() {
	// register: 18
	register int osize;
	// register: 17
	register int nsize;
	// register: 11
	register int countpos;
	// register: 16
	register int pos;
	// register: 5
	register unsigned char count;
	// register: 6
	register unsigned char data;
	// register: 19
	register unsigned char *Src;
	// register: 4
	register unsigned char *Dst;
	{
		// register: 3
		register int i;
	}
}


// address: 0x8004A8B8
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x8004A8E0
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct TCmdGolem cmd;
}


// address: 0x8004A9B0
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE8
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x8004AA48
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFE0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x8004AAF0
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x8004ABA8
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFD0
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x8004AC70
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x8004AC9C
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x8004ACCC
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x8004AD04
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x8004AD78
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x8004AF1C
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x8004B00C
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x8004B0DC
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x8004B170
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFD8
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x8004B2DC
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x8004B380
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x8004B3B0
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x8004B4EC
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x8004B4F4
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x8004B560
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x8004B694
void delta_close_portal__Fi(int pnum) {
}


// address: 0x8004B6FC
void check_update_plr__Fi(int pnum) {
}


// address: 0x8004B730
unsigned long On_SYNCDATA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B758
unsigned long On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8004B830
unsigned long On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B860
unsigned long On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B890
unsigned long On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B8C0
unsigned long On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B8F0
unsigned long On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B9B0
unsigned long On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BA84
unsigned long On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				// register: 18
				register int ii;
			}
		}
	}
}


// address: 0x8004BC4C
unsigned long On_GETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		// register: 17
		// size: 0x20
		register struct TCmdGItem *p;
		// register: 21
		register int nIndex;
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
												// register: 5
												register int hitem;
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


// address: 0x8004BE24
unsigned long On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BEF8
unsigned long On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004C0B4
unsigned long On_AGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		// register: 17
		// size: 0x20
		register struct TCmdGItem *p;
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
												// register: 5
												register int hitem;
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


// address: 0x8004C284
unsigned long On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C324
unsigned long On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		// register: 18
		// size: 0x18
		register struct TCmdPItem *p;
		{
			{
				// register: 3
				register int ii;
			}
		}
	}
}


// address: 0x8004C4C4
unsigned long On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				// register: 3
				register int ii;
			}
		}
	}
}


// address: 0x8004C614
unsigned long On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		// register: 16
		// size: 0x18
		register struct TCmdPItem *p;
		{
			{
			}
		}
	}
}


// address: 0x8004C734
unsigned long On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004C80C
unsigned long On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004C93C
unsigned long On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004CA5C
unsigned long On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004CB80
unsigned long On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004CCCC
unsigned long On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004CE18
unsigned long On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004CED0
unsigned long On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 19
			// size: 0x4
			register struct TCmdParam1 *p;
			// register: 16
			register int dx;
			// register: 2
			register int dy;
		}
	}
}


// address: 0x8004D050
unsigned long On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D160
unsigned long On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D26C
unsigned long On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D37C
unsigned long On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D48C
unsigned long On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004D51C
unsigned long On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004D558
unsigned long On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D5C8
unsigned long On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D69C
unsigned long On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D6D4
unsigned long On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004D7C0
unsigned long On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D82C
unsigned long On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D898
unsigned long On_AWAKEGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				{
					{
						// register: 6
						register unsigned char addok;
						{
							// register: 5
							register int i;
							{
								// register: 2
								register int mi;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8004DA0C
unsigned long On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004DB14
unsigned long On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004DB5C
unsigned long On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004DD58
unsigned long On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004DDF4
unsigned long On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004DE90
unsigned long On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004DF2C
unsigned long On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004DFC4
unsigned long On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E05C
unsigned long On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E064
unsigned long On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E06C
unsigned long On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E074
unsigned long On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E0CC
unsigned long On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004E38C
unsigned long On_ACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		// register: 17
		// size: 0xA
		register struct TCmdLocParam3 *p;
		{
			{
				{
					{
						{
							{
								// register: 4
								register int i;
								// register: 2
								register int mi;
								// register: 6
								register unsigned char addok;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8004E520
unsigned long On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004E574
unsigned long On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004E5C0
unsigned long On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E600
unsigned long On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E640
unsigned long On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E680
unsigned long On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E6C0
unsigned long On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004E708
unsigned long On_ENDSHIELD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				{
					// register: 17
					register int i;
					{
						// register: 16
						register int mi;
					}
				}
			}
		}
	}
}


// address: 0x8004E82C
unsigned long On_CHEAT_EXPERIENCE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004E834
unsigned long On_CHEAT_SPELL_LEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004E83C
unsigned long On_DEBUG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004E844
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x80121908
	static unsigned char sbLastCmd;
}


