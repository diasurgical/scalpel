// C:\diabpsx\SOURCE\MSG.CPP

#include "types.h"

// address: 0x80048814
void delta_init__Fv() {
}


// address: 0x80048874
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 2
	// size: 0xC
	register struct DMonsterStr *p;
}


// address: 0x800488E4
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 4
	// size: 0xC
	register struct DMonsterStr *p;
}


// address: 0x80048944
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 3
	// size: 0xC
	register struct DMonsterStr *pD;
}


// address: 0x800489BC
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


// address: 0x80048C14
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x80048C54
unsigned char delta_get_item__FPC9TCmdGItemUc(struct TCmdGItem *pI, unsigned char bLevel) {
	// register: 24
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 7
	register int i;
}


// address: 0x80048E18
void delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI, int x, int y, unsigned char bLevel) {
	// register: 8
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 9
	register int i;
}


// address: 0x80048F80
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x80048FA4
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x80048FC8
void DeltaAddItem__Fi(int ii) {
	// register: 5
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 8
	register int i;
}


// address: 0x80049208
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x80049238
int DeltaImportData__FPc(char *Src) {
}


// address: 0x8004926C
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80049314
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x8004933C
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdGolem cmd;
}


// address: 0x80049388
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x800493B8
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x800493F0
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x80049430
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x80049478
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x800494A4
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x800494D4
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x8004950C
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x80049580
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x800496B4
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x80049738
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x80049798
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x80049808
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x80049910
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x800499B4
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x800499E4
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x80049AF8
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x80049B00
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x80049B34
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x80049B90
void delta_close_portal__Fi(int pnum) {
}


// address: 0x80049BD0
void check_update_plr__Fi(int pnum) {
}


// address: 0x80049BD8
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


// address: 0x80049C90
unsigned long On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049CC0
unsigned long On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049CF0
unsigned long On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049D20
unsigned long On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049D50
unsigned long On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049DC4
unsigned long On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049E6C
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


// address: 0x80049FB0
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


// address: 0x8004A188
unsigned long On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A230
unsigned long On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004A368
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


// address: 0x8004A538
unsigned long On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004A5D8
unsigned long On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		// register: 17
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


// address: 0x8004A764
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


// address: 0x8004A8A8
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


// address: 0x8004A9C8
unsigned long On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AA78
unsigned long On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AB84
unsigned long On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AC80
unsigned long On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AD80
unsigned long On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004AEB0
unsigned long On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004AFE0
unsigned long On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B04C
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


// address: 0x8004B1A8
unsigned long On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B294
unsigned long On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B378
unsigned long On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B460
unsigned long On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B548
unsigned long On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B5D8
unsigned long On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B614
unsigned long On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B684
unsigned long On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B72C
unsigned long On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B764
unsigned long On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B850
unsigned long On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B8BC
unsigned long On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B928
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


// address: 0x8004BA9C
unsigned long On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BBA4
unsigned long On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BBEC
unsigned long On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BDB4
unsigned long On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004BE50
unsigned long On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004BEEC
unsigned long On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004BF88
unsigned long On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C020
unsigned long On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C0B8
unsigned long On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C0C0
unsigned long On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C0C8
unsigned long On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C0D0
unsigned long On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C128
unsigned long On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004C3C0
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


// address: 0x8004C554
unsigned long On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C5A8
unsigned long On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C5F4
unsigned long On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C634
unsigned long On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C674
unsigned long On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C6B4
unsigned long On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C6F4
unsigned long On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004C73C
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


// address: 0x8004C860
unsigned long On_CHEAT_EXPERIENCE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C868
unsigned long On_CHEAT_SPELL_LEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C870
unsigned long On_DEBUG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C878
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x80117C48
	static unsigned char sbLastCmd;
}


