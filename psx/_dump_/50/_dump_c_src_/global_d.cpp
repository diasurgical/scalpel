// global_d.cpp

#include "types.h"

// address: 0x801310B0
// size: 0x19000
extern unsigned char map_buf[102400];

// address: 0x8014A0B0
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x8014A104
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x8014A744
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x8014AD84
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x8014AD94
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x8014B3D4
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x8014B3FC
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x8014B53C
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

