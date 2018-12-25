// C:\diabpsx\SOURCE\OBJPRINT.CPP

#include "types.h"

// address: 0x8007D5B8
// size: 0x28
// line start: 277
// line end:   304
struct POLY_FT4 *DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos, int XOffSet, int YOffSet) {
	// register: 16
	register int AnimFrame;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 2
	register int LoadIndex;
	// register: 17
	register int Creature;
	{
		{
			// register: 16
			register int PhysFrame;
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


// address: 0x8007D74C
// size: 0x28
// line start: 312
// line end:   331
struct POLY_FT4 *LightObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 19
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8007D810
// size: 0x28
// line start: 335
// line end:   350
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 2
	register int AnimFrame;
	// register: 3
	register int LoadIndex;
	// register: 5
	register int Creature;
}


// address: 0x8007D8D8
// line start: 384
// line end:   395
void ResetFlames__Fv() {
	{
		{
			{
				// register: 17
				register int i;
			}
		}
	}
}


// address: 0x8007D9A0
// line start: 400
// line end:   447
void PrintOBJ_FIRE__Fiii(int ScrX, int ScrY, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4a;
	// address: 0xFFFFFFD0
	// size: 0x70
	auto struct TextDat *ThisDat;
	// register: 30
	register int diff;
	// register: 22
	// size: 0x6
	register struct CINDER *C;
	{
		// register: 23
		register int i;
		{
			// register: 21
			register unsigned short fx;
			// register: 19
			register unsigned short fy;
			// register: 18
			register unsigned short fyi;
		}
	}
}


// address: 0x8007DB58
// size: 0x28
// line start: 496
// line end:   594
struct POLY_FT4 *DoorObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 9
	register int AnimFrame;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 21
	// size: 0x70
	register struct TextDat *ThisDat;
	// register: 16
	// size: 0x4
	register struct DoorOff *DrOff;
	// register: 2
	register int LoadIndex;
	// register: 5
	register int Creature;
	// register: 6
	register int OpenClosed;
	// register: 8
	register int Dir;
	// register: 16
	register int Type;
}


// address: 0x8007DD94
// line start: 605
// line end:   609
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x8007DE74
// size: 0x28
// line start: 624
// line end:   634
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007DED4
// line start: 646
// line end:   651
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x70
	register struct TextDat *ThisDat;
}


// address: 0x8007DF68
// size: 0x28
// line start: 661
// line end:   670
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007DFEC
// size: 0x28
// line start: 680
// line end:   689
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E070
// size: 0x28
// line start: 699
// line end:   711
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E0FC
// size: 0x28
// line start: 721
// line end:   733
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E188
// size: 0x28
// line start: 744
// line end:   770
struct POLY_FT4 *PrintOBJ_BARRELEX__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	register int AnimFrame;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			// register: 16
			register int PhysFrame;
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


// address: 0x8007E2E0
// size: 0x28
// line start: 780
// line end:   787
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x8007E3B8
// size: 0x28
// line start: 797
// line end:   804
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x8007E490
// size: 0x28
// line start: 815
// line end:   816
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E4B4
// size: 0x28
// line start: 827
// line end:   856
struct POLY_FT4 *PrintOBJ_MCIRCLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 19
	register int AnimFrame;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 18
	register int ot;
	// register: 2
	register int LoadIndex;
	// register: 5
	register int Creature;
	// register: 20
	register int PhysFrame;
	{
		{
			// register: 16
			// size: 0x28
			register struct POLY_FT4 *ShadFt4;
		}
	}
}


// address: 0x8007E650
// size: 0x28
// line start: 866
// line end:   890
struct POLY_FT4 *PrintOBJ_STORYBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	register int AnimFrame;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 2
	register int LoadIndex;
	// register: 17
	register int Creature;
	// register: 16
	register int PhysFrame;
	{
		{
			// register: 16
			// size: 0x28
			register struct POLY_FT4 *ShadFt4;
		}
	}
}


// address: 0x8007E7D8
// size: 0x28
// line start: 900
// line end:   901
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E7FC
// size: 0x28
// line start: 912
// line end:   913
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E820
// size: 0x28
// line start: 923
// line end:   924
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E844
// size: 0x28
// line start: 936
// line end:   939
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	register int ot;
}


// address: 0x8007E880
// size: 0x28
// line start: 951
// line end:   954
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


