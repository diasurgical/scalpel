#include "types.h"

// === [ Overlay ID d ] ===

// address: 0x80126D80
// size: 0xF000
extern unsigned char map_buf[61440];

// address: 0x80135D80
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x80135DD4
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x80136414
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x80136A54
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x80136A64
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x801370A4
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x801370CC
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x8013720C
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

// address: 0x8013728C
// size: 0x84
extern int (*stream_buf[504])[33];

// address: 0x80137310
// size: 0x84
extern struct strheader *stream_bufh[33];

// address: 0x80137394
// line start: 274
// line end:   275
void EA_cd_seek(int secnum) {
}


// address: 0x801373BC
// line start: 280
// line end:   284
void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x801373F0
// line start: 297
// line end:   303
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x80137400
// line start: 308
// line end:   315
void flush_cdstream() {
}


// address: 0x80137424
// line start: 324
// line end:   336
int check_complete_frame(struct strheader *h) {
	// register: 7
	register int ok;
	// register: 5
	register int i;
}


// address: 0x801374A4
// line start: 359
// line end:   362
void reset_cdstream() {
}


// address: 0x801374CC
// line start: 367
// line end:   379
void kill_stream_handlers() {
}


// address: 0x8013753C
// line start: 389
// line end:   513
void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec) {
	{
		{
			// register: 2
			register unsigned long *ptr;
		}
	}
}


// address: 0x80137730
// line start: 517
// line end:   538
void CD_stream_handler(struct TASK *T) {
	{
	}
}


// address: 0x8013781C
// line start: 545
// line end:   554
void install_stream_handlers() {
}


// address: 0x8013788C
// line start: 565
// line end:   587
void cdstream_service() {
	// register: 4
	register int timeout_occured;
}


// address: 0x80137924
// line start: 621
// line end:   656
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
	{
		{
			// register: 4
			register unsigned char *ptr;
		}
	}
}


// address: 0x80137A48
// line start: 668
// line end:   669
int cdstream_is_last_chunk() {
}


// address: 0x80137A60
// line start: 681
// line end:   711
void cdstream_discard_chunk() {
}


// address: 0x80137B60
// line start: 721
// line end:   738
void close_cdstream() {
}


// address: 0x80137BD8
// line start: 779
// line end:   849
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
}


// address: 0x80137D48
// line start: 868
// line end:   879
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x80137D7C
// line start: 893
// line end:   929
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
	// register: 5
	register int sz;
}


// address: 0x80137F00
// line start: 937
// line end:   945
void DCT_out_handler() {
}


// address: 0x80137F9C
// line start: 955
// line end:   969
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x8013800C
// line start: 981
// line end:   984
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x80138028
// line start: 998
// line end:   1067
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


// address: 0x80138418
// line start: 1076
// line end:   1090
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x801385EC
// line start: 1101
// line end:   1102
void clear_mdec_frame() {
}


// address: 0x801385F8
// line start: 1111
// line end:   1150
void draw_mdec_polys() {
	// register: 10
	register int i;
	// register: 16
	register unsigned char cdbuf;
}


// address: 0x80138944
// line start: 1156
// line end:   1157
void invalidate_mdec_frame() {
}


// address: 0x80138958
// line start: 1166
// line end:   1167
int is_frame_decoded() {
}


// address: 0x80138964
// line start: 1180
// line end:   1223
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT r;
	// register: 9
	register int i;
}


// address: 0x80138CF4
// line start: 1228
// line end:   1237
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x80138D5C
// line start: 1249
// line end:   1254
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x80138DAC
// line start: 1260
// line end:   1290
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
}


// address: 0x80138E64
// line start: 1296
// line end:   1298
void kill_mdec_audio() {
}


// address: 0x80138E94
// line start: 1303
// line end:   1304
void stop_mdec_audio() {
}


// address: 0x80138EB8
// line start: 1311
// line end:   1416
void play_mdec_audio(unsigned char *data, struct asec *h) {
	// register: 16
	register int i;
	// register: 7
	register int b;
	// register: 19
	register int offs;
	// address: 0xFFFFFF90
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 5
	register unsigned char *dp;
	// register: 20
	register int hsize;
}


// address: 0x80139154
// line start: 1423
// line end:   1436
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x80139220
// line start: 1442
// line end:   1444
void resync_audio() {
}


// address: 0x80139250
// line start: 1453
// line end:   1460
void stop_mdec_stream() {
}


// address: 0x8013929C
// line start: 1466
// line end:   1485
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80139388
// line start: 1492
// line end:   1535
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80139538
// line start: 1554
// line end:   1612
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x80139724
// line start: 1632
// line end:   1651
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x801397D8
// line start: 1658
// line end:   1661
void clear_mdec_queue() {
}


// address: 0x80139804
// line start: 1672
// line end:   1678
void StrClearVRAM() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x80139868
// line start: 1688
// line end:   1868
short PlayFMVOverLay(char *filename, int w, int h) {
	// register: 20
	register int start_time;
	// register: 22
	register int start_frame;
	// register: 2
	register int afrm;
	// register: 4
	register int efrm;
	// register: 19
	register int br;
	// register: 21
	register int fade;
	// register: 17
	register int user_quit;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT r;
}


// address: 0x80139BEC
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad(struct CPad *this) {
}


