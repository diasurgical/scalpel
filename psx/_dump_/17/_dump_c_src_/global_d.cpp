// global_d.cpp

#include "types.h"

// address: 0x801238BC
// size: 0x22600
extern unsigned char img_buf[140800];

// address: 0x80145EBC
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x80145F10
// size: 0x100
extern struct DR_ENV mdec_env[2][2];

// address: 0x80146010
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x80146650
// size: 0x30
extern struct DR_MODE mdec_drmd[2][2];

// address: 0x80146680
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x80146CC0
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x80146CD0
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x80147310
// size: 0x320
extern struct SVECTOR temp_offs[10][10];

// address: 0x80147630
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x80147658
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x80147798
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

// address: 0x80147818
// size: 0x84
extern int (*stream_buf[504])[33];

// address: 0x8014789C
// size: 0x84
extern struct strheader *stream_bufh[33];

