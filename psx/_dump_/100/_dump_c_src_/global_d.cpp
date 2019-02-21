// global_d.cpp

#include "types.h"

// address: 0x801394F8
// size: 0xF000
extern unsigned char map_buf[61440];

// address: 0x801484F8
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x8014854C
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x80148B8C
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x801491CC
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x801491DC
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x8014981C
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x80149844
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x80149984
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

// address: 0x80149A04
// size: 0x84
extern int (*stream_buf[504])[33];

// address: 0x80149A88
// size: 0x84
extern struct strheader *stream_bufh[33];

