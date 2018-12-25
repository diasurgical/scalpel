// global_d.cpp

#include "types.h"

// address: 0x80137418
// size: 0xF000
extern unsigned char map_buf[61440];

// address: 0x80146418
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x8014646C
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x80146AAC
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x801470EC
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x801470FC
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x8014773C
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x80147764
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x801478A4
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

// address: 0x80147924
// size: 0x78
extern int (*stream_buf[504])[30];

// address: 0x8014799C
// size: 0x78
extern struct strheader *stream_bufh[30];

