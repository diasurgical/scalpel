// global_d.cpp

#include "types.h"

// address: 0x80122104
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x80122158
// size: 0x100
extern struct DR_ENV mdec_env[2][2];

// address: 0x80122258
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x80122898
// size: 0x30
extern struct DR_MODE mdec_drmd[2][2];

// address: 0x801228C8
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x80122F08
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x80122F18
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x80123558
// size: 0x320
extern struct SVECTOR temp_offs[10][10];

// address: 0x80123878
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x801238A0
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x801239E0
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

// address: 0x80123A60
// size: 0x84
extern int (*stream_buf[504])[33];

// address: 0x80123AE4
// size: 0x84
extern struct strheader *stream_bufh[33];

