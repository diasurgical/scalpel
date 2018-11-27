#include "types.h"

// === [ Overlay ID d ] ===

// address: 0x8013BDD0
// size: 0xF000
extern unsigned char map_buf[61440];

// address: 0x8014ADD0
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x8014AE24
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x8014B464
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x8014BAA4
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x8014BAB4
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x8014C0F4
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x8014C11C
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x8014C25C
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

// address: 0x8014C2DC
// size: 0x78
extern int (*stream_buf[504])[30];

// address: 0x8014C354
// size: 0x78
extern struct strheader *stream_bufh[30];

// address: 0x8014C3CC
// line start: 284
// line end:   286
void EA_cd_seek(int secnum) {
}


// address: 0x8014C3D4
// line start: 290
// line end:   294
void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8014C408
// line start: 307
// line end:   313
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x8014C418
// line start: 318
// line end:   325
void flush_cdstream() {
}


// address: 0x8014C43C
// line start: 334
// line end:   346
int check_complete_frame(struct strheader *h) {
	// register: 7
	register int ok;
	// register: 5
	register int i;
}


// address: 0x8014C4BC
// line start: 369
// line end:   372
void reset_cdstream() {
}


// address: 0x8014C4E4
// line start: 377
// line end:   389
void kill_stream_handlers() {
}


// address: 0x8014C548
// line start: 401
// line end:   527
void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec) {
	{
		{
			// register: 2
			register unsigned long *ptr;
		}
	}
}


// address: 0x8014C748
// line start: 531
// line end:   550
void CD_stream_handler(struct TASK *T) {
}


// address: 0x8014C83C
// line start: 556
// line end:   565
void install_stream_handlers() {
}


// address: 0x8014C8AC
// line start: 576
// line end:   598
void cdstream_service() {
	// register: 4
	register int timeout_occured;
}


// address: 0x8014C944
// line start: 632
// line end:   667
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
	{
		{
			// register: 4
			register unsigned char *ptr;
		}
	}
}


// address: 0x8014CA68
// line start: 679
// line end:   680
int cdstream_is_last_chunk() {
}


// address: 0x8014CA80
// line start: 692
// line end:   722
void cdstream_discard_chunk() {
}


// address: 0x8014CB80
// line start: 732
// line end:   747
void close_cdstream() {
}


// address: 0x8014CBF4
// line start: 791
// line end:   868
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
}


// address: 0x8014CD90
// line start: 887
// line end:   898
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x8014CDC4
// line start: 912
// line end:   948
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
	// register: 5
	register int sz;
}


// address: 0x8014CF48
// line start: 956
// line end:   964
void DCT_out_handler() {
}


// address: 0x8014CFE4
// line start: 974
// line end:   988
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x8014D054
// line start: 1000
// line end:   1003
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x8014D070
// line start: 1017
// line end:   1086
int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct) {
	// register: 30
	register int xx;
	// register: 20
	register int x;
	// register: 22
	register int y;
	// register: 23
	register int xs;
	// address: 0xFFFFFFA8
	auto int ys;
	// register: 19
	register int w;
	// register: 21
	register int h;
	// address: 0xFFFFFFB0
	auto int n;
	// address: 0xFFFFFFB8
	auto int ox;
	// address: 0xFFFFFFC0
	auto int oy;
}


// address: 0x8014D460
// line start: 1095
// line end:   1109
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x8014D634
// line start: 1120
// line end:   1121
void clear_mdec_frame() {
}


// address: 0x8014D640
// line start: 1130
// line end:   1169
void draw_mdec_polys() {
	// register: 10
	register int i;
	// register: 16
	register unsigned char cdbuf;
}


// address: 0x8014D98C
// line start: 1175
// line end:   1176
void invalidate_mdec_frame() {
}


// address: 0x8014D9A0
// line start: 1185
// line end:   1186
int is_frame_decoded() {
}


// address: 0x8014D9AC
// line start: 1199
// line end:   1242
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT r;
	// register: 9
	register int i;
}


// address: 0x8014DD3C
// line start: 1247
// line end:   1256
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x8014DDA4
// line start: 1268
// line end:   1273
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x8014DDF4
// line start: 1279
// line end:   1317
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
	{
		// register: 3
		register int i;
	}
}


// address: 0x8014DEF8
// line start: 1322
// line end:   1324
void kill_mdec_audio() {
}


// address: 0x8014DF28
// line start: 1329
// line end:   1330
void stop_mdec_audio() {
}


// address: 0x8014DF4C
// line start: 1337
// line end:   1454
void play_mdec_audio(unsigned char *data, struct asec *h) {
	// register: 16
	register int i;
	// register: 6
	register int b;
	// register: 17
	register int offs;
	// address: 0xFFFFFF98
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 4
	register unsigned char *dp;
	// register: 19
	register int hsize;
}


// address: 0x8014E1F0
// line start: 1461
// line end:   1474
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x8014E2BC
// line start: 1480
// line end:   1482
void resync_audio() {
}


// address: 0x8014E2E8
// line start: 1491
// line end:   1498
void stop_mdec_stream() {
}


// address: 0x8014E334
// line start: 1504
// line end:   1523
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014E420
// line start: 1530
// line end:   1573
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014E5D0
// line start: 1592
// line end:   1650
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x8014E7BC
// line start: 1670
// line end:   1689
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014E870
// line start: 1696
// line end:   1699
void clear_mdec_queue() {
}


// address: 0x8014E89C
// line start: 1710
// line end:   1723
void StrClearVRAM() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x8014E95C
// line start: 1733
// line end:   1954
short PlayFMVOverLay(char *filename, int w, int h) {
	// register: 20
	register int start_time;
	// register: 23
	register int start_frame;
	// register: 2
	register int afrm;
	// register: 4
	register int efrm;
	// register: 19
	register int br;
	// register: 22
	register int fade;
	// register: 21
	register int user_quit;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT r;
	// register: 17
	// size: 0x6C
	register struct CPad *P1;
	// register: 18
	// size: 0x6C
	register struct CPad *P2;
}


// address: 0x8014EE20
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad(struct CPad *this) {
}


