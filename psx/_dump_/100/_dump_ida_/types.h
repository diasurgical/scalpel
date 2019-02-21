enum _0fake {
	MQ_BUTCHER  = 1,
	MQ_GARBUD   = 2,
	MQ_ZHAR     = 4,
	MQ_LTBANNER = 8,
	MQ_VEIL     = 16,
	MQ_WARLORD  = 32,
	MQ_SKELKING = 64,
	MQ_DIABLO   = 128,
	MQ_BETRAYER = 256,
	MQ_SCHAMB   = 512,
	MQ_ANVIL    = 1024,
	MQ_PWATER   = 2048,
	MQ_BLOOD    = 4096,
};

enum _48fake {
	VK_SPACE    = 0,
	VK_ESCAPE   = 1,
	VK_RETURN   = 2,
	VK_BACK     = 3,
	VK_DOWN     = 4,
	VK_UP       = 5,
	VK_LEFT     = 6,
	VK_RIGHT    = 7,
	VK_SNAPSHOT = 8,
	VK_F1       = 9,
	VK_F2       = 10,
	VK_F3       = 11,
	VK_F4       = 12,
	VK_F5       = 13,
	VK_F6       = 14,
	VK_F7       = 15,
	VK_F8       = 16,
	VK_F9       = 17,
	VK_F10      = 18,
	VK_F11      = 19,
	VK_F12      = 20,
	VK_PAUSE    = 21,
	VK_PRIOR    = 22,
	VK_NEXT     = 23,
	VK_TAB      = 24,
	VK_SHIFT    = 25,
};

enum _65fake {
	TMUSIC_TOWN  = 0,
	TMUSIC_L1    = 1,
	TMUSIC_L2    = 2,
	TMUSIC_L3    = 3,
	TMUSIC_L4    = 4,
	TMUSIC_INTRO = 5,
	NUM_MUSIC    = 6,
};

enum _71fake {
	MG_ACID     = 0,
	MG_BAT      = 1,
	MG_BIGFALL  = 2,
	MG_BLACK    = 3,
	MG_DARKMAGE = 4,
	MG_DEMSKEL  = 5,
	MG_FALSPEAR = 6,
	MG_FALSWORD = 7,
	MG_FAT      = 8,
	MG_FATC     = 9,
	MG_GARGOYLE = 10,
	MG_GOATBOW  = 11,
	MG_GOATMACE = 12,
	MG_GOLEM    = 13,
	MG_MAGE     = 14,
	MG_MAGMA    = 15,
	MG_SCAV     = 16,
	MG_SKELAXE  = 17,
	MG_SKELSD   = 18,
	MG_SKING    = 19,
	MG_SNAKE    = 20,
	MG_SNEAK    = 21,
	MG_SUCC     = 22,
	MG_TSNEAK   = 23,
	MG_ZOMBIE   = 24,
	MG_WORM     = 25,
	MG_GOATLORD = 26,
	MG_RHINO    = 27,
	MG_SKELBOW  = 28,
	MG_DIABLO   = 29,
	MG_THIN     = 30,
	MG_MEGA     = 31,
	MG_UNRAV    = 32,
	MG_FIREMAN  = 33,
};

enum _72fake {
	TSK_NOENUM         = 0,
	TSK_GAMETASK       = 16384,
	TSK_BACKGROUND     = 16385,
	TSK_MONSTER_CHOOSE = 16386,
	TSK_CUTSCREEN      = 16387,
	SYS_TASK           = 32768,
	SYS_GAMEOVER       = 32769,
};

enum _73fake {
	GAL_PHANTOM_MEM         = 0,
	GAL_FIRST_FREE_MEM_TYPE = 1,
	GAL_FLAGS               = 32768,
	GAL_HIGH                = 32768,
};

enum GAL_ERROR_CODE {
	ERR_GAL_NO_ERROR             = 0,
	ERR_RUN_OUT_OF_MEM_HDRS      = 1,
	ERR_GAL_MEM_TYPE_EXISTS      = 2,
	ERR_GAL_MEM_TYPE_OVERLAP     = 3,
	ERR_GAL_INVALID_MEM_TYPE     = 4,
	ERR_GAL_INVALID_MEM_HANDLE   = 5,
	ERR_GAL_MEM_ALREADY_UNLOCKED = 6,
	ERR_GAL_MEM_BLOCK_COLLISION  = 7,
	ERR_GAL_MEM_AREA_NOT_COVERED = 8,
	ERR_GAL_NO_MEM_MOVE          = 9,
	NUM_OF_ERROR_MESSAGES        = 10,
};

enum GAL_VERB_LEV {
	GAL_SILENT  = 0,
	GAL_AVERAGE = 1,
	GAL_NOISY   = 2,
};

enum LANG_TYPE {
	LANG_ENGLISH = 0,
	LANG_FRENCH  = 1,
	LANG_GERMAN  = 2,
	LANG_SWEDISH = 3,
	LANG_JAP     = 4,
	LANG_NONE    = 5,
};

enum LANG_DB_NO {
	LANG_DB_MAIN  = 0,
	LANG_DB_QUEST = 1,
	LANG_DB_BACK  = 2,
};

enum B_PER_PIX {
	BITS_4 = 0,
	BITS_5 = 1,
	BITS_8 = 2,
};

enum _74fake {
	PAD_UP       = 1,
	PAD_DOWN     = 2,
	PAD_LEFT     = 4,
	PAD_RIGHT    = 8,
	PAD_ALL_DIRS = 15,
	PAD_START    = 16,
	PAD_SELECT   = 32,
	PAD_CROSS    = 64,
	PAD_SQUARE   = 128,
	PAD_CIRCLE   = 256,
	PAD_TRIANGLE = 512,
	PAD_L1       = 1024,
	PAD_L2       = 2048,
	PAD_R1       = 4096,
	PAD_R2       = 8192,
	PAD_BUTTONS  = 16320,
};

enum TXT_JUST {
	JustLeft   = 0,
	JustCentre = 1,
	JustRight  = 2,
};

enum _item_indexes {
	IDI_GOLD       = 0,
	IDI_WARRIOR    = 1,
	IDI_WARRSHLD   = 2,
	IDI_WARRCLUB   = 3,
	IDI_ROGUE      = 4,
	IDI_SORCEROR   = 5,
	IDI_CLEAVER    = 6,
	IDI_FIRSTQUEST = 6,
	IDI_SKCROWN    = 7,
	IDI_INFRARING  = 8,
	IDI_ROCK       = 9,
	IDI_OPTAMULET  = 10,
	IDI_TRING      = 11,
	IDI_BANNER     = 12,
	IDI_HARCREST   = 13,
	IDI_STEELVEIL  = 14,
	IDI_GLDNELIX   = 15,
	IDI_ANVIL      = 16,
	IDI_MUSHROOM   = 17,
	IDI_BRAIN      = 18,
	IDI_FUNGALTM   = 19,
	IDI_SPECELIX   = 20,
	IDI_BLDSTONE   = 21,
	IDI_LASTQUEST  = 22,
	IDI_MAPOFDOOM  = 22,
	IDI_EAR        = 23,
	IDI_HEAL       = 24,
	IDI_MANA       = 25,
	IDI_IDENTIFY   = 26,
	IDI_PORTAL     = 27,
	IDI_ARMOFVAL   = 28,
	IDI_FULLHEAL   = 29,
	IDI_FULLMANA   = 30,
	IDI_GRISWOLD   = 31,
	IDI_LGTFORGE   = 32,
	IDI_LAZSTAFF   = 33,
	IDI_RESURRECT  = 34,
};

enum _86fake {
	PEQ_pNAnim = 0,
	PEQ_pDAnim = 1,
	PEQ_pAAnim = 2,
	PEQ_pBAnim = 3,
	PEQ_pFAnim = 4,
	PEQ_pLAnim = 5,
	PEQ_pTAnim = 6,
	PEQ_pHAnim = 7,
	PEQ_pWAnim = 8,
};

enum PACTION {
	PL_NOACTION = 0,
	PL_WALK     = 1,
	PL_STAND    = 2,
	PL_ATTACK   = 3,
	PL_HIT      = 4,
	PL_BLOCK    = 5,
	PL_DEATH    = 6,
	PL_TWALK    = 7,
	PL_TSTAND   = 8,
	PL_LMAGIC   = 9,
	PL_QMAGIC   = 10,
	PL_FMAGIC   = 11,
};

enum _90fake {
	PAD_UP_IS_UP      = 0,
	PAD_UP_IS_UPRIGHT = 1,
};

enum _91fake {
	GAMEPAD_RUNNING          = 0,
	GAMEPAD_TOGGLEPAUSE      = 1,
	GAMEPAD_STOP_PLAYERS     = 2,
	GAMEPAD_STOP_PLAYER1     = 3,
	GAMEPAD_STOP_PLAYER2     = 4,
	GAMEPAD_START_PLAYERS    = 5,
	GAMEPAD_START_PLAYER1    = 6,
	GAMEPAD_START_PLAYER2    = 7,
	GAMEPAD_SET_FUNCTION     = 8,
	GAMEPAD_SETALL_FUNCTIONS = 9,
	GAMEPAD_SET_UPFUNCTION   = 10,
	GAMEPAD_GETALL_FUNCTIONS = 11,
	GAMEPAD_GETWALK          = 12,
};

enum _98fake {
	WORK_RAM = 1,
	FAST_RAM = 2,
};

enum OVER_TYPE {
	OVR_NONE     = 0,
	OVR_PREGAME  = 1,
	OVR_GAME     = 2,
	OVR_FRONTEND = 3,
	OVR_FMV      = 4,
};

enum ping_status {
	ping_ok      = 0,
	ping_error   = 1,
	ping_empty   = 2,
	ping_new     = 3,
	ping_silence = 4,
};

enum write_ret {
	write_ok       = 0,
	write_error    = 1,
	write_no_space = 2,
	write_no_card  = 3,
};

enum read_ret {
	read_ok      = 0,
	read_error   = 1,
	read_invalid = 2,
	read_no_card = 3,
};

enum card_events {
	cardevent_directory  = 0,
	cardevent_inserted   = 1,
	cardevent_saving     = 2,
	cardevent_loading    = 3,
	cardevent_formatting = 4,
	cardevent_deleting   = 5,
	cardevent_error      = 6,
	cardevent_initialise = 7,
};

enum TPAGE_TYPES {
	TPAGE_4BIT  = 0,
	TPAGE_8BIT  = 1,
	TPAGE_16BIT = 2,
};

enum FILE_SYSTEM {
	FS_PC = 0,
	FS_CD = 1,
};

enum DEV_KIT {
	DK_SONY_ISA = 0,
	DK_SONY_PCI = 1,
	DK_CLIMAX   = 2,
};

enum _125fake {
	PS_WALK1      = 0,
	PS_WALK2      = 1,
	PS_WALK3      = 2,
	PS_WALK4      = 3,
	PS_BFIRE      = 4,
	PS_FMAG       = 5,
	PS_TMAG       = 6,
	PS_LGHIT      = 7,
	PS_LGHIT1     = 8,
	PS_SWING      = 9,
	PS_SWING2     = 10,
	PS_DEAD       = 11,
	IS_QUESTDN    = 12,
	IS_ARMRFKD    = 13,
	IS_BARLFIRE   = 14,
	IS_BARREL     = 15,
	IS_BHIT       = 16,
	IS_BHIT1      = 17,
	IS_CHEST      = 18,
	IS_DOORCLOS   = 19,
	IS_DOOROPEN   = 20,
	IS_FLIP       = 21,
	IS_GOLD       = 22,
	IS_HLMTFKD    = 23,
	IS_IANVL      = 24,
	IS_IAXE       = 25,
	IS_IBLST      = 26,
	IS_IBODY      = 27,
	IS_IBOOK      = 28,
	IS_IBOW       = 29,
	IS_ICAP       = 30,
	IS_IGRAB      = 31,
	IS_IHARM      = 32,
	IS_ILARM      = 33,
	IS_IMUSH      = 34,
	IS_IPOT       = 35,
	IS_IRING      = 36,
	IS_IROCK      = 37,
	IS_ISCROL     = 38,
	IS_ISHIEL     = 39,
	IS_ISIGN      = 40,
	IS_ISTAF      = 41,
	IS_ISWORD     = 42,
	IS_LEVER      = 43,
	IS_MAGIC      = 44,
	IS_MAGIC1     = 45,
	IS_RBOOK      = 46,
	IS_SARC       = 47,
	IS_SHLDFKD    = 48,
	IS_SWRDFKD    = 49,
	IS_TITLEMOV   = 50,
	IS_TITLSLCT   = 51,
	SFX_SILENCE   = 52,
	IS_TRAP       = 53,
	IS_CAST1      = 54,
	IS_CAST10     = 55,
	IS_CAST12     = 56,
	IS_CAST2      = 57,
	IS_CAST3      = 58,
	IS_CAST4      = 59,
	IS_CAST5      = 60,
	IS_CAST6      = 61,
	IS_CAST7      = 62,
	IS_CAST8      = 63,
	IS_CAST9      = 64,
	LS_HEALING    = 65,
	IS_REPAIR     = 66,
	LS_ACID       = 67,
	LS_ACIDS      = 68,
	LS_APOC       = 69,
	LS_ARROWALL   = 70,
	LS_BLODBOIL   = 71,
	LS_BLODSTAR   = 72,
	LS_BLSIMPT    = 73,
	LS_BONESP     = 74,
	LS_BSIMPCT    = 75,
	LS_CALDRON    = 76,
	LS_CBOLT      = 77,
	LS_CHLTNING   = 78,
	LS_DSERP      = 79,
	LS_ELECIMP1   = 80,
	LS_ELEMENTL   = 81,
	LS_ETHEREAL   = 82,
	LS_FBALL      = 83,
	LS_FBOLT1     = 84,
	LS_FBOLT2     = 85,
	LS_FIRIMP1    = 86,
	LS_FIRIMP2    = 87,
	LS_FLAMWAVE   = 88,
	LS_FLASH      = 89,
	LS_FOUNTAIN   = 90,
	LS_GOLUM      = 91,
	LS_GOLUMDED   = 92,
	LS_GSHRINE    = 93,
	LS_GUARD      = 94,
	LS_GUARDLAN   = 95,
	LS_HOLYBOLT   = 96,
	LS_HYPER      = 97,
	LS_INFRAVIS   = 98,
	LS_INVISIBL   = 99,
	LS_INVPOT     = 100,
	LS_LNING1     = 101,
	LS_LTNING     = 102,
	LS_MSHIELD    = 103,
	LS_NOVA       = 104,
	LS_PORTAL     = 105,
	LS_PUDDLE     = 106,
	LS_RESUR      = 107,
	LS_SCURSE     = 108,
	LS_SCURIMP    = 109,
	LS_SENTINEL   = 110,
	LS_SHATTER    = 111,
	LS_SOULFIRE   = 112,
	LS_SPOUTLOP   = 113,
	LS_SPOUTSTR   = 114,
	LS_STORM      = 115,
	LS_TRAPDIS    = 116,
	LS_TELEPORT   = 117,
	LS_VTHEFT     = 118,
	LS_WALLLOOP   = 119,
	LS_WALLSTRT   = 120,
	TSFX_BMAID1   = 121,
	TSFX_BMAID2   = 122,
	TSFX_BMAID3   = 123,
	TSFX_BMAID4   = 124,
	TSFX_BMAID5   = 125,
	TSFX_BMAID6   = 126,
	TSFX_BMAID7   = 127,
	TSFX_BMAID8   = 128,
	TSFX_BMAID9   = 129,
	TSFX_BMAID10  = 130,
	TSFX_BMAID11  = 131,
	TSFX_BMAID12  = 132,
	TSFX_BMAID13  = 133,
	TSFX_BMAID14  = 134,
	TSFX_BMAID15  = 135,
	TSFX_BMAID16  = 136,
	TSFX_BMAID17  = 137,
	TSFX_BMAID18  = 138,
	TSFX_BMAID19  = 139,
	TSFX_BMAID20  = 140,
	TSFX_BMAID21  = 141,
	TSFX_BMAID22  = 142,
	TSFX_BMAID23  = 143,
	TSFX_BMAID24  = 144,
	TSFX_BMAID25  = 145,
	TSFX_BMAID26  = 146,
	TSFX_BMAID27  = 147,
	TSFX_BMAID28  = 148,
	TSFX_BMAID29  = 149,
	TSFX_BMAID30  = 150,
	TSFX_BMAID31  = 151,
	TSFX_BMAID32  = 152,
	TSFX_BMAID33  = 153,
	TSFX_BMAID34  = 154,
	TSFX_BMAID35  = 155,
	TSFX_BMAID36  = 156,
	TSFX_BMAID37  = 157,
	TSFX_BMAID38  = 158,
	TSFX_BMAID39  = 159,
	TSFX_BMAID40  = 160,
	TSFX_SMITH1   = 161,
	TSFX_SMITH2   = 162,
	TSFX_SMITH3   = 163,
	TSFX_SMITH4   = 164,
	TSFX_SMITH5   = 165,
	TSFX_SMITH6   = 166,
	TSFX_SMITH7   = 167,
	TSFX_SMITH8   = 168,
	TSFX_SMITH9   = 169,
	TSFX_SMITH10  = 170,
	TSFX_SMITH11  = 171,
	TSFX_SMITH12  = 172,
	TSFX_SMITH13  = 173,
	TSFX_SMITH14  = 174,
	TSFX_SMITH15  = 175,
	TSFX_SMITH16  = 176,
	TSFX_SMITH17  = 177,
	TSFX_SMITH18  = 178,
	TSFX_SMITH19  = 179,
	TSFX_SMITH20  = 180,
	TSFX_SMITH21  = 181,
	TSFX_SMITH22  = 182,
	TSFX_SMITH23  = 183,
	TSFX_SMITH24  = 184,
	TSFX_SMITH25  = 185,
	TSFX_SMITH26  = 186,
	TSFX_SMITH27  = 187,
	TSFX_SMITH28  = 188,
	TSFX_SMITH29  = 189,
	TSFX_SMITH30  = 190,
	TSFX_SMITH31  = 191,
	TSFX_SMITH32  = 192,
	TSFX_SMITH33  = 193,
	TSFX_SMITH34  = 194,
	TSFX_SMITH35  = 195,
	TSFX_SMITH36  = 196,
	TSFX_SMITH37  = 197,
	TSFX_SMITH38  = 198,
	TSFX_SMITH39  = 199,
	TSFX_SMITH40  = 200,
	TSFX_SMITH41  = 201,
	TSFX_SMITH42  = 202,
	TSFX_SMITH43  = 203,
	TSFX_SMITH44  = 204,
	TSFX_SMITH45  = 205,
	TSFX_SMITH46  = 206,
	TSFX_SMITH47  = 207,
	TSFX_SMITH48  = 208,
	TSFX_SMITH49  = 209,
	TSFX_SMITH50  = 210,
	TSFX_SMITH51  = 211,
	TSFX_SMITH52  = 212,
	TSFX_SMITH53  = 213,
	TSFX_SMITH54  = 214,
	TSFX_SMITH55  = 215,
	TSFX_SMITH56  = 216,
	TSFX_COW1     = 217,
	TSFX_COW2     = 218,
	TSFX_BATS     = 219,
	TSFX_BIRDCHR1 = 220,
	TSFX_BIRDCHR2 = 221,
	TSFX_BIRDS1   = 222,
	TSFX_BIRDS2   = 223,
	TSFX_CRICKET1 = 224,
	TSFX_CRICKET2 = 225,
	TSFX_MICE     = 226,
	TSFX_OWLECHO  = 227,
	TSFX_STREAM   = 228,
	TSFX_TAVERN   = 229,
	TSFX_TREEBLOW = 230,
	TSFX_WINDBLOW = 231,
	TSFX_COW3     = 232,
	TSFX_COW4     = 233,
	TSFX_COW5     = 234,
	TSFX_COW6     = 235,
	TSFX_COW7     = 236,
	TSFX_COW8     = 237,
	TSFX_DEADGUY  = 238,
	TSFX_DRUNK1   = 239,
	TSFX_DRUNK2   = 240,
	TSFX_DRUNK3   = 241,
	TSFX_DRUNK4   = 242,
	TSFX_DRUNK5   = 243,
	TSFX_DRUNK6   = 244,
	TSFX_DRUNK7   = 245,
	TSFX_DRUNK8   = 246,
	TSFX_DRUNK9   = 247,
	TSFX_DRUNK10  = 248,
	TSFX_DRUNK11  = 249,
	TSFX_DRUNK12  = 250,
	TSFX_DRUNK13  = 251,
	TSFX_DRUNK14  = 252,
	TSFX_DRUNK15  = 253,
	TSFX_DRUNK16  = 254,
	TSFX_DRUNK17  = 255,
	TSFX_DRUNK18  = 256,
	TSFX_DRUNK19  = 257,
	TSFX_DRUNK20  = 258,
	TSFX_DRUNK21  = 259,
	TSFX_DRUNK22  = 260,
	TSFX_DRUNK23  = 261,
	TSFX_DRUNK24  = 262,
	TSFX_DRUNK25  = 263,
	TSFX_DRUNK26  = 264,
	TSFX_DRUNK27  = 265,
	TSFX_DRUNK28  = 266,
	TSFX_DRUNK29  = 267,
	TSFX_DRUNK30  = 268,
	TSFX_DRUNK31  = 269,
	TSFX_DRUNK32  = 270,
	TSFX_DRUNK33  = 271,
	TSFX_DRUNK34  = 272,
	TSFX_DRUNK35  = 273,
	TSFX_HEALER1  = 274,
	TSFX_HEALER2  = 275,
	TSFX_HEALER3  = 276,
	TSFX_HEALER4  = 277,
	TSFX_HEALER5  = 278,
	TSFX_HEALER6  = 279,
	TSFX_HEALER7  = 280,
	TSFX_HEALER8  = 281,
	TSFX_HEALER9  = 282,
	TSFX_HEALER10 = 283,
	TSFX_HEALER11 = 284,
	TSFX_HEALER12 = 285,
	TSFX_HEALER13 = 286,
	TSFX_HEALER14 = 287,
	TSFX_HEALER15 = 288,
	TSFX_HEALER16 = 289,
	TSFX_HEALER17 = 290,
	TSFX_HEALER18 = 291,
	TSFX_HEALER19 = 292,
	TSFX_HEALER20 = 293,
	TSFX_HEALER21 = 294,
	TSFX_HEALER22 = 295,
	TSFX_HEALER23 = 296,
	TSFX_HEALER24 = 297,
	TSFX_HEALER25 = 298,
	TSFX_HEALER26 = 299,
	TSFX_HEALER27 = 300,
	TSFX_HEALER28 = 301,
	TSFX_HEALER29 = 302,
	TSFX_HEALER30 = 303,
	TSFX_HEALER31 = 304,
	TSFX_HEALER32 = 305,
	TSFX_HEALER33 = 306,
	TSFX_HEALER34 = 307,
	TSFX_HEALER35 = 308,
	TSFX_HEALER36 = 309,
	TSFX_HEALER37 = 310,
	TSFX_HEALER38 = 311,
	TSFX_HEALER39 = 312,
	TSFX_HEALER40 = 313,
	TSFX_HEALER41 = 314,
	TSFX_HEALER42 = 315,
	TSFX_HEALER43 = 316,
	TSFX_HEALER44 = 317,
	TSFX_HEALER45 = 318,
	TSFX_HEALER46 = 319,
	TSFX_HEALER47 = 320,
	TSFX_PEGBOY1  = 321,
	TSFX_PEGBOY2  = 322,
	TSFX_PEGBOY3  = 323,
	TSFX_PEGBOY4  = 324,
	TSFX_PEGBOY5  = 325,
	TSFX_PEGBOY6  = 326,
	TSFX_PEGBOY7  = 327,
	TSFX_PEGBOY8  = 328,
	TSFX_PEGBOY9  = 329,
	TSFX_PEGBOY10 = 330,
	TSFX_PEGBOY11 = 331,
	TSFX_PEGBOY12 = 332,
	TSFX_PEGBOY13 = 333,
	TSFX_PEGBOY14 = 334,
	TSFX_PEGBOY15 = 335,
	TSFX_PEGBOY16 = 336,
	TSFX_PEGBOY17 = 337,
	TSFX_PEGBOY18 = 338,
	TSFX_PEGBOY19 = 339,
	TSFX_PEGBOY20 = 340,
	TSFX_PEGBOY21 = 341,
	TSFX_PEGBOY22 = 342,
	TSFX_PEGBOY23 = 343,
	TSFX_PEGBOY24 = 344,
	TSFX_PEGBOY25 = 345,
	TSFX_PEGBOY26 = 346,
	TSFX_PEGBOY27 = 347,
	TSFX_PEGBOY28 = 348,
	TSFX_PEGBOY29 = 349,
	TSFX_PEGBOY30 = 350,
	TSFX_PEGBOY31 = 351,
	TSFX_PEGBOY32 = 352,
	TSFX_PEGBOY33 = 353,
	TSFX_PEGBOY34 = 354,
	TSFX_PEGBOY35 = 355,
	TSFX_PEGBOY36 = 356,
	TSFX_PEGBOY37 = 357,
	TSFX_PEGBOY38 = 358,
	TSFX_PEGBOY39 = 359,
	TSFX_PEGBOY40 = 360,
	TSFX_PEGBOY41 = 361,
	TSFX_PEGBOY42 = 362,
	TSFX_PEGBOY43 = 363,
	TSFX_PRIEST0  = 364,
	TSFX_PRIEST1  = 365,
	TSFX_PRIEST2  = 366,
	TSFX_PRIEST3  = 367,
	TSFX_PRIEST4  = 368,
	TSFX_PRIEST5  = 369,
	TSFX_PRIEST6  = 370,
	TSFX_PRIEST7  = 371,
	TSFX_STORY0   = 372,
	TSFX_STORY1   = 373,
	TSFX_STORY2   = 374,
	TSFX_STORY3   = 375,
	TSFX_STORY4   = 376,
	TSFX_STORY5   = 377,
	TSFX_STORY6   = 378,
	TSFX_STORY7   = 379,
	TSFX_STORY8   = 380,
	TSFX_STORY9   = 381,
	TSFX_STORY10  = 382,
	TSFX_STORY11  = 383,
	TSFX_STORY12  = 384,
	TSFX_STORY13  = 385,
	TSFX_STORY14  = 386,
	TSFX_STORY15  = 387,
	TSFX_STORY16  = 388,
	TSFX_STORY17  = 389,
	TSFX_STORY18  = 390,
	TSFX_STORY19  = 391,
	TSFX_STORY20  = 392,
	TSFX_STORY21  = 393,
	TSFX_STORY22  = 394,
	TSFX_STORY23  = 395,
	TSFX_STORY24  = 396,
	TSFX_STORY25  = 397,
	TSFX_STORY26  = 398,
	TSFX_STORY27  = 399,
	TSFX_STORY28  = 400,
	TSFX_STORY29  = 401,
	TSFX_STORY30  = 402,
	TSFX_STORY31  = 403,
	TSFX_STORY32  = 404,
	TSFX_STORY33  = 405,
	TSFX_STORY34  = 406,
	TSFX_STORY35  = 407,
	TSFX_STORY36  = 408,
	TSFX_STORY37  = 409,
	TSFX_STORY38  = 410,
	TSFX_TAVERN0  = 411,
	TSFX_TAVERN1  = 412,
	TSFX_TAVERN2  = 413,
	TSFX_TAVERN3  = 414,
	TSFX_TAVERN4  = 415,
	TSFX_TAVERN5  = 416,
	TSFX_TAVERN6  = 417,
	TSFX_TAVERN7  = 418,
	TSFX_TAVERN8  = 419,
	TSFX_TAVERN9  = 420,
	TSFX_TAVERN10 = 421,
	TSFX_TAVERN11 = 422,
	TSFX_TAVERN12 = 423,
	TSFX_TAVERN13 = 424,
	TSFX_TAVERN14 = 425,
	TSFX_TAVERN15 = 426,
	TSFX_TAVERN16 = 427,
	TSFX_TAVERN17 = 428,
	TSFX_TAVERN18 = 429,
	TSFX_TAVERN19 = 430,
	TSFX_TAVERN20 = 431,
	TSFX_TAVERN21 = 432,
	TSFX_TAVERN22 = 433,
	TSFX_TAVERN23 = 434,
	TSFX_TAVERN24 = 435,
	TSFX_TAVERN25 = 436,
	TSFX_TAVERN26 = 437,
	TSFX_TAVERN27 = 438,
	TSFX_TAVERN28 = 439,
	TSFX_TAVERN29 = 440,
	TSFX_TAVERN30 = 441,
	TSFX_TAVERN31 = 442,
	TSFX_TAVERN32 = 443,
	TSFX_TAVERN33 = 444,
	TSFX_TAVERN34 = 445,
	TSFX_TAVERN35 = 446,
	TSFX_TAVERN36 = 447,
	TSFX_TAVERN37 = 448,
	TSFX_TAVERN38 = 449,
	TSFX_TAVERN39 = 450,
	TSFX_TAVERN40 = 451,
	TSFX_TAVERN41 = 452,
	TSFX_TAVERN42 = 453,
	TSFX_TAVERN43 = 454,
	TSFX_TAVERN44 = 455,
	TSFX_TAVERN45 = 456,
	TSFX_WITCH1   = 457,
	TSFX_WITCH2   = 458,
	TSFX_WITCH3   = 459,
	TSFX_WITCH4   = 460,
	TSFX_WITCH5   = 461,
	TSFX_WITCH6   = 462,
	TSFX_WITCH7   = 463,
	TSFX_WITCH8   = 464,
	TSFX_WITCH9   = 465,
	TSFX_WITCH10  = 466,
	TSFX_WITCH11  = 467,
	TSFX_WITCH12  = 468,
	TSFX_WITCH13  = 469,
	TSFX_WITCH14  = 470,
	TSFX_WITCH15  = 471,
	TSFX_WITCH16  = 472,
	TSFX_WITCH17  = 473,
	TSFX_WITCH18  = 474,
	TSFX_WITCH19  = 475,
	TSFX_WITCH20  = 476,
	TSFX_WITCH21  = 477,
	TSFX_WITCH22  = 478,
	TSFX_WITCH23  = 479,
	TSFX_WITCH24  = 480,
	TSFX_WITCH25  = 481,
	TSFX_WITCH26  = 482,
	TSFX_WITCH27  = 483,
	TSFX_WITCH28  = 484,
	TSFX_WITCH29  = 485,
	TSFX_WITCH30  = 486,
	TSFX_WITCH31  = 487,
	TSFX_WITCH32  = 488,
	TSFX_WITCH33  = 489,
	TSFX_WITCH34  = 490,
	TSFX_WITCH35  = 491,
	TSFX_WITCH36  = 492,
	TSFX_WITCH37  = 493,
	TSFX_WITCH38  = 494,
	TSFX_WITCH39  = 495,
	TSFX_WITCH40  = 496,
	TSFX_WITCH41  = 497,
	TSFX_WITCH42  = 498,
	TSFX_WITCH43  = 499,
	TSFX_WITCH44  = 500,
	TSFX_WITCH45  = 501,
	TSFX_WITCH46  = 502,
	TSFX_WITCH47  = 503,
	TSFX_WITCH48  = 504,
	TSFX_WITCH49  = 505,
	TSFX_WITCH50  = 506,
	TSFX_WOUND    = 507,
	PS_MAGE1      = 508,
	PS_MAGE2      = 509,
	PS_MAGE3      = 510,
	PS_MAGE4      = 511,
	PS_MAGE5      = 512,
	PS_MAGE6      = 513,
	PS_MAGE7      = 514,
	PS_MAGE8      = 515,
	PS_MAGE9      = 516,
	PS_MAGE10     = 517,
	PS_MAGE11     = 518,
	PS_MAGE12     = 519,
	PS_MAGE13     = 520,
	PS_MAGE14     = 521,
	PS_MAGE15     = 522,
	PS_MAGE16     = 523,
	PS_MAGE17     = 524,
	PS_MAGE18     = 525,
	PS_MAGE19     = 526,
	PS_MAGE20     = 527,
	PS_MAGE21     = 528,
	PS_MAGE22     = 529,
	PS_MAGE23     = 530,
	PS_MAGE24     = 531,
	PS_MAGE25     = 532,
	PS_MAGE26     = 533,
	PS_MAGE27     = 534,
	PS_MAGE28     = 535,
	PS_MAGE29     = 536,
	PS_MAGE30     = 537,
	PS_MAGE31     = 538,
	PS_MAGE32     = 539,
	PS_MAGE33     = 540,
	PS_MAGE34     = 541,
	PS_MAGE35     = 542,
	PS_MAGE36     = 543,
	PS_MAGE37     = 544,
	PS_MAGE38     = 545,
	PS_MAGE39     = 546,
	PS_MAGE40     = 547,
	PS_MAGE41     = 548,
	PS_MAGE42     = 549,
	PS_MAGE43     = 550,
	PS_MAGE44     = 551,
	PS_MAGE45     = 552,
	PS_MAGE46     = 553,
	PS_MAGE47     = 554,
	PS_MAGE48     = 555,
	PS_MAGE49     = 556,
	PS_MAGE50     = 557,
	PS_MAGE51     = 558,
	PS_MAGE52     = 559,
	PS_MAGE53     = 560,
	PS_MAGE54     = 561,
	PS_MAGE55     = 562,
	PS_MAGE56     = 563,
	PS_MAGE57     = 564,
	PS_MAGE58     = 565,
	PS_MAGE59     = 566,
	PS_MAGE60     = 567,
	PS_MAGE61     = 568,
	PS_MAGE62     = 569,
	PS_MAGE63     = 570,
	PS_MAGE64     = 571,
	PS_MAGE65     = 572,
	PS_MAGE66     = 573,
	PS_MAGE67     = 574,
	PS_MAGE68     = 575,
	PS_MAGE69     = 576,
	PS_MAGE69B    = 577,
	PS_MAGE70     = 578,
	PS_MAGE71     = 579,
	PS_MAGE72     = 580,
	PS_MAGE73     = 581,
	PS_MAGE74     = 582,
	PS_MAGE75     = 583,
	PS_MAGE76     = 584,
	PS_MAGE77     = 585,
	PS_MAGE78     = 586,
	PS_MAGE79     = 587,
	PS_MAGE80     = 588,
	PS_MAGE81     = 589,
	PS_MAGE82     = 590,
	PS_MAGE83     = 591,
	PS_MAGE84     = 592,
	PS_MAGE85     = 593,
	PS_MAGE86     = 594,
	PS_MAGE87     = 595,
	PS_MAGE88     = 596,
	PS_MAGE89     = 597,
	PS_MAGE90     = 598,
	PS_MAGE91     = 599,
	PS_MAGE92     = 600,
	PS_MAGE93     = 601,
	PS_MAGE94     = 602,
	PS_MAGE95     = 603,
	PS_MAGE96     = 604,
	PS_MAGE97     = 605,
	PS_MAGE98     = 606,
	PS_MAGE99     = 607,
	PS_MAGE100    = 608,
	PS_MAGE101    = 609,
	PS_MAGE102    = 610,
	PS_SDEATH     = 611,
	PS_ROGUE1     = 612,
	PS_ROGUE2     = 613,
	PS_ROGUE3     = 614,
	PS_ROGUE4     = 615,
	PS_ROGUE5     = 616,
	PS_ROGUE6     = 617,
	PS_ROGUE7     = 618,
	PS_ROGUE8     = 619,
	PS_ROGUE9     = 620,
	PS_ROGUE10    = 621,
	PS_ROGUE11    = 622,
	PS_ROGUE12    = 623,
	PS_ROGUE13    = 624,
	PS_ROGUE14    = 625,
	PS_ROGUE15    = 626,
	PS_ROGUE16    = 627,
	PS_ROGUE17    = 628,
	PS_ROGUE18    = 629,
	PS_ROGUE19    = 630,
	PS_ROGUE20    = 631,
	PS_ROGUE21    = 632,
	PS_ROGUE22    = 633,
	PS_ROGUE23    = 634,
	PS_ROGUE24    = 635,
	PS_ROGUE25    = 636,
	PS_ROGUE26    = 637,
	PS_ROGUE27    = 638,
	PS_ROGUE28    = 639,
	PS_ROGUE29    = 640,
	PS_ROGUE30    = 641,
	PS_ROGUE31    = 642,
	PS_ROGUE32    = 643,
	PS_ROGUE33    = 644,
	PS_ROGUE34    = 645,
	PS_ROGUE35    = 646,
	PS_ROGUE36    = 647,
	PS_ROGUE37    = 648,
	PS_ROGUE38    = 649,
	PS_ROGUE39    = 650,
	PS_ROGUE40    = 651,
	PS_ROGUE41    = 652,
	PS_ROGUE42    = 653,
	PS_ROGUE43    = 654,
	PS_ROGUE44    = 655,
	PS_ROGUE45    = 656,
	PS_ROGUE46    = 657,
	PS_ROGUE47    = 658,
	PS_ROGUE48    = 659,
	PS_ROGUE49    = 660,
	PS_ROGUE50    = 661,
	PS_ROGUE51    = 662,
	PS_ROGUE52    = 663,
	PS_ROGUE53    = 664,
	PS_ROGUE54    = 665,
	PS_ROGUE55    = 666,
	PS_ROGUE56    = 667,
	PS_ROGUE57    = 668,
	PS_ROGUE58    = 669,
	PS_ROGUE59    = 670,
	PS_ROGUE60    = 671,
	PS_ROGUE61    = 672,
	PS_ROGUE62    = 673,
	PS_ROGUE63    = 674,
	PS_ROGUE64    = 675,
	PS_ROGUE65    = 676,
	PS_ROGUE66    = 677,
	PS_ROGUE67    = 678,
	PS_ROGUE68    = 679,
	PS_ROGUE69    = 680,
	PS_ROGUE69B   = 681,
	PS_ROGUE70    = 682,
	PS_ROGUE71    = 683,
	PS_ROGUE72    = 684,
	PS_ROGUE73    = 685,
	PS_ROGUE74    = 686,
	PS_ROGUE75    = 687,
	PS_ROGUE76    = 688,
	PS_ROGUE77    = 689,
	PS_ROGUE78    = 690,
	PS_ROGUE79    = 691,
	PS_ROGUE80    = 692,
	PS_ROGUE81    = 693,
	PS_ROGUE82    = 694,
	PS_ROGUE83    = 695,
	PS_ROGUE84    = 696,
	PS_ROGUE85    = 697,
	PS_ROGUE86    = 698,
	PS_ROGUE87    = 699,
	PS_ROGUE88    = 700,
	PS_ROGUE89    = 701,
	PS_ROGUE90    = 702,
	PS_ROGUE91    = 703,
	PS_ROGUE92    = 704,
	PS_ROGUE93    = 705,
	PS_ROGUE94    = 706,
	PS_ROGUE95    = 707,
	PS_ROGUE96    = 708,
	PS_ROGUE97    = 709,
	PS_ROGUE98    = 710,
	PS_ROGUE99    = 711,
	PS_ROGUE100   = 712,
	PS_ROGUE101   = 713,
	PS_ROGUE102   = 714,
	PS_RDEATH     = 715,
	PS_WARR1      = 716,
	PS_WARR2      = 717,
	PS_WARR3      = 718,
	PS_WARR4      = 719,
	PS_WARR5      = 720,
	PS_WARR6      = 721,
	PS_WARR7      = 722,
	PS_WARR8      = 723,
	PS_WARR9      = 724,
	PS_WARR10     = 725,
	PS_WARR11     = 726,
	PS_WARR12     = 727,
	PS_WARR13     = 728,
	PS_WARR14     = 729,
	PS_WARR14B    = 730,
	PS_WARR14C    = 731,
	PS_WARR15     = 732,
	PS_WARR15B    = 733,
	PS_WARR15C    = 734,
	PS_WARR16     = 735,
	PS_WARR16B    = 736,
	PS_WARR16C    = 737,
	PS_WARR17     = 738,
	PS_WARR18     = 739,
	PS_WARR19     = 740,
	PS_WARR20     = 741,
	PS_WARR21     = 742,
	PS_WARR22     = 743,
	PS_WARR23     = 744,
	PS_WARR24     = 745,
	PS_WARR25     = 746,
	PS_WARR26     = 747,
	PS_WARR27     = 748,
	PS_WARR28     = 749,
	PS_WARR29     = 750,
	PS_WARR30     = 751,
	PS_WARR31     = 752,
	PS_WARR32     = 753,
	PS_WARR33     = 754,
	PS_WARR34     = 755,
	PS_WARR35     = 756,
	PS_WARR36     = 757,
	PS_WARR37     = 758,
	PS_WARR38     = 759,
	PS_WARR39     = 760,
	PS_WARR40     = 761,
	PS_WARR41     = 762,
	PS_WARR42     = 763,
	PS_WARR43     = 764,
	PS_WARR44     = 765,
	PS_WARR45     = 766,
	PS_WARR46     = 767,
	PS_WARR47     = 768,
	PS_WARR48     = 769,
	PS_WARR49     = 770,
	PS_WARR50     = 771,
	PS_WARR51     = 772,
	PS_WARR52     = 773,
	PS_WARR53     = 774,
	PS_WARR54     = 775,
	PS_WARR55     = 776,
	PS_WARR56     = 777,
	PS_WARR57     = 778,
	PS_WARR58     = 779,
	PS_WARR59     = 780,
	PS_WARR60     = 781,
	PS_WARR61     = 782,
	PS_WARR62     = 783,
	PS_WARR63     = 784,
	PS_WARR64     = 785,
	PS_WARR65     = 786,
	PS_WARR66     = 787,
	PS_WARR67     = 788,
	PS_WARR68     = 789,
	PS_WARR69     = 790,
	PS_WARR69B    = 791,
	PS_WARR70     = 792,
	PS_WARR71     = 793,
	PS_WARR72     = 794,
	PS_WARR73     = 795,
	PS_WARR74     = 796,
	PS_WARR75     = 797,
	PS_WARR76     = 798,
	PS_WARR77     = 799,
	PS_WARR78     = 800,
	PS_WARR79     = 801,
	PS_WARR80     = 802,
	PS_WARR81     = 803,
	PS_WARR82     = 804,
	PS_WARR83     = 805,
	PS_WARR84     = 806,
	PS_WARR85     = 807,
	PS_WARR86     = 808,
	PS_WARR87     = 809,
	PS_WARR88     = 810,
	PS_WARR89     = 811,
	PS_WARR90     = 812,
	PS_WARR91     = 813,
	PS_WARR92     = 814,
	PS_WARR93     = 815,
	PS_WARR94     = 816,
	PS_WARR95     = 817,
	PS_WARR95B    = 818,
	PS_WARR95C    = 819,
	PS_WARR95D    = 820,
	PS_WARR95E    = 821,
	PS_WARR95F    = 822,
	PS_WARR96B    = 823,
	PS_WARR97     = 824,
	PS_WARR98     = 825,
	PS_WARR99     = 826,
	PS_WARR100    = 827,
	PS_WARR101    = 828,
	PS_WARR102    = 829,
	PS_WDEATH     = 830,
	PS_NAR1       = 831,
	PS_NAR2       = 832,
	PS_NAR3       = 833,
	PS_NAR4       = 834,
	PS_NAR5       = 835,
	PS_NAR6       = 836,
	PS_NAR7       = 837,
	PS_NAR8       = 838,
	PS_NAR9       = 839,
	PS_DIABLVLINT = 840,
	USFX_CLEAVER  = 841,
	USFX_GARBUD1  = 842,
	USFX_GARBUD2  = 843,
	USFX_GARBUD3  = 844,
	USFX_GARBUD4  = 845,
	USFX_IZUAL1   = 846,
	USFX_LACH1    = 847,
	USFX_LACH2    = 848,
	USFX_LACH3    = 849,
	USFX_LAZ1     = 850,
	USFX_LAZ2     = 851,
	USFX_SKING1   = 852,
	USFX_SNOT1    = 853,
	USFX_SNOT2    = 854,
	USFX_SNOT3    = 855,
	USFX_WARLRD1  = 856,
	USFX_WLOCK1   = 857,
	USFX_ZHAR1    = 858,
	USFX_ZHAR2    = 859,
	USFX_DIABLOD  = 860,
	MSFX_ZOMBIEA  = 861,
	MSFX_ZOMBIEH  = 862,
	MSFX_ZOMBIED  = 863,
	MSFX_ZOMBIES  = 864,
	MSFX_PHALLA   = 865,
	MSFX_PHALLH   = 866,
	MSFX_PHALLD   = 867,
	MSFX_PHALLS   = 868,
	MSFX_SKLAXA   = 869,
	MSFX_SKLAXH   = 870,
	MSFX_SKLAXD   = 871,
	MSFX_SKLAXS   = 872,
	MSFX_SCAVA    = 873,
	MSFX_SCAVH    = 874,
	MSFX_SCAVD    = 875,
	MSFX_SCAVS    = 876,
	MSFX_SKLBWA   = 877,
	MSFX_SKLBWH   = 878,
	MSFX_SKLBWD   = 879,
	MSFX_SKLBWS   = 880,
	MSFX_SNEAKLA  = 881,
	MSFX_SNEAKLH  = 882,
	MSFX_SNEAKLD  = 883,
	MSFX_SNEAKLS  = 884,
	MSFX_SNEAKA   = 885,
	MSFX_SNEAKH   = 886,
	MSFX_SNEAKD   = 887,
	MSFX_SNEAKS   = 888,
	MSFX_GOATLA   = 889,
	MSFX_GOATLH   = 890,
	MSFX_GOATLD   = 891,
	MSFX_GOATLS   = 892,
	MSFX_GOATA    = 893,
	MSFX_GOATH    = 894,
	MSFX_GOATD    = 895,
	MSFX_GOATS    = 896,
	MSFX_BATA     = 897,
	MSFX_BATH     = 898,
	MSFX_BATD     = 899,
	MSFX_BATS     = 900,
	MSFX_GOATBA   = 901,
	MSFX_GOATBH   = 902,
	MSFX_GOATBD   = 903,
	MSFX_GOATBS   = 904,
	MSFX_ACIDA    = 905,
	MSFX_ACIDH    = 906,
	MSFX_ACIDD    = 907,
	MSFX_ACIDS    = 908,
	MSFX_SKINGA   = 909,
	MSFX_SKINGH   = 910,
	MSFX_SKINGD   = 911,
	MSFX_SKINGS   = 912,
	MSFX_FATCA    = 913,
	MSFX_FATCH    = 914,
	MSFX_FATCD    = 915,
	MSFX_FATCS    = 916,
	MSFX_FATA     = 917,
	MSFX_FATH     = 918,
	MSFX_FATD     = 919,
	MSFX_FATS     = 920,
	MSFX_MAGMAA   = 921,
	MSFX_MAGMAH   = 922,
	MSFX_MAGMAD   = 923,
	MSFX_MAGMAS   = 924,
	MSFX_RHINOA   = 925,
	MSFX_RHINOH   = 926,
	MSFX_RHINOD   = 927,
	MSFX_RHINOS   = 928,
	MSFX_THINA    = 929,
	MSFX_THINH    = 930,
	MSFX_THIND    = 931,
	MSFX_THINS    = 932,
	MSFX_BFALA    = 933,
	MSFX_BFALH    = 934,
	MSFX_BFALD    = 935,
	MSFX_BFALS    = 936,
	MSFX_GARGOA   = 937,
	MSFX_GARGOH   = 938,
	MSFX_GARGOD   = 939,
	MSFX_GARGOS   = 940,
	MSFX_MEGAA    = 941,
	MSFX_MEGAH    = 942,
	MSFX_MEGAD    = 943,
	MSFX_MEGAS    = 944,
	MSFX_SNAKEA   = 945,
	MSFX_SNAKEH   = 946,
	MSFX_SNAKED   = 947,
	MSFX_SNAKES   = 948,
	MSFX_BLACKA   = 949,
	MSFX_BLACKH   = 950,
	MSFX_BLACKD   = 951,
	MSFX_BLACKS   = 952,
	MSFX_SCBSA    = 953,
	MSFX_SCBSH    = 954,
	MSFX_SCBSD    = 955,
	MSFX_SCBSS    = 956,
	MSFX_MAGEA    = 957,
	MSFX_MAGEH    = 958,
	MSFX_MAGED    = 959,
	MSFX_MAGES    = 960,
	MSFX_GOLMA    = 961,
	MSFX_GOLMH    = 962,
	MSFX_GOLMD    = 963,
	MSFX_GOLMS    = 964,
	MSFX_DIABLOA  = 965,
	MSFX_DIABLOH  = 966,
	MSFX_DIABLOD  = 967,
	MSFX_DIABLOS  = 968,
	MSFX_DMAGA    = 969,
	MSFX_DMAGH    = 970,
	MSFX_DMAGD    = 971,
	MSFX_DMAGS    = 972,
	MUSIC_TOWN    = 973,
	MUSIC_L1      = 974,
	MUSIC_L2      = 975,
	MUSIC_L3      = 976,
	MUSIC_L4      = 977,
	MUSIC_INTRO   = 978,
	IS_TITERR     = 979,
};

enum _126fake {
	QS_INIT         = 0,
	QS_TOMESPAWNED  = 1,
	QS_TOMEGIVEN    = 2,
	QS_MUSHSPAWNED  = 3,
	QS_MUSHPICKED   = 4,
	QS_MUSHGIVEN    = 5,
	QS_BRAINSPAWNED = 6,
	QS_BRAINGIVEN   = 7,
};

enum _setlevels {
	SL_SKELKING     = 1,
	SL_BONECHAMB    = 2,
	SL_MAZE         = 3,
	SL_POISONWATER  = 4,
	SL_VILEBETRAYER = 5,
};

enum _139fake {
	CMD_STAND             = 0,
	CMD_WALKXY            = 1,
	CMD_ACK_PLRINFO       = 2,
	CMD_ADDSTR            = 3,
	CMD_ADDMAG            = 4,
	CMD_ADDDEX            = 5,
	CMD_ADDVIT            = 6,
	CMD_SBSPELL           = 7,
	CMD_GETITEM           = 8,
	CMD_AGETITEM          = 9,
	CMD_PUTITEM           = 10,
	CMD_RESPAWNITEM       = 11,
	CMD_ATTACKXY          = 12,
	CMD_RATTACKXY         = 13,
	CMD_SPELLXY           = 14,
	CMD_TSPELLXY          = 15,
	CMD_OPOBJXY           = 16,
	CMD_DISARMXY          = 17,
	CMD_ATTACKID          = 18,
	CMD_ATTACKPID         = 19,
	CMD_RATTACKID         = 20,
	CMD_RATTACKPID        = 21,
	CMD_SPELLID           = 22,
	CMD_SPELLPID          = 23,
	CMD_TSPELLID          = 24,
	CMD_TSPELLPID         = 25,
	CMD_RESURRECT         = 26,
	CMD_OPOBJT            = 27,
	CMD_KNOCKBACK         = 28,
	CMD_TALKXY            = 29,
	CMD_NEWLVL            = 30,
	CMD_WARP              = 31,
	CMD_CHEAT_EXPERIENCE  = 32,
	CMD_CHEAT_SPELL_LEVEL = 33,
	CMD_DEBUG             = 34,
	CMD_SYNCDATA          = 35,
	CMD_MONSTDEATH        = 36,
	CMD_MONSTDAMAGE       = 37,
	CMD_PLRDEAD           = 38,
	CMD_REQUESTGITEM      = 39,
	CMD_REQUESTAGITEM     = 40,
	CMD_GOTOGETITEM       = 41,
	CMD_GOTOAGETITEM      = 42,
	CMD_OPENDOOR          = 43,
	CMD_CLOSEDOOR         = 44,
	CMD_OPERATEOBJ        = 45,
	CMD_PLROPOBJ          = 46,
	CMD_BREAKOBJ          = 47,
	CMD_CHANGEPLRITEMS    = 48,
	CMD_DELPLRITEMS       = 49,
	CMD_PLRDAMAGE         = 50,
	CMD_PLRLEVEL          = 51,
	CMD_DROPITEM          = 52,
	CMD_PLAYER_JOINLEVEL  = 53,
	CMD_SEND_PLRINFO      = 54,
	CMD_SATTACKXY         = 55,
	CMD_ACTIVATEPORTAL    = 56,
	CMD_DEACTIVATEPORTAL  = 57,
	CMD_DLEVEL_0          = 58,
	CMD_DLEVEL_1          = 59,
	CMD_DLEVEL_2          = 60,
	CMD_DLEVEL_3          = 61,
	CMD_DLEVEL_4          = 62,
	CMD_DLEVEL_5          = 63,
	CMD_DLEVEL_6          = 64,
	CMD_DLEVEL_7          = 65,
	CMD_DLEVEL_8          = 66,
	CMD_DLEVEL_9          = 67,
	CMD_DLEVEL_10         = 68,
	CMD_DLEVEL_11         = 69,
	CMD_DLEVEL_12         = 70,
	CMD_DLEVEL_13         = 71,
	CMD_DLEVEL_14         = 72,
	CMD_DLEVEL_15         = 73,
	CMD_DLEVEL_16         = 74,
	CMD_DLEVEL_JUNK       = 75,
	CMD_DLEVEL_END        = 76,
	CMD_HEALOTHER         = 77,
	CMD_STRING            = 78,
	CMD_SETSTR            = 79,
	CMD_SETMAG            = 80,
	CMD_SETDEX            = 81,
	CMD_SETVIT            = 82,
	CMD_RETOWN            = 83,
	CMD_SPELLXYD          = 84,
	CMD_ITEMEXTRA         = 85,
	CMD_SYNCPUTITEM       = 86,
	CMD_KILLGOLEM         = 87,
	CMD_SYNCQUEST         = 88,
	CMD_ENDSHIELD         = 89,
	CMD_AWAKEGOLEM        = 90,
	FAKE_CMD_SETID        = 91,
	FAKE_CMD_DROPID       = 92,
	NUM_CMDS              = 93,
};

enum _145fake {
	BUFFER_OFF     = 0,
	BUFFER_ON      = 1,
	BUFFER_PROCESS = 2,
};

enum _221fake {
	BIRD_PERCH   = 0,
	BIRD_FLY     = 1,
	BIRD_SCATTER = 2,
	BIRD_LANDING = 3,
	BIRD_HOP     = 4,
};

enum _ui_classes {
	UI_WARRIOR     = 0,
	UI_ROGUE       = 1,
	UI_SORCERER    = 2,
	UI_NUM_CLASSES = 3,
};

enum _copyprot_results {
	COPYPROT_OK     = 1,
	COPYPROT_CANCEL = 2,
};

enum _mainmenu_selections {
	MAINMENU_SINGLE_PLAYER = 1,
	MAINMENU_MULTIPLAYER   = 2,
	MAINMENU_REPLAY_INTRO  = 3,
	MAINMENU_SHOW_CREDITS  = 4,
	MAINMENU_EXIT_DIABLO   = 5,
	MAINMENU_ATTRACT_MODE  = 6,
};

enum _difficulty {
	DIFF_NORMAL      = 0,
	DIFF_NIGHTMARE   = 1,
	DIFF_HELL        = 2,
	NUM_DIFFICULTIES = 3,
};

enum _selhero_selections {
	SELHERO_NEW_DUNGEON = 1,
	SELHERO_CONTINUE    = 2,
	SELHERO_CONNECT     = 3,
	SELHERO_PREVIOUS    = 4,
};

enum _dialmodes {
	MODE_ANSWER  = 3,
	MODE_DIALOLD = 4,
	MODE_DIALNEW = 5,
};

enum hw_event {
	hw_end     = 0,
	hw_empty   = 1,
	hw_new     = 2,
	hw_error   = 3,
	hw_silence = 4,
};

enum _229fake {
	PART_TRANS_NONE  = 0,
	PART_TRANS_LEFT  = 1,
	PART_TRANS_RIGHT = 2,
};

enum _230fake {
	PLAYER_LEFT_SIDE  = 1,
	PLAYER_RIGHT_SIDE = 2,
};

enum _231fake {
	TRN_PAL_NULL         = 0,
	TRN_ZOMBIE_BLUERED   = 1,
	TRN_ZOMBIE_GREY      = 2,
	TRN_ZOMBIE_YELLOW    = 3,
	TRN_FALSPEAR_FALLENT = 4,
	TRN_FALSPEAR_DARK    = 5,
	TRN_FALSPEAR_BLUE    = 6,
	TRN_SKELAXE_WHITE    = 7,
	TRN_SKELAXE_SKELT    = 8,
	TRN_SKELAXE_BLACK    = 9,
	TRN_FALSWORD_FALLENT = 10,
	TRN_FALSWORD_DARK    = 11,
	TRN_FALSWORD_BLUE    = 12,
	TRN_SCAV_SCAVBR      = 13,
	TRN_SCAV_SCAVBE      = 14,
	TRN_SCAV_SCAVW       = 15,
	TRN_SKELBOW_WHITE    = 16,
	TRN_SKELBOW_SKELT    = 17,
	TRN_SKELBOW_BLACK    = 18,
	TRN_SKELSD_WHITE     = 19,
	TRN_SKELSD_SKELT     = 20,
	TRN_SKELSD_BLACK     = 21,
	TRN_SNEAK_SNEAKV2    = 22,
	TRN_SNEAK_SNEAKV3    = 23,
	TRN_SNEAK_SNEAKV1    = 24,
	TRN_GOATMACE_BEIGE   = 25,
	TRN_GOATMACE_RED     = 26,
	TRN_GOATMACE_GRAY    = 27,
	TRN_BAT_RED          = 28,
	TRN_BAT_GREY         = 29,
	TRN_BAT_ORANGE       = 30,
	TRN_GOATBOW_BEIGE    = 31,
	TRN_GOATBOW_RED      = 32,
	TRN_GOATBOW_GRAY     = 33,
	TRN_ACID_ACIDBLK     = 34,
	TRN_ACID_ACIDB       = 35,
	TRN_ACID_ACIDR       = 36,
	TRN_FAT_BLUE         = 37,
	TRN_FAT_FATB         = 38,
	TRN_FAT_FATF         = 39,
	TRN_MAGMA_YELLOW     = 40,
	TRN_MAGMA_BLUE       = 41,
	TRN_MAGMA_WIERD      = 42,
	TRN_RHINO_ORANGE     = 43,
	TRN_RHINO_BLUE       = 44,
	TRN_RHINO_RHINOB     = 45,
	TRN_THIN_THINV3      = 46,
	TRN_THIN_THINV2      = 47,
	TRN_THIN_THINV1      = 48,
	TRN_GARGOYLE_GARE    = 49,
	TRN_GARGOYLE_GARGBR  = 50,
	TRN_GARGOYLE_GARGB   = 51,
	TRN_MEGA_GUARD       = 52,
	TRN_MEGA_VTEXL       = 53,
	TRN_MEGA_BALR        = 54,
	TRN_SNAKE_SNAKR      = 55,
	TRN_SNAKE_SNAKG      = 56,
	TRN_SNAKE_SNAKB      = 57,
	TRN_BLACK_BLKKNTRT   = 58,
	TRN_BLACK_BLKKNTBT   = 59,
	TRN_BLACK_BLKKNTBE   = 60,
	TRN_SUCC_SUCCB       = 61,
	TRN_SUCC_SUCCRW      = 62,
	TRN_SUCC_SUCCBW      = 63,
	TRN_MAGE_CNSELG      = 64,
	TRN_MAGE_CNSELGD     = 65,
	TRN_MAGE_CNSELBK     = 66,
};

enum _232fake {
	GAL_PHANTOM_MEM_DUPLICATE_0         = 0,
	GAL_FIRST_FREE_MEM_TYPE_DUPLICATE_0 = 1,
	GAL_FLAGS_DUPLICATE_0               = 32768,
	GAL_HIGH_DUPLICATE_0                = 32768,
};

struct __vtbl_ptr_type {
};

// size: 0x4
struct _physadr {
	// offset: 0000 (4 bytes)
	int r[1];
};

// size: 0x30
struct label_t {
	// offset: 0000 (48 bytes)
	int val[12];
};

// size: 0x8
struct _quad {
	// offset: 0000 (8 bytes)
	long val[2];
};

// size: 0x10
struct MonstList {
	// offset: 0000
	unsigned short NumOfMonsters;
	// offset: 0002
	unsigned short TexNum;
	// offset: 0004
	unsigned char *TheList;
	// offset: 0008
	char *ListName;
	// offset: 000C
	unsigned long QuestBits;
};

// size: 0x8
struct MonstLevel {
	// offset: 0000
	int NumOfLists;
	// offset: 0004 (16 bytes)
	struct MonstList *TheLists;
};

// size: 0x8
struct ToT {
	// offset: 0000
	unsigned long *head;
	// offset: 0004
	long size;
};

// size: 0x8
struct TCBH {
	// offset: 0000
	struct TCB *entry;
	// offset: 0004
	long flag;
};

// size: 0xC0
struct TCB {
	// offset: 0000
	long status;
	// offset: 0004
	long mode;
	// offset: 0008 (160 bytes)
	unsigned long reg[40];
	// offset: 00A8 (24 bytes)
	long system[6];
};

// size: 0x1C
struct EvCB {
	// offset: 0000
	unsigned long desc;
	// offset: 0004
	long status;
	// offset: 0008
	long spec;
	// offset: 000C
	long mode;
	// offset: 0010
	long (*FHandler)();
	// offset: 0014 (8 bytes)
	long system[2];
};

// size: 0x3C
struct EXEC {
	// offset: 0000
	unsigned long pc0;
	// offset: 0004
	unsigned long gp0;
	// offset: 0008
	unsigned long t_addr;
	// offset: 000C
	unsigned long t_size;
	// offset: 0010
	unsigned long d_addr;
	// offset: 0014
	unsigned long d_size;
	// offset: 0018
	unsigned long b_addr;
	// offset: 001C
	unsigned long b_size;
	// offset: 0020
	unsigned long s_addr;
	// offset: 0024
	unsigned long s_size;
	// offset: 0028
	unsigned long sp;
	// offset: 002C
	unsigned long fp;
	// offset: 0030
	unsigned long gp;
	// offset: 0034
	unsigned long ret;
	// offset: 0038
	unsigned long base;
};

// size: 0x88
struct XF_HDR {
	// offset: 0000 (8 bytes)
	char key[8];
	// offset: 0008
	unsigned long text;
	// offset: 000C
	unsigned long data;
	// offset: 0010 (60 bytes)
	struct EXEC exec;
	// offset: 004C (60 bytes)
	char title[60];
};

// size: 0x28
struct DIRENTRY {
	// offset: 0000 (20 bytes)
	char name[20];
	// offset: 0014
	long attr;
	// offset: 0018
	long size;
	// offset: 001C (40 bytes)
	struct DIRENTRY *next;
	// offset: 0020
	long head;
	// offset: 0024 (4 bytes)
	char system[4];
};

// size: 0x20
struct MATRIX {
	// offset: 0000 (18 bytes)
	short m[3][3];
	// offset: 0014 (12 bytes)
	long t[3];
};

// size: 0x10
struct VECTOR {
	// offset: 0000
	long vx;
	// offset: 0004
	long vy;
	// offset: 0008
	long vz;
	// offset: 000C
	long pad;
};

// size: 0x8
struct SVECTOR {
	// offset: 0000
	short vx;
	// offset: 0002
	short vy;
	// offset: 0004
	short vz;
	// offset: 0006
	short pad;
};

// size: 0x4
struct CVECTOR {
	// offset: 0000
	unsigned char r;
	// offset: 0001
	unsigned char g;
	// offset: 0002
	unsigned char b;
	// offset: 0003
	unsigned char cd;
};

// size: 0x4
struct DVECTOR {
	// offset: 0000
	short vx;
	// offset: 0002
	short vy;
};

// size: 0x2C
struct EVECTOR {
	// offset: 0000 (8 bytes)
	struct SVECTOR v;
	// offset: 0008 (16 bytes)
	struct VECTOR sxyz;
	// offset: 0018 (4 bytes)
	struct DVECTOR sxy;
	// offset: 001C (4 bytes)
	struct CVECTOR rgb;
	// offset: 0020
	short txuv;
	// offset: 0022
	short pad;
	// offset: 0024
	long chx;
	// offset: 0028
	long chy;
};

// size: 0x18
struct RVECTOR {
	// offset: 0000 (8 bytes)
	struct SVECTOR v;
	// offset: 0008 (2 bytes)
	unsigned char uv[2];
	// offset: 000A
	unsigned short pad;
	// offset: 000C (4 bytes)
	struct CVECTOR c;
	// offset: 0010 (4 bytes)
	struct DVECTOR sxy;
	// offset: 0014
	unsigned long sz;
};

// size: 0x58
struct CRVECTOR3 {
	// offset: 0000 (24 bytes)
	struct RVECTOR r01;
	// offset: 0018 (24 bytes)
	struct RVECTOR r12;
	// offset: 0030 (24 bytes)
	struct RVECTOR r20;
	// offset: 0048 (24 bytes)
	struct RVECTOR *r0;
	// offset: 004C (24 bytes)
	struct RVECTOR *r1;
	// offset: 0050 (24 bytes)
	struct RVECTOR *r2;
	// offset: 0054
	unsigned long *rtn;
};

// size: 0x218
struct DIVPOLYGON3 {
	// offset: 0000
	unsigned long ndiv;
	// offset: 0004
	unsigned long pih;
	// offset: 0008
	unsigned long piv;
	// offset: 000C
	unsigned short clut;
	// offset: 000E
	unsigned short tpage;
	// offset: 0010 (4 bytes)
	struct CVECTOR rgbc;
	// offset: 0014
	unsigned long *ot;
	// offset: 0018 (24 bytes)
	struct RVECTOR r0;
	// offset: 0030 (24 bytes)
	struct RVECTOR r1;
	// offset: 0048 (24 bytes)
	struct RVECTOR r2;
	// offset: 0060 (440 bytes)
	struct CRVECTOR3 cr[5];
};

// size: 0x8C
struct CRVECTOR4 {
	// offset: 0000 (24 bytes)
	struct RVECTOR r01;
	// offset: 0018 (24 bytes)
	struct RVECTOR r02;
	// offset: 0030 (24 bytes)
	struct RVECTOR r31;
	// offset: 0048 (24 bytes)
	struct RVECTOR r32;
	// offset: 0060 (24 bytes)
	struct RVECTOR rc;
	// offset: 0078 (24 bytes)
	struct RVECTOR *r0;
	// offset: 007C (24 bytes)
	struct RVECTOR *r1;
	// offset: 0080 (24 bytes)
	struct RVECTOR *r2;
	// offset: 0084 (24 bytes)
	struct RVECTOR *r3;
	// offset: 0088
	unsigned long *rtn;
};

// size: 0x334
struct DIVPOLYGON4 {
	// offset: 0000
	unsigned long ndiv;
	// offset: 0004
	unsigned long pih;
	// offset: 0008
	unsigned long piv;
	// offset: 000C
	unsigned short clut;
	// offset: 000E
	unsigned short tpage;
	// offset: 0010 (4 bytes)
	struct CVECTOR rgbc;
	// offset: 0014
	unsigned long *ot;
	// offset: 0018 (24 bytes)
	struct RVECTOR r0;
	// offset: 0030 (24 bytes)
	struct RVECTOR r1;
	// offset: 0048 (24 bytes)
	struct RVECTOR r2;
	// offset: 0060 (24 bytes)
	struct RVECTOR r3;
	// offset: 0078 (700 bytes)
	struct CRVECTOR4 cr[5];
};

// size: 0x10
struct SPOL {
	// offset: 0000 (6 bytes)
	short xy[3];
	// offset: 0006 (4 bytes)
	short uv[2];
	// offset: 000A (6 bytes)
	short rgb[3];
};

// size: 0x4A
struct POL4 {
	// offset: 0000 (16 bytes)
	short sxy[2][4];
	// offset: 0010 (16 bytes)
	short sz[2][4];
	// offset: 0020 (16 bytes)
	short uv[2][4];
	// offset: 0030 (24 bytes)
	short rgb[3][4];
	// offset: 0048
	short code;
};

// size: 0x38
struct POL3 {
	// offset: 0000 (12 bytes)
	short sxy[2][3];
	// offset: 000C (12 bytes)
	short sz[2][3];
	// offset: 0018 (12 bytes)
	short uv[2][3];
	// offset: 0024 (18 bytes)
	short rgb[3][3];
	// offset: 0036
	short code;
};

// size: 0x14
struct TMESH {
	// offset: 0000 (8 bytes)
	struct SVECTOR *v;
	// offset: 0004 (8 bytes)
	struct SVECTOR *n;
	// offset: 0008 (8 bytes)
	struct SVECTOR *u;
	// offset: 000C (4 bytes)
	struct CVECTOR *c;
	// offset: 0010
	unsigned long len;
};

// size: 0x18
struct QMESH {
	// offset: 0000 (8 bytes)
	struct SVECTOR *v;
	// offset: 0004 (8 bytes)
	struct SVECTOR *n;
	// offset: 0008 (8 bytes)
	struct SVECTOR *u;
	// offset: 000C (4 bytes)
	struct CVECTOR *c;
	// offset: 0010
	unsigned long lenv;
	// offset: 0014
	unsigned long lenh;
};

// size: 0x8
struct RECT {
	// offset: 0000
	short x;
	// offset: 0002
	short y;
	// offset: 0004
	short w;
	// offset: 0006
	short h;
};

// size: 0x10
struct RECT32 {
	// offset: 0000
	int x;
	// offset: 0004
	int y;
	// offset: 0008
	int w;
	// offset: 000C
	int h;
};

// size: 0x40
struct DR_ENV {
	// offset: 0000
	unsigned long tag;
	// offset: 0004 (60 bytes)
	unsigned long code[15];
};

// size: 0x5C
struct DRAWENV {
	// offset: 0000 (8 bytes)
	struct RECT clip;
	// offset: 0008 (4 bytes)
	short ofs[2];
	// offset: 000C (8 bytes)
	struct RECT tw;
	// offset: 0014
	unsigned short tpage;
	// offset: 0016
	unsigned char dtd;
	// offset: 0017
	unsigned char dfe;
	// offset: 0018
	unsigned char isbg;
	// offset: 0019
	unsigned char r0;
	// offset: 001A
	unsigned char g0;
	// offset: 001B
	unsigned char b0;
	// offset: 001C (64 bytes)
	struct DR_ENV dr_env;
};

// size: 0x14
struct DISPENV {
	// offset: 0000 (8 bytes)
	struct RECT disp;
	// offset: 0008 (8 bytes)
	struct RECT screen;
	// offset: 0010
	unsigned char isinter;
	// offset: 0011
	unsigned char isrgb24;
	// offset: 0012
	unsigned char pad0;
	// offset: 0013
	unsigned char pad1;
};

// size: 0x8
struct P_TAG {
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0000 (24 bytes)
	// unsigned int addr;
	// offset: 0018 (8 bytes)
	// unsigned int len;
};

// size: 0x4
struct P_CODE {
	// offset: 0000
	unsigned char r0;
	// offset: 0001
	unsigned char g0;
	// offset: 0002
	unsigned char b0;
	// offset: 0003
	unsigned char code;
};

// size: 0x14
struct POLY_F3 {
	// offset: 0000
	unsigned long tag;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	short x0;
	// offset: 000A
	short y0;
	// offset: 000C
	short x1;
	// offset: 000E
	short y1;
	// offset: 0010
	short x2;
	// offset: 0012
	short y2;
};

// size: 0x18
struct POLY_F4 {
	// offset: 0000
	unsigned long tag;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	short x0;
	// offset: 000A
	short y0;
	// offset: 000C
	short x1;
	// offset: 000E
	short y1;
	// offset: 0010
	short x2;
	// offset: 0012
	short y2;
	// offset: 0014
	short x3;
	// offset: 0016
	short y3;
};

// size: 0x20
struct POLY_FT3 {
	// offset: 0000
	unsigned long tag;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	short x0;
	// offset: 000A
	short y0;
	// offset: 000C
	unsigned char u0;
	// offset: 000D
	unsigned char v0;
	// offset: 000E
	unsigned short clut;
	// offset: 0010
	short x1;
	// offset: 0012
	short y1;
	// offset: 0014
	unsigned char u1;
	// offset: 0015
	unsigned char v1;
	// offset: 0016
	unsigned short tpage;
	// offset: 0018
	short x2;
	// offset: 001A
	short y2;
	// offset: 001C
	unsigned char u2;
	// offset: 001D
	unsigned char v2;
	// offset: 001E
	unsigned short pad1;
};

// size: 0x28
struct POLY_FT4 {
	// offset: 0000
	unsigned long tag;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	short x0;
	// offset: 000A
	short y0;
	// offset: 000C
	unsigned char u0;
	// offset: 000D
	unsigned char v0;
	// offset: 000E
	unsigned short clut;
	// offset: 0010
	short x1;
	// offset: 0012
	short y1;
	// offset: 0014
	unsigned char u1;
	// offset: 0015
	unsigned char v1;
	// offset: 0016
	unsigned short tpage;
	// offset: 0018
	short x2;
	// offset: 001A
	short y2;
	// offset: 001C
	unsigned char u2;
	// offset: 001D
	unsigned char v2;
	// offset: 001E
	unsigned short pad1;
	// offset: 0020
	short x3;
	// offset: 0022
	short y3;
	// offset: 0024
	unsigned char u3;
	// offset: 0025
	unsigned char v3;
	// offset: 0026
	unsigned short pad2;
};

// size: 0x1C
struct POLY_G3 {
	// offset: 0000
	unsigned long tag;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	short x0;
	// offset: 000A
	short y0;
	// offset: 000C
	unsigned char r1;
	// offset: 000D
	unsigned char g1;
	// offset: 000E
	unsigned char b1;
	// offset: 000F
	unsigned char pad1;
	// offset: 0010
	short x1;
	// offset: 0012
	short y1;
	// offset: 0014
	unsigned char r2;
	// offset: 0015
	unsigned char g2;
	// offset: 0016
	unsigned char b2;
	// offset: 0017
	unsigned char pad2;
	// offset: 0018
	short x2;
	// offset: 001A
	short y2;
};

// size: 0x24
struct POLY_G4 {
	// offset: 0000
	unsigned long tag;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	short x0;
	// offset: 000A
	short y0;
	// offset: 000C
	unsigned char r1;
	// offset: 000D
	unsigned char g1;
	// offset: 000E
	unsigned char b1;
	// offset: 000F
	unsigned char pad1;
	// offset: 0010
	short x1;
	// offset: 0012
	short y1;
	// offset: 0014
	unsigned char r2;
	// offset: 0015
	unsigned char g2;
	// offset: 0016
	unsigned char b2;
	// offset: 0017
	unsigned char pad2;
	// offset: 0018
	short x2;
	// offset: 001A
	short y2;
	// offset: 001C
	unsigned char r3;
	// offset: 001D
	unsigned char g3;
	// offset: 001E
	unsigned char b3;
	// offset: 001F
	unsigned char pad3;
	// offset: 0020
	short x3;
	// offset: 0022
	short y3;
};

// size: 0x28
struct POLY_GT3 {
	// offset: 0000
	unsigned long tag;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	short x0;
	// offset: 000A
	short y0;
	// offset: 000C
	unsigned char u0;
	// offset: 000D
	unsigned char v0;
	// offset: 000E
	unsigned short clut;
	// offset: 0010
	unsigned char r1;
	// offset: 0011
	unsigned char g1;
	// offset: 0012
	unsigned char b1;
	// offset: 0013
	unsigned char p1;
	// offset: 0014
	short x1;
	// offset: 0016
	short y1;
	// offset: 0018
	unsigned char u1;
	// offset: 0019
	unsigned char v1;
	// offset: 001A
	unsigned short tpage;
	// offset: 001C
	unsigned char r2;
	// offset: 001D
	unsigned char g2;
	// offset: 001E
	unsigned char b2;
	// offset: 001F
	unsigned char p2;
	// offset: 0020
	short x2;
	// offset: 0022
	short y2;
	// offset: 0024
	unsigned char u2;
	// offset: 0025
	unsigned char v2;
	// offset: 0026
	unsigned short pad2;
};

// size: 0x34
struct POLY_GT4 {
	// offset: 0000
	unsigned long tag;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	short x0;
	// offset: 000A
	short y0;
	// offset: 000C
	unsigned char u0;
	// offset: 000D
	unsigned char v0;
	// offset: 000E
	unsigned short clut;
	// offset: 0010
	unsigned char r1;
	// offset: 0011
	unsigned char g1;
	// offset: 0012
	unsigned char b1;
	// offset: 0013
	unsigned char p1;
	// offset: 0014
	short x1;
	// offset: 0016
	short y1;
	// offset: 0018
	unsigned char u1;
	// offset: 0019
	unsigned char v1;
	// offset: 001A
	unsigned short tpage;
	// offset: 001C
	unsigned char r2;
	// offset: 001D
	unsigned char g2;
	// offset: 001E
	unsigned char b2;
	// offset: 001F
	unsigned char p2;
	// offset: 0020
	short x2;
	// offset: 0022
	short y2;
	// offset: 0024
	unsigned char u2;
	// offset: 0025
	unsigned char v2;
	// offset: 0026
	unsigned short pad2;
	// offset: 0028
	unsigned char r3;
	// offset: 0029
	unsigned char g3;
	// offset: 002A
	unsigned char b3;
	// offset: 002B
	unsigned char p3;
	// offset: 002C
	short x3;
	// offset: 002E
	short y3;
	// offset: 0030
	unsigned char u3;
	// offset: 0031
	unsigned char v3;
	// offset: 0032
	unsigned short pad3;
};

// size: 0x10
struct LINE_F2 {
	// offset: 0000
	unsigned long tag;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	short x0;
	// offset: 000A
	short y0;
	// offset: 000C
	short x1;
	// offset: 000E
	short y1;
};

// size: 0x14
struct LINE_G2 {
	// offset: 0000
	unsigned long tag;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	short x0;
	// offset: 000A
	short y0;
	// offset: 000C
	unsigned char r1;
	// offset: 000D
	unsigned char g1;
	// offset: 000E
	unsigned char b1;
	// offset: 000F
	unsigned char p1;
	// offset: 0010
	short x1;
	// offset: 0012
	short y1;
};

// size: 0x18
struct LINE_F3 {
	// offset: 0000
	unsigned long tag;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	short x0;
	// offset: 000A
	short y0;
	// offset: 000C
	short x1;
	// offset: 000E
	short y1;
	// offset: 0010
	short x2;
	// offset: 0012
	short y2;
	// offset: 0014
	unsigned long pad;
};

// size: 0x20
struct LINE_G3 {
	// offset: 0000
	unsigned long tag;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	short x0;
	// offset: 000A
	short y0;
	// offset: 000C
	unsigned char r1;
	// offset: 000D
	unsigned char g1;
	// offset: 000E
	unsigned char b1;
	// offset: 000F
	unsigned char p1;
	// offset: 0010
	short x1;
	// offset: 0012
	short y1;
	// offset: 0014
	unsigned char r2;
	// offset: 0015
	unsigned char g2;
	// offset: 0016
	unsigned char b2;
	// offset: 0017
	unsigned char p2;
	// offset: 0018
	short x2;
	// offset: 001A
	short y2;
	// offset: 001C
	unsigned long pad;
};

// size: 0x1C
struct LINE_F4 {
	// offset: 0000
	unsigned long tag;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	short x0;
	// offset: 000A
	short y0;
	// offset: 000C
	short x1;
	// offset: 000E
	short y1;
	// offset: 0010
	short x2;
	// offset: 0012
	short y2;
	// offset: 0014
	short x3;
	// offset: 0016
	short y3;
	// offset: 0018
	unsigned long pad;
};

// size: 0x28
struct LINE_G4 {
	// offset: 0000
	unsigned long tag;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	short x0;
	// offset: 000A
	short y0;
	// offset: 000C
	unsigned char r1;
	// offset: 000D
	unsigned char g1;
	// offset: 000E
	unsigned char b1;
	// offset: 000F
	unsigned char p1;
	// offset: 0010
	short x1;
	// offset: 0012
	short y1;
	// offset: 0014
	unsigned char r2;
	// offset: 0015
	unsigned char g2;
	// offset: 0016
	unsigned char b2;
	// offset: 0017
	unsigned char p2;
	// offset: 0018
	short x2;
	// offset: 001A
	short y2;
	// offset: 001C
	unsigned char r3;
	// offset: 001D
	unsigned char g3;
	// offset: 001E
	unsigned char b3;
	// offset: 001F
	unsigned char p3;
	// offset: 0020
	short x3;
	// offset: 0022
	short y3;
	// offset: 0024
	unsigned long pad;
};

// size: 0x14
struct SPRT {
	// offset: 0000
	unsigned long tag;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	short x0;
	// offset: 000A
	short y0;
	// offset: 000C
	unsigned char u0;
	// offset: 000D
	unsigned char v0;
	// offset: 000E
	unsigned short clut;
	// offset: 0010
	short w;
	// offset: 0012
	short h;
};

// size: 0x10
struct SPRT_16 {
	// offset: 0000
	unsigned long tag;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	short x0;
	// offset: 000A
	short y0;
	// offset: 000C
	unsigned char u0;
	// offset: 000D
	unsigned char v0;
	// offset: 000E
	unsigned short clut;
};

// size: 0x10
struct TILE {
	// offset: 0000
	unsigned long tag;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	short x0;
	// offset: 000A
	short y0;
	// offset: 000C
	short w;
	// offset: 000E
	short h;
};

// size: 0xC
struct TILE_16 {
	// offset: 0000
	unsigned long tag;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	short x0;
	// offset: 000A
	short y0;
};

// size: 0xC
struct DR_MODE {
	// offset: 0000
	unsigned long tag;
	// offset: 0004 (8 bytes)
	unsigned long code[2];
};

// size: 0x18
struct DR_MOVE {
	// offset: 0000
	unsigned long tag;
	// offset: 0004 (20 bytes)
	unsigned long code[5];
};

// size: 0x44
struct DR_LOAD {
	// offset: 0000
	unsigned long tag;
	// offset: 0004 (12 bytes)
	unsigned long code[3];
	// offset: 0010 (52 bytes)
	unsigned long p[13];
};

// size: 0x8
struct DR_TPAGE {
	// offset: 0000
	unsigned long tag;
	// offset: 0004 (4 bytes)
	unsigned long code[1];
};

// size: 0x78
struct TMD_PRIM {
	// offset: 0000
	unsigned long id;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char p0;
	// offset: 0008
	unsigned char r1;
	// offset: 0009
	unsigned char g1;
	// offset: 000A
	unsigned char b1;
	// offset: 000B
	unsigned char p1;
	// offset: 000C
	unsigned char r2;
	// offset: 000D
	unsigned char g2;
	// offset: 000E
	unsigned char b2;
	// offset: 000F
	unsigned char p2;
	// offset: 0010
	unsigned char r3;
	// offset: 0011
	unsigned char g3;
	// offset: 0012
	unsigned char b3;
	// offset: 0013
	unsigned char p3;
	// offset: 0014
	unsigned short tpage;
	// offset: 0016
	unsigned short clut;
	// offset: 0018
	unsigned char u0;
	// offset: 0019
	unsigned char v0;
	// offset: 001A
	unsigned char u1;
	// offset: 001B
	unsigned char v1;
	// offset: 001C
	unsigned char u2;
	// offset: 001D
	unsigned char v2;
	// offset: 001E
	unsigned char u3;
	// offset: 001F
	unsigned char v3;
	// offset: 0020 (8 bytes)
	struct SVECTOR x0;
	// offset: 0028 (8 bytes)
	struct SVECTOR x1;
	// offset: 0030 (8 bytes)
	struct SVECTOR x2;
	// offset: 0038 (8 bytes)
	struct SVECTOR x3;
	// offset: 0040 (8 bytes)
	struct SVECTOR n0;
	// offset: 0048 (8 bytes)
	struct SVECTOR n1;
	// offset: 0050 (8 bytes)
	struct SVECTOR n2;
	// offset: 0058 (8 bytes)
	struct SVECTOR n3;
	// offset: 0060 (8 bytes)
	struct SVECTOR *v_ofs;
	// offset: 0064 (8 bytes)
	struct SVECTOR *n_ofs;
	// offset: 0068
	unsigned short vert0;
	// offset: 006A
	unsigned short vert1;
	// offset: 006C
	unsigned short vert2;
	// offset: 006E
	unsigned short vert3;
	// offset: 0070
	unsigned short norm0;
	// offset: 0072
	unsigned short norm1;
	// offset: 0074
	unsigned short norm2;
	// offset: 0076
	unsigned short norm3;
};

// size: 0x14
struct TIM_IMAGE {
	// offset: 0000
	unsigned long mode;
	// offset: 0004 (8 bytes)
	struct RECT *crect;
	// offset: 0008
	unsigned long *caddr;
	// offset: 000C (8 bytes)
	struct RECT *prect;
	// offset: 0010
	unsigned long *paddr;
};

// size: 0x8
struct POINT {
	// offset: 0000
	long x;
	// offset: 0004
	long y;
};

// size: 0x1C
struct MSG {
	// offset: 0000
	unsigned long hwnd;
	// offset: 0004
	unsigned int message;
	// offset: 0008
	long wParam;
	// offset: 000C
	unsigned long lParam;
	// offset: 0010
	unsigned long time;
	// offset: 0014 (8 bytes)
	struct POINT pt;
};

// size: 0x8
struct FILETIME {
	// offset: 0000
	unsigned long dwLowDateTime;
	// offset: 0004
	unsigned long dwHighDateTime;
};

// size: 0x13C
struct _WIN32_FIND_DATA {
	// offset: 0000
	unsigned long dwFileAttributes;
	// offset: 0004 (8 bytes)
	struct FILETIME ftCreationTime;
	// offset: 000C (8 bytes)
	struct FILETIME ftLastAccessTime;
	// offset: 0014 (8 bytes)
	struct FILETIME ftLastWriteTime;
	// offset: 001C
	unsigned long nFileSizeHigh;
	// offset: 0020
	unsigned long nFileSizeLow;
	// offset: 0024
	unsigned long dwReserved0;
	// offset: 0028
	unsigned long dwReserved1;
	// offset: 002C (256 bytes)
	char cFileName[256];
	// offset: 012C (14 bytes)
	char cAlternateFileName[14];
};

// size: 0x4
struct PALETTEENTRY {
	// offset: 0000
	unsigned char peRed;
	// offset: 0001
	unsigned char peGreen;
	// offset: 0002
	unsigned char peBlue;
	// offset: 0003
	unsigned char peFlags;
};

// size: 0x20
struct PAINTSTRUCT {
	// offset: 0000
	unsigned long hdc;
	// offset: 0004
	unsigned char fErase;
	// offset: 0006 (8 bytes)
	struct RECT rcPaint;
	// offset: 000E
	unsigned char fRestore;
	// offset: 000F
	unsigned char fIncUpdate;
	// offset: 0010 (16 bytes)
	unsigned char rgbReserved[16];
};

// size: 0x8
struct LARGE_INTEGER {
	// offset: 0000
	unsigned long LowPart;
	// offset: 0004
	unsigned long HighPart;
};

// size: 0x10
struct GUID {
	// offset: 0000
	unsigned long Data1;
	// offset: 0004
	unsigned short Data2;
	// offset: 0006
	unsigned short Data3;
	// offset: 0008 (8 bytes)
	unsigned char Data4[8];
};

// size: 0x14
struct WAVEFORMATEX {
	// offset: 0000
	unsigned short wFormatTag;
	// offset: 0002
	unsigned short nChannels;
	// offset: 0004
	unsigned long nSamplesPerSec;
	// offset: 0008
	unsigned long nAvgBytesPerSec;
	// offset: 000C
	unsigned short nBlockAlign;
	// offset: 000E
	unsigned short wBitsPerSample;
	// offset: 0010
	unsigned short cbSize;
};

// size: 0x14
struct MMCKINFO {
	// offset: 0000
	unsigned long ckid;
	// offset: 0004
	unsigned long cksize;
	// offset: 0008
	unsigned long fccType;
	// offset: 000C
	unsigned long dwDataOffset;
	// offset: 0010
	unsigned long dwFlags;
};

// size: 0x10
struct WAVEFORMAT {
	// offset: 0000
	unsigned short wFormatTag;
	// offset: 0002
	unsigned short nChannels;
	// offset: 0004
	unsigned long nSamplesPerSec;
	// offset: 0008
	unsigned long nAvgBytesPerSec;
	// offset: 000C
	unsigned short nBlockAlign;
};

// size: 0x14
struct PCMWAVEFORMAT {
	// offset: 0000 (16 bytes)
	struct WAVEFORMAT wf;
	// offset: 0010
	unsigned short wBitsPerSample;
};

// size: 0x34
struct VS_FIXEDFILEINFO {
	// offset: 0000
	unsigned long dwSignature;
	// offset: 0004
	unsigned long dwStrucVersion;
	// offset: 0008
	unsigned long dwFileVersionMS;
	// offset: 000C
	unsigned long dwFileVersionLS;
	// offset: 0010
	unsigned long dwProductVersionMS;
	// offset: 0014
	unsigned long dwProductVersionLS;
	// offset: 0018
	unsigned long dwFileFlagsMask;
	// offset: 001C
	unsigned long dwFileFlags;
	// offset: 0020
	unsigned long dwFileOS;
	// offset: 0024
	unsigned long dwFileType;
	// offset: 0028
	unsigned long dwFileSubtype;
	// offset: 002C
	unsigned long dwFileDateMS;
	// offset: 0030
	unsigned long dwFileDateLS;
};

// size: 0x30
struct WNDCLASSEX {
	// offset: 0000
	unsigned int cbSize;
	// offset: 0004
	unsigned int style;
	// offset: 0008
	unsigned long (*lpfnWndProc)();
	// offset: 000C
	int cbClsExtra;
	// offset: 0010
	int cbWndExtra;
	// offset: 0014
	unsigned long hInstance;
	// offset: 0018
	unsigned long hIcon;
	// offset: 001C
	unsigned long hCursor;
	// offset: 0020
	unsigned long hbrBackground;
	// offset: 0024
	char *lpszMenuName;
	// offset: 0028
	char *lpszClassName;
	// offset: 002C
	unsigned long hIconSm;
};

// size: 0x4
struct SHITEMID {
	// offset: 0000
	unsigned short cb;
	// offset: 0002 (1 bytes)
	unsigned char abID[1];
};

// size: 0x4
struct _ITEMIDLIST {
	// offset: 0000 (4 bytes)
	struct SHITEMID mkid;
};

// size: 0x4
struct _HSTRANS {
	int unused;
};

// size: 0x8
struct SIZE {
	// offset: 0000
	int cx;
	// offset: 0004
	int cy;
};

// size: 0x110
struct TBMP {
	// offset: 0000
	unsigned char *data;
	// offset: 0004 (8 bytes)
	struct SIZE datasize;
	// offset: 000C
	long userdata;
	// offset: 0010 (256 bytes)
	char text[256];
};

// size: 0x10
struct UIRECT {
	// offset: 0000
	long left;
	// offset: 0004
	long top;
	// offset: 0008
	long right;
	// offset: 000C
	long bottom;
};

// size: 0x2
struct MSFX {
	unsigned short pszName;
};

// size: 0x8
struct CKINFO {
	// offset: 0000
	unsigned long dwSize;
	// offset: 0004
	unsigned long dwOffset;
};

// size: 0x1
struct TSnd {
};

// size: 0x4
struct TSFX {
	// offset: 0000
	unsigned char bFlags;
	// offset: 0002
	unsigned short pszName;
};

// size: 0x2
struct AnimStruct {
	// offset: 0000
	char Frames;
	// offset: 0001
	char Rate;
};

// size: 0x3C
struct MonsterData {
	// offset: 0000
	unsigned short GraphicType;
	// offset: 0002
	unsigned char has_special;
	// offset: 0004
	unsigned short sndfile;
	// offset: 0006
	unsigned char snd_special;
	// offset: 0007
	char TransFile;
	// offset: 0008 (6 bytes)
	char Frames[6];
	// offset: 000E (6 bytes)
	char Rate[6];
	// offset: 0014
	int mName;
	// offset: 0018
	char mMinDLvl;
	// offset: 0019
	char mMaxDLvl;
	// offset: 001A
	char mLevel;
	// offset: 001C
	short mMinHP;
	// offset: 001E
	short mMaxHP;
	// offset: 0020
	unsigned char mAi;
	// offset: 0022
	unsigned short mFlags;
	// offset: 0024
	unsigned char mInt;
	// offset: 0025
	unsigned char mHit;
	// offset: 0026
	unsigned char mAFNum;
	// offset: 0027
	unsigned char mMinDamage;
	// offset: 0028
	unsigned char mMaxDamage;
	// offset: 0029
	unsigned char mHit2;
	// offset: 002A
	unsigned char mAFNum2;
	// offset: 002B
	unsigned char mMinDamage2;
	// offset: 002C
	unsigned char mMaxDamage2;
	// offset: 002D
	char mArmorClass;
	// offset: 002E
	char mMonstClass;
	// offset: 0030
	unsigned short mMagicRes;
	// offset: 0032
	unsigned short mMagicRes2;
	// offset: 0034
	unsigned short mTreasure;
	// offset: 0036
	char mSelFlag;
	// offset: 0038
	unsigned short mExp;
};

// size: 0x1C
struct CMonster {
	// offset: 0000 (60 bytes)
	struct MonsterData *MData;
	// offset: 0004 (12 bytes)
	struct AnimStruct Anims[6];
	// offset: 0010
	unsigned short Snds;
	// offset: 0012
	unsigned char mtype;
	// offset: 0013
	unsigned char mPlaceFlags;
	// offset: 0014
	unsigned char mMinHP;
	// offset: 0015
	unsigned char mMaxHP;
	// offset: 0016
	unsigned char has_special;
	// offset: 0017
	unsigned char mAFNum;
	// offset: 0018
	char mdeadval;
};

// size: 0x70
struct MonsterStruct {
	// offset: 0000
	int mtalkmsg;
	// offset: 0004
	int _mRndSeed;
	// offset: 0008
	int _mAISeed;
	// offset: 000C
	int _mgoalvar1;
	// offset: 0010
	int _mgoalvar2;
	// offset: 0014
	int _mgoalvar3;
	// offset: 0018
	short _mVar1;
	// offset: 001A
	short _mVar2;
	// offset: 001C
	short _mVar3;
	// offset: 001E
	short _mVar4;
	// offset: 0020
	short _mVar5;
	// offset: 0022
	short _mVar6;
	// offset: 0024
	short _mVar7;
	// offset: 0026
	short _mVar8;
	// offset: 0028
	short _mmaxhp;
	// offset: 002A
	short _mhitpoints;
	// offset: 002C
	short _mxvel;
	// offset: 002E
	short _myvel;
	// offset: 0030
	unsigned short _mFlags;
	// offset: 0032
	unsigned short mExp;
	// offset: 0034
	unsigned short mMagicRes;
	// offset: 0036
	char _mMTidx;
	// offset: 0037
	char _mmode;
	// offset: 0038
	char _mx;
	// offset: 0039
	char _my;
	// offset: 003A
	char _mfutx;
	// offset: 003B
	char _mfuty;
	// offset: 003C
	char _moldx;
	// offset: 003D
	char _moldy;
	// offset: 003E
	char _mxoff;
	// offset: 003F
	char _myoff;
	// offset: 0040
	char _mdir;
	// offset: 0041
	char _menemy;
	// offset: 0042
	char _mAnimDelay;
	// offset: 0043
	char _mAnimCnt;
	// offset: 0044
	char _mAnimLen;
	// offset: 0045
	char _mAnimFrame;
	// offset: 0046
	char _mAFNum;
	// offset: 0047
	char _lastx;
	// offset: 0048
	char _lasty;
	// offset: 0049
	char _udeadval;
	// offset: 004A
	char mWhoHit;
	// offset: 004B
	char mLevel;
	// offset: 004C
	char mArmorClass;
	// offset: 004D
	unsigned char _mgoal;
	// offset: 004E
	unsigned char _pathcount;
	// offset: 004F
	unsigned char _menemyx;
	// offset: 0050
	unsigned char _menemyy;
	// offset: 0051
	unsigned char _meflag;
	// offset: 0052
	unsigned char _mAi;
	// offset: 0053
	unsigned char _mint;
	// offset: 0054
	unsigned char _msquelch;
	// offset: 0055
	unsigned char _uniqtype;
	// offset: 0056
	unsigned char _uniqtrans;
	// offset: 0057
	unsigned char mHit;
	// offset: 0058
	unsigned char mMinDamage;
	// offset: 0059
	unsigned char mMaxDamage;
	// offset: 005A
	unsigned char mHit2;
	// offset: 005B
	unsigned char mMinDamage2;
	// offset: 005C
	unsigned char mMaxDamage2;
	// offset: 005D
	unsigned char leader;
	// offset: 005E
	unsigned char leaderflag;
	// offset: 005F
	unsigned char packsize;
	// offset: 0060
	unsigned char mlid;
	// offset: 0061
	char Action;
	// offset: 0062
	char _Wandering;
	// offset: 0063
	char _mDelFlag;
	// offset: 0064
	int mName;
	// offset: 0068 (28 bytes)
	struct CMonster *MType;
	// offset: 006C (60 bytes)
	struct MonsterData *MData;
};

// size: 0x18
struct UniqMonstStruct {
	// offset: 0000
	char mtype;
	// offset: 0002
	unsigned short mName;
	// offset: 0004
	unsigned char mlevel;
	// offset: 0006
	unsigned short mmaxhp;
	// offset: 0008
	unsigned char mAi;
	// offset: 0009
	unsigned char mint;
	// offset: 000A
	unsigned char mMinDamage;
	// offset: 000B
	unsigned char mMaxDamage;
	// offset: 000C
	unsigned short mMagicRes;
	// offset: 000E
	unsigned short mUnqAttr;
	// offset: 0010
	unsigned char mUnqVar1;
	// offset: 0011
	unsigned char mUnqVar2;
	// offset: 0014
	int mtalkmsg;
};

// size: 0x8
struct STONEPAL {
	// offset: 0000
	unsigned char NoStonePals;
	// offset: 0004
	int StonePal;
};

// size: 0x10
struct DEF_ARGS {
	// offset: 0000
	unsigned long a0;
	// offset: 0004
	unsigned long a1;
	// offset: 0008
	unsigned long a2;
	// offset: 000C
	unsigned long a3;
};

// size: 0x28
struct MEM_INIT_INFO {
	// offset: 0000
	void *Mem;
	// offset: 0004
	unsigned long Size;
	// offset: 0008
	unsigned long Type;
	// offset: 000C
	char *TypeString;
	// offset: 0010
	unsigned short Alignment;
	// offset: 0014
	void (*MemMove)();
	// offset: 0018 (40 bytes)
	struct MEM_INIT_INFO *NextInitBlock;
	// offset: 001C
	unsigned short Flags;
	// offset: 0020
	struct MEM_HDR *Empty;
	// offset: 0024
	struct MEM_HDR *Used;
};

// size: 0x8
struct GAL_STRUCT {
	// offset: 0000
	int OriginalSize;
	// offset: 0004
	unsigned int Offset;
};

// size: 0x5C
struct TASK {
	// offset: 0000 (92 bytes)
	struct TASK *Next;
	// offset: 0004 (92 bytes)
	struct TASK *Prev;
	// offset: 0008
	unsigned long Id;
	// offset: 000C
	unsigned long SleepTime;
	// offset: 0014
	void *Stack;
	// offset: 0018
	unsigned long StackSize;
	// offset: 001C
	void *Data;
	// offset: 0020 (48 bytes)
	int TskEnv[12];
	// offset: 0050
	void (*Main)();
	// offset: 0054
	long hndTask;
	// offset: 0058
	unsigned short XtraLongs;
	// offset: 005A
	unsigned short MaxStackSizeBytes;
	// offset: 0080 (1 bytes)
	// unsigned long fToInit;
	// offset: 0081 (1 bytes)
	// unsigned long fToDie;
	// offset: 0082 (1 bytes)
	// unsigned long fKillable;
	// offset: 0083 (1 bytes)
	// unsigned long fActive;
	// offset: 0084 (1 bytes)
	// unsigned long fXtraStack;
};

// size: 0xC
struct FRAME_HDR {
	// offset: 0000 (32 bytes)
	// unsigned int FrOffset;
	// offset: 0020 (8 bytes)
	// int X;
	// offset: 0028 (8 bytes)
	// int Y;
	// offset: 0030 (9 bytes)
	// unsigned int W;
	// offset: 0039 (7 bytes)
	// unsigned int PalNum;
	// offset: 0040 (9 bytes)
	// unsigned int H;
	// offset: 0049 (1 bytes)
	// unsigned int Rotated;
	// offset: 004A (2 bytes)
	// unsigned int BitsPerPixel;
	// offset: 004C (1 bytes)
	// unsigned int InVRAM;
	// offset: 004D (2 bytes)
	// unsigned int CompType;
	// offset: 004F (1 bytes)
	// unsigned int NotTrans;
};

// size: 0x4
struct SysObj {
	long MemHnd;
};

// size: 0x14
struct FileIO {
	// offset: 0000 (4 bytes)
	struct SysObj SysObj;
	// offset: 0004
	unsigned long MemId;
	// offset: 0008
	long hndPath;
	// offset: 000C
	char *SearchPath;
	// offset: 0010 (4 bytes)
	struct __vtbl_ptr_type (*_vf)[7];
};

// size: 0x8
struct CPart {
	// offset: 0000
	unsigned long Piece;
	// offset: 0004
	short X;
	// offset: 0006
	short Y;
};

// size: 0xC
struct CBlock {
	// offset: 0000
	unsigned long NumOfParts;
	// offset: 0004 (8 bytes)
	struct CPart Parts[1];
};

// size: 0x10
struct CBlockHdr {
	// offset: 0000
	unsigned long NumOfBlocks;
	// offset: 0004 (12 bytes)
	struct CBlock Blocks[1];
};

// size: 0x8
struct PAL {
	// offset: 0004 (2 bytes)
	unsigned short Cols[1];
	// offset: 0000 (1 bytes)
	// unsigned int InVram;
	// offset: 0001 (31 bytes)
	// unsigned int NumOfCols;
};

// size: 0x4
struct PAL_INVRAM {
	// offset: 0000 (1 bytes)
	// unsigned int InVram;
	// offset: 0001 (15 bytes)
	// unsigned int Pad;
	// offset: 0010 (16 bytes)
	// unsigned int clut;
};

// size: 0x8
struct DECOMP_BUFFER {
	// offset: 0000
	unsigned long TpX;
	// offset: 0004
	unsigned long TpY;
};

// size: 0xC
struct ALL_DECOMP_BUFFERS {
	// offset: 0000
	unsigned long NumOfBuffers;
	// offset: 0004 (8 bytes)
	struct DECOMP_BUFFER TheBuffers[1];
};

// size: 0x28
struct SPR_HDR {
	// offset: 0000 (32 bytes)
	// unsigned int DecompOffset;
	// offset: 0020 (32 bytes)
	// unsigned int CreatureOffset;
	// offset: 0040 (32 bytes)
	// unsigned int PalOffset;
	// offset: 0060 (32 bytes)
	// unsigned int FrameOffset;
	// offset: 0080 (32 bytes)
	// unsigned int BaseFrame;
	// offset: 00A0 (32 bytes)
	// unsigned int DestTPage;
	// offset: 00C0 (32 bytes)
	// unsigned int ComponentOffset;
	// offset: 00E0 (32 bytes)
	// unsigned int NumOfCreatures;
	// offset: 0100 (16 bytes)
	// unsigned int NumOfFrames;
	// offset: 0110 (16 bytes)
	// unsigned int NumOfPals;
	// offset: 0120 (8 bytes)
	// unsigned int TWidth;
	// offset: 0128 (8 bytes)
	// unsigned int THeight;
	// offset: 0130 (8 bytes)
	// unsigned int IsTiles;
	// offset: 0138 (8 bytes)
	// unsigned int Spare;
};

// size: 0x4
struct TP_LOAD_HDR {
	// offset: 0000 (8 bytes)
	// unsigned int U;
	// offset: 0008 (8 bytes)
	// unsigned int V;
	// offset: 0010 (16 bytes)
	// unsigned int tpage;
};

// size: 0x4
struct CTextFileInfo {
	char *FileName;
};

// size: 0xE
struct CCreatureAction {
	// offset: 0000
	unsigned short BaseFrame;
	// offset: 0002
	unsigned char NumOfFrames;
	// offset: 0003
	unsigned char NumOfPhysFrames;
	// offset: 0004 (8 bytes)
	unsigned char DirRemap[8];
	// offset: 000C (1 bytes)
	unsigned char AnimRemap[1];
};

// size: 0x14
struct CCreatureHdr {
	// offset: 0000
	long NumOfActions;
	// offset: 0004 (14 bytes)
	struct CCreatureAction Cr;
};

// size: 0x6C
struct TextDat {
	// offset: 0000
	int TexNum;
	// offset: 0004
	bool DatLoaded;
	// offset: 0008
	long hndDat;
	// offset: 000C
	long hndHdr;
	// offset: 0010
	long hndPalOffset;
	// offset: 0014
	long hndCreatureOffset;
	// offset: 0018
	long hndBlockOffsets;
	// offset: 001C (12 bytes)
	struct FRAME_HDR *Frames;
	// offset: 0020 (40 bytes)
	struct SPR_HDR *Hdr;
	// offset: 0024
	void *Pals;
	// offset: 0028
	int *PalOffset;
	// offset: 002C
	int *BlockOffsets;
	// offset: 0030
	int *CreatureOffset;
	// offset: 0034
	unsigned char *CreatureAnims;
	// offset: 0038
	unsigned char *Blocks;
	// offset: 003C
	bool Loaded;
	// offset: 0040
	int LoadCount;
	// offset: 0044 (4 bytes)
	struct CTextFileInfo *FileInfo;
	// offset: 0048
	long hndDecompBuffer;
	// offset: 004C
	int DecX;
	// offset: 0050
	int DecY;
	// offset: 0054
	int PalX;
	// offset: 0058
	int PalY;
	// offset: 005C
	int Scr;
	// offset: 0060 (8 bytes)
	int NumOfBuffers[2];
	// offset: 0068
	long hndDecompArrays;
};

// size: 0x78
struct CScreen {
	// offset: 0000 (108 bytes)
	struct TextDat TextDat;
	// offset: 006C
	int LoadedId;
	// offset: 0070
	int TpX;
	// offset: 0074
	int TpY;
};

// size: 0x20
struct OBJ_TYPE_INFO {
	// offset: 0000
	void (*Constructor)();
	// offset: 0004
	void (*Destructor)();
	// offset: 0008
	void (*Printer)();
	// offset: 000C
	int (*GetWidth)();
	// offset: 0010
	int (*GetHeight)();
	// offset: 0014
	int (*GetXOff)();
	// offset: 0018
	int (*GetYOff)();
	// offset: 001C
	int (*GetPal)();
};

// size: 0x28
struct OBJ_LIST {
	// offset: 0000
	unsigned long PrintDepth;
	// offset: 0004
	unsigned char Visible;
	// offset: 0005
	unsigned char Killable;
	// offset: 0008
	char *ListName;
	// offset: 000C (40 bytes)
	struct OBJ_LIST *Prev;
	// offset: 0010 (40 bytes)
	struct OBJ_LIST *Next;
	// offset: 0014
	long X;
	// offset: 0018
	long Y;
	// offset: 001C
	long Z;
	// offset: 0020
	struct OBJ_STRUCT *Head;
	// offset: 0024
	unsigned char (*SortCompare)();
};

// size: 0x34
struct OBJ_STRUCT {
	// offset: 0000 (52 bytes)
	struct OBJ_STRUCT *Next;
	// offset: 0004 (52 bytes)
	struct OBJ_STRUCT *Prev;
	// offset: 0008
	unsigned long ID;
	// offset: 000C
	long XPos;
	// offset: 0010
	long YPos;
	// offset: 0014
	long ZPos;
	// offset: 0018
	long XVel;
	// offset: 001C
	long YVel;
	// offset: 0020
	long ZVel;
	// offset: 0024 (32 bytes)
	struct OBJ_TYPE_INFO *OTI;
	// offset: 0028 (40 bytes)
	struct OBJ_LIST *OL;
	// offset: 002C
	void *Data;
	// offset: 0030
	long MemHandle;
};

// size: 0x6C
struct CPad {
	// offset: 0000
	unsigned char get_both;
	// offset: 0001
	unsigned char active;
	// offset: 0002
	unsigned char PadType;
	// offset: 0003
	unsigned char PADTICK;
	// offset: 0004
	unsigned short PADTICKMASK;
	// offset: 0006
	unsigned short PadNum;
	// offset: 0008
	unsigned short Cur;
	// offset: 000A
	unsigned short Up;
	// offset: 000C
	unsigned short Down;
	// offset: 000E
	unsigned short Tick;
	// offset: 0010
	unsigned short Old;
	// offset: 0012
	unsigned short both_Cur;
	// offset: 0014
	unsigned short both_Up;
	// offset: 0016
	unsigned short both_Down;
	// offset: 0018
	unsigned short both_Tick;
	// offset: 001A
	unsigned short both_Old;
	// offset: 001C (64 bytes)
	bool TickDown[16];
	// offset: 005C (16 bytes)
	unsigned char TickCount[16];
};

// size: 0x218
struct CFont {
	// offset: 0000
	int TextureId;
	// offset: 0004 (512 bytes)
	unsigned short FontTab[256];
	// offset: 0204
	int PrintyOTpos;
	// offset: 0208
	int MinX;
	// offset: 020C
	int MaxX;
	// offset: 0210
	int Width;
	// offset: 0214 (108 bytes)
	struct TextDat *ThisDat;
};

// size: 0x10
struct Dialog {
	// offset: 0000
	int BevelGfx;
	// offset: 0004
	int BorderGfx;
	// offset: 0008
	int BackGfx;
	// offset: 000C
	int DialogOTpos;
};

// size: 0x70
struct SCREEN_ENV {
	// offset: 0000 (92 bytes)
	struct DRAWENV drawenv;
	// offset: 005C (20 bytes)
	struct DISPENV dispenv;
};

// size: 0x70
struct DB {
	// offset: 0000 (92 bytes)
	struct DRAWENV draw;
	// offset: 005C (20 bytes)
	struct DISPENV disp;
};

// size: 0x7
struct ShadowStruct {
	// offset: 0000
	unsigned char strig;
	// offset: 0001
	unsigned char s1;
	// offset: 0002
	unsigned char s2;
	// offset: 0003
	unsigned char s3;
	// offset: 0004
	unsigned char nv1;
	// offset: 0005
	unsigned char nv2;
	// offset: 0006
	unsigned char nv3;
};

// size: 0x14
struct ScrollStruct {
	// offset: 0000
	int _sxoff;
	// offset: 0004
	int _syoff;
	// offset: 0008
	int _sdx;
	// offset: 000C
	int _sdy;
	// offset: 0010
	int _sdir;
};

// size: 0x14
struct THEME_LOC {
	// offset: 0000
	int x;
	// offset: 0004
	int y;
	// offset: 0008
	int ttval;
	// offset: 000C
	int width;
	// offset: 0010
	int height;
};

// size: 0xA
struct MINIXY {
	// offset: 0000
	char stairsupx;
	// offset: 0001
	char stairsupy;
	// offset: 0002
	char stairsdownx;
	// offset: 0003
	char stairsdowny;
	// offset: 0004
	char townwarpx;
	// offset: 0005
	char townwarpy;
	// offset: 0006
	char pentax;
	// offset: 0007
	char pentay;
	// offset: 0008
	char pwaterx;
	// offset: 0009
	char pwatery;
};

// size: 0x20
struct MICROS {
	// offset: 0000 (32 bytes)
	unsigned short mt[16];
};

// size: 0xC
struct map_info {
	// offset: 0000
	char dObject;
	// offset: 0001
	char dItem;
	// offset: 0002
	char dMissile;
	// offset: 0003
	char dFlags;
	// offset: 0004
	char dDead;
	// offset: 0005
	char dTransVal;
	// offset: 0006
	short dPiece;
	// offset: 0008
	short dMonster;
	// offset: 000A
	char dPlayer;
};

// size: 0x2
struct tab_entry {
	// offset: 0000
	unsigned char a;
	// offset: 0001
	unsigned char b;
};

// size: 0x28
struct PLStruct {
	// offset: 0000
	int PLName;
	// offset: 0004
	int PLPower;
	// offset: 0008
	int PLParam1;
	// offset: 000C
	int PLParam2;
	// offset: 0010
	char PLMinLvl;
	// offset: 0014
	long PLIType;
	// offset: 0018
	unsigned char PLGOE;
	// offset: 0019
	unsigned char PLDouble;
	// offset: 001A
	unsigned char PLOk;
	// offset: 001C
	int PLMinVal;
	// offset: 0020
	int PLMaxVal;
	// offset: 0024
	int PLMultVal;
};

// size: 0x54
struct UItemStruct {
	// offset: 0000
	int UIName;
	// offset: 0004
	char UIItemId;
	// offset: 0005
	char UIMinLvl;
	// offset: 0006
	char UINumPL;
	// offset: 0008
	int UIValue;
	// offset: 000C
	char UIPower1;
	// offset: 0010
	int UIParam1;
	// offset: 0014
	int UIParam2;
	// offset: 0018
	char UIPower2;
	// offset: 001C
	int UIParam3;
	// offset: 0020
	int UIParam4;
	// offset: 0024
	char UIPower3;
	// offset: 0028
	int UIParam5;
	// offset: 002C
	int UIParam6;
	// offset: 0030
	char UIPower4;
	// offset: 0034
	int UIParam7;
	// offset: 0038
	int UIParam8;
	// offset: 003C
	char UIPower5;
	// offset: 0040
	int UIParam9;
	// offset: 0044
	int UIParam10;
	// offset: 0048
	char UIPower6;
	// offset: 004C
	int UIParam11;
	// offset: 0050
	int UIParam12;
};

// size: 0x20
struct ItemDataStruct {
	// offset: 0000
	unsigned char iRnd;
	// offset: 0001
	char iClass;
	// offset: 0002
	char iLoc;
	// offset: 0003
	unsigned char iCurs;
	// offset: 0004
	char itype;
	// offset: 0005
	char iItemId;
	// offset: 0006
	unsigned short iName;
	// offset: 0008
	unsigned short iSName;
	// offset: 000A
	char iMinMLvl;
	// offset: 000B
	unsigned char iDurability;
	// offset: 000C
	unsigned char iMinDam;
	// offset: 000D
	unsigned char iMaxDam;
	// offset: 000E
	unsigned char iMinAC;
	// offset: 000F
	unsigned char iMaxAC;
	// offset: 0010
	char iMinStr;
	// offset: 0011
	char iMinMag;
	// offset: 0012
	char iMinDex;
	// offset: 0014
	long iFlags;
	// offset: 0018
	unsigned char iMiscId;
	// offset: 0019
	unsigned char iSpell;
	// offset: 001A
	unsigned char iUsable;
	// offset: 001C
	unsigned short iValue;
	// offset: 001E
	unsigned short iMaxValue;
};

// size: 0x10
struct ItemGetRecordStruct {
	// offset: 0000
	int nSeed;
	// offset: 0004
	unsigned short wCI;
	// offset: 0008
	int nIndex;
	// offset: 000C
	unsigned long dwTimestamp;
};

// size: 0x98
struct ItemStruct {
	// offset: 0000
	int _iVAdd1;
	// offset: 0004
	int _iVMult1;
	// offset: 0008
	int _iVAdd2;
	// offset: 000C
	int _iVMult2;
	// offset: 0010
	int _iSeed;
	// offset: 0014
	int _ivalue;
	// offset: 0018
	int _iIvalue;
	// offset: 001C
	int _iMinDam;
	// offset: 0020
	int _iMaxDam;
	// offset: 0024
	int _iSpell;
	// offset: 0028
	int _iDurability;
	// offset: 002C
	int _iMaxDur;
	// offset: 0030
	int _iPLDam;
	// offset: 0034
	int _iPLToHit;
	// offset: 0038
	int _iPLDamMod;
	// offset: 003C
	int _iPLGetHit;
	// offset: 0040
	int _iPLLight;
	// offset: 0044
	int _iFMinDam;
	// offset: 0048
	int _iFMaxDam;
	// offset: 004C
	int _iLMinDam;
	// offset: 0050
	int _iLMaxDam;
	// offset: 0054
	short _iPLEnAc;
	// offset: 0056
	short _iCharges;
	// offset: 0058
	short _iAC;
	// offset: 005A
	short _itype;
	// offset: 005C
	short IDidx;
	// offset: 0060
	long _iFlags;
	// offset: 0064
	short _iPLMana;
	// offset: 0066
	short _iPLHP;
	// offset: 0068
	short _iUid;
	// offset: 006A
	short _iMaxCharges;
	// offset: 006C
	short _iCurs;
	// offset: 006E
	short _iMiscId;
	// offset: 0070
	unsigned short _iCreateInfo;
	// offset: 0072
	unsigned short _iName;
	// offset: 0074
	unsigned short _iIName;
	// offset: 0076
	unsigned short ItemFrame;
	// offset: 0078
	char _iAnimLen;
	// offset: 0079
	char _iAnimFrame;
	// offset: 007A
	char _iSelFlag;
	// offset: 007B
	char _iMagical;
	// offset: 007C
	char _ix;
	// offset: 007D
	char _iy;
	// offset: 007E
	char _iLoc;
	// offset: 007F
	char _iClass;
	// offset: 0080
	char _iPLAC;
	// offset: 0081
	char _iPLStr;
	// offset: 0082
	char _iPLMag;
	// offset: 0083
	char _iPLDex;
	// offset: 0084
	char _iPLVit;
	// offset: 0085
	char _iPLFR;
	// offset: 0086
	char _iPLLR;
	// offset: 0087
	char _iPLMR;
	// offset: 0088
	char _iSplLvlAdd;
	// offset: 0089
	char _iRequest;
	// offset: 008A
	char _iPrePower;
	// offset: 008B
	char _iSufPower;
	// offset: 008C
	char _iMinStr;
	// offset: 008D
	char _iMinDex;
	// offset: 008E
	char _oldlight;
	// offset: 008F
	char _isin;
	// offset: 0090
	unsigned char _iMinMag;
	// offset: 0091
	char _iInvalid;
	// offset: 0092
	char _iStatFlag;
	// offset: 0093
	char _iPostDraw;
	// offset: 0094
	char _iAnimFlag;
	// offset: 0095
	char _iIdentified;
};

// size: 0x23A8
struct PlayerStruct {
	// offset: 0000
	int _pmode;
	// offset: 0004 (25 bytes)
	char walkpath[25];
	// offset: 001D
	unsigned char plractive;
	// offset: 001E
	char destAction;
	// offset: 001F
	char destParam1;
	// offset: 0020
	char destParam2;
	// offset: 0021
	char destParam3;
	// offset: 0022
	char destParam4;
	// offset: 0024
	int plrlevel;
	// offset: 0028
	int WorldX;
	// offset: 002C
	int WorldY;
	// offset: 0030
	short _px;
	// offset: 0032
	short _py;
	// offset: 0034
	short _pfutx;
	// offset: 0036
	short _pfuty;
	// offset: 0038
	short _ptargx;
	// offset: 003A
	short _ptargy;
	// offset: 003C
	short _pownerx;
	// offset: 003E
	short _pownery;
	// offset: 0040
	short _poldx;
	// offset: 0042
	short _poldy;
	// offset: 0044
	char _pxoff;
	// offset: 0045
	char _pyoff;
	// offset: 0046
	short _pxvel;
	// offset: 0048
	short _pyvel;
	// offset: 004A
	char _pdir;
	// offset: 004B
	char _nextdir;
	// offset: 004C
	char _pgfxnum;
	// offset: 0050
	unsigned char *_pAnimData;
	// offset: 0054
	int _pAnimDelay;
	// offset: 0058
	int _pAnimCnt;
	// offset: 005C
	int _pAnimLen;
	// offset: 0060
	int _pAnimFrame;
	// offset: 0064
	char _pAnimWidth;
	// offset: 0065
	char _pAnimWidth2;
	// offset: 0066
	char _peflag;
	// offset: 0067
	char _plid;
	// offset: 0068
	char _pvid;
	// offset: 0069
	char _pSpell;
	// offset: 006A
	char _pSplType;
	// offset: 006B
	char _pSplFrom;
	// offset: 006C
	char _pTSpell;
	// offset: 006D
	char _pTSplType;
	// offset: 0070
	int _pRSpell;
	// offset: 0074
	char _pRSplType;
	// offset: 0078
	int _pSBkSpell;
	// offset: 007C
	char _pSBkSplType;
	// offset: 007D (64 bytes)
	char _pSplLvl[64];
	// offset: 00C0
	unsigned long _pMemSpells;
	// offset: 00C8
	unsigned long _pAblSpells;
	// offset: 00D0
	unsigned long _pScrlSpells;
	// offset: 00D8
	char _pSpellFlags;
	// offset: 00DC (16 bytes)
	int _pSplHotKey[4];
	// offset: 00EC (4 bytes)
	char _pSplTHotKey[4];
	// offset: 00F0
	int _pwtype;
	// offset: 00F4
	unsigned char _pBlockFlag;
	// offset: 00F5
	unsigned char _pInvincible;
	// offset: 00F6
	char _pLightRad;
	// offset: 00F7
	unsigned char _pLvlChanging;
	// offset: 00F8 (32 bytes)
	char _pName[32];
	// offset: 0118
	char _pClass;
	// offset: 011A
	short _pStrength;
	// offset: 011C
	short _pBaseStr;
	// offset: 011E
	short _pMagic;
	// offset: 0120
	short _pBaseMag;
	// offset: 0122
	short _pDexterity;
	// offset: 0124
	short _pBaseDex;
	// offset: 0126
	short _pVitality;
	// offset: 0128
	short _pBaseVit;
	// offset: 012C
	int _pStatPts;
	// offset: 0130
	int _pDamageMod;
	// offset: 0134
	int _pBaseToBlk;
	// offset: 0138
	long _pHPBase;
	// offset: 013C
	long _pMaxHPBase;
	// offset: 0140
	long _pHitPoints;
	// offset: 0144
	long _pMaxHP;
	// offset: 0148
	int _pHPPer;
	// offset: 014C
	long _pManaBase;
	// offset: 0150
	long _pMaxManaBase;
	// offset: 0154
	long _pMana;
	// offset: 0158
	long _pMaxMana;
	// offset: 015C
	int _pManaPer;
	// offset: 0160
	char _pLevel;
	// offset: 0161
	char _pMaxLvl;
	// offset: 0164
	long _pExperience;
	// offset: 0168
	long _pMaxExp;
	// offset: 016C
	long _pNextExper;
	// offset: 0170
	char _pArmorClass;
	// offset: 0171
	char _pMagResist;
	// offset: 0172
	char _pFireResist;
	// offset: 0173
	char _pLghtResist;
	// offset: 0174
	long _pGold;
	// offset: 0178
	unsigned char _pInfraFlag;
	// offset: 017A
	short _pVar1;
	// offset: 017C
	short _pVar2;
	// offset: 017E
	short _pVar3;
	// offset: 0180
	short _pVar4;
	// offset: 0182
	short _pVar5;
	// offset: 0184
	short _pVar6;
	// offset: 0186
	short _pVar7;
	// offset: 0188
	short _pVar8;
	// offset: 018A (17 bytes)
	unsigned char _pLvlVisited[17];
	// offset: 019B (10 bytes)
	unsigned char _pSLvlVisited[10];
	// offset: 01A8
	int _pGFXLoad;
	// offset: 01AC
	unsigned char peq;
	// offset: 01B0
	int _pAFNum;
	// offset: 01B4
	int _pNFrames;
	// offset: 01B8
	int _pWFrames;
	// offset: 01BC
	int _pAFrames;
	// offset: 01C0
	int _pSFrames;
	// offset: 01C4
	int _pSFNum;
	// offset: 01C8
	int _pHFrames;
	// offset: 01CC
	int _pDFrames;
	// offset: 01D0
	int _pBFrames;
	// offset: 01D4 (1064 bytes)
	struct ItemStruct InvBody[7];
	// offset: 05FC (6080 bytes)
	struct ItemStruct InvList[40];
	// offset: 1DBC
	int _pNumInv;
	// offset: 1DC0 (40 bytes)
	char InvGrid[40];
	// offset: 1DE8 (1216 bytes)
	struct ItemStruct SpdList[8];
	// offset: 22A8 (152 bytes)
	struct ItemStruct HoldItem;
	// offset: 2340
	int inv_highlight;
	// offset: 2344
	int body_highlight;
	// offset: 2348
	int holdinv_x;
	// offset: 234C
	int holdinv_y;
	// offset: 2350
	int holdbody_loc;
	// offset: 2354
	int _pIMinDam;
	// offset: 2358
	int _pIMaxDam;
	// offset: 235C
	int _pIAC;
	// offset: 2360
	int _pIBonusDam;
	// offset: 2364
	int _pIBonusToHit;
	// offset: 2368
	int _pIBonusAC;
	// offset: 236C
	int _pIBonusDamMod;
	// offset: 2370
	unsigned long _pISpells;
	// offset: 2378
	long _pIFlags;
	// offset: 237C
	int _pIGetHit;
	// offset: 2380
	char _pISplLvlAdd;
	// offset: 2381
	char _pISplCost;
	// offset: 2384
	int _pISplDur;
	// offset: 2388
	int _pIEnAc;
	// offset: 238C
	int _pIFMinDam;
	// offset: 2390
	int _pIFMaxDam;
	// offset: 2394
	int _pILMinDam;
	// offset: 2398
	int _pILMaxDam;
	// offset: 239C
	int _pOilType;
	// offset: 23A0
	unsigned char pTownWarps;
	// offset: 23A1
	unsigned char pDungMsgs;
	// offset: 23A2
	unsigned char pLvlLoad;
	// offset: 23A4
	unsigned long pDiabloKillLevel;
};

// size: 0x40
struct controller_pos {
	// offset: 0000
	int rx;
	// offset: 0004
	int ry;
	// offset: 0008
	int rz;
	// offset: 000C
	int tx;
	// offset: 0010
	int ty;
	// offset: 0014
	int tz;
	// offset: 0018
	int px;
	// offset: 001C
	int py;
	// offset: 0020
	int srx;
	// offset: 0024
	int sry;
	// offset: 0028
	int srz;
	// offset: 002C
	int stx;
	// offset: 0030
	int sty;
	// offset: 0034
	int stz;
	// offset: 0038
	int spx;
	// offset: 003C
	int spy;
};

// size: 0xC
struct pad_assigns {
	// offset: 0000
	char *txt;
	// offset: 0004
	int pnum;
	// offset: 0008
	char font_num;
};

// size: 0x10
struct KEY_ASSIGNS {
	// offset: 0000
	int txt;
	// offset: 0004
	int pad_val;
	// offset: 0008
	void (*func)();
	// offset: 000C
	int combo_val;
};

// size: 0x10
struct LittleGt4 {
	// offset: 0000
	unsigned short clut;
	// offset: 0002
	unsigned short tpage;
	// offset: 0004
	unsigned char code;
	// offset: 0005
	unsigned char u0;
	// offset: 0006
	unsigned char v0;
	// offset: 0007
	unsigned char u1;
	// offset: 0008
	unsigned char v1;
	// offset: 0009
	unsigned char u2;
	// offset: 000A
	unsigned char v2;
	// offset: 000B
	unsigned char u3;
	// offset: 000C
	unsigned char v3;
	// offset: 000D
	unsigned char w;
	// offset: 000E
	unsigned char h;
};

// size: 0xE0
struct CBlocks {
	// offset: 0000 (108 bytes)
	struct TextDat TextDat;
	// offset: 006C (108 bytes)
	struct TextDat *MonstTexDat;
	// offset: 0070 (108 bytes)
	struct TextDat *ObjTexDat;
	// offset: 0074 (16 bytes)
	struct MonstList *MonsterList;
	// offset: 0078
	int MonstTexId;
	// offset: 007C
	int ObjTexId;
	// offset: 0080
	int ItemTexId;
	// offset: 0084 (108 bytes)
	struct TextDat *ItemTexDat;
	// offset: 0088
	int BgTexId;
	// offset: 008C (108 bytes)
	struct TextDat *BgTexDat;
	// offset: 0090 (8 bytes)
	int pOtPos[2];
	// offset: 0098
	bool IsTown;
	// offset: 009C
	int NumOfBlocks;
	// offset: 00A0 (16 bytes)
	struct LittleGt4 *Gt4s;
	// offset: 00A4
	long hndGt4s;
	// offset: 00A8 (8 bytes)
	struct RECT *Rects;
	// offset: 00AC
	long hndRects;
	// offset: 00B0 (8 bytes)
	struct RECT ClipRect;
	// offset: 00B8
	int StX;
	// offset: 00BC
	int StY;
	// offset: 00C0
	int Mx;
	// offset: 00C4
	int My;
	// offset: 00C8 (8 bytes)
	int pBlockX[2];
	// offset: 00D0 (8 bytes)
	int pBlockY[2];
	// offset: 00D8
	int CursX;
	// offset: 00DC
	int CursY;
};

// size: 0x84
struct CPlayer {
	// offset: 0000 (108 bytes)
	struct TextDat TextDat;
	// offset: 006C
	bool InTown;
	// offset: 0070
	unsigned short PlayerNum;
	// offset: 0072
	unsigned short Tpage;
	// offset: 0074
	int TexId;
	// offset: 0078
	int LastScrX;
	// offset: 007C
	int LastScrY;
	// offset: 0080
	int LastOtPos;
};

// size: 0x24
struct Spell_Target {
	// offset: 0000
	char (*walk)();
	// offset: 0004
	int angle;
	// offset: 0008
	int spotid;
	// offset: 000C (10 bytes)
	short lastx[5];
	// offset: 0016 (10 bytes)
	short lasty[5];
	// offset: 0020
	unsigned char _sx;
	// offset: 0021
	unsigned char _sy;
	// offset: 0022
	unsigned char active;
};

// size: 0x9C
struct GamePad {
	// offset: 0000 (9128 bytes)
	struct PlayerStruct *player;
	// offset: 0004
	char pnum;
	// offset: 0005
	char allow_walking;
	// offset: 0008
	char (*walk_style)();
	// offset: 000C
	int restart_time;
	// offset: 0010
	char style;
	// offset: 0014
	int pad_up_button;
	// offset: 0018
	void (*pad_up_action)();
	// offset: 001C (108 bytes)
	struct CPad *Pad;
	// offset: 0020
	int combo_key;
	// offset: 0024
	unsigned char await_combo;
	// offset: 0025
	unsigned char position_lock;
	// offset: 0028
	int position_key;
	// offset: 002C (56 bytes)
	void (*button_down[14])();
	// offset: 0064 (56 bytes)
	void (*button_combo[14])();
};

// size: 0x4
struct found_objects {
	// offset: 0000
	char index;
	// offset: 0001
	char x;
	// offset: 0002
	char y;
	// offset: 0003
	char type;
};

// size: 0x4
struct CdlLOC {
	// offset: 0000
	unsigned char minute;
	// offset: 0001
	unsigned char second;
	// offset: 0002
	unsigned char sector;
	// offset: 0003
	unsigned char track;
};

// size: 0x4
struct CdlFILTER {
	// offset: 0000
	unsigned char file;
	// offset: 0001
	unsigned char chan;
	// offset: 0002
	unsigned short pad;
};

// size: 0x4
struct CdlATV {
	// offset: 0000
	unsigned char val0;
	// offset: 0001
	unsigned char val1;
	// offset: 0002
	unsigned char val2;
	// offset: 0003
	unsigned char val3;
};

// size: 0x18
struct CdlFILE {
	// offset: 0000 (4 bytes)
	struct CdlLOC pos;
	// offset: 0004
	unsigned long size;
	// offset: 0008 (16 bytes)
	char name[16];
};

// size: 0x20
struct StHEADER {
	// offset: 0000
	unsigned short id;
	// offset: 0002
	unsigned short type;
	// offset: 0004
	unsigned short secCount;
	// offset: 0006
	unsigned short nSectors;
	// offset: 0008
	unsigned long frameCount;
	// offset: 000C
	unsigned long frameSize;
	// offset: 0010
	unsigned short width;
	// offset: 0012
	unsigned short height;
	// offset: 0014
	unsigned long dummy1;
	// offset: 0018
	unsigned long dummy2;
	// offset: 001C (4 bytes)
	struct CdlLOC loc;
};

// size: 0x14
struct PCIO {
	// offset: 0000 (20 bytes)
	struct FileIO FileIO;
};

// size: 0x14
struct CdIO {
	// offset: 0000 (20 bytes)
	struct FileIO FileIO;
};

// size: 0xB0
struct DList {
	// offset: 0000 (4 bytes)
	struct SysObj SysObj;
	// offset: 0004
	int XRot;
	// offset: 0008
	int YRot;
	// offset: 000C
	int ZRot;
	// offset: 0010 (32 bytes)
	struct MATRIX MyRotMatrix;
	// offset: 0030 (32 bytes)
	struct MATRIX MyTransMatrix;
	// offset: 0050 (64 bytes)
	struct VECTOR Out[4];
	// offset: 0090 (32 bytes)
	struct SVECTOR In[4];
};

// size: 0x4
struct ARGB {
	// offset: 0000
	unsigned char b;
	// offset: 0001
	unsigned char g;
	// offset: 0002
	unsigned char r;
	// offset: 0003
	unsigned char a;
};

// size: 0x14
struct shapetbl {
	// offset: 0004
	short width;
	// offset: 0006
	short height;
	// offset: 0008
	short centerx;
	// offset: 000A
	short centery;
	// offset: 0010
	char data;
	// offset: 0000 (8 bytes)
	// unsigned int type;
	// offset: 0008 (24 bytes)
	// int next;
	// offset: 0060 (12 bytes)
	// int shapex;
	// offset: 006C (2 bytes)
	// int reserved;
	// offset: 006E (1 bytes)
	// int transposed;
	// offset: 006F (1 bytes)
	// int rotated;
	// offset: 0070 (12 bytes)
	// int shapey;
	// offset: 007C (4 bytes)
	// int mipmaps;
};

// size: 0x9C
struct windowtbl {
	// offset: 0000
	long id;
	// offset: 0004
	int x;
	// offset: 0008
	int y;
	// offset: 000C
	int width;
	// offset: 0010
	int height;
	// offset: 0014
	unsigned char bpp;
	// offset: 0015
	unsigned char type;
	// offset: 0016
	unsigned char ram;
	// offset: 0017
	unsigned char unused;
	// offset: 0018
	int minx;
	// offset: 001C
	int miny;
	// offset: 0020
	int maxx;
	// offset: 0024
	int maxy;
	// offset: 0028 (20 bytes)
	struct shapetbl *shape;
	// offset: 002C (20 bytes)
	struct DISPENV dispenv;
	// offset: 0040 (92 bytes)
	struct DRAWENV drawenv;
};

// size: 0xC
struct coorddef {
	// offset: 0000
	int x;
	// offset: 0004
	int y;
	// offset: 0008
	int z;
};

// size: 0x8
struct scoorddef {
	// offset: 0000
	int x;
	// offset: 0004
	int y;
};

// size: 0x24
struct matrixtdef {
	// offset: 0000 (36 bytes)
	int m[9];
};

// size: 0x18
struct TSPRT {
	// offset: 0000
	unsigned char a0;
	// offset: 0001
	unsigned char a1;
	// offset: 0002
	unsigned char a2;
	// offset: 0003
	unsigned char len;
	// offset: 0004
	unsigned long tpage;
	// offset: 0008
	unsigned char r;
	// offset: 0009
	unsigned char g;
	// offset: 000A
	unsigned char b;
	// offset: 000B
	unsigned char code;
	// offset: 000C
	unsigned long xy;
	// offset: 0010
	unsigned char u;
	// offset: 0011
	unsigned char v;
	// offset: 0012
	unsigned short clut;
	// offset: 0014
	unsigned long wh;
};

// size: 0x18
struct memclassstruct {
	// offset: 0000
	char **bottomblock;
	// offset: 0004
	char **topblock;
	// offset: 0008
	int pad;
	// offset: 000C
	int align;
	// offset: 0010
	int cache;
	// offset: 0014
	int sentinel;
};

// size: 0x20
struct FONTFILE {
	// offset: 0000
	unsigned long type;
	// offset: 0004
	unsigned char first;
	// offset: 0005
	unsigned char last;
	// offset: 0006
	unsigned char maxwidth;
	// offset: 0007
	unsigned char maxheight;
	// offset: 0008
	unsigned char space;
	// offset: 0009
	unsigned char yinc;
	// offset: 000A
	unsigned char baseline;
	// offset: 000B
	char pad1;
	// offset: 000C (4 bytes)
	char filesize[4];
	// offset: 001C
	long shape;
	// offset: 0080 (16 bytes)
	// int palette;
	// offset: 0090 (16 bytes)
	// int width;
	// offset: 00A0 (16 bytes)
	// int height;
	// offset: 00B0 (16 bytes)
	// int xinc;
	// offset: 00C0 (16 bytes)
	// int xoffset;
	// offset: 00D0 (16 bytes)
	// int yoffset;
};

// size: 0x1E8
struct coordsdef {
	// offset: 0000
	int frames;
	// offset: 0004
	int coords;
	// offset: 0008 (480 bytes)
	struct coorddef point[40];
};

// size: 0x10
struct linedef {
	// offset: 0000
	int start;
	// offset: 0004
	int end;
	// offset: 0008
	int colour;
	// offset: 000C
	int thickness;
};

// size: 0x290
struct linesdef {
	// offset: 0000
	int lines;
	// offset: 0004
	int basex;
	// offset: 0008
	int basey;
	// offset: 000C
	int basez;
	// offset: 0010 (640 bytes)
	struct linedef line[40];
};

// size: 0xC
struct dirangledef {
	// offset: 0000
	int heading;
	// offset: 0004
	int pitch;
	// offset: 0008
	int roll;
};

// size: 0x1C
struct arcangledef {
	// offset: 0000
	int orientation;
	// offset: 0004
	int heading;
	// offset: 0008
	int pitch;
	// offset: 000C
	int roll;
	// offset: 0010
	int vheading;
	// offset: 0014
	int vpitch;
	// offset: 0018
	int vroll;
};

// size: 0x8
struct SHAPETABLEENTRY {
	// offset: 0000 (4 bytes)
	char id[4];
	// offset: 0004
	long offset;
};

// size: 0x18
struct SHAPEFILE {
	// offset: 0000 (4 bytes)
	char type[4];
	// offset: 0004
	long len;
	// offset: 0008
	long num;
	// offset: 000C (4 bytes)
	char creator[4];
	// offset: 0010 (8 bytes)
	struct SHAPETABLEENTRY tbl[1];
};

// size: 0x14
struct radialsymdef {
	// offset: 0000
	int maxindex;
	// offset: 0004
	int shiftcount;
	// offset: 0008
	int delta;
	// offset: 000C
	int scalefactor;
	// offset: 0010 (20 bytes)
	struct shapetbl **shapes;
};

// size: 0x14
struct graphicsmodeinfostruct {
	// offset: 0000
	int width;
	// offset: 0004
	int height;
	// offset: 0008
	int bpp;
	// offset: 000C
	int shapetype;
	// offset: 0080 (1 bytes)
	// int banked;
	// offset: 0081 (1 bytes)
	// int pagedbanks;
	// offset: 0082 (1 bytes)
	// int modex;
	// offset: 0083 (1 bytes)
	// int pageflip;
	// offset: 0084 (1 bytes)
	// int zbuffer;
	// offset: 0085 (1 bytes)
	// int hwdram;
	// offset: 0086 (1 bytes)
	// int hwblit;
	// offset: 0087 (1 bytes)
	// int hwfill;
	// offset: 0088 (1 bytes)
	// int hwscale;
	// offset: 0089 (1 bytes)
	// int hwtmask;
	// offset: 008A (1 bytes)
	// int hwtexture;
	// offset: 008B (1 bytes)
	// int hwvbl;
};

// size: 0x8
struct chunkhdrstruct {
	// offset: 0000
	int type;
	// offset: 0004
	int size;
};

// size: 0xC
struct chunkhdrchkstruct {
	// offset: 0000
	int type;
	// offset: 0004
	int size;
	// offset: 0008
	int crc;
};

// size: 0x10
struct UNIQUEID {
	// offset: 0000
	unsigned long a;
	// offset: 0004
	unsigned short b;
	// offset: 0006
	unsigned short c;
	// offset: 0008 (8 bytes)
	unsigned char d[8];
};

// size: 0x10
struct threadstruct {
	// offset: 0000
	int item;
	// offset: 0004
	int stacksize;
	// offset: 0008
	int priority;
	// offset: 000C
	int processor;
};

// size: 0x98
struct cdstreamstruct {
	// offset: 0000
	long id;
	// offset: 0004
	char *start;
	// offset: 0008
	char *end;
	// offset: 000C
	char *write;
	// offset: 0010
	char *header;
	// offset: 0014
	char *get;
	// offset: 0018
	char *release;
	// offset: 001C
	int handle;
	// offset: 0020
	int state;
	// offset: 0024
	int control;
	// offset: 0028
	int status;
	// offset: 002C
	int abort;
	// offset: 0030
	int datahascrc;
	// offset: 0034
	int crcerrors;
	// offset: 0038
	int crcretries;
	// offset: 003C
	int buffersize;
	// offset: 0040
	long blocksize;
	// offset: 0044
	int readsize;
	// offset: 0048
	int chunksize;
	// offset: 004C
	int relocationsize;
	// offset: 0050
	long fileoffset;
	// offset: 0054
	int fileend;
	// offset: 0058
	long filesize;
	// offset: 005C
	int dataoffset;
	// offset: 0060
	int seekposition;
	// offset: 0064
	int seekoffset;
	// offset: 0068
	int idtype;
	// offset: 006C
	int idmask;
	// offset: 0070 (152 bytes)
	struct cdstreamstruct *nextstream;
	// offset: 0074
	void *emptyblock;
	// offset: 0078
	void *head;
	// offset: 007C
	void *tail;
	// offset: 0080
	void *block;
	// offset: 0084
	int timer;
	// offset: 0088
	int blocktime;
	// offset: 008C
	int streamfull;
	// offset: 0090
	int getable;
	// offset: 0094
	int releaseable;
};

// size: 0x14
struct STREAM {
	// offset: 0000
	unsigned long Offset;
	// offset: 0004
	unsigned long Size;
	// offset: 0008 (12 bytes)
	unsigned char Name[12];
};

// size: 0x14
struct STRHDR {
	// offset: 0000 (12 bytes)
	unsigned char Name[12];
	// offset: 000C
	unsigned long Offset;
	// offset: 0010
	int Size;
};

// size: 0x80
struct SFXHDR {
	// offset: 0000
	char used;
	// offset: 0001
	char loop;
	// offset: 0002
	char playing;
	// offset: 0003
	char state;
	// offset: 0004
	bool TaskAlive;
	// offset: 0008 (20 bytes)
	struct STRHDR *StreamHND;
	// offset: 000C
	unsigned char type;
	// offset: 000D
	unsigned char ChunkGot;
	// offset: 0010
	int voice;
	// offset: 0014
	int volume;
	// offset: 0018
	int s_volume;
	// offset: 001C
	int pitch;
	// offset: 0020
	int stream_sec;
	// offset: 0024
	int stream_offs;
	// offset: 0028
	int stream_read;
	// offset: 002C
	int stream_stall;
	// offset: 0030
	int stream_pos;
	// offset: 0034
	int SPU_frame;
	// offset: 0038
	int SPU_sec;
	// offset: 003C
	int SPU_pos;
	// offset: 0040
	int SPUstreamaddr;
	// offset: 0044
	int framecount;
	// offset: 0048
	int lastcount;
	// offset: 004C
	int sec_num;
	// offset: 0050
	int SPU_sec_num;
	// offset: 0054
	int ah;
	// offset: 0058
	int stream_ending;
	// offset: 005C
	int DMA_size;
	// offset: 0060
	int spu_rate;
	// offset: 0064
	int SizeIn;
	// offset: 0068
	unsigned char *mem;
	// offset: 006C
	unsigned long stream_playing;
	// offset: 0070 (14 bytes)
	char name[14];
};

// size: 0x100
struct DECDCTENV {
	// offset: 0000 (64 bytes)
	unsigned char iq_y[64];
	// offset: 0040 (64 bytes)
	unsigned char iq_c[64];
	// offset: 0080 (128 bytes)
	short dct[64];
};

// size: 0x18
struct ENCSPUENV {
	// offset: 0000
	short *src;
	// offset: 0004
	short *dest;
	// offset: 0008
	short *work;
	// offset: 000C
	long size;
	// offset: 0010
	long loop_start;
	// offset: 0014
	char loop;
	// offset: 0015
	char byte_swap;
	// offset: 0016
	char proceed;
	// offset: 0017
	char pad4;
};

// size: 0x4
struct SpuVolume {
	// offset: 0000
	short left;
	// offset: 0002
	short right;
};

// size: 0x40
struct SpuVoiceAttr {
	// offset: 0000
	unsigned long voice;
	// offset: 0004
	unsigned long mask;
	// offset: 0008 (4 bytes)
	struct SpuVolume volume;
	// offset: 000C (4 bytes)
	struct SpuVolume volmode;
	// offset: 0010 (4 bytes)
	struct SpuVolume volumex;
	// offset: 0014
	unsigned short pitch;
	// offset: 0016
	unsigned short note;
	// offset: 0018
	unsigned short sample_note;
	// offset: 001A
	short envx;
	// offset: 001C
	unsigned long addr;
	// offset: 0020
	unsigned long loop_addr;
	// offset: 0024
	long a_mode;
	// offset: 0028
	long s_mode;
	// offset: 002C
	long r_mode;
	// offset: 0030
	unsigned short ar;
	// offset: 0032
	unsigned short dr;
	// offset: 0034
	unsigned short sr;
	// offset: 0036
	unsigned short rr;
	// offset: 0038
	unsigned short sl;
	// offset: 003A
	unsigned short adsr1;
	// offset: 003C
	unsigned short adsr2;
};

// size: 0x14
struct SpuReverbAttr {
	// offset: 0000
	unsigned long mask;
	// offset: 0004
	long mode;
	// offset: 0008 (4 bytes)
	struct SpuVolume depth;
	// offset: 000C
	long delay;
	// offset: 0010
	long feedback;
};

// size: 0x1000
struct SpuDecodedData {
	// offset: 0000 (1024 bytes)
	short cd_left[512];
	// offset: 0400 (1024 bytes)
	short cd_right[512];
	// offset: 0800 (1024 bytes)
	short voice1[512];
	// offset: 0C00 (1024 bytes)
	short voice3[512];
};

// size: 0xC
struct SpuExtAttr {
	// offset: 0000 (4 bytes)
	struct SpuVolume volume;
	// offset: 0004
	long reverb;
	// offset: 0008
	long mix;
};

// size: 0x28
struct SpuCommonAttr {
	// offset: 0000
	unsigned long mask;
	// offset: 0004 (4 bytes)
	struct SpuVolume mvol;
	// offset: 0008 (4 bytes)
	struct SpuVolume mvolmode;
	// offset: 000C (4 bytes)
	struct SpuVolume mvolx;
	// offset: 0010 (12 bytes)
	struct SpuExtAttr cd;
	// offset: 001C (12 bytes)
	struct SpuExtAttr ext;
};

// size: 0x8
struct SpuEnv {
	// offset: 0000
	unsigned long mask;
	// offset: 0004
	unsigned long queueing;
};

// size: 0x10
struct SpuStVoiceAttr {
	// offset: 0000
	char status;
	// offset: 0001
	char pad1;
	// offset: 0002
	char pad2;
	// offset: 0003
	char pad3;
	// offset: 0004
	long last_size;
	// offset: 0008
	unsigned long buf_addr;
	// offset: 000C
	unsigned long data_addr;
};

// size: 0x188
struct SpuStEnv {
	// offset: 0000
	long size;
	// offset: 0004
	long low_priority;
	// offset: 0008 (384 bytes)
	struct SpuStVoiceAttr voice[24];
};

// size: 0x20
struct VabHdr {
	// offset: 0000
	long form;
	// offset: 0004
	long ver;
	// offset: 0008
	long id;
	// offset: 000C
	unsigned long fsize;
	// offset: 0010
	unsigned short reserved0;
	// offset: 0012
	unsigned short ps;
	// offset: 0014
	unsigned short ts;
	// offset: 0016
	unsigned short vs;
	// offset: 0018
	unsigned char mvol;
	// offset: 0019
	unsigned char pan;
	// offset: 001A
	unsigned char attr1;
	// offset: 001B
	unsigned char attr2;
	// offset: 001C
	unsigned long reserved1;
};

// size: 0x10
struct ProgAtr {
	// offset: 0000
	unsigned char tones;
	// offset: 0001
	unsigned char mvol;
	// offset: 0002
	unsigned char prior;
	// offset: 0003
	unsigned char mode;
	// offset: 0004
	unsigned char mpan;
	// offset: 0005
	char reserved0;
	// offset: 0006
	short attr;
	// offset: 0008
	unsigned long reserved1;
	// offset: 000C
	unsigned long reserved2;
};

// size: 0x20
struct VagAtr {
	// offset: 0000
	unsigned char prior;
	// offset: 0001
	unsigned char mode;
	// offset: 0002
	unsigned char vol;
	// offset: 0003
	unsigned char pan;
	// offset: 0004
	unsigned char center;
	// offset: 0005
	unsigned char shift;
	// offset: 0006
	unsigned char min;
	// offset: 0007
	unsigned char max;
	// offset: 0008
	unsigned char vibW;
	// offset: 0009
	unsigned char vibT;
	// offset: 000A
	unsigned char porW;
	// offset: 000B
	unsigned char porT;
	// offset: 000C
	unsigned char pbmin;
	// offset: 000D
	unsigned char pbmax;
	// offset: 000E
	unsigned char reserved1;
	// offset: 000F
	unsigned char reserved2;
	// offset: 0010
	unsigned short adsr1;
	// offset: 0012
	unsigned short adsr2;
	// offset: 0014
	short prog;
	// offset: 0016
	short vag;
	// offset: 0018 (8 bytes)
	short reserved[4];
};

// size: 0x4
struct SndVolume {
	// offset: 0000
	unsigned short left;
	// offset: 0002
	unsigned short right;
};

// size: 0x4
struct SndVolume2 {
	// offset: 0000
	short left;
	// offset: 0002
	short right;
};

// size: 0xE
struct SndRegisterAttr {
	// offset: 0000 (4 bytes)
	struct SndVolume2 volume;
	// offset: 0004
	short pitch;
	// offset: 0006
	short mask;
	// offset: 0008
	short addr;
	// offset: 000A
	short adsr1;
	// offset: 000C
	short adsr2;
};

// size: 0x12
struct SndVoiceStats {
	// offset: 0000
	short vagId;
	// offset: 0002
	short vabId;
	// offset: 0004
	unsigned short pitch;
	// offset: 0006
	short note;
	// offset: 0008
	short tone;
	// offset: 000A
	short prog_num;
	// offset: 000C
	short prog_actual;
	// offset: 000E
	short vol;
	// offset: 0010
	short pan;
};

// size: 0x94
struct _SsFCALL {
	// offset: 0000
	void (*noteon)();
	// offset: 0004
	void (*programchange)();
	// offset: 0008
	void (*pitchbend)();
	// offset: 000C
	void (*metaevent)();
	// offset: 0010 (52 bytes)
	void (*control[13])();
	// offset: 0044 (80 bytes)
	void (*ccentry[20])();
};

// size: 0x50
struct MissileStruct {
	// offset: 0000
	long _mixvel;
	// offset: 0004
	long _miyvel;
	// offset: 0008
	long _mitxoff;
	// offset: 000C
	long _mityoff;
	// offset: 0010
	int _mirange;
	// offset: 0014
	int _micaster;
	// offset: 0018
	int _midam;
	// offset: 001C
	int _mirnd;
	// offset: 0020
	short _midist;
	// offset: 0022
	short _miVar1;
	// offset: 0024
	short _miVar2;
	// offset: 0026
	short _miVar3;
	// offset: 0028
	short _miVar4;
	// offset: 002A
	short _miVar5;
	// offset: 002C
	short _miVar6;
	// offset: 002E
	short _miVar7;
	// offset: 0030
	short _miVar8;
	// offset: 0032
	char _mitype;
	// offset: 0033
	char _mix;
	// offset: 0034
	char _miy;
	// offset: 0035
	char _mixoff;
	// offset: 0036
	char _miyoff;
	// offset: 0037
	char _misx;
	// offset: 0038
	char _misy;
	// offset: 0039
	unsigned char _miAnimType;
	// offset: 003A
	unsigned char _miDelFlag;
	// offset: 003B
	unsigned char _miAnimFlags;
	// offset: 003C
	unsigned char _miDrawFlag;
	// offset: 003D
	unsigned char _miLightFlag;
	// offset: 003E
	unsigned char _miPreFlag;
	// offset: 003F
	unsigned char _miUniqTrans;
	// offset: 0040
	unsigned char _miHitFlag;
	// offset: 0041
	char _mlid;
	// offset: 0042
	char _mimfnum;
	// offset: 0043
	char _mispllvl;
	// offset: 0044
	char _miAnimDelay;
	// offset: 0045
	char _miAnimLen;
	// offset: 0046
	char _miAnimWidth;
	// offset: 0047
	char _miAnimWidth2;
	// offset: 0048
	char _miAnimCnt;
	// offset: 0049
	char _miAnimAdd;
	// offset: 004A
	char _miAnimFrame;
	// offset: 004B
	char _misource;
	// offset: 004C
	void (*PrintPtr)();
};

// size: 0x48
struct SPELLFX_DAT {
	// offset: 0000
	bool apocactive;
	// offset: 0004
	bool healactive;
	// offset: 0008
	int teleflag;
	// offset: 000C
	int phaseflag;
	// offset: 0010
	int inviscount;
	// offset: 0014
	int X;
	// offset: 0018
	int Y;
	// offset: 001C
	int sxoff;
	// offset: 0020
	int syoff;
	// offset: 0024
	int scrnx;
	// offset: 0028
	int scrny;
	// offset: 002C
	int px;
	// offset: 0030
	int py;
	// offset: 0034
	int yoffset;
	// offset: 0038
	int spiny1;
	// offset: 003C
	int spiny2;
	// offset: 0040
	int scale;
	// offset: 0044
	int healtime;
};

// size: 0x24
struct Particle {
	// offset: 0000
	int partx;
	// offset: 0004
	int party;
	// offset: 0008
	int partanim;
	// offset: 000C
	int jumpflag;
	// offset: 0010
	int jumpcount;
	// offset: 0014
	int jumpmax;
	// offset: 0018
	int dx;
	// offset: 001C
	int scale;
	// offset: 0020
	int colour;
};

// size: 0x20
struct strheader {
	// offset: 0000
	short id;
	// offset: 0002
	short type;
	// offset: 0004
	short seccount;
	// offset: 0006
	short nsectors;
	// offset: 0008
	int framecount;
	// offset: 000C
	int framesize;
	// offset: 0010
	short width;
	// offset: 0012
	short height;
	// offset: 0014 (12 bytes)
	int res[3];
};

// size: 0x800
struct strsec {
	// offset: 0000
	short id;
	// offset: 0002
	short type;
	// offset: 0004
	short seccount;
	// offset: 0006
	short nsectors;
	// offset: 0008
	int framecount;
	// offset: 000C
	int framesize;
	// offset: 0010
	short width;
	// offset: 0012
	short height;
	// offset: 0014 (12 bytes)
	int res[3];
	// offset: 0020 (2016 bytes)
	int data[504];
};

// size: 0x14
struct mdc_header {
	// offset: 0000 (4 bytes)
	char id[4];
	// offset: 0004
	int frames;
	// offset: 0008
	int framesize;
	// offset: 000C
	int width;
	// offset: 0010
	int height;
};

// size: 0x200
struct file_header {
	// offset: 0000 (2 bytes)
	char magic[2];
	// offset: 0002
	char type;
	// offset: 0003
	char blockentry;
	// offset: 0004 (64 bytes)
	unsigned char title[64];
	// offset: 0044
	int chksum;
	// offset: 0048
	int size;
	// offset: 004C
	int id;
	// offset: 0050 (16 bytes)
	char reserved[16];
	// offset: 0060 (32 bytes)
	char clut[32];
	// offset: 0080 (384 bytes)
	char icon[128][3];
};

// size: 0x1C
struct FeTable {
	// offset: 0000
	int Title;
	// offset: 0004
	int Sel;
	// offset: 0008
	int SelW;
	// offset: 000C
	int SelH;
	// offset: 0010
	void (*InitFuncPtr)();
	// offset: 0014
	void (*CtrlFuncPtr)();
	// offset: 0018
	void *PrevMenu;
};

// size: 0x18
struct FeStruct {
	// offset: 0000
	int X;
	// offset: 0004
	int Y;
	// offset: 0008 (4 bytes)
	enum TXT_JUST Just;
	// offset: 000C
	int Str;
	// offset: 0010 (536 bytes)
	struct CFont *Font;
	// offset: 0014 (28 bytes)
	struct FeTable *MenuPtr;
};

// size: 0x10
struct FE_PLR {
	// offset: 0000 (10 bytes)
	char Name[10];
	// offset: 000C
	int Class;
};

// size: 0x24
struct FE_CREATE {
	// offset: 0000
	int NumOfPlayers;
	// offset: 0004 (32 bytes)
	struct FE_PLR Plrs[2];
};

// size: 0x1C
struct LOAD_IMAGE_ARGS {
	// offset: 0000 (8 bytes)
	struct RECT Rect;
	// offset: 000C
	int Offset;
	// offset: 0010
	long ImgHandle;
	// offset: 0014
	void *Addr;
	// offset: 0018
	unsigned short DestX;
	// offset: 001A
	unsigned short DestY;
	// offset: 0040 (1 bytes)
	// unsigned int UseAddr;
	// offset: 0041 (1 bytes)
	// unsigned int DiscardAfterDump;
	// offset: 0042 (1 bytes)
	// unsigned int IsMove;
};

// size: 0x1C
struct PRIM_BUFFER {
	// offset: 0000 (40 bytes)
	struct POLY_FT4 *Prims;
	// offset: 0004 (40 bytes)
	struct POLY_FT4 *EndAddr;
	// offset: 0008
	unsigned long *OtList;
	// offset: 000C
	unsigned char Drawing;
	// offset: 0010
	int OtSize;
	// offset: 0014
	long hndOtList;
	// offset: 0018
	long hndPrims;
};

// size: 0x8
struct TP_LINK {
	// offset: 0000
	struct TPAGE_DEF *Next;
	// offset: 0004
	struct TPAGE_DEF *Prev;
};

// size: 0x10
struct TPAGE_DEF {
	// offset: 0000 (8 bytes)
	// size: 0x8
	union {
		// offset: 0000 (8 bytes)
		struct TP_LINK TpLink;
		// offset: 0000 (8 bytes)
		struct DR_TPAGE DrTpage;
	} LPage;
	// offset: 0008
	unsigned char TpageMode;
	// offset: 0009
	unsigned char Offset;
	// offset: 000A
	unsigned char Height;
	// offset: 000B
	unsigned char Indent;
	// offset: 000C
	unsigned char Width;
	// offset: 000D
	unsigned char Num;
};

// size: 0x8
struct MEM_INFO {
	// offset: 0000
	void *Addr;
	// offset: 0004
	unsigned long Size;
};

// size: 0x1C
struct LNK_OPTS {
	// offset: 0000
	unsigned long RamSize;
	// offset: 0004
	unsigned long StackSize;
	// offset: 0008
	void *OrgAddress;
	// offset: 000C
	void *FreeMemAddress;
	// offset: 0010
	unsigned long FreeMemSize;
	// offset: 0014 (4 bytes)
	enum FILE_SYSTEM FileSystem;
	// offset: 0018 (4 bytes)
	enum DEV_KIT DevKit;
};

// size: 0x14
struct DatIO {
	// offset: 0000 (20 bytes)
	struct FileIO FileIO;
};

// size: 0x54
struct PanelXY {
	// offset: 0000
	int MainX;
	// offset: 0004
	int MainY;
	// offset: 0008
	int FlaskFlip;
	// offset: 000C
	int SpeedBarXOfs;
	// offset: 0010
	int SpeedBarYOfs;
	// offset: 0014
	int SpellXOfs;
	// offset: 0018
	int SpellYOfs;
	// offset: 001C
	int LevelUpXOfs;
	// offset: 0020
	int LevelUpYOfs;
	// offset: 0024
	int MsgX;
	// offset: 0028
	int MsgY;
	// offset: 002C
	int MsgW;
	// offset: 0030
	int MsgH;
	// offset: 0034
	int HeadDurX;
	// offset: 0038
	int HeadDurY;
	// offset: 003C
	int BodyDurX;
	// offset: 0040
	int BodyDurY;
	// offset: 0044
	int Hand0DurX;
	// offset: 0048
	int Hand0DurY;
	// offset: 004C
	int Hand1DurX;
	// offset: 0050
	int Hand1DurY;
};

// size: 0x10
struct GPanel {
	// offset: 0000
	int HealthAnimCount;
	// offset: 0004
	int ManaAnimCount;
	// offset: 0008
	int GlobeAnimCount;
	// offset: 000C (108 bytes)
	struct TextDat *PanelTData;
};

// size: 0x14
struct DPatsStruct {
	// offset: 0000
	int qpat;
	// offset: 0004
	int d1;
	// offset: 0008
	int d2;
	// offset: 000C
	int d3;
	// offset: 0010
	int d4;
};

// size: 0x18
struct NODE {
	// offset: 0000
	int nHallx1;
	// offset: 0004
	int nHally1;
	// offset: 0008
	int nHallx2;
	// offset: 000C
	int nHally2;
	// offset: 0010
	int nHalldir;
	// offset: 0014 (24 bytes)
	struct NODE *pNext;
};

// size: 0x14
struct ROOMNODE {
	// offset: 0000
	int nRoomx1;
	// offset: 0004
	int nRoomy1;
	// offset: 0008
	int nRoomx2;
	// offset: 000C
	int nRoomy2;
	// offset: 0010
	int nRoomDest;
};

// size: 0xC
struct bank_entry {
	// offset: 0000
	unsigned short Name;
	// offset: 0004
	unsigned long offset;
	// offset: 0008
	unsigned short len;
	// offset: 000A
	unsigned short pitch;
};

// size: 0x14
struct QuestStruct {
	// offset: 0000
	unsigned char _qlevel;
	// offset: 0001
	unsigned char _qtype;
	// offset: 0002
	unsigned char _qactive;
	// offset: 0003
	unsigned char _qlvltype;
	// offset: 0004
	int _qtx;
	// offset: 0008
	int _qty;
	// offset: 000C
	unsigned char _qslvl;
	// offset: 000D
	unsigned char _qidx;
	// offset: 000E
	unsigned char _qmsg;
	// offset: 000F
	unsigned char _qvar1;
	// offset: 0010
	unsigned char _qvar2;
	// offset: 0011
	unsigned char _qlog;
};

// size: 0x10
struct QuestData {
	// offset: 0000
	unsigned char _qdlvl;
	// offset: 0001
	char _qdmultlvl;
	// offset: 0002
	unsigned char _qlvlt;
	// offset: 0003
	unsigned char _qdtype;
	// offset: 0004
	unsigned char _qdrnd;
	// offset: 0005
	unsigned char _qslvl;
	// offset: 0006
	unsigned char _qflags;
	// offset: 0008
	int _qdmsg;
	// offset: 000C
	int _qlstr;
};

// size: 0x10
struct SNDPLAYOPTS {
	// offset: 0000
	int patnum;
	// offset: 0004
	char bhandle;
	// offset: 0005
	char keynum;
	// offset: 0006
	char velocity;
	// offset: 0007
	char pan;
	// offset: 0008
	char vol;
	// offset: 0009
	char bend;
	// offset: 000A
	char fxlevel0;
	// offset: 000B
	char use3dpos;
	// offset: 000C
	unsigned short azimuth;
	// offset: 000E
	short elevation;
};

// size: 0x10
struct SNDLIMITS {
	// offset: 0000
	int dmabuflen;
	// offset: 0004
	unsigned char numdmabufs;
	// offset: 0005
	unsigned char numdmamsgs;
	// offset: 0006
	unsigned char nummicrotalkinstances;
	// offset: 0007
	unsigned char microtalkinstanceabort;
	// offset: 0008
	short numrspcmds;
	// offset: 000A
	short pad2;
	// offset: 000C
	int audiostreambufsize;
};

// size: 0x8
struct SNDUSAGE {
	// offset: 0000
	unsigned char numdmabufs;
	// offset: 0001
	unsigned char numvoices;
	// offset: 0002
	short numrspcmds;
	// offset: 0004
	int heapused;
};

// size: 0x44
struct DR_LOAD2 {
	// offset: 0004 (4 bytes)
	unsigned long code[1];
	// offset: 0008 (8 bytes)
	struct RECT rect;
	// offset: 0010 (52 bytes)
	unsigned long p[13];
	// offset: 0000 (24 bytes)
	// unsigned int addr;
	// offset: 0018 (8 bytes)
	// unsigned int len;
};

// size: 0x8
struct MEMSTRUCT {
	// offset: 0000
	long Handle;
	// offset: 0004
	void *MemPtr;
};

// size: 0xC
struct TextDataStruct {
	// offset: 0000
	int txtstr;
	// offset: 0004
	unsigned char scrlltxt;
	// offset: 0005
	unsigned char txtspd;
	// offset: 0008
	int sfxnr;
};

// size: 0x10
struct TriggerStruct {
	// offset: 0000
	int _tx;
	// offset: 0004
	int _ty;
	// offset: 0008
	unsigned int _tmsg;
	// offset: 000C
	int _tlvl;
};

// size: 0x4
struct OBJ_LOAD_INFO {
	// offset: 0000
	short Creature;
	// offset: 0002
	unsigned short TexDat;
};

// size: 0x12
struct ObjDataStruct {
	// offset: 0000
	char oload;
	// offset: 0001
	char ofindex;
	// offset: 0002
	char ominlvl;
	// offset: 0003
	char omaxlvl;
	// offset: 0004
	char olvltype;
	// offset: 0005
	char otheme;
	// offset: 0006
	char oquest;
	// offset: 0007
	unsigned char oAnimFlag;
	// offset: 0008
	short oAnimDelay;
	// offset: 000A
	short oAnimLen;
	// offset: 000C
	unsigned char oSolidFlag;
	// offset: 000D
	unsigned char oMissFlag;
	// offset: 000E
	unsigned char oLightFlag;
	// offset: 000F
	char oBreak;
	// offset: 0010
	char oSelFlag;
	// offset: 0011
	unsigned char oTrapFlag;
};

// size: 0x2C
struct ObjectStruct {
	// offset: 0000
	short _olid;
	// offset: 0004
	int _oRndSeed;
	// offset: 0008
	short _oAnimDelay;
	// offset: 000A
	short _oAnimCnt;
	// offset: 000C
	short _oAnimLen;
	// offset: 000E
	short _oVar1;
	// offset: 0010
	short _oVar2;
	// offset: 0012
	short _oVar3;
	// offset: 0014
	short _oVar4;
	// offset: 0016
	short _oVar5;
	// offset: 0018
	short _oVar6;
	// offset: 001A
	short _oVar7;
	// offset: 001C
	short _oVar8;
	// offset: 001E
	char _otype;
	// offset: 001F
	char _ox;
	// offset: 0020
	char _oy;
	// offset: 0021
	char _oAnimFrame;
	// offset: 0022
	char _oBreak;
	// offset: 0023
	char _oSelFlag;
	// offset: 0024
	unsigned char _oLight;
	// offset: 0025
	unsigned char _oAnimFlag;
	// offset: 0026
	unsigned char _oDelFlag;
	// offset: 0027
	unsigned char _oSolidFlag;
	// offset: 0028
	unsigned char _oMissFlag;
	// offset: 0029
	unsigned char _oPreFlag;
	// offset: 002A
	unsigned char _oTrapFlag;
	// offset: 002B
	unsigned char _oDoorFlag;
};

// size: 0x70
struct MonsterStruct_duplicate_0 {
	// offset: 0000
	int mtalkmsg;
	// offset: 0004
	int _mRndSeed;
	// offset: 0008
	int _mAISeed;
	// offset: 000C
	int _mgoalvar1;
	// offset: 0010
	int _mgoalvar2;
	// offset: 0014
	int _mgoalvar3;
	// offset: 0018
	short _mVar1;
	// offset: 001A
	short _mVar2;
	// offset: 001C
	short _mVar3;
	// offset: 001E
	short _mVar4;
	// offset: 0020
	short _mVar5;
	// offset: 0022
	short _mVar6;
	// offset: 0024
	short _mVar7;
	// offset: 0026
	short _mVar8;
	// offset: 0028
	short _mmaxhp;
	// offset: 002A
	short _mhitpoints;
	// offset: 002C
	short _mxvel;
	// offset: 002E
	short _myvel;
	// offset: 0030
	unsigned short _mFlags;
	// offset: 0032
	unsigned short mExp;
	// offset: 0034
	unsigned short mMagicRes;
	// offset: 0036
	char _mMTidx;
	// offset: 0037
	char _mmode;
	// offset: 0038
	char _mx;
	// offset: 0039
	char _my;
	// offset: 003A
	char _mfutx;
	// offset: 003B
	char _mfuty;
	// offset: 003C
	char _moldx;
	// offset: 003D
	char _moldy;
	// offset: 003E
	char _mxoff;
	// offset: 003F
	char _myoff;
	// offset: 0040
	char _mdir;
	// offset: 0041
	char _menemy;
	// offset: 0042
	char _mAnimDelay;
	// offset: 0043
	char _mAnimCnt;
	// offset: 0044
	char _mAnimLen;
	// offset: 0045
	char _mAnimFrame;
	// offset: 0046
	char _mAFNum;
	// offset: 0047
	char _lastx;
	// offset: 0048
	char _lasty;
	// offset: 0049
	char _udeadval;
	// offset: 004A
	char mWhoHit;
	// offset: 004B
	char mLevel;
	// offset: 004C
	char mArmorClass;
	// offset: 004D
	unsigned char _mgoal;
	// offset: 004E
	unsigned char _pathcount;
	// offset: 004F
	unsigned char _menemyx;
	// offset: 0050
	unsigned char _menemyy;
	// offset: 0051
	unsigned char _meflag;
	// offset: 0052
	unsigned char _mAi;
	// offset: 0053
	unsigned char _mint;
	// offset: 0054
	unsigned char _msquelch;
	// offset: 0055
	unsigned char _uniqtype;
	// offset: 0056
	unsigned char _uniqtrans;
	// offset: 0057
	unsigned char mHit;
	// offset: 0058
	unsigned char mMinDamage;
	// offset: 0059
	unsigned char mMaxDamage;
	// offset: 005A
	unsigned char mHit2;
	// offset: 005B
	unsigned char mMinDamage2;
	// offset: 005C
	unsigned char mMaxDamage2;
	// offset: 005D
	unsigned char leader;
	// offset: 005E
	unsigned char leaderflag;
	// offset: 005F
	unsigned char unpackfilesize;
	// offset: 0060
	unsigned char mlid;
	// offset: 0061
	char Action;
	// offset: 0062
	char _Wandering;
	// offset: 0063
	char _mDelFlag;
	// offset: 0064
	int mName;
	// offset: 0068 (28 bytes)
	struct CMonster *MType;
	// offset: 006C (60 bytes)
	struct MonsterData *MData;
};

// size: 0xC
struct PortalStruct {
	// offset: 0000
	int ltype;
	// offset: 0004
	unsigned char open;
	// offset: 0005
	char x;
	// offset: 0006
	char y;
	// offset: 0007
	char level;
	// offset: 0008
	unsigned char setlvl;
};

// size: 0x1
struct TCmd {
	unsigned char bCmd;
};

// size: 0x3
struct TCmdLoc {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0001
	unsigned char x;
	// offset: 0002
	unsigned char y;
};

// size: 0x6
struct TCmdLocParam1 {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0001
	unsigned char x;
	// offset: 0002
	unsigned char y;
	// offset: 0004
	unsigned short wParam1;
};

// size: 0x8
struct TCmdLocParam2 {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0001
	unsigned char x;
	// offset: 0002
	unsigned char y;
	// offset: 0004
	unsigned short wParam1;
	// offset: 0006
	unsigned short wParam2;
};

// size: 0xA
struct TCmdLocParam3 {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0001
	unsigned char x;
	// offset: 0002
	unsigned char y;
	// offset: 0004
	unsigned short wParam1;
	// offset: 0006
	unsigned short wParam2;
	// offset: 0008
	unsigned short wParam3;
};

// size: 0x4
struct TCmdParam1 {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0002
	unsigned short wParam1;
};

// size: 0x6
struct TCmdParam2 {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0002
	unsigned short wParam1;
	// offset: 0004
	unsigned short wParam2;
};

// size: 0x8
struct TCmdParam3 {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0002
	unsigned short wParam1;
	// offset: 0004
	unsigned short wParam2;
	// offset: 0006
	unsigned short wParam3;
};

// size: 0x8
struct TCmdGolem {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0001
	unsigned char _mx;
	// offset: 0002
	unsigned char _my;
	// offset: 0003
	unsigned char _mdir;
	// offset: 0004
	unsigned char _menemy;
	// offset: 0005
	unsigned char _currlevel;
	// offset: 0006
	short _mhitpoints;
};

// size: 0x5
struct TCmdQuest {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0001
	unsigned char q;
	// offset: 0002
	unsigned char qstate;
	// offset: 0003
	unsigned char qlog;
	// offset: 0004
	unsigned char qvar1;
};

// size: 0x1C
struct TCmdGItem {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0001
	unsigned char bMaster;
	// offset: 0002
	unsigned char bPnum;
	// offset: 0003
	unsigned char bCursitem;
	// offset: 0004
	unsigned char bLevel;
	// offset: 0005
	unsigned char x;
	// offset: 0006
	unsigned char y;
	// offset: 0007
	unsigned char bId;
	// offset: 0008
	unsigned char bDur;
	// offset: 0009
	unsigned char bMDur;
	// offset: 000A
	unsigned char bCh;
	// offset: 000B
	unsigned char bMCh;
	// offset: 000C
	unsigned short wValue;
	// offset: 000E
	unsigned short wIndx;
	// offset: 0010
	unsigned short wCI;
	// offset: 0014
	unsigned long dwSeed;
	// offset: 0018
	unsigned long dwTime;
};

// size: 0x14
struct TCmdPItem {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0001
	unsigned char x;
	// offset: 0002
	unsigned char y;
	// offset: 0003
	unsigned char bId;
	// offset: 0004
	unsigned char bDur;
	// offset: 0005
	unsigned char bMDur;
	// offset: 0006
	unsigned char bCh;
	// offset: 0007
	unsigned char bMCh;
	// offset: 0008
	unsigned short wValue;
	// offset: 000A
	unsigned short wIndx;
	// offset: 000C
	unsigned short wCI;
	// offset: 0010
	unsigned long dwSeed;
};

// size: 0x10
struct TCmdChItem {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0001
	unsigned char bLoc;
	// offset: 0002
	unsigned short wIndx;
	// offset: 0004
	unsigned short wCI;
	// offset: 0008
	unsigned long dwSeed;
	// offset: 000C
	unsigned char bId;
};

// size: 0x2
struct TCmdDelItem {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0001
	unsigned char bLoc;
};

// size: 0x8
struct TCmdDamage {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0001
	unsigned char bPlr;
	// offset: 0004
	unsigned long dwDam;
};

// size: 0x6
struct TCmdPlrInfoHdr {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0002
	unsigned short wOffset;
	// offset: 0004
	unsigned short wBytes;
};

// size: 0x51
struct TCmdString {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0001 (80 bytes)
	char str[80];
};

// size: 0x2
struct TFakeCmdPlr {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0001
	unsigned char bPlr;
};

// size: 0x8
struct TFakeDropPlr {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0001
	unsigned char bPlr;
	// offset: 0004
	unsigned long dwReason;
};

// size: 0x30
struct TSyncHeader {
	// offset: 0000
	unsigned char bCmd;
	// offset: 0001
	unsigned char bLevel;
	// offset: 0002
	unsigned short wLen;
	// offset: 0004
	unsigned char bObjId;
	// offset: 0005
	unsigned char bObjCmd;
	// offset: 0006
	unsigned char bItemI;
	// offset: 0007
	unsigned char bItemX;
	// offset: 0008
	unsigned char bItemY;
	// offset: 000A
	unsigned short wItemIndx;
	// offset: 000C
	unsigned short wItemCI;
	// offset: 0010
	int dwItemSeed;
	// offset: 0014
	unsigned char bItemId;
	// offset: 0015
	unsigned char bItemDur;
	// offset: 0016
	unsigned char bItemMDur;
	// offset: 0017
	unsigned char bItemCh;
	// offset: 0018
	unsigned char bItemMCh;
	// offset: 001A
	unsigned short wItemVal;
	// offset: 001C
	unsigned long dwItemBuff;
	// offset: 0020
	unsigned char bPInvLoc;
	// offset: 0022
	unsigned short wPInvIndx;
	// offset: 0024
	unsigned short wPInvCI;
	// offset: 0028
	int dwPInvSeed;
	// offset: 002C
	unsigned char bPInvId;
};

// size: 0x5
struct TSyncMonster {
	// offset: 0000
	unsigned char _mndx;
	// offset: 0001
	unsigned char _mx;
	// offset: 0002
	unsigned char _my;
	// offset: 0003
	unsigned char _menemy;
	// offset: 0004
	unsigned char _mdelta;
};

// size: 0x14
struct TPktHdr {
	// offset: 0000
	unsigned char px;
	// offset: 0001
	unsigned char py;
	// offset: 0002
	unsigned char targx;
	// offset: 0003
	unsigned char targy;
	// offset: 0004
	unsigned long php;
	// offset: 0008
	unsigned long pmhp;
	// offset: 000C
	unsigned char bstr;
	// offset: 000D
	unsigned char bmag;
	// offset: 000E
	unsigned char bdex;
	// offset: 0010
	unsigned short wCheck;
	// offset: 0012
	unsigned short wLen;
};

// size: 0x200
struct TPkt {
	// offset: 0000 (20 bytes)
	struct TPktHdr hdr;
	// offset: 0014 (492 bytes)
	unsigned char body[492];
};

// size: 0x6
struct DMonsterStr {
	// offset: 0000
	unsigned char _mx;
	// offset: 0001
	unsigned char _my;
	// offset: 0002
	unsigned char _mdir;
	// offset: 0003
	unsigned char _menemy;
	// offset: 0004
	short _mhitpoints;
};

// size: 0x1
struct DObjectStr {
	unsigned char bCmd;
};

// size: 0xF1C
struct DLevel {
	// offset: 0000 (2540 bytes)
	struct TCmdPItem item[127];
	// offset: 09EC (127 bytes)
	struct DObjectStr object[127];
	// offset: 0A6C (1200 bytes)
	struct DMonsterStr monster[200];
};

// size: 0xC8
struct LocalLevel {
	// offset: 0000 (200 bytes)
	unsigned char automapsv[40][5];
};

// size: 0x5
struct DPortal {
	// offset: 0000
	unsigned char x;
	// offset: 0001
	unsigned char y;
	// offset: 0002
	unsigned char level;
	// offset: 0003
	unsigned char ltype;
	// offset: 0004
	unsigned char setlvl;
};

// size: 0x3
struct MultiQuests {
	// offset: 0000
	unsigned char qstate;
	// offset: 0001
	unsigned char qlog;
	// offset: 0002
	unsigned char qvar1;
};

// size: 0x16
struct DJunk {
	// offset: 0000 (10 bytes)
	struct DPortal portal[2];
	// offset: 000A (12 bytes)
	struct MultiQuests quests[4];
};

// size: 0x8C
struct STextStruct {
	// offset: 0000
	char _sx;
	// offset: 0001
	char _syoff;
	// offset: 0002 (128 bytes)
	char _sstr[128];
	// offset: 0082
	unsigned char _sjust;
	// offset: 0083
	char _sclr;
	// offset: 0084
	unsigned char _sline;
	// offset: 0085
	unsigned char _ssel;
	// offset: 0088
	int _sval;
};

// size: 0x8
struct CPauseMessages {
	// offset: 0000
	int PadNum;
	// offset: 0004 (4 bytes)
	struct __vtbl_ptr_type (*_vf)[11];
};

// size: 0xC
struct CTempPauseMessage {
	// offset: 0000 (8 bytes)
	struct CPauseMessages CPauseMessages;
	// offset: 0008 (108 bytes)
	struct TextDat *TData;
};

// size: 0x2
struct FontItem {
	// offset: 0000
	char ch;
	// offset: 0001
	unsigned char Offset;
};

// size: 0x10
struct FontTab {
	// offset: 0000 (536 bytes)
	struct CFont *Fnt;
	// offset: 0004 (2 bytes)
	struct FontItem *Items;
	// offset: 0008
	int NumOfItems;
	// offset: 000C
	int FrameBase;
};

// size: 0x3
struct TNQ {
	// offset: 0000
	unsigned char _qsttype;
	// offset: 0001
	unsigned char _qstmsg;
	// offset: 0002
	unsigned char _qstmsgact;
};

// size: 0xE0
struct TownerStruct {
	// offset: 0000
	int _tmode;
	// offset: 0004
	int _ttype;
	// offset: 0008
	int _tx;
	// offset: 000C
	int _ty;
	// offset: 0010
	long _txoff;
	// offset: 0014
	long _tyoff;
	// offset: 0018
	long _txvel;
	// offset: 001C
	long _tyvel;
	// offset: 0020
	int _tdir;
	// offset: 0024
	int _tAnimDelay;
	// offset: 0028
	int _tAnimCnt;
	// offset: 002C
	int _tAnimLen;
	// offset: 0030
	int _tAnimFrame;
	// offset: 0034
	int _tAnimFrameCnt;
	// offset: 0038
	char _tAnimOrder;
	// offset: 003C
	long _tAnimWidth;
	// offset: 0040
	long _tAnimWidth2;
	// offset: 0044
	int _tTenPer;
	// offset: 0048
	int _teflag;
	// offset: 004C
	int _tbtcnt;
	// offset: 0050
	unsigned char _tSelFlag;
	// offset: 0051
	unsigned char _tMsgSaid;
	// offset: 0052 (48 bytes)
	struct TNQ qsts[16];
	// offset: 0084
	int _tSeed;
	// offset: 0088
	long _tVar1;
	// offset: 008C
	long _tVar2;
	// offset: 0090
	long _tVar3;
	// offset: 0094
	long _tVar4;
	// offset: 0098 (32 bytes)
	char _tName[32];
	// offset: 00B8 (32 bytes)
	unsigned char *_tNAnim[8];
	// offset: 00D8
	int _tNFrames;
	// offset: 00DC
	unsigned char *_tNData;
};

// size: 0x40
struct QuestTalkData {
	// offset: 0000
	int _qinfra;
	// offset: 0004
	int _qblkm;
	// offset: 0008
	int _qgarb;
	// offset: 000C
	int _qzhar;
	// offset: 0010
	int _qveil;
	// offset: 0014
	int _qmod;
	// offset: 0018
	int _qbutch;
	// offset: 001C
	int _qbol;
	// offset: 0020
	int _qblind;
	// offset: 0024
	int _qblood;
	// offset: 0028
	int _qanvil;
	// offset: 002C
	int _qwarlrd;
	// offset: 0030
	int _qking;
	// offset: 0034
	int _qpw;
	// offset: 0038
	int _qbone;
	// offset: 003C
	int _qvb;
};

// size: 0xE
struct LightListStruct {
	// offset: 0000
	char _lx;
	// offset: 0001
	char _ly;
	// offset: 0002
	unsigned short _lradius;
	// offset: 0004
	char _lid;
	// offset: 0005
	unsigned char _ldel;
	// offset: 0006
	unsigned char _lunflag;
	// offset: 0007
	char _lunx;
	// offset: 0008
	char _luny;
	// offset: 0009
	char _lunr;
	// offset: 000A
	char _xoff;
	// offset: 000B
	char _yoff;
	// offset: 000C
	unsigned char _lflags;
};

// size: 0x8
struct LightListStruct2 {
	// offset: 0000
	char _lx;
	// offset: 0001
	char _ly;
	// offset: 0002
	unsigned short _lradius;
	// offset: 0004
	char _lid;
	// offset: 0005
	unsigned char _ldel;
	// offset: 0006
	char _xoff;
	// offset: 0007
	char _yoff;
};

// size: 0xC
struct DeadStruct {
	// offset: 0000
	int _deadtype;
	// offset: 0004
	int _deadFrame;
	// offset: 0008
	char _deadtrans;
};

// size: 0x2
struct TownToCreature {
	// offset: 0000
	unsigned char GameEqu;
	// offset: 0001
	unsigned char CreatureEquate;
};

// size: 0x30
struct RGBPOLY {
	// offset: 0000
	int r1;
	// offset: 0004
	int g1;
	// offset: 0008
	int b1;
	// offset: 000C
	int r2;
	// offset: 0010
	int g2;
	// offset: 0014
	int b2;
	// offset: 0018
	int r3;
	// offset: 001C
	int g3;
	// offset: 0020
	int b3;
	// offset: 0024
	int r4;
	// offset: 0028
	int g4;
	// offset: 002C
	int b4;
};

// size: 0x10
struct Overlay {
	// offset: 0000
	unsigned char *Addr;
	// offset: 0004
	int Size;
	// offset: 0008
	char *FileName;
	// offset: 000C (4 bytes)
	enum OVER_TYPE Over;
};

// size: 0xC
struct TMenuItem {
	// offset: 0000
	unsigned long dwFlags;
	// offset: 0004
	int pszStr;
	// offset: 0008
	void (*fnMenu)();
};

// size: 0x34
struct SpellData {
	// offset: 0000
	unsigned char sName;
	// offset: 0001
	unsigned char sManaCost;
	// offset: 0002
	unsigned char sType;
	// offset: 0004
	int sNameText;
	// offset: 0008
	int sSkillText;
	// offset: 000C
	int sBookLvl;
	// offset: 0010
	int sStaffLvl;
	// offset: 0014
	unsigned char sTargeted;
	// offset: 0015
	unsigned char sTownSpell;
	// offset: 0018
	int sMinInt;
	// offset: 001C
	unsigned char sSFX;
	// offset: 001D (3 bytes)
	unsigned char sMissiles[3];
	// offset: 0020
	unsigned char sManaAdj;
	// offset: 0021
	unsigned char sMinMana;
	// offset: 0024
	int sStaffMin;
	// offset: 0028
	int sStaffMax;
	// offset: 002C
	int sBookCost;
	// offset: 0030
	int sStaffCost;
};

// size: 0x28
struct GsCOORD2PARAM {
	// offset: 0000 (16 bytes)
	struct VECTOR scale;
	// offset: 0010 (8 bytes)
	struct SVECTOR rotate;
	// offset: 0018 (16 bytes)
	struct VECTOR trans;
};

// size: 0x50
struct _GsCOORDINATE2 {
	// offset: 0000
	unsigned long flg;
	// offset: 0004 (32 bytes)
	struct MATRIX coord;
	// offset: 0024 (32 bytes)
	struct MATRIX workm;
	// offset: 0044 (40 bytes)
	struct GsCOORD2PARAM *param;
	// offset: 0048 (80 bytes)
	struct _GsCOORDINATE2 *super;
	// offset: 004C (80 bytes)
	struct _GsCOORDINATE2 *sub;
};

// size: 0x24
struct GsVIEW2 {
	// offset: 0000 (32 bytes)
	struct MATRIX view;
	// offset: 0020 (80 bytes)
	struct _GsCOORDINATE2 *super;
};

// size: 0x20
struct GsRVIEW2 {
	// offset: 0000
	long vpx;
	// offset: 0004
	long vpy;
	// offset: 0008
	long vpz;
	// offset: 000C
	long vrx;
	// offset: 0010
	long vry;
	// offset: 0014
	long vrz;
	// offset: 0018
	long rz;
	// offset: 001C (80 bytes)
	struct _GsCOORDINATE2 *super;
};

// size: 0x10
struct GsF_LIGHT {
	// offset: 0000
	int vx;
	// offset: 0004
	int vy;
	// offset: 0008
	int vz;
	// offset: 000C
	unsigned char r;
	// offset: 000D
	unsigned char g;
	// offset: 000E
	unsigned char b;
};

// size: 0x4
struct GsOT_TAG {
	// offset: 0000 (24 bytes)
	// unsigned int p;
	// offset: 0018 (8 bytes)
	// unsigned char num;
};

// size: 0x14
struct GsOT {
	// offset: 0000
	unsigned long length;
	// offset: 0004 (4 bytes)
	struct GsOT_TAG *org;
	// offset: 0008
	unsigned long offset;
	// offset: 000C
	unsigned long point;
	// offset: 0010 (4 bytes)
	struct GsOT_TAG *tag;
};

// size: 0x10
struct GsDOBJ2 {
	// offset: 0000
	unsigned long attribute;
	// offset: 0004 (80 bytes)
	struct _GsCOORDINATE2 *coord2;
	// offset: 0008
	unsigned long *tmd;
	// offset: 000C
	unsigned long id;
};

// size: 0x18
struct GsDOBJ3 {
	// offset: 0000
	unsigned long attribute;
	// offset: 0004 (80 bytes)
	struct _GsCOORDINATE2 *coord2;
	// offset: 0008
	unsigned long *pmd;
	// offset: 000C
	unsigned long *base;
	// offset: 0010
	unsigned long *sv;
	// offset: 0014
	unsigned long id;
};

// size: 0x14
struct GsDOBJ5 {
	// offset: 0000
	unsigned long attribute;
	// offset: 0004 (80 bytes)
	struct _GsCOORDINATE2 *coord2;
	// offset: 0008
	unsigned long *tmd;
	// offset: 000C
	unsigned long *packet;
	// offset: 0010
	unsigned long id;
};

// size: 0x24
struct GsSPRITE {
	// offset: 0000
	unsigned long attribute;
	// offset: 0004
	short x;
	// offset: 0006
	short y;
	// offset: 0008
	unsigned short w;
	// offset: 000A
	unsigned short h;
	// offset: 000C
	unsigned short tpage;
	// offset: 000E
	unsigned char u;
	// offset: 000F
	unsigned char v;
	// offset: 0010
	short cx;
	// offset: 0012
	short cy;
	// offset: 0014
	unsigned char r;
	// offset: 0015
	unsigned char g;
	// offset: 0016
	unsigned char b;
	// offset: 0018
	short mx;
	// offset: 001A
	short my;
	// offset: 001C
	short scalex;
	// offset: 001E
	short scaley;
	// offset: 0020
	long rotate;
};

// size: 0x48
struct GsSPARRAY {
	// offset: 0000
	unsigned long attribute;
	// offset: 0004
	short x;
	// offset: 0006
	short y;
	// offset: 0008 (24 bytes)
	struct DR_MODE mode[2];
	// offset: 0020 (40 bytes)
	struct SPRT packet[2];
};

// size: 0x8
struct GsCELL {
	// offset: 0000
	unsigned char u;
	// offset: 0001
	unsigned char v;
	// offset: 0002
	unsigned short cba;
	// offset: 0004
	unsigned short flag;
	// offset: 0006
	unsigned short tpage;
};

// size: 0x10
struct GsMAP {
	// offset: 0000
	unsigned char cellw;
	// offset: 0001
	unsigned char cellh;
	// offset: 0002
	unsigned short ncellw;
	// offset: 0004
	unsigned short ncellh;
	// offset: 0008 (8 bytes)
	struct GsCELL *base;
	// offset: 000C
	unsigned short *index;
};

// size: 0x24
struct GsBG {
	// offset: 0000
	unsigned long attribute;
	// offset: 0004
	short x;
	// offset: 0006
	short y;
	// offset: 0008
	short w;
	// offset: 000A
	short h;
	// offset: 000C
	short scrollx;
	// offset: 000E
	short scrolly;
	// offset: 0010
	unsigned char r;
	// offset: 0011
	unsigned char g;
	// offset: 0012
	unsigned char b;
	// offset: 0014 (16 bytes)
	struct GsMAP *map;
	// offset: 0018
	short mx;
	// offset: 001A
	short my;
	// offset: 001C
	short scalex;
	// offset: 001E
	short scaley;
	// offset: 0020
	long rotate;
};

// size: 0x10
struct GsLINE {
	// offset: 0000
	unsigned long attribute;
	// offset: 0004
	short x0;
	// offset: 0006
	short y0;
	// offset: 0008
	short x1;
	// offset: 000A
	short y1;
	// offset: 000C
	unsigned char r;
	// offset: 000D
	unsigned char g;
	// offset: 000E
	unsigned char b;
};

// size: 0x14
struct GsGLINE {
	// offset: 0000
	unsigned long attribute;
	// offset: 0004
	short x0;
	// offset: 0006
	short y0;
	// offset: 0008
	short x1;
	// offset: 000A
	short y1;
	// offset: 000C
	unsigned char r0;
	// offset: 000D
	unsigned char g0;
	// offset: 000E
	unsigned char b0;
	// offset: 000F
	unsigned char r1;
	// offset: 0010
	unsigned char g1;
	// offset: 0011
	unsigned char b1;
};

// size: 0x10
struct GsBOXF {
	// offset: 0000
	unsigned long attribute;
	// offset: 0004
	short x;
	// offset: 0006
	short y;
	// offset: 0008
	unsigned short w;
	// offset: 000A
	unsigned short h;
	// offset: 000C
	unsigned char r;
	// offset: 000D
	unsigned char g;
	// offset: 000E
	unsigned char b;
};

// size: 0xC
struct GsFOGPARAM {
	// offset: 0000
	short dqa;
	// offset: 0004
	long dqb;
	// offset: 0008
	unsigned char rfc;
	// offset: 0009
	unsigned char gfc;
	// offset: 000A
	unsigned char bfc;
};

// size: 0x1C
struct GsIMAGE {
	// offset: 0000
	unsigned long pmode;
	// offset: 0004
	short px;
	// offset: 0006
	short py;
	// offset: 0008
	unsigned short pw;
	// offset: 000A
	unsigned short ph;
	// offset: 000C
	unsigned long *pixel;
	// offset: 0010
	short cx;
	// offset: 0012
	short cy;
	// offset: 0014
	unsigned short cw;
	// offset: 0016
	unsigned short ch;
	// offset: 0018
	unsigned long *clut;
};

// size: 0x4
struct _GsPOSITION {
	// offset: 0000
	short offx;
	// offset: 0002
	short offy;
};

// size: 0xC
struct GsOBJTABLE2 {
	// offset: 0000 (16 bytes)
	struct GsDOBJ2 *top;
	// offset: 0004
	int nobj;
	// offset: 0008
	int maxobj;
};

// size: 0x130
struct _GsFCALL {
	// offset: 0000 (24 bytes)
	unsigned char *(*f3[3][2])();
	// offset: 0018 (8 bytes)
	unsigned char *(*nf3[2])();
	// offset: 0020 (24 bytes)
	unsigned char *(*g3[3][2])();
	// offset: 0038 (8 bytes)
	unsigned char *(*ng3[2])();
	// offset: 0040 (24 bytes)
	unsigned char *(*tf3[3][2])();
	// offset: 0058 (8 bytes)
	unsigned char *(*ntf3[2])();
	// offset: 0060 (24 bytes)
	unsigned char *(*tg3[3][2])();
	// offset: 0078 (8 bytes)
	unsigned char *(*ntg3[2])();
	// offset: 0080 (24 bytes)
	unsigned char *(*f4[3][2])();
	// offset: 0098 (8 bytes)
	unsigned char *(*nf4[2])();
	// offset: 00A0 (24 bytes)
	unsigned char *(*g4[3][2])();
	// offset: 00B8 (8 bytes)
	unsigned char *(*ng4[2])();
	// offset: 00C0 (24 bytes)
	unsigned char *(*tf4[3][2])();
	// offset: 00D8 (8 bytes)
	unsigned char *(*ntf4[2])();
	// offset: 00E0 (24 bytes)
	unsigned char *(*tg4[3][2])();
	// offset: 00F8 (8 bytes)
	unsigned char *(*ntg4[2])();
	// offset: 0100 (12 bytes)
	unsigned char *(*f3g[3])();
	// offset: 010C (12 bytes)
	unsigned char *(*g3g[3])();
	// offset: 0118 (12 bytes)
	unsigned char *(*f4g[3])();
	// offset: 0124 (12 bytes)
	unsigned char *(*g4g[3])();
};

// size: 0x10
struct TMD_P_F3 {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	unsigned short n0;
	// offset: 000A
	unsigned short v0;
	// offset: 000C
	unsigned short v1;
	// offset: 000E
	unsigned short v2;
};

// size: 0x14
struct TMD_P_G3 {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	unsigned short n0;
	// offset: 000A
	unsigned short v0;
	// offset: 000C
	unsigned short n1;
	// offset: 000E
	unsigned short v1;
	// offset: 0010
	unsigned short n2;
	// offset: 0012
	unsigned short v2;
};

// size: 0x18
struct TMD_P_F3G {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	unsigned char r1;
	// offset: 0009
	unsigned char g1;
	// offset: 000A
	unsigned char b1;
	// offset: 000B
	unsigned char dummy1;
	// offset: 000C
	unsigned char r2;
	// offset: 000D
	unsigned char g2;
	// offset: 000E
	unsigned char b2;
	// offset: 000F
	unsigned char dummy2;
	// offset: 0010
	unsigned short n0;
	// offset: 0012
	unsigned short v0;
	// offset: 0014
	unsigned short v1;
	// offset: 0016
	unsigned short v2;
};

// size: 0x1C
struct TMD_P_G3G {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	unsigned char r1;
	// offset: 0009
	unsigned char g1;
	// offset: 000A
	unsigned char b1;
	// offset: 000B
	unsigned char dummy1;
	// offset: 000C
	unsigned char r2;
	// offset: 000D
	unsigned char g2;
	// offset: 000E
	unsigned char b2;
	// offset: 000F
	unsigned char dummy2;
	// offset: 0010
	unsigned short n0;
	// offset: 0012
	unsigned short v0;
	// offset: 0014
	unsigned short n1;
	// offset: 0016
	unsigned short v1;
	// offset: 0018
	unsigned short n2;
	// offset: 001A
	unsigned short v2;
};

// size: 0x10
struct TMD_P_NF3 {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	unsigned short v0;
	// offset: 000A
	unsigned short v1;
	// offset: 000C
	unsigned short v2;
	// offset: 000E
	unsigned short p;
};

// size: 0x18
struct TMD_P_NG3 {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	unsigned char r1;
	// offset: 0009
	unsigned char g1;
	// offset: 000A
	unsigned char b1;
	// offset: 000B
	unsigned char p1;
	// offset: 000C
	unsigned char r2;
	// offset: 000D
	unsigned char g2;
	// offset: 000E
	unsigned char b2;
	// offset: 000F
	unsigned char p2;
	// offset: 0010
	unsigned short v0;
	// offset: 0012
	unsigned short v1;
	// offset: 0014
	unsigned short v2;
	// offset: 0016
	unsigned short p;
};

// size: 0x14
struct TMD_P_F4 {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	unsigned short n0;
	// offset: 000A
	unsigned short v0;
	// offset: 000C
	unsigned short v1;
	// offset: 000E
	unsigned short v2;
	// offset: 0010
	unsigned short v3;
	// offset: 0012
	unsigned short p;
};

// size: 0x18
struct TMD_P_G4 {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	unsigned short n0;
	// offset: 000A
	unsigned short v0;
	// offset: 000C
	unsigned short n1;
	// offset: 000E
	unsigned short v1;
	// offset: 0010
	unsigned short n2;
	// offset: 0012
	unsigned short v2;
	// offset: 0014
	unsigned short n3;
	// offset: 0016
	unsigned short v3;
};

// size: 0x20
struct TMD_P_F4G {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	unsigned char r1;
	// offset: 0009
	unsigned char g1;
	// offset: 000A
	unsigned char b1;
	// offset: 000B
	unsigned char dummy1;
	// offset: 000C
	unsigned char r2;
	// offset: 000D
	unsigned char g2;
	// offset: 000E
	unsigned char b2;
	// offset: 000F
	unsigned char dummy2;
	// offset: 0010
	unsigned char r3;
	// offset: 0011
	unsigned char g3;
	// offset: 0012
	unsigned char b3;
	// offset: 0013
	unsigned char dummy3;
	// offset: 0014
	unsigned short n0;
	// offset: 0016
	unsigned short v0;
	// offset: 0018
	unsigned short v1;
	// offset: 001A
	unsigned short v2;
	// offset: 001C
	unsigned short v3;
	// offset: 001E
	unsigned short dummy4;
};

// size: 0x24
struct TMD_P_G4G {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	unsigned char r1;
	// offset: 0009
	unsigned char g1;
	// offset: 000A
	unsigned char b1;
	// offset: 000B
	unsigned char dummy1;
	// offset: 000C
	unsigned char r2;
	// offset: 000D
	unsigned char g2;
	// offset: 000E
	unsigned char b2;
	// offset: 000F
	unsigned char dummy2;
	// offset: 0010
	unsigned char r3;
	// offset: 0011
	unsigned char g3;
	// offset: 0012
	unsigned char b3;
	// offset: 0013
	unsigned char dummy3;
	// offset: 0014
	unsigned short n0;
	// offset: 0016
	unsigned short v0;
	// offset: 0018
	unsigned short n1;
	// offset: 001A
	unsigned short v1;
	// offset: 001C
	unsigned short n2;
	// offset: 001E
	unsigned short v2;
	// offset: 0020
	unsigned short n3;
	// offset: 0022
	unsigned short v3;
};

// size: 0x10
struct TMD_P_NF4 {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	unsigned short v0;
	// offset: 000A
	unsigned short v1;
	// offset: 000C
	unsigned short v2;
	// offset: 000E
	unsigned short v3;
};

// size: 0x1C
struct TMD_P_NG4 {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char r0;
	// offset: 0005
	unsigned char g0;
	// offset: 0006
	unsigned char b0;
	// offset: 0007
	unsigned char code;
	// offset: 0008
	unsigned char r1;
	// offset: 0009
	unsigned char g1;
	// offset: 000A
	unsigned char b1;
	// offset: 000B
	unsigned char p1;
	// offset: 000C
	unsigned char r2;
	// offset: 000D
	unsigned char g2;
	// offset: 000E
	unsigned char b2;
	// offset: 000F
	unsigned char p2;
	// offset: 0010
	unsigned char r3;
	// offset: 0011
	unsigned char g3;
	// offset: 0012
	unsigned char b3;
	// offset: 0013
	unsigned char p3;
	// offset: 0014
	unsigned short v0;
	// offset: 0016
	unsigned short v1;
	// offset: 0018
	unsigned short v2;
	// offset: 001A
	unsigned short v3;
};

// size: 0x18
struct TMD_P_TF3 {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char tu0;
	// offset: 0005
	unsigned char tv0;
	// offset: 0006
	unsigned short clut;
	// offset: 0008
	unsigned char tu1;
	// offset: 0009
	unsigned char tv1;
	// offset: 000A
	unsigned short tpage;
	// offset: 000C
	unsigned char tu2;
	// offset: 000D
	unsigned char tv2;
	// offset: 000E
	unsigned short p;
	// offset: 0010
	unsigned short n0;
	// offset: 0012
	unsigned short v0;
	// offset: 0014
	unsigned short v1;
	// offset: 0016
	unsigned short v2;
};

// size: 0x1C
struct TMD_P_TG3 {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char tu0;
	// offset: 0005
	unsigned char tv0;
	// offset: 0006
	unsigned short clut;
	// offset: 0008
	unsigned char tu1;
	// offset: 0009
	unsigned char tv1;
	// offset: 000A
	unsigned short tpage;
	// offset: 000C
	unsigned char tu2;
	// offset: 000D
	unsigned char tv2;
	// offset: 000E
	unsigned short p;
	// offset: 0010
	unsigned short n0;
	// offset: 0012
	unsigned short v0;
	// offset: 0014
	unsigned short n1;
	// offset: 0016
	unsigned short v1;
	// offset: 0018
	unsigned short n2;
	// offset: 001A
	unsigned short v2;
};

// size: 0x1C
struct TMD_P_TNF3 {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char tu0;
	// offset: 0005
	unsigned char tv0;
	// offset: 0006
	unsigned short clut;
	// offset: 0008
	unsigned char tu1;
	// offset: 0009
	unsigned char tv1;
	// offset: 000A
	unsigned short tpage;
	// offset: 000C
	unsigned char tu2;
	// offset: 000D
	unsigned char tv2;
	// offset: 000E
	unsigned short p0;
	// offset: 0010
	unsigned char r0;
	// offset: 0011
	unsigned char g0;
	// offset: 0012
	unsigned char b0;
	// offset: 0013
	unsigned char p1;
	// offset: 0014
	unsigned short v0;
	// offset: 0016
	unsigned short v1;
	// offset: 0018
	unsigned short v2;
	// offset: 001A
	unsigned short p2;
};

// size: 0x24
struct TMD_P_TNG3 {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char tu0;
	// offset: 0005
	unsigned char tv0;
	// offset: 0006
	unsigned short clut;
	// offset: 0008
	unsigned char tu1;
	// offset: 0009
	unsigned char tv1;
	// offset: 000A
	unsigned short tpage;
	// offset: 000C
	unsigned char tu2;
	// offset: 000D
	unsigned char tv2;
	// offset: 000E
	unsigned short p0;
	// offset: 0010
	unsigned char r0;
	// offset: 0011
	unsigned char g0;
	// offset: 0012
	unsigned char b0;
	// offset: 0013
	unsigned char p1;
	// offset: 0014
	unsigned char r1;
	// offset: 0015
	unsigned char g1;
	// offset: 0016
	unsigned char b1;
	// offset: 0017
	unsigned char p2;
	// offset: 0018
	unsigned char r2;
	// offset: 0019
	unsigned char g2;
	// offset: 001A
	unsigned char b2;
	// offset: 001B
	unsigned char p3;
	// offset: 001C
	unsigned short v0;
	// offset: 001E
	unsigned short v1;
	// offset: 0020
	unsigned short v2;
	// offset: 0022
	unsigned short p4;
};

// size: 0x20
struct TMD_P_TF4 {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char tu0;
	// offset: 0005
	unsigned char tv0;
	// offset: 0006
	unsigned short clut;
	// offset: 0008
	unsigned char tu1;
	// offset: 0009
	unsigned char tv1;
	// offset: 000A
	unsigned short tpage;
	// offset: 000C
	unsigned char tu2;
	// offset: 000D
	unsigned char tv2;
	// offset: 000E
	unsigned short p0;
	// offset: 0010
	unsigned char tu3;
	// offset: 0011
	unsigned char tv3;
	// offset: 0012
	unsigned short p1;
	// offset: 0014
	unsigned short n0;
	// offset: 0016
	unsigned short v0;
	// offset: 0018
	unsigned short v1;
	// offset: 001A
	unsigned short v2;
	// offset: 001C
	unsigned short v3;
	// offset: 001E
	unsigned short p2;
};

// size: 0x24
struct TMD_P_TG4 {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char tu0;
	// offset: 0005
	unsigned char tv0;
	// offset: 0006
	unsigned short clut;
	// offset: 0008
	unsigned char tu1;
	// offset: 0009
	unsigned char tv1;
	// offset: 000A
	unsigned short tpage;
	// offset: 000C
	unsigned char tu2;
	// offset: 000D
	unsigned char tv2;
	// offset: 000E
	unsigned short p0;
	// offset: 0010
	unsigned char tu3;
	// offset: 0011
	unsigned char tv3;
	// offset: 0012
	unsigned short p1;
	// offset: 0014
	unsigned short n0;
	// offset: 0016
	unsigned short v0;
	// offset: 0018
	unsigned short n1;
	// offset: 001A
	unsigned short v1;
	// offset: 001C
	unsigned short n2;
	// offset: 001E
	unsigned short v2;
	// offset: 0020
	unsigned short n3;
	// offset: 0022
	unsigned short v3;
};

// size: 0x20
struct TMD_P_TNF4 {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char tu0;
	// offset: 0005
	unsigned char tv0;
	// offset: 0006
	unsigned short clut;
	// offset: 0008
	unsigned char tu1;
	// offset: 0009
	unsigned char tv1;
	// offset: 000A
	unsigned short tpage;
	// offset: 000C
	unsigned char tu2;
	// offset: 000D
	unsigned char tv2;
	// offset: 000E
	unsigned short p0;
	// offset: 0010
	unsigned char tu3;
	// offset: 0011
	unsigned char tv3;
	// offset: 0012
	unsigned short p1;
	// offset: 0014
	unsigned char r0;
	// offset: 0015
	unsigned char g0;
	// offset: 0016
	unsigned char b0;
	// offset: 0017
	unsigned char p2;
	// offset: 0018
	unsigned short v0;
	// offset: 001A
	unsigned short v1;
	// offset: 001C
	unsigned short v2;
	// offset: 001E
	unsigned short v3;
};

// size: 0x2C
struct TMD_P_TNG4 {
	// offset: 0000
	unsigned char out;
	// offset: 0001
	unsigned char in;
	// offset: 0002
	unsigned char dummy;
	// offset: 0003
	unsigned char cd;
	// offset: 0004
	unsigned char tu0;
	// offset: 0005
	unsigned char tv0;
	// offset: 0006
	unsigned short clut;
	// offset: 0008
	unsigned char tu1;
	// offset: 0009
	unsigned char tv1;
	// offset: 000A
	unsigned short tpage;
	// offset: 000C
	unsigned char tu2;
	// offset: 000D
	unsigned char tv2;
	// offset: 000E
	unsigned short p0;
	// offset: 0010
	unsigned char tu3;
	// offset: 0011
	unsigned char tv3;
	// offset: 0012
	unsigned short p1;
	// offset: 0014
	unsigned char r0;
	// offset: 0015
	unsigned char g0;
	// offset: 0016
	unsigned char b0;
	// offset: 0017
	unsigned char p2;
	// offset: 0018
	unsigned char r1;
	// offset: 0019
	unsigned char g1;
	// offset: 001A
	unsigned char b1;
	// offset: 001B
	unsigned char p3;
	// offset: 001C
	unsigned char r2;
	// offset: 001D
	unsigned char g2;
	// offset: 001E
	unsigned char b2;
	// offset: 001F
	unsigned char p4;
	// offset: 0020
	unsigned char r3;
	// offset: 0021
	unsigned char g3;
	// offset: 0022
	unsigned char b3;
	// offset: 0023
	unsigned char p5;
	// offset: 0024
	unsigned short v0;
	// offset: 0026
	unsigned short v1;
	// offset: 0028
	unsigned short v2;
	// offset: 002A
	unsigned short v3;
};

// size: 0x1C
struct TMD_STRUCT {
	// offset: 0000
	unsigned long *vertop;
	// offset: 0004
	unsigned long vern;
	// offset: 0008
	unsigned long *nortop;
	// offset: 000C
	unsigned long norn;
	// offset: 0010
	unsigned long *primtop;
	// offset: 0014
	unsigned long primn;
	// offset: 0018
	unsigned long scale;
};

// size: 0x8
struct VERT {
	// offset: 0000
	short vx;
	// offset: 0002
	short vy;
	// offset: 0004
	short vz;
	// offset: 0006
	unsigned char tu;
	// offset: 0007
	unsigned char tv;
};

// size: 0xC
struct VERTC {
	// offset: 0000
	short vx;
	// offset: 0002
	short vy;
	// offset: 0004
	short vz;
	// offset: 0006
	unsigned char tu;
	// offset: 0007
	unsigned char tv;
	// offset: 0008 (4 bytes)
	struct CVECTOR col;
};

// size: 0x64
struct GsADIV_FT4 {
	// offset: 0000
	unsigned long limit;
	// offset: 0004
	long hwd;
	// offset: 0008
	long vwd;
	// offset: 000C
	int shift;
	// offset: 0010
	unsigned long *org;
	// offset: 0014
	unsigned long *pk;
	// offset: 0018
	long otz;
	// offset: 001C
	long adivz;
	// offset: 0020
	short adivw;
	// offset: 0022
	short adivh;
	// offset: 0024
	long flg0;
	// offset: 0028
	long flg;
	// offset: 002C
	short minx;
	// offset: 002E
	short miny;
	// offset: 0030
	short maxx;
	// offset: 0032
	short maxy;
	// offset: 0034
	short hwd0;
	// offset: 0036
	short vwd0;
	// offset: 0038
	unsigned long *tag;
	// offset: 003C (40 bytes)
	struct POLY_FT4 si;
};

// size: 0x20
struct GsADIV_P_FT4 {
	// offset: 0000 (32 bytes)
	struct VERT vt[4];
};

// size: 0x70
struct GsADIV_GT4 {
	// offset: 0000
	unsigned long limit;
	// offset: 0004
	long hwd;
	// offset: 0008
	long vwd;
	// offset: 000C
	int shift;
	// offset: 0010
	unsigned long *org;
	// offset: 0014
	unsigned long *pk;
	// offset: 0018
	long otz;
	// offset: 001C
	long adivz;
	// offset: 0020
	short adivw;
	// offset: 0022
	short adivh;
	// offset: 0024
	long flg0;
	// offset: 0028
	long flg;
	// offset: 002C
	short minx;
	// offset: 002E
	short miny;
	// offset: 0030
	short maxx;
	// offset: 0032
	short maxy;
	// offset: 0034
	short hwd0;
	// offset: 0036
	short vwd0;
	// offset: 0038
	unsigned long *tag;
	// offset: 003C (52 bytes)
	struct POLY_GT4 si;
};

// size: 0x30
struct GsADIV_P_GT4 {
	// offset: 0000 (48 bytes)
	struct VERTC vt[4];
};

// size: 0x60
struct GsADIV_G4 {
	// offset: 0000
	unsigned long limit;
	// offset: 0004
	long hwd;
	// offset: 0008
	long vwd;
	// offset: 000C
	int shift;
	// offset: 0010
	unsigned long *org;
	// offset: 0014
	unsigned long *pk;
	// offset: 0018
	long otz;
	// offset: 001C
	long adivz;
	// offset: 0020
	short adivw;
	// offset: 0022
	short adivh;
	// offset: 0024
	long flg0;
	// offset: 0028
	long flg;
	// offset: 002C
	short minx;
	// offset: 002E
	short miny;
	// offset: 0030
	short maxx;
	// offset: 0032
	short maxy;
	// offset: 0034
	short hwd0;
	// offset: 0036
	short vwd0;
	// offset: 0038
	unsigned long *tag;
	// offset: 003C (36 bytes)
	struct POLY_G4 si;
};

// size: 0x54
struct GsADIV_F4 {
	// offset: 0000
	unsigned long limit;
	// offset: 0004
	long hwd;
	// offset: 0008
	long vwd;
	// offset: 000C
	int shift;
	// offset: 0010
	unsigned long *org;
	// offset: 0014
	unsigned long *pk;
	// offset: 0018
	long otz;
	// offset: 001C
	long adivz;
	// offset: 0020
	short adivw;
	// offset: 0022
	short adivh;
	// offset: 0024
	long flg0;
	// offset: 0028
	long flg;
	// offset: 002C
	short minx;
	// offset: 002E
	short miny;
	// offset: 0030
	short maxx;
	// offset: 0032
	short maxy;
	// offset: 0034
	short hwd0;
	// offset: 0036
	short vwd0;
	// offset: 0038
	unsigned long *tag;
	// offset: 003C (24 bytes)
	struct POLY_F4 si;
};

// size: 0x58
struct GsADIV_FT3 {
	// offset: 0000
	unsigned long limit;
	// offset: 0004
	long hwd;
	// offset: 0008
	long vwd;
	// offset: 000C
	int shift;
	// offset: 0010
	unsigned long *org;
	// offset: 0014
	unsigned long *pk;
	// offset: 0018
	long otz;
	// offset: 001C
	long adivz;
	// offset: 0020
	short adivw;
	// offset: 0022
	short adivh;
	// offset: 0024
	long flg;
	// offset: 0028
	short minx;
	// offset: 002A
	short miny;
	// offset: 002C
	short maxx;
	// offset: 002E
	short maxy;
	// offset: 0030
	short hwd0;
	// offset: 0032
	short vwd0;
	// offset: 0034
	unsigned long *tag;
	// offset: 0038 (32 bytes)
	struct POLY_FT3 si;
};

// size: 0x18
struct GsADIV_P_FT3 {
	// offset: 0000 (24 bytes)
	struct VERT vt[3];
};

// size: 0x60
struct GsADIV_GT3 {
	// offset: 0000
	unsigned long limit;
	// offset: 0004
	long hwd;
	// offset: 0008
	long vwd;
	// offset: 000C
	int shift;
	// offset: 0010
	unsigned long *org;
	// offset: 0014
	unsigned long *pk;
	// offset: 0018
	long otz;
	// offset: 001C
	long adivz;
	// offset: 0020
	short adivw;
	// offset: 0022
	short adivh;
	// offset: 0024
	long flg;
	// offset: 0028
	short minx;
	// offset: 002A
	short miny;
	// offset: 002C
	short maxx;
	// offset: 002E
	short maxy;
	// offset: 0030
	short hwd0;
	// offset: 0032
	short vwd0;
	// offset: 0034
	unsigned long *tag;
	// offset: 0038 (40 bytes)
	struct POLY_GT3 si;
};

// size: 0x24
struct GsADIV_P_GT3 {
	// offset: 0000 (36 bytes)
	struct VERTC vt[3];
};

// size: 0x54
struct GsADIV_G3 {
	// offset: 0000
	unsigned long limit;
	// offset: 0004
	long hwd;
	// offset: 0008
	long vwd;
	// offset: 000C
	int shift;
	// offset: 0010
	unsigned long *org;
	// offset: 0014
	unsigned long *pk;
	// offset: 0018
	long otz;
	// offset: 001C
	long adivz;
	// offset: 0020
	short adivw;
	// offset: 0022
	short adivh;
	// offset: 0024
	long flg;
	// offset: 0028
	short minx;
	// offset: 002A
	short miny;
	// offset: 002C
	short maxx;
	// offset: 002E
	short maxy;
	// offset: 0030
	short hwd0;
	// offset: 0032
	short vwd0;
	// offset: 0034
	unsigned long *tag;
	// offset: 0038 (28 bytes)
	struct POLY_G3 si;
};

// size: 0x4C
struct GsADIV_F3 {
	// offset: 0000
	unsigned long limit;
	// offset: 0004
	long hwd;
	// offset: 0008
	long vwd;
	// offset: 000C
	int shift;
	// offset: 0010
	unsigned long *org;
	// offset: 0014
	unsigned long *pk;
	// offset: 0018
	long otz;
	// offset: 001C
	long adivz;
	// offset: 0020
	short adivw;
	// offset: 0022
	short adivh;
	// offset: 0024
	long flg;
	// offset: 0028
	short minx;
	// offset: 002A
	short miny;
	// offset: 002C
	short maxx;
	// offset: 002E
	short maxy;
	// offset: 0030
	short hwd0;
	// offset: 0032
	short vwd0;
	// offset: 0034
	unsigned long *tag;
	// offset: 0038 (20 bytes)
	struct POLY_F3 si;
};

// size: 0x50
struct _GsCOORDUNIT {
	// offset: 0000
	unsigned long flg;
	// offset: 0004 (32 bytes)
	struct MATRIX matrix;
	// offset: 0024 (32 bytes)
	struct MATRIX workm;
	// offset: 0044 (8 bytes)
	struct SVECTOR rot;
	// offset: 004C (80 bytes)
	struct _GsCOORDUNIT *super;
};

// size: 0x24
struct GsVIEWUNIT {
	// offset: 0000 (32 bytes)
	struct MATRIX view;
	// offset: 0020 (80 bytes)
	struct _GsCOORDUNIT *super;
};

// size: 0x20
struct GsRVIEWUNIT {
	// offset: 0000
	long vpx;
	// offset: 0004
	long vpy;
	// offset: 0008
	long vpz;
	// offset: 000C
	long vrx;
	// offset: 0010
	long vry;
	// offset: 0014
	long vrz;
	// offset: 0018
	long rz;
	// offset: 001C (80 bytes)
	struct _GsCOORDUNIT *super;
};

// size: 0x8
struct GsUNIT {
	// offset: 0000 (80 bytes)
	struct _GsCOORDUNIT *coord;
	// offset: 0004
	unsigned long *primtop;
};

// size: 0x8
struct GsTYPEUNIT {
	// offset: 0000
	unsigned long type;
	// offset: 0004
	unsigned long *ptr;
};

// size: 0x14
struct GsARGUNIT {
	// offset: 0000
	unsigned long *primp;
	// offset: 0004 (20 bytes)
	struct GsOT *tagp;
	// offset: 0008
	int shift;
	// offset: 000C
	int offset;
	// offset: 0010
	unsigned char *out_packetp;
};

// size: 0x8
struct GsWORKUNIT {
	// offset: 0000 (4 bytes)
	struct DVECTOR vec;
	// offset: 0004
	short otz;
	// offset: 0006
	short p;
};

// size: 0x20
struct GsARGUNIT_NORMAL {
	// offset: 0000
	unsigned long *primp;
	// offset: 0004 (20 bytes)
	struct GsOT *tagp;
	// offset: 0008
	int shift;
	// offset: 000C
	int offset;
	// offset: 0010
	unsigned char *out_packetp;
	// offset: 0014
	unsigned long *primtop;
	// offset: 0018 (8 bytes)
	struct SVECTOR *vertop;
	// offset: 001C (8 bytes)
	struct SVECTOR *nortop;
};

// size: 0x28
struct GsARGUNIT_SHARED {
	// offset: 0000
	unsigned long *primp;
	// offset: 0004 (20 bytes)
	struct GsOT *tagp;
	// offset: 0008
	int shift;
	// offset: 000C
	int offset;
	// offset: 0010
	unsigned char *out_packetp;
	// offset: 0014
	unsigned long *primtop;
	// offset: 0018 (8 bytes)
	struct SVECTOR *vertop;
	// offset: 001C (8 bytes)
	struct GsWORKUNIT *vertop2;
	// offset: 0020 (8 bytes)
	struct SVECTOR *nortop;
	// offset: 0024 (8 bytes)
	struct SVECTOR *nortop2;
};

// size: 0x1C
struct GsARGUNIT_IMAGE {
	// offset: 0000
	unsigned long *primp;
	// offset: 0004 (20 bytes)
	struct GsOT *tagp;
	// offset: 0008
	int shift;
	// offset: 000C
	int offset;
	// offset: 0010
	unsigned char *out_packetp;
	// offset: 0014
	unsigned long *imagetop;
	// offset: 0018
	unsigned long *cluttop;
};

// size: 0x24
struct GsARGUNIT_GND {
	// offset: 0000
	unsigned long *primp;
	// offset: 0004 (20 bytes)
	struct GsOT *tagp;
	// offset: 0008
	int shift;
	// offset: 000C
	int offset;
	// offset: 0010
	unsigned char *out_packetp;
	// offset: 0014
	unsigned long *polytop;
	// offset: 0018
	unsigned long *boxtop;
	// offset: 001C
	unsigned long *pointtop;
	// offset: 0020 (8 bytes)
	struct SVECTOR *nortop;
};

// size: 0x28
struct GsARGUNIT_GNDT {
	// offset: 0000
	unsigned long *primp;
	// offset: 0004 (20 bytes)
	struct GsOT *tagp;
	// offset: 0008
	int shift;
	// offset: 000C
	int offset;
	// offset: 0010
	unsigned char *out_packetp;
	// offset: 0014
	unsigned long *polytop;
	// offset: 0018
	unsigned long *boxtop;
	// offset: 001C
	unsigned long *pointtop;
	// offset: 0020 (8 bytes)
	struct SVECTOR *nortop;
	// offset: 0024
	unsigned long *uvtop;
};

// size: 0x28
struct GsARGUNIT_JntMIMe {
	// offset: 0000
	unsigned long *primp;
	// offset: 0004 (20 bytes)
	struct GsOT *tagp;
	// offset: 0008
	int shift;
	// offset: 000C
	int offset;
	// offset: 0010
	unsigned char *out_packetp;
	// offset: 0014
	unsigned long *coord_sect;
	// offset: 0018
	long *mimepr;
	// offset: 001C
	unsigned long mimenum;
	// offset: 0020
	unsigned short mimeid;
	// offset: 0022
	unsigned short reserved;
	// offset: 0024
	unsigned long *mime_diff_sect;
};

// size: 0x20
struct GsARGUNIT_RstJntMIMe {
	// offset: 0000
	unsigned long *primp;
	// offset: 0004 (20 bytes)
	struct GsOT *tagp;
	// offset: 0008
	int shift;
	// offset: 000C
	int offset;
	// offset: 0010
	unsigned char *out_packetp;
	// offset: 0014
	unsigned long *coord_sect;
	// offset: 0018
	unsigned short mimeid;
	// offset: 001A
	unsigned short reserved;
	// offset: 001C
	unsigned long *mime_diff_sect;
};

// size: 0x30
struct GsARGUNIT_VNMIMe {
	// offset: 0000
	unsigned long *primp;
	// offset: 0004 (20 bytes)
	struct GsOT *tagp;
	// offset: 0008
	int shift;
	// offset: 000C
	int offset;
	// offset: 0010
	unsigned char *out_packetp;
	// offset: 0014
	long *mimepr;
	// offset: 0018
	unsigned long mimenum;
	// offset: 001C
	unsigned short mimeid;
	// offset: 001E
	unsigned short reserved;
	// offset: 0020
	unsigned long *mime_diff_sect;
	// offset: 0024 (8 bytes)
	struct SVECTOR *orgs_vn_sect;
	// offset: 0028 (8 bytes)
	struct SVECTOR *vert_sect;
	// offset: 002C (8 bytes)
	struct SVECTOR *norm_sect;
};

// size: 0x28
struct GsARGUNIT_RstVNMIMe {
	// offset: 0000
	unsigned long *primp;
	// offset: 0004 (20 bytes)
	struct GsOT *tagp;
	// offset: 0008
	int shift;
	// offset: 000C
	int offset;
	// offset: 0010
	unsigned char *out_packetp;
	// offset: 0014
	unsigned short mimeid;
	// offset: 0016
	unsigned short reserved;
	// offset: 0018
	unsigned long *mime_diff_sect;
	// offset: 001C (8 bytes)
	struct SVECTOR *orgs_vn_sect;
	// offset: 0020 (8 bytes)
	struct SVECTOR *vert_sect;
	// offset: 0024 (8 bytes)
	struct SVECTOR *norm_sect;
};

// size: 0x24
struct GsARGUNIT_ANIM {
	// offset: 0000
	unsigned long *primp;
	// offset: 0004 (20 bytes)
	struct GsOT *tagp;
	// offset: 0008
	int shift;
	// offset: 000C
	int offset;
	// offset: 0010
	unsigned char *out_packetp;
	// offset: 0014
	long header_size;
	// offset: 0018
	unsigned long *htop;
	// offset: 001C
	unsigned long *ctop;
	// offset: 0020
	unsigned long *ptop;
};

// size: 0x4
struct GsSEH {
	// offset: 0000
	short idx;
	// offset: 0002
	unsigned char sid;
	// offset: 0003
	unsigned char pad;
};

// size: 0x1C
struct GsSEQ {
	// offset: 0000
	unsigned long rewrite_idx;
	// offset: 0004
	unsigned short size;
	// offset: 0006
	unsigned short num;
	// offset: 0008
	unsigned short ii;
	// offset: 000A
	unsigned short aframe;
	// offset: 000C
	unsigned char sid;
	// offset: 000D
	char speed;
	// offset: 000E
	unsigned short srcii;
	// offset: 0010
	short rframe;
	// offset: 0012
	unsigned short tframe;
	// offset: 0014
	unsigned short ci;
	// offset: 0016
	unsigned short ti;
	// offset: 0018
	unsigned short start;
	// offset: 001A
	unsigned char start_sid;
	// offset: 001B
	unsigned char traveling;
};

// size: 0x4
struct InitPos {
	// offset: 0000
	unsigned short x;
	// offset: 0002
	unsigned short y;
};

// size: 0x8
struct t11TLinkedList1Z8PalEntry {
	// offset: 0000
	struct PalEntry *Next;
	// offset: 0004
	struct PalEntry *Prev;
};

// size: 0x18
struct PalEntry {
	// offset: 0000 (8 bytes)
	struct t11TLinkedList1Z8PalEntry t11TLinkedList1Z8PalEntry;
	// offset: 0008
	unsigned short PixVal;
	// offset: 000A
	unsigned short MyX;
	// offset: 000C
	unsigned short MyY;
	// offset: 000E
	unsigned short Clut;
	// offset: 0010
	unsigned short SourceClut;
	// offset: 0012
	unsigned short NumOfCols;
	// offset: 0014
	unsigned short JustUsed;
};

// size: 0x1EC
struct t10Collection2Z8PalEntryi20 {
	// offset: 0000
	int ObjsUsed;
	// offset: 0004 (480 bytes)
	struct PalEntry Objects[20];
	// offset: 01E4 (24 bytes)
	struct PalEntry *Used;
	// offset: 01E8 (24 bytes)
	struct PalEntry *Unused;
};

// size: 0x1EC
struct PalCollection {
	// offset: 0000 (492 bytes)
	struct t10Collection2Z8PalEntryi20 t10Collection2Z8PalEntryi20;
};

// size: 0x18
struct BIRDSTRUCT {
	// offset: 0000 (24 bytes)
	struct BIRDSTRUCT *leader;
	// offset: 0004
	short WorldX;
	// offset: 0006
	short WorldY;
	// offset: 0008
	char _bx;
	// offset: 0009
	char _by;
	// offset: 000A
	char _bxoff;
	// offset: 000B
	char _byoff;
	// offset: 000C
	char dir;
	// offset: 000D
	char newdir;
	// offset: 000E
	char rnddir;
	// offset: 000F
	char flytime;
	// offset: 0010
	char flyvar;
	// offset: 0011
	char animcount;
	// offset: 0012
	char mode;
	// offset: 0013
	char height;
	// offset: 0014
	unsigned char leadflag;
	// offset: 0015
	unsigned char visible;
};

// size: 0x2
struct Perch {
	// offset: 0000
	char x;
	// offset: 0001
	char y;
};

// size: 0x8
struct PInf {
	// offset: 0000
	char *Tx;
	// offset: 0004
	unsigned short GameTex;
	// offset: 0006
	unsigned short TownTex;
};

// size: 0x34
struct bird {
	// offset: 0000
	int townbirddir;
	// offset: 0004
	int townx;
	// offset: 0008
	int towny;
	// offset: 000C
	int motionx;
	// offset: 0010
	int motiony;
	// offset: 0014
	int offx;
	// offset: 0018
	int offy;
	// offset: 001C
	int velx;
	// offset: 0020
	int vely;
	// offset: 0024
	int newvelx;
	// offset: 0028
	int newvely;
	// offset: 002C
	char sw;
	// offset: 002D
	char fl;
	// offset: 002E
	char fl_delay;
	// offset: 002F
	char sw_delay;
	// offset: 0030
	char perch;
	// offset: 0031
	char bird_vis;
};

// size: 0x4
struct _HSCODESTREAM {
	int unused;
};

// size: 0x40
struct _SCODEEXECUTEDATA {
	// offset: 0000
	unsigned long size;
	// offset: 0004
	unsigned long flags;
	// offset: 0008
	int xiterations;
	// offset: 000C
	int yiterations;
	// offset: 0010
	int adjustdest;
	// offset: 0014
	int adjustsource;
	// offset: 0018
	void *dest;
	// offset: 001C
	void *source;
	// offset: 0020
	void *table;
	// offset: 0024
	unsigned long a;
	// offset: 0028
	unsigned long b;
	// offset: 002C
	unsigned long c;
	// offset: 0030
	int adjustdestalt;
	// offset: 0034
	int adjustsourcealt;
	// offset: 0038 (8 bytes)
	unsigned long reserved[2];
};

// size: 0x4
struct _HSARCHIVE {
	int unused;
};

// size: 0x4
struct _HSFILE {
	int unused;
};

// size: 0x4
struct _HSFINDFILE {
	int unused;
};

// size: 0x4
struct _HSGDIOBJ {
	int unused;
};

// size: 0x8
struct _HSGDIFONT {
	// offset: 0000 (4 bytes)
	struct _HSGDIOBJ _HSGDIOBJ;
	// offset: 0004
	int unused;
};

// size: 0x20
struct _PARAMS {
	// offset: 0000
	unsigned long window;
	// offset: 0004
	unsigned int message;
	// offset: 0008
	long wparam;
	// offset: 000C
	unsigned long lparam;
	// offset: 0010
	unsigned int notifycode;
	// offset: 0014
	void *extra;
	// offset: 0018
	unsigned char useresult;
	// offset: 001C
	unsigned long result;
};

// size: 0x24
struct _SNETCAPS {
	// offset: 0000
	unsigned long size;
	// offset: 0004
	unsigned long flags;
	// offset: 0008
	unsigned long maxmessagesize;
	// offset: 000C
	unsigned long maxqueuesize;
	// offset: 0010
	unsigned long maxplayers;
	// offset: 0014
	unsigned long bytessec;
	// offset: 0018
	unsigned long latencyms;
	// offset: 001C
	unsigned long defaultturnssec;
	// offset: 0020
	unsigned long defaultturnsintransit;
};

// size: 0x10
struct _SNETCREATEDATA {
	// offset: 0000
	unsigned long size;
	// offset: 0004
	unsigned long providerid;
	// offset: 0008
	unsigned long maxplayers;
	// offset: 000C
	unsigned long createflags;
};

// size: 0x8
struct _SNET_DATA_SYSCOLORTABLE {
	// offset: 0000
	unsigned long syscolor;
	// offset: 0004
	unsigned long rgb;
};

// size: 0x10
struct _SNETEVENT {
	// offset: 0000
	unsigned long eventid;
	// offset: 0004
	unsigned long playerid;
	// offset: 0008
	void *data;
	// offset: 000C
	unsigned long databytes;
};

// size: 0xC
struct _SNETPLAYERDATA {
	// offset: 0000
	unsigned long size;
	// offset: 0004
	char *playername;
	// offset: 0008
	char *playerdescription;
};

// size: 0x2C
struct _SNETPROGRAMDATA {
	// offset: 0000
	unsigned long size;
	// offset: 0004
	char *programname;
	// offset: 0008
	char *programdescription;
	// offset: 000C
	unsigned long programid;
	// offset: 0010
	unsigned long versionid;
	// offset: 0014
	unsigned long reserved1;
	// offset: 0018
	unsigned long maxplayers;
	// offset: 001C
	void *initdata;
	// offset: 0020
	unsigned long initdatabytes;
	// offset: 0024
	void *reserved2;
	// offset: 0028
	unsigned long optcategorybits;
};

// size: 0x34
struct _SNETUIDATA {
	// offset: 0000
	unsigned long size;
	// offset: 0004
	unsigned long uiflags;
	// offset: 0008
	unsigned long parentwindow;
	// offset: 000C
	unsigned char (*artcallback)();
	// offset: 0010
	unsigned char (*authcallback)();
	// offset: 0014
	unsigned char (*createcallback)();
	// offset: 0018
	unsigned char (*drawdesccallback)();
	// offset: 001C
	unsigned char (*selectedcallback)();
	// offset: 0020
	int (*messageboxcallback)();
	// offset: 0024
	unsigned char (*soundcallback)();
	// offset: 0028
	unsigned char (*statuscallback)();
	// offset: 002C
	unsigned char (*getdatacallback)();
	// offset: 0030
	unsigned char (*categorycallback)();
};

// size: 0x14
struct _SNETVERSIONDATA {
	// offset: 0000
	unsigned long size;
	// offset: 0004
	char *versionstring;
	// offset: 0008
	char *executablefile;
	// offset: 000C
	char *originalarchivefile;
	// offset: 0010
	char *patcharchivefile;
};

// size: 0x10
struct _SNETADDR {
	// offset: 0000 (16 bytes)
	unsigned char address[16];
};

// size: 0x130
struct _SNETSPI_DEVICELIST {
	// offset: 0000
	unsigned long deviceid;
	// offset: 0004 (36 bytes)
	struct _SNETCAPS devicecaps;
	// offset: 0028 (128 bytes)
	char devicename[128];
	// offset: 00A8 (128 bytes)
	char devicedescription[128];
	// offset: 0128
	unsigned long reserved;
	// offset: 012C (304 bytes)
	struct _SNETSPI_DEVICELIST *next;
};

// size: 0x12C
struct _SNETSPI_GAMELIST {
	// offset: 0000
	unsigned long gameid;
	// offset: 0004
	unsigned long gamemode;
	// offset: 0008
	unsigned long creationtime;
	// offset: 000C (16 bytes)
	struct _SNETADDR owner;
	// offset: 001C
	unsigned long ownerlatency;
	// offset: 0020
	unsigned long ownerlasttime;
	// offset: 0024
	unsigned long gamecategorybits;
	// offset: 0028 (128 bytes)
	char gamename[128];
	// offset: 00A8 (128 bytes)
	char gamedescription[128];
	// offset: 0128 (300 bytes)
	struct _SNETSPI_GAMELIST *next;
};

// size: 0x50
struct _SNETSPI {
	// offset: 0000
	unsigned long size;
	// offset: 0004
	unsigned char (*CompareNetAddresses)();
	// offset: 0008
	unsigned char (*Destroy)();
	// offset: 000C
	unsigned char (*Free)();
	// offset: 0010
	unsigned char (*FreeExternalMessage)();
	// offset: 0014
	unsigned char (*GetGameInfo)();
	// offset: 0018
	unsigned char (*GetPerformanceData)();
	// offset: 001C
	unsigned char (*Initialize)();
	// offset: 0020
	unsigned char (*InitializeDevice)();
	// offset: 0024
	unsigned char (*LockDeviceList)();
	// offset: 0028
	unsigned char (*LockGameList)();
	// offset: 002C
	unsigned char (*Receive)();
	// offset: 0030
	unsigned char (*ReceiveExternalMessage)();
	// offset: 0034
	unsigned char (*SelectGame)();
	// offset: 0038
	unsigned char (*Send)();
	// offset: 003C
	unsigned char (*SendExternalMessage)();
	// offset: 0040
	unsigned char (*StartAdvertisingGame)();
	// offset: 0044
	unsigned char (*StopAdvertisingGame)();
	// offset: 0048
	unsigned char (*UnlockDeviceList)();
	// offset: 004C
	unsigned char (*UnlockGameList)();
};

// size: 0x4
struct _HSVIDEO {
	int unused;
};

// size: 0xC
struct _SVIDPALETTEUSE {
	// offset: 0000
	unsigned long size;
	// offset: 0004
	unsigned long firstentry;
	// offset: 0008
	unsigned long numentries;
};

// size: 0x4
struct CCritSect {
	unsigned long m_critsect;
};

// size: 0xC
struct CLock {
	// offset: 0000
	unsigned long m_mutexevent;
	// offset: 0004
	unsigned long m_readerevent;
	// offset: 0008
	long m_readercount;
};

// size: 0x8
struct _gamedata {
	// offset: 0000
	unsigned long dwSeed;
	// offset: 0004
	unsigned char bDiff;
};

// size: 0x8
struct _uidefaultstats {
	// offset: 0000
	unsigned short strength;
	// offset: 0002
	unsigned short magic;
	// offset: 0004
	unsigned short dexterity;
	// offset: 0006
	unsigned short vitality;
};

// size: 0x28
struct _uiheroinfo {
	// offset: 0000 (40 bytes)
	struct _uiheroinfo *next;
	// offset: 0004 (16 bytes)
	char name[16];
	// offset: 0014
	unsigned short level;
	// offset: 0016
	unsigned char heroclass;
	// offset: 0017
	unsigned char herorank;
	// offset: 0018
	unsigned short strength;
	// offset: 001A
	unsigned short magic;
	// offset: 001C
	unsigned short dexterity;
	// offset: 001E
	unsigned short vitality;
	// offset: 0020
	unsigned long gold;
	// offset: 0024
	unsigned char hassaved;
	// offset: 0025
	unsigned char spawned;
};

// size: 0x108
struct _modeminfo {
	// offset: 0000 (264 bytes)
	struct _modeminfo *next;
	// offset: 0004
	unsigned long deviceid;
	// offset: 0008 (128 bytes)
	char devicename[128];
	// offset: 0088 (128 bytes)
	char devicedesc[128];
};

// size: 0x14
struct OrigPkItemStruct {
	// offset: 0000
	int iSeed;
	// offset: 0004
	unsigned short iCreateInfo;
	// offset: 0006
	unsigned short idx;
	// offset: 0008
	unsigned char bId;
	// offset: 0009
	unsigned char bDur;
	// offset: 000A
	unsigned char bMDur;
	// offset: 000B
	unsigned char bCh;
	// offset: 000C
	unsigned char bMCh;
	// offset: 000E
	unsigned short wValue;
	// offset: 0010
	unsigned long dwBuff;
};

// size: 0x13
struct PcPkItemStruct {
	// offset: 0000 (19 bytes)
	unsigned char Shite[19];
};

// size: 0x4D8
struct PcPkPlayerStruct {
	// offset: 0000 (8 bytes)
	struct FILETIME archiveTime;
	// offset: 0008
	unsigned char destAction;
	// offset: 0009
	unsigned char destParam1;
	// offset: 000A
	unsigned char destParam2;
	// offset: 000B
	unsigned char plrlevel;
	// offset: 000C
	unsigned char px;
	// offset: 000D
	unsigned char py;
	// offset: 000E
	unsigned char targx;
	// offset: 000F
	unsigned char targy;
	// offset: 0010 (32 bytes)
	char pName[32];
	// offset: 0030
	unsigned char pClass;
	// offset: 0031
	unsigned char pBaseStr;
	// offset: 0032
	unsigned char pBaseMag;
	// offset: 0033
	unsigned char pBaseDex;
	// offset: 0034
	unsigned char pBaseVit;
	// offset: 0035
	unsigned char pLevel;
	// offset: 0036
	unsigned char pStatPts;
	// offset: 004F (37 bytes)
	unsigned char pSplLvl[37];
	// offset: 007C (133 bytes)
	struct PcPkItemStruct InvBody[7];
	// offset: 0101 (760 bytes)
	struct PcPkItemStruct InvList[40];
	// offset: 03F9 (40 bytes)
	char InvGrid[40];
	// offset: 0421
	unsigned char _pNumInv;
	// offset: 0422 (152 bytes)
	struct PcPkItemStruct SpdList[8];
	// offset: 04BA (24 bytes)
	unsigned char Pad[24];
	// offset: 01B8 (32 bytes)
	// int pExperience;
	// offset: 01D8 (32 bytes)
	// int pGold;
	// offset: 01F8 (32 bytes)
	// int pHPBase;
	// offset: 0218 (32 bytes)
	// int pMaxHPBase;
	// offset: 0238 (32 bytes)
	// int pManaBase;
	// offset: 0258 (32 bytes)
	// int pMaxManaBase;
	// offset: 03A0 (32 bytes)
	// int pMemSpells;
	// offset: 03C0 (32 bytes)
	// int pMemSpells2;
	// offset: 2690 (32 bytes)
	// int pDiabloKillLevel;
};

// size: 0x14
struct PkItemStruct {
	// offset: 0000 (32 bytes)
	// unsigned int dwBuff;
	// offset: 0020 (32 bytes)
	// int iSeed;
	// offset: 0040 (16 bytes)
	// unsigned int iCreateInfo;
	// offset: 0050 (16 bytes)
	// unsigned int idx;
	// offset: 0060 (16 bytes)
	// unsigned int wValue;
	// offset: 0070 (8 bytes)
	// unsigned int bId;
	// offset: 0078 (8 bytes)
	// unsigned int bDur;
	// offset: 0080 (8 bytes)
	// unsigned int bMDur;
	// offset: 0088 (8 bytes)
	// unsigned int bCh;
	// offset: 0090 (8 bytes)
	// unsigned int bMCh;
};

// size: 0x500
struct PkPlayerStruct {
	// offset: 0000 (160 bytes)
	struct PkItemStruct SpdList[8];
	// offset: 00A0 (140 bytes)
	struct PkItemStruct InvBody[7];
	// offset: 012C (800 bytes)
	struct PkItemStruct InvList[40];
	// offset: 0450
	unsigned long pMemSpells;
	// offset: 0458 (8 bytes)
	struct FILETIME archiveTime;
	// offset: 0460
	long pExperience;
	// offset: 0464
	long pGold;
	// offset: 0468
	long pHPBase;
	// offset: 046C
	long pMaxHPBase;
	// offset: 0470
	long pManaBase;
	// offset: 0474
	long pMaxManaBase;
	// offset: 0478
	unsigned long pDiabloKillLevel;
	// offset: 047C (32 bytes)
	char pName[32];
	// offset: 049C (40 bytes)
	char InvGrid[40];
	// offset: 04C4 (37 bytes)
	unsigned char pSplLvl[37];
	// offset: 04E9
	unsigned char destAction;
	// offset: 04EA
	unsigned char destParam1;
	// offset: 04EB
	unsigned char destParam2;
	// offset: 04EC
	unsigned char plrlevel;
	// offset: 04ED
	unsigned char px;
	// offset: 04EE
	unsigned char py;
	// offset: 04EF
	unsigned char targx;
	// offset: 04F0
	unsigned char targy;
	// offset: 04F1
	unsigned char pClass;
	// offset: 04F2
	unsigned char pBaseStr;
	// offset: 04F3
	unsigned char pBaseMag;
	// offset: 04F4
	unsigned char pBaseDex;
	// offset: 04F5
	unsigned char pBaseVit;
	// offset: 04F6
	unsigned char pLevel;
	// offset: 04F7
	unsigned char pStatPts;
	// offset: 04F8
	unsigned char _pNumInv;
};

// size: 0x18
struct OMENUITEM {
	// offset: 0000
	unsigned char y;
	// offset: 0004
	int Text;
	// offset: 0008 (4 bytes)
	enum TXT_JUST Just;
	// offset: 000C
	int len;
	// offset: 0010
	unsigned long *var;
	// offset: 0014
	int Link;
};

// size: 0x8
struct OMENULIST {
	// offset: 0000
	unsigned short w;
	// offset: 0002
	unsigned char h;
	// offset: 0003
	unsigned char NoEntries;
	// offset: 0004 (24 bytes)
	struct OMENUITEM *Item;
};

// size: 0x8
struct FMVDAT {
	// offset: 0000
	char *Name;
	// offset: 0004
	unsigned short Width;
	// offset: 0006
	unsigned short Height;
};

// size: 0x4
struct kindexS {
	// offset: 0000
	unsigned short kan;
	// offset: 0002
	unsigned short offset;
};

// size: 0x214
struct block {
	// offset: 0000 (512 bytes)
	int data[128];
	// offset: 0200
	unsigned char blockrep;
	// offset: 0204
	int blocksize;
	// offset: 0208
	int blockoffset;
	// offset: 020C
	unsigned char *Dest;
	// offset: 0210
	int outsize;
};

// size: 0x18
struct FeMenuTable {
	// offset: 0000
	int X;
	// offset: 0004
	int Y;
	// offset: 0008 (4 bytes)
	enum TXT_JUST Just;
	// offset: 000C
	unsigned short Str;
	// offset: 0010 (28 bytes)
	struct FeTable *MenuPtr;
	// offset: 0014 (536 bytes)
	struct CFont *Font;
};

// size: 0x8
struct Creds {
	// offset: 0000
	char Title;
	// offset: 0001
	char SubTitle;
	// offset: 0004
	char *Text;
};

// size: 0x4
struct sjis {
	// offset: 0000
	char ascii;
	// offset: 0001
	unsigned char num;
	// offset: 0002
	unsigned short sjis;
};

// size: 0x14
struct _mdecanim {
	// offset: 0000
	char *filename;
	// offset: 0004
	int speed;
	// offset: 0008
	int start;
	// offset: 000C
	int end;
	// offset: 0010
	int streaming;
};

// size: 0xC
struct asec {
	// offset: 0000
	unsigned long chkid;
	// offset: 0004
	unsigned long chksize;
	// offset: 0008
	int size;
};

// size: 0x28
struct CSDATA {
	// offset: 0000
	int x;
	// offset: 0004
	int y;
	// offset: 0008
	int w;
	// offset: 000C
	int Text1;
	// offset: 0010
	int Text2;
	// offset: 0014
	int Text3;
	// offset: 0018 (15 bytes)
	char String[15];
	// offset: 0027
	char col;
};

// size: 0x18
struct MissileData {
	// offset: 0000
	unsigned char mName;
	// offset: 0004
	void (*mAddProc)();
	// offset: 0008
	void (*mProc)();
	// offset: 000C
	unsigned char mDraw;
	// offset: 000D
	unsigned char mType;
	// offset: 000E
	unsigned char mResist;
	// offset: 000F
	unsigned char mFileNum;
	// offset: 0010
	int mlSFX;
	// offset: 0014
	int miSFX;
};

// size: 0x5
struct MisFileData {
	// offset: 0000
	unsigned char mAnimName;
	// offset: 0001
	unsigned char mAnimFAmt;
	// offset: 0002
	unsigned char mFlags;
	// offset: 0003
	unsigned char mAnimDelay;
	// offset: 0004
	unsigned char mAnimLen;
};

// size: 0x8
struct ThemeStruct {
	// offset: 0000
	char ttype;
	// offset: 0004
	int ttval;
};

// size: 0x20
struct _FILEHEADER {
	// offset: 0000
	unsigned long signature;
	// offset: 0004
	unsigned long headersize;
	// offset: 0008
	unsigned long filesize;
	// offset: 000C
	unsigned short version;
	// offset: 000E
	unsigned short sectorsizeid;
	// offset: 0010
	unsigned long hashoffset;
	// offset: 0014
	unsigned long blockoffset;
	// offset: 0018
	unsigned long hashcount;
	// offset: 001C
	unsigned long blockcount;
};

// size: 0x10
struct _HASHENTRY {
	// offset: 0000 (8 bytes)
	unsigned long hashcheck[2];
	// offset: 0008
	unsigned long lcid;
	// offset: 000C
	unsigned long block;
};

// size: 0x10
struct _BLOCKENTRY {
	// offset: 0000
	unsigned long offset;
	// offset: 0004
	unsigned long sizealloc;
	// offset: 0008
	unsigned long sizefile;
	// offset: 000C
	unsigned long flags;
};

// size: 0x8
struct _SHAREDDATA {
	// offset: 0000
	long status;
	// offset: 0004
	unsigned long processid;
};

// size: 0xB0
struct CompLevelMemImage {
	// offset: 0000
	unsigned long Version;
	// offset: 0004
	unsigned long TotalSize;
	// offset: 0008 (84 bytes)
	unsigned long DataOffset[21];
	// offset: 005C (84 bytes)
	unsigned long Size[21];
};

// size: 0xB8
struct CompLevelMaps {
	// offset: 0000 (84 bytes)
	long hndMaps[21];
	// offset: 0054 (84 bytes)
	int Sizes[21];
	// offset: 00A8
	int CachedMapNum;
	// offset: 00AC
	long hndCachedMap;
	// offset: 00B0 (3868 bytes)
	struct DLevel *CurrentMap;
	// offset: 00B4
	bool CurrentMapDirty;
};

// size: 0x7D08
struct TMegaPkt {
	// offset: 0000 (32008 bytes)
	struct TMegaPkt *pNext;
	// offset: 0004
	unsigned long dwSpaceLeft;
	// offset: 0008 (32000 bytes)
	unsigned char data[32000];
};

// size: 0x1004
struct TBuffer {
	// offset: 0000
	unsigned long dwNextWriteOffset;
	// offset: 0004 (4096 bytes)
	unsigned char bData[4096];
};

// size: 0x34
struct tagPATHNODE {
	// offset: 0000
	char f;
	// offset: 0001
	char h;
	// offset: 0002
	char g;
	// offset: 0004
	int x;
	// offset: 0008
	int y;
	// offset: 000C (52 bytes)
	struct tagPATHNODE *Parent;
	// offset: 0010 (32 bytes)
	struct tagPATHNODE *Child[8];
	// offset: 0030 (52 bytes)
	struct tagPATHNODE *NextNode;
};

// size: 0x8
struct bbssbb {
	// offset: 0000
	int x;
	// offset: 0004
	int y;
};

// size: 0x8
struct MESSAGE_STR {
	// offset: 0000
	int Msg;
	// offset: 0004
	char *Text;
};

// size: 0x8
struct MONTH_DAYS {
	// offset: 0000
	char *Month;
	// offset: 0004
	int Days;
};

// size: 0x8
struct InvXY {
	// offset: 0000
	int X;
	// offset: 0004
	int Y;
};

// size: 0x20
struct MEM_HDR {
	// offset: 0000 (32 bytes)
	struct MEM_HDR *Prev;
	// offset: 0004 (32 bytes)
	struct MEM_HDR *Next;
	// offset: 0008
	void *Mem;
	// offset: 000C
	unsigned long Size;
	// offset: 0010
	unsigned short TimeStamp;
	// offset: 0012
	unsigned short Type;
	// offset: 0014
	unsigned short Owners;
	// offset: 0016
	unsigned short Handle;
	// offset: 0018 (8 bytes)
	unsigned char Name[8];
};

// size: 0x8
struct MEM_REG {
	// offset: 0000
	void *Mem;
	// offset: 0004
	int Size;
};

// size: 0x1C
struct FILE {
	// offset: 0000
	int _cnt;
	// offset: 0004
	char *_ptr;
	// offset: 0008
	char *_base;
	// offset: 000C
	int _bufsiz;
	// offset: 0010
	int _flag;
	// offset: 0014
	int _file;
	// offset: 0018
	char *_name_to_remove;
};

// size: 0x8
union _122fake {
	// offset: 0000 (8 bytes)
	struct TP_LINK TpLink;
	// offset: 0000 (8 bytes)
	struct DR_TPAGE DrTpage;
};

typedef unsigned char u_char;

typedef unsigned short u_short;

typedef unsigned int u_int;

typedef unsigned long u_long;

typedef unsigned short ushort;

typedef struct _physadr _physadr;

typedef struct _physadr *physadr;

typedef struct label_t label_t;

typedef struct _quad _quad;

typedef struct _quad quad;

typedef long daddr_t;

typedef char *caddr_t;

typedef long *qaddr_t;

typedef unsigned long ino_t;

typedef long swblk_t;

typedef unsigned int size_t;

typedef long time_t;

typedef short dev_t;

typedef long off_t;

typedef unsigned short uid_t;

typedef unsigned short gid_t;

typedef char s8;

typedef short s16;

typedef long s32;

typedef long s64;

typedef unsigned char u8;

typedef unsigned short u16;

typedef unsigned long u32;

typedef unsigned long u64;

typedef unsigned int uint;

typedef unsigned char uchar;

typedef unsigned long ulong;

typedef unsigned char UBYTE;

typedef unsigned short UWORD;

typedef unsigned int UINT;

typedef unsigned char UCHAR;

typedef unsigned short USHORT;

typedef unsigned long ULONG;

typedef unsigned char BOOL;

typedef char S8;

typedef short S16;

typedef long S32;

typedef unsigned char U8;

typedef unsigned short U16;

typedef unsigned long U32;

typedef char int8;

typedef unsigned char uint8;

typedef unsigned char byte;

typedef short int16;

typedef unsigned short uint16;

typedef unsigned short word;

typedef long int32;

typedef unsigned long uint32;

typedef unsigned long dword;

typedef long S64;

typedef unsigned long U64;

typedef long int64;

typedef unsigned long uint64;

typedef unsigned long qword;

typedef struct MonstList MonstList;

typedef struct MonstLevel MonstLevel;

typedef unsigned char wchar_t;

typedef void *va_list;

typedef struct ToT ToT;

typedef struct TCBH TCBH;

typedef struct TCB TCB;

typedef struct EvCB EvCB;

typedef struct EXEC EXEC;

typedef struct XF_HDR XF_HDR;

typedef struct DIRENTRY DIRENTRY;

typedef struct MATRIX MATRIX;

typedef struct VECTOR VECTOR;

typedef struct SVECTOR SVECTOR;

typedef struct CVECTOR CVECTOR;

typedef struct DVECTOR DVECTOR;

typedef struct EVECTOR EVECTOR;

typedef struct RVECTOR RVECTOR;

typedef struct CRVECTOR3 CRVECTOR3;

typedef struct DIVPOLYGON3 DIVPOLYGON3;

typedef struct CRVECTOR4 CRVECTOR4;

typedef struct DIVPOLYGON4 DIVPOLYGON4;

typedef struct SPOL SPOL;

typedef struct POL4 POL4;

typedef struct POL3 POL3;

typedef struct TMESH TMESH;

typedef struct QMESH QMESH;

typedef struct RECT RECT;

typedef struct RECT32 RECT32;

typedef struct DR_ENV DR_ENV;

typedef struct DRAWENV DRAWENV;

typedef struct DISPENV DISPENV;

typedef struct P_TAG P_TAG;

typedef struct P_CODE P_CODE;

typedef struct POLY_F3 POLY_F3;

typedef struct POLY_F4 POLY_F4;

typedef struct POLY_FT3 POLY_FT3;

typedef struct POLY_FT4 POLY_FT4;

typedef struct POLY_G3 POLY_G3;

typedef struct POLY_G4 POLY_G4;

typedef struct POLY_GT3 POLY_GT3;

typedef struct POLY_GT4 POLY_GT4;

typedef struct LINE_F2 LINE_F2;

typedef struct LINE_G2 LINE_G2;

typedef struct LINE_F3 LINE_F3;

typedef struct LINE_G3 LINE_G3;

typedef struct LINE_F4 LINE_F4;

typedef struct LINE_G4 LINE_G4;

typedef struct SPRT SPRT;

typedef struct SPRT_16 SPRT_16;

typedef struct SPRT_16 SPRT_8;

typedef struct TILE TILE;

typedef struct TILE_16 TILE_16;

typedef struct TILE_16 TILE_8;

typedef struct TILE_16 TILE_1;

typedef struct DR_MODE DR_MODE;

typedef struct DR_MODE DR_TWIN;

typedef struct DR_MODE DR_AREA;

typedef struct DR_MODE DR_OFFSET;

typedef struct DR_MOVE DR_MOVE;

typedef struct DR_LOAD DR_LOAD;

typedef struct DR_TPAGE DR_TPAGE;

typedef struct DR_MODE DR_STP;

typedef struct TMD_PRIM TMD_PRIM;

typedef struct TIM_IMAGE TIM_IMAGE;

typedef char CHAR;

typedef int CLSID;

typedef int SIZEL;

typedef int POINTL;

typedef unsigned long *FARPROC;

typedef unsigned long FOURCC;

typedef unsigned char *LPDRAWITEMSTRUCT;

typedef unsigned long *LPSECURITY_ATTRIBUTES;

typedef void *DLGPROC;

typedef unsigned long COLORREF;

typedef unsigned short *LPINT;

typedef unsigned long HCURSOR;

typedef unsigned long TIMERPROC;

typedef unsigned long HFONT;

typedef unsigned long CRITICAL_SECTION;

typedef unsigned long *LPCRITICAL_SECTION;

typedef long *LPTOP_LEVEL_EXCEPTION_FILTER;

typedef unsigned long REGSAM;

typedef unsigned long ATOM;

typedef unsigned long HMENU;

typedef unsigned long *PUINT;

typedef void VOID;

typedef unsigned long DWORD;

typedef unsigned long *LPDWORD;

typedef unsigned short WORD;

typedef short SHORT;

typedef unsigned char BYTE;

typedef char *HKEY;

typedef char **PHKEY;

typedef char TCHAR;

typedef void *LPVOID;

typedef void *LPCVOID;

typedef void *LPOVERLAPPED;

typedef char *LPSTR;

typedef char *LPCSTR;

typedef char *LPTSTR;

typedef char *LPCTSTR;

typedef unsigned char *LPBYTE;

typedef long WPARAM;

typedef unsigned long LPARAM;

typedef unsigned long HWND;

typedef unsigned long HINSTANCE;

typedef unsigned long LRESULT;

typedef unsigned long HRESULT;

typedef unsigned long HANDLE;

typedef unsigned long HPALETTE;

typedef unsigned long HDC;

typedef long LONG;

typedef long *LPLONG;

typedef long *PLONG;

typedef unsigned long LCID;

typedef unsigned long HMODULE;

typedef unsigned long *LPSIZE;

typedef struct RECT HRGN;

typedef struct RECT LPCDLGTEMPLATE;

typedef struct RECT *LPCRECT;

typedef unsigned long (*WNDPROC)();

typedef unsigned long HICON;

typedef unsigned long HBRUSH;

typedef void *HTRANS;

typedef struct POINT POINT;

typedef struct MSG MSG;

typedef struct MSG *LPMSG;

typedef struct FILETIME FILETIME;

typedef struct FILETIME *PFILETIME;

typedef struct FILETIME *LPFILETIME;

typedef struct _WIN32_FIND_DATA _WIN32_FIND_DATA;

typedef struct _WIN32_FIND_DATA WIN32_FIND_DATA;

typedef struct _WIN32_FIND_DATA *LPWIN32_FIND_DATA;

typedef struct PALETTEENTRY PALETTEENTRY;

typedef struct PALETTEENTRY *LPPALETTEENTRY;

typedef struct PAINTSTRUCT PAINTSTRUCT;

typedef struct PAINTSTRUCT *LPPAINTSTRUCT;

typedef struct LARGE_INTEGER LARGE_INTEGER;

typedef struct GUID GUID;

typedef struct WAVEFORMATEX WAVEFORMATEX;

typedef struct MMCKINFO MMCKINFO;

typedef struct WAVEFORMAT WAVEFORMAT;

typedef struct PCMWAVEFORMAT PCMWAVEFORMAT;

typedef struct VS_FIXEDFILEINFO VS_FIXEDFILEINFO;

typedef struct WNDCLASSEX WNDCLASSEX;

typedef struct SHITEMID SHITEMID;

typedef struct _ITEMIDLIST _ITEMIDLIST;

typedef struct _ITEMIDLIST ITEMIDLIST;

typedef struct _ITEMIDLIST *LPITEMIDLIST;

typedef struct _ITEMIDLIST *LPCITEMIDLIST;

typedef struct _HSTRANS _HSTRANS;

typedef struct _HSTRANS *HSTRANS;

typedef struct SIZE SIZE;

typedef struct TBMP TBMP;

typedef struct TBMP *TPBMP;

typedef struct UIRECT UIRECT;

typedef struct UIRECT *LPUIRECT;

typedef struct MSFX MSFX;

typedef struct CKINFO CKINFO;

typedef struct TSnd TSnd;

typedef struct TSFX TSFX;

typedef struct AnimStruct AnimStruct;

typedef struct MonsterData MonsterData;

typedef struct CMonster CMonster;

typedef struct MonsterStruct MonsterStruct;

typedef struct UniqMonstStruct UniqMonstStruct;

typedef struct STONEPAL STONEPAL;

typedef struct DEF_ARGS DEF_ARGS;

typedef int jmp_buf[12];

typedef long MHANDLE;

typedef int MTYPE;

typedef void (*GAL_FILTER)();

typedef enum GAL_ERROR_CODE GAL_ERROR_CODE;

typedef enum GAL_VERB_LEV GAL_VERB_LEV;

typedef struct MEM_INIT_INFO MEM_INIT_INFO;

typedef struct GAL_STRUCT GAL_STRUCT;

typedef struct TASK TASK;

typedef void (*TSK_CBACK)();

typedef void (*DOTSK_CBACK)();

typedef enum LANG_TYPE LANG_TYPE;

typedef enum LANG_DB_NO LANG_DB_NO;

typedef enum B_PER_PIX B_PER_PIX;

typedef struct FRAME_HDR FRAME_HDR;

typedef struct SysObj SysObj;

typedef bool (*STR_CB_PTR)();

typedef struct FileIO FileIO;

typedef struct CPart CPart;

typedef struct CBlock CBlock;

typedef struct CBlockHdr CBlockHdr;

typedef struct PAL PAL;

typedef struct PAL_INVRAM PAL_INVRAM;

typedef struct DECOMP_BUFFER DECOMP_BUFFER;

typedef struct ALL_DECOMP_BUFFERS ALL_DECOMP_BUFFERS;

typedef struct SPR_HDR SPR_HDR;

typedef struct TP_LOAD_HDR TP_LOAD_HDR;

typedef struct CTextFileInfo CTextFileInfo;

typedef struct CCreatureAction CCreatureAction;

typedef struct CCreatureHdr CCreatureHdr;

typedef struct TextDat TextDat;

typedef struct CScreen CScreen;

typedef struct OBJ_TYPE_INFO OBJ_TYPE_INFO;

typedef struct OBJ_LIST OBJ_LIST;

typedef struct OBJ_STRUCT OBJ_STRUCT;

typedef struct CPad CPad;

typedef enum TXT_JUST TXT_JUST;

typedef struct CFont CFont;

typedef struct Dialog Dialog;

typedef struct SCREEN_ENV SCREEN_ENV;

typedef struct DB DB;

typedef struct ShadowStruct ShadowStruct;

typedef struct ScrollStruct ScrollStruct;

typedef struct THEME_LOC THEME_LOC;

typedef struct MINIXY MINIXY;

typedef struct MICROS MICROS;

typedef struct map_info map_info;

typedef struct tab_entry tab_entry;

typedef enum _item_indexes _item_indexes;

typedef struct PLStruct PLStruct;

typedef struct UItemStruct UItemStruct;

typedef struct ItemDataStruct ItemDataStruct;

typedef struct ItemGetRecordStruct ItemGetRecordStruct;

typedef struct ItemStruct ItemStruct;

typedef struct PlayerStruct PlayerStruct;

typedef struct controller_pos controller_pos;

typedef struct pad_assigns pad_assigns;

typedef struct KEY_ASSIGNS KEY_ASSIGNS;

typedef struct KEY_ASSIGNS key_assigns;

typedef struct LittleGt4 LittleGt4;

typedef struct CBlocks CBlocks;

typedef enum PACTION PACTION;

typedef struct CPlayer CPlayer;

typedef struct Spell_Target Spell_Target;

typedef struct GamePad GamePad;

typedef struct found_objects found_objects;

typedef void (*CdlCB)();

typedef struct CdlLOC CdlLOC;

typedef struct CdlFILTER CdlFILTER;

typedef struct CdlATV CdlATV;

typedef struct CdlFILE CdlFILE;

typedef struct StHEADER StHEADER;

typedef struct PCIO PCIO;

typedef struct CdIO CdIO;

typedef struct DList DList;

typedef char *MEMBLOCK;

typedef struct ARGB ARGB;

typedef struct shapetbl shapetbl;

typedef struct shapetbl SHAPE;

typedef struct windowtbl windowtbl;

typedef struct windowtbl WINDOW;

typedef struct coorddef coorddef;

typedef struct coorddef LIBCOORD;

typedef struct scoorddef scoorddef;

typedef struct scoorddef SCOORD;

typedef struct matrixtdef matrixtdef;

typedef struct matrixtdef MATRIX3DT;

typedef void (*VOIDFN)();

typedef struct TSPRT TSPRT;

typedef int INTFN();

typedef struct memclassstruct memclassstruct;

typedef struct memclassstruct MEMORYCLASS;

typedef struct FONTFILE FONTFILE;

typedef struct coordsdef coordsdef;

typedef struct coordsdef COORDS;

typedef struct linedef linedef;

typedef struct linedef LINE;

typedef struct linesdef linesdef;

typedef struct linesdef LINES;

typedef struct dirangledef dirangledef;

typedef struct dirangledef DIRANGLES;

typedef struct arcangledef arcangledef;

typedef struct arcangledef ARCANGLES;

typedef struct SHAPETABLEENTRY SHAPETABLEENTRY;

typedef struct SHAPEFILE SHAPEFILE;

typedef struct radialsymdef radialsymdef;

typedef struct radialsymdef RADIALSYM;

typedef struct graphicsmodeinfostruct graphicsmodeinfostruct;

typedef struct graphicsmodeinfostruct GRAPHICSMODEINFO;

typedef void MVI;

typedef int EACHOOKCALLBACKFUNC();

typedef int arg_t;

typedef struct chunkhdrstruct chunkhdrstruct;

typedef struct chunkhdrstruct CHUNKHDR;

typedef struct chunkhdrchkstruct chunkhdrchkstruct;

typedef struct chunkhdrchkstruct CHUNKHDRCHK;

typedef void THREADPROC();

typedef int SYSTEMTASK();

typedef struct UNIQUEID UNIQUEID;

typedef struct threadstruct threadstruct;

typedef struct threadstruct THREAD;

typedef struct cdstreamstruct cdstreamstruct;

typedef struct cdstreamstruct CDSTREAM;

typedef struct STREAM STREAM;

typedef struct STRHDR STRHDR;

typedef struct SFXHDR SFXHDR;

typedef enum OVER_TYPE OVER_TYPE;

typedef unsigned short DECDCTTAB[34816];

typedef struct DECDCTENV DECDCTENV;

typedef struct ENCSPUENV ENCSPUENV;

typedef struct SpuVolume SpuVolume;

typedef struct SpuVoiceAttr SpuVoiceAttr;

typedef struct SpuReverbAttr SpuReverbAttr;

typedef struct SpuDecodedData SpuDecodedData;

typedef struct SpuDecodedData SpuDecodeData;

typedef struct SpuExtAttr SpuExtAttr;

typedef struct SpuCommonAttr SpuCommonAttr;

typedef void (*SpuIRQCallbackProc)();

typedef void (*SpuTransferCallbackProc)();

typedef struct SpuEnv SpuEnv;

typedef struct SpuStVoiceAttr SpuStVoiceAttr;

typedef struct SpuStEnv SpuStEnv;

typedef void (*SpuStCallbackProc)();

typedef struct VabHdr VabHdr;

typedef struct ProgAtr ProgAtr;

typedef struct VagAtr VagAtr;

typedef struct SndVolume SndVolume;

typedef struct SndVolume2 SndVolume2;

typedef struct SndRegisterAttr SndRegisterAttr;

typedef struct SndVoiceStats SndVoiceStats;

typedef void (*SsMarkCallbackProc)();

typedef struct _SsFCALL _SsFCALL;

typedef void (*MissPrintPtr)();

typedef struct MissileStruct MissileStruct;

typedef struct SPELLFX_DAT SPELLFX_DAT;

typedef struct Particle Particle;

typedef struct strheader strheader;

typedef int strdata[504];

typedef struct strsec strsec;

typedef struct mdc_header mdc_header;

typedef enum ping_status ping_status;

typedef struct file_header file_header;

typedef enum write_ret write_ret;

typedef enum read_ret read_ret;

typedef enum card_events card_events;

typedef void (*FeFuncPtr)();

typedef struct FeTable FeTable;

typedef struct FeStruct FeStruct;

typedef struct FE_PLR FE_PLR;

typedef struct FE_CREATE FE_CREATE;

typedef struct LOAD_IMAGE_ARGS LOAD_IMAGE_ARGS;

typedef struct PRIM_BUFFER PRIM_BUFFER;

typedef enum TPAGE_TYPES TPAGE_TYPES;

typedef struct TP_LINK TP_LINK;

typedef struct TPAGE_DEF TPAGE_DEF;

typedef struct MEM_INFO MEM_INFO;

typedef enum FILE_SYSTEM FILE_SYSTEM;

typedef enum DEV_KIT DEV_KIT;

typedef struct LNK_OPTS LNK_OPTS;

typedef struct DatIO DatIO;

typedef struct PanelXY PanelXY;

typedef struct GPanel GPanel;

typedef struct DPatsStruct DPatsStruct;

typedef struct NODE NODE;

typedef struct NODE HALLNODE;

typedef struct ROOMNODE ROOMNODE;

typedef struct bank_entry bank_entry;

typedef struct QuestStruct QuestStruct;

typedef struct QuestData QuestData;

typedef struct SNDPLAYOPTS SNDPLAYOPTS;

typedef struct SNDLIMITS SNDLIMITS;

typedef struct SNDUSAGE SNDUSAGE;

typedef struct DR_LOAD2 DR_LOAD2;

typedef struct MEMSTRUCT MEMSTRUCT;

typedef struct TextDataStruct TextDataStruct;

typedef struct TriggerStruct TriggerStruct;

typedef struct OBJ_LOAD_INFO OBJ_LOAD_INFO;

typedef struct ObjDataStruct ObjDataStruct;

typedef struct ObjectStruct ObjectStruct;

typedef struct PortalStruct PortalStruct;

typedef enum _setlevels _setlevels;

typedef struct TCmd TCmd;

typedef struct TCmdLoc TCmdLoc;

typedef struct TCmdLocParam1 TCmdLocParam1;

typedef struct TCmdLocParam2 TCmdLocParam2;

typedef struct TCmdLocParam3 TCmdLocParam3;

typedef struct TCmdParam1 TCmdParam1;

typedef struct TCmdParam2 TCmdParam2;

typedef struct TCmdParam3 TCmdParam3;

typedef struct TCmdGolem TCmdGolem;

typedef struct TCmdQuest TCmdQuest;

typedef struct TCmdGItem TCmdGItem;

typedef struct TCmdPItem TCmdPItem;

typedef struct TCmdChItem TCmdChItem;

typedef struct TCmdDelItem TCmdDelItem;

typedef struct TCmdDamage TCmdDamage;

typedef struct TCmdPlrInfoHdr TCmdPlrInfoHdr;

typedef struct TCmdString TCmdString;

typedef struct TFakeCmdPlr TFakeCmdPlr;

typedef struct TFakeDropPlr TFakeDropPlr;

typedef struct TSyncHeader TSyncHeader;

typedef struct TSyncMonster TSyncMonster;

typedef struct TPktHdr TPktHdr;

typedef struct TPkt TPkt;

typedef struct DMonsterStr DMonsterStr;

typedef struct DObjectStr DObjectStr;

typedef struct DLevel DLevel;

typedef struct LocalLevel LocalLevel;

typedef struct DPortal DPortal;

typedef struct MultiQuests MultiQuests;

typedef struct DJunk DJunk;

typedef struct STextStruct STextStruct;

typedef struct CPauseMessages CPauseMessages;

typedef struct CTempPauseMessage CTempPauseMessage;

typedef struct FontItem FontItem;

typedef struct FontTab FontTab;

typedef struct TNQ TNQ;

typedef struct TownerStruct TownerStruct;

typedef struct QuestTalkData QuestTalkData;

typedef struct POLY_FT4 *(*OBJ_PFUNC)();

typedef struct LightListStruct LightListStruct;

typedef struct LightListStruct2 LightListStruct2;

typedef struct DeadStruct DeadStruct;

typedef struct TownToCreature TownToCreature;

typedef struct RGBPOLY RGBPOLY;

typedef struct Overlay Overlay;

typedef void (*TMenuFcn)();

typedef struct TMenuItem TMenuItem;

typedef void (*TMenuUpdateFcn)();

typedef struct SpellData SpellData;

typedef unsigned char PACKET;

typedef struct GsCOORD2PARAM GsCOORD2PARAM;

typedef struct _GsCOORDINATE2 _GsCOORDINATE2;

typedef struct _GsCOORDINATE2 GsCOORDINATE2;

typedef struct GsVIEW2 GsVIEW2;

typedef struct GsRVIEW2 GsRVIEW2;

typedef struct GsF_LIGHT GsF_LIGHT;

typedef struct GsOT_TAG GsOT_TAG;

typedef struct GsOT GsOT;

typedef struct GsDOBJ2 GsDOBJ2;

typedef struct GsDOBJ3 GsDOBJ3;

typedef struct GsDOBJ2 GsDOBJ4;

typedef struct GsDOBJ5 GsDOBJ5;

typedef struct GsSPRITE GsSPRITE;

typedef struct GsSPARRAY GsSPARRAY;

typedef struct GsCELL GsCELL;

typedef struct GsMAP GsMAP;

typedef struct GsBG GsBG;

typedef struct GsLINE GsLINE;

typedef struct GsGLINE GsGLINE;

typedef struct GsBOXF GsBOXF;

typedef struct GsFOGPARAM GsFOGPARAM;

typedef struct GsIMAGE GsIMAGE;

typedef struct _GsPOSITION _GsPOSITION;

typedef struct GsOBJTABLE2 GsOBJTABLE2;

typedef struct _GsFCALL _GsFCALL;

typedef struct TMD_P_F3 TMD_P_F3;

typedef struct TMD_P_G3 TMD_P_G3;

typedef struct TMD_P_F3G TMD_P_F3G;

typedef struct TMD_P_G3G TMD_P_G3G;

typedef struct TMD_P_NF3 TMD_P_NF3;

typedef struct TMD_P_NG3 TMD_P_NG3;

typedef struct TMD_P_F4 TMD_P_F4;

typedef struct TMD_P_G4 TMD_P_G4;

typedef struct TMD_P_F4G TMD_P_F4G;

typedef struct TMD_P_G4G TMD_P_G4G;

typedef struct TMD_P_NF4 TMD_P_NF4;

typedef struct TMD_P_NG4 TMD_P_NG4;

typedef struct TMD_P_TF3 TMD_P_TF3;

typedef struct TMD_P_TG3 TMD_P_TG3;

typedef struct TMD_P_TNF3 TMD_P_TNF3;

typedef struct TMD_P_TNG3 TMD_P_TNG3;

typedef struct TMD_P_TF4 TMD_P_TF4;

typedef struct TMD_P_TG4 TMD_P_TG4;

typedef struct TMD_P_TNF4 TMD_P_TNF4;

typedef struct TMD_P_TNG4 TMD_P_TNG4;

typedef struct TMD_STRUCT TMD_STRUCT;

typedef struct VERT VERT;

typedef struct VERTC VERTC;

typedef struct GsADIV_FT4 GsADIV_FT4;

typedef struct GsADIV_P_FT4 GsADIV_P_FT4;

typedef struct GsADIV_GT4 GsADIV_GT4;

typedef struct GsADIV_P_GT4 GsADIV_P_GT4;

typedef struct GsADIV_G4 GsADIV_G4;

typedef struct GsADIV_P_GT4 GsADIV_P_G4;

typedef struct GsADIV_F4 GsADIV_F4;

typedef struct GsADIV_P_FT4 GsADIV_P_F4;

typedef struct GsADIV_FT3 GsADIV_FT3;

typedef struct GsADIV_P_FT3 GsADIV_P_FT3;

typedef struct GsADIV_GT3 GsADIV_GT3;

typedef struct GsADIV_P_GT3 GsADIV_P_GT3;

typedef struct GsADIV_G3 GsADIV_G3;

typedef struct GsADIV_P_GT3 GsADIV_P_G3;

typedef struct GsADIV_F3 GsADIV_F3;

typedef struct GsADIV_P_FT3 GsADIV_P_F3;

typedef struct _GsCOORDUNIT _GsCOORDUNIT;

typedef struct _GsCOORDUNIT GsCOORDUNIT;

typedef struct GsVIEWUNIT GsVIEWUNIT;

typedef struct GsRVIEWUNIT GsRVIEWUNIT;

typedef struct GsUNIT GsUNIT;

typedef struct GsTYPEUNIT GsTYPEUNIT;

typedef struct GsARGUNIT GsARGUNIT;

typedef struct GsWORKUNIT GsWORKUNIT;

typedef struct GsARGUNIT_NORMAL GsARGUNIT_NORMAL;

typedef struct GsARGUNIT_SHARED GsARGUNIT_SHARED;

typedef struct GsARGUNIT_IMAGE GsARGUNIT_IMAGE;

typedef struct GsARGUNIT_GND GsARGUNIT_GND;

typedef struct GsARGUNIT_GNDT GsARGUNIT_GNDT;

typedef struct GsARGUNIT_JntMIMe GsARGUNIT_JntMIMe;

typedef struct GsARGUNIT_RstJntMIMe GsARGUNIT_RstJntMIMe;

typedef struct GsARGUNIT_VNMIMe GsARGUNIT_VNMIMe;

typedef struct GsARGUNIT_RstVNMIMe GsARGUNIT_RstVNMIMe;

typedef struct GsARGUNIT_ANIM GsARGUNIT_ANIM;

typedef struct GsSEH GsSEH;

typedef struct GsSEQ GsSEQ;

typedef struct InitPos InitPos;

typedef struct t11TLinkedList1Z8PalEntry t11TLinkedList1Z8PalEntry;

typedef struct PalEntry PalEntry;

typedef struct t10Collection2Z8PalEntryi20 t10Collection2Z8PalEntryi20;

typedef struct PalCollection PalCollection;

typedef struct BIRDSTRUCT BIRDSTRUCT;

typedef struct BIRDSTRUCT Bird;

typedef struct Perch Perch;

typedef struct PInf PInf;

typedef struct bird bird;

typedef struct _HSCODESTREAM _HSCODESTREAM;

typedef struct _HSCODESTREAM *HSCODESTREAM;

typedef struct _SCODEEXECUTEDATA _SCODEEXECUTEDATA;

typedef struct _SCODEEXECUTEDATA SCODEEXECUTEDATA;

typedef struct _SCODEEXECUTEDATA *SCODEEXECUTEDATAPTR;

typedef void (*SEVTHANDLER)();

typedef struct _HSARCHIVE _HSARCHIVE;

typedef struct _HSARCHIVE *HSARCHIVE;

typedef struct _HSFILE _HSFILE;

typedef struct _HSFILE *HSFILE;

typedef struct _HSFINDFILE _HSFINDFILE;

typedef struct _HSFINDFILE *HSFINDFILE;

typedef struct _HSGDIOBJ _HSGDIOBJ;

typedef struct _HSGDIOBJ *HSGDIOBJ;

typedef struct _HSGDIFONT _HSGDIFONT;

typedef struct _HSGDIFONT *HSGDIFONT;

typedef struct _PARAMS _PARAMS;

typedef struct _PARAMS PARAMS;

typedef struct _PARAMS *PARAMSPTR;

typedef struct _PARAMS *LPPARAMS;

typedef unsigned char (*SMSGIDLEPROC)();

typedef void (*SMSGHANDLER)();

typedef struct _SNETCAPS _SNETCAPS;

typedef struct _SNETCAPS SNETCAPS;

typedef struct _SNETCAPS *SNETCAPSPTR;

typedef struct _SNETCREATEDATA _SNETCREATEDATA;

typedef struct _SNETCREATEDATA SNETCREATEDATA;

typedef struct _SNETCREATEDATA *SNETCREATEDATAPTR;

typedef struct _SNET_DATA_SYSCOLORTABLE _SNET_DATA_SYSCOLORTABLE;

typedef struct _SNET_DATA_SYSCOLORTABLE SNET_DATA_SYSCOLORTABLE;

typedef struct _SNET_DATA_SYSCOLORTABLE *SNET_DATA_SYSCOLORTABLEPTR;

typedef struct _SNETEVENT _SNETEVENT;

typedef struct _SNETEVENT SNETEVENT;

typedef struct _SNETEVENT *SNETEVENTPTR;

typedef unsigned char (*SNETABORTPROC)();

typedef unsigned char (*SNETCATEGORYPROC)();

typedef unsigned char (*SNETCHECKAUTHPROC)();

typedef unsigned char (*SNETCREATEPROC)();

typedef unsigned char (*SNETDRAWDESCPROC)();

typedef unsigned char (*SNETENUMDEVICESPROC)();

typedef unsigned char (*SNETENUMGAMESPROC)();

typedef unsigned char (*SNETENUMPROVIDERSPROC)();

typedef void (*SNETEVENTPROC)();

typedef unsigned char (*SNETGETARTPROC)();

typedef unsigned char (*SNETGETDATAPROC)();

typedef int (*SNETMESSAGEBOXPROC)();

typedef unsigned char (*SNETPLAYSOUNDPROC)();

typedef unsigned char (*SNETSELECTEDPROC)();

typedef unsigned char (*SNETSTATUSPROC)();

typedef struct _SNETPLAYERDATA _SNETPLAYERDATA;

typedef struct _SNETPLAYERDATA SNETPLAYERDATA;

typedef struct _SNETPLAYERDATA *SNETPLAYERDATAPTR;

typedef struct _SNETPROGRAMDATA _SNETPROGRAMDATA;

typedef struct _SNETPROGRAMDATA SNETPROGRAMDATA;

typedef struct _SNETPROGRAMDATA *SNETPROGRAMDATAPTR;

typedef struct _SNETUIDATA _SNETUIDATA;

typedef struct _SNETUIDATA SNETUIDATA;

typedef struct _SNETUIDATA *SNETUIDATAPTR;

typedef struct _SNETVERSIONDATA _SNETVERSIONDATA;

typedef struct _SNETVERSIONDATA SNETVERSIONDATA;

typedef struct _SNETVERSIONDATA *SNETVERSIONDATAPTR;

typedef struct _SNETADDR _SNETADDR;

typedef struct _SNETADDR SNETADDR;

typedef struct _SNETADDR *SNETADDRPTR;

typedef struct _SNETSPI_DEVICELIST _SNETSPI_DEVICELIST;

typedef struct _SNETSPI_DEVICELIST SNETSPI_DEVICELIST;

typedef struct _SNETSPI_DEVICELIST *SNETSPI_DEVICELISTPTR;

typedef struct _SNETSPI_GAMELIST _SNETSPI_GAMELIST;

typedef struct _SNETSPI_GAMELIST SNETSPI_GAMELIST;

typedef struct _SNETSPI_GAMELIST *SNETSPI_GAMELISTPTR;

typedef struct _SNETSPI _SNETSPI;

typedef struct _SNETSPI SNETSPI;

typedef struct _SNETSPI *SNETSPIPTR;

typedef unsigned char (*SNETSPIBIND)();

typedef unsigned char (*SNETSPIQUERY)();

typedef struct _HSVIDEO _HSVIDEO;

typedef struct _HSVIDEO *HSVIDEO;

typedef struct _SVIDPALETTEUSE _SVIDPALETTEUSE;

typedef struct _SVIDPALETTEUSE SVIDPALETTEUSE;

typedef struct _SVIDPALETTEUSE *SVIDPALETTEUSEPTR;

typedef struct CCritSect CCritSect;

typedef struct CLock CLock;

typedef enum _ui_classes _ui_classes;

typedef enum _copyprot_results _copyprot_results;

typedef void (*PLAYSND)();

typedef enum _mainmenu_selections _mainmenu_selections;

typedef enum _difficulty _difficulty;

typedef struct _gamedata TGAMEDATA;

typedef struct _gamedata _gamedata;

typedef struct _uiheroinfo TUIHEROINFO;

typedef struct _uiheroinfo *TPUIHEROINFO;

typedef struct _uidefaultstats _uidefaultstats;

typedef struct _uidefaultstats TUIDEFSTATS;

typedef struct _uidefaultstats *TPUIDEFSTATS;

typedef struct _uiheroinfo _uiheroinfo;

typedef unsigned char (*ENUMHEROPROC)();

typedef unsigned char (*ENUMHEROS)();

typedef unsigned char (*CREATEHERO)();

typedef unsigned char (*DELETEHERO)();

typedef unsigned char (*GETDEFHERO)();

typedef enum _selhero_selections _selhero_selections;

typedef int (*PROGRESSFCN)();

typedef enum _dialmodes _dialmodes;

typedef struct _modeminfo TMODEM;

typedef struct _modeminfo *TPMODEM;

typedef struct _modeminfo _modeminfo;

typedef struct OrigPkItemStruct OrigPkItemStruct;

typedef struct PcPkItemStruct PcPkItemStruct;

typedef struct PcPkPlayerStruct PcPkPlayerStruct;

typedef struct PkItemStruct PkItemStruct;

typedef struct PkPlayerStruct PkPlayerStruct;

typedef struct OMENUITEM OMENUITEM;

typedef struct OMENULIST OMENULIST;

typedef struct FMVDAT FMVDAT;

typedef struct kindexS kindexS;

typedef struct block block;

typedef struct FeMenuTable FeMenuTable;

typedef struct Creds Creds;

typedef enum hw_event hw_event;

typedef struct sjis sjis;

typedef struct _mdecanim _mdecanim;

typedef struct _mdecanim mdecanim;

typedef struct asec asec;

typedef unsigned long REG_OFF;

typedef struct CSDATA CSDATA;

typedef void (*MIADDPRC)();

typedef void (*MIPROC)();

typedef struct MissileData MissileData;

typedef struct MisFileData MisFileData;

typedef struct ThemeStruct ThemeStruct;

typedef struct _FILEHEADER _FILEHEADER;

typedef struct _FILEHEADER FILEHEADER;

typedef struct _FILEHEADER *FILEHEADERPTR;

typedef struct _HASHENTRY _HASHENTRY;

typedef struct _HASHENTRY HASHENTRY;

typedef struct _HASHENTRY *HASHENTRYPTR;

typedef struct _BLOCKENTRY _BLOCKENTRY;

typedef struct _BLOCKENTRY BLOCKENTRY;

typedef struct _BLOCKENTRY *BLOCKENTRYPTR;

typedef unsigned char (*TGetNameFcn)();

typedef struct _SHAREDDATA _SHAREDDATA;

typedef struct _SHAREDDATA SHAREDDATA;

typedef struct _SHAREDDATA *SHAREDDATAPTR;

typedef void (*TCrypt)();

typedef struct CompLevelMemImage CompLevelMemImage;

typedef struct CompLevelMaps CompLevelMaps;

typedef struct TMegaPkt TMegaPkt;

typedef struct TBuffer TBuffer;

typedef struct tagPATHNODE tagPATHNODE;

typedef struct tagPATHNODE PATHNODE;

typedef unsigned char (*CHECKFUNC1)();

typedef struct bbssbb bbssbb;

typedef struct MESSAGE_STR MESSAGE_STR;

typedef struct MONTH_DAYS MONTH_DAYS;

typedef unsigned char (*CHECKFUNC)();

typedef struct InvXY InvXY;

typedef struct MEM_HDR MEM_HDR;

typedef struct MEM_REG MEM_REG;

typedef struct MEM_HDR *(*FIND_ROUTINE)();

typedef struct FILE FILE;

