#include "types.h"

// === [ Overlay ID d ] ===

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

// address: 0x80123B68
// line start: 254
// line end:   256
void EA_cd_seek(int secnum) {
}


// address: 0x80123B70
// line start: 260
// line end:   264
void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80123BA4
// line start: 277
// line end:   283
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x80123BB4
// line start: 288
// line end:   295
void flush_cdstream() {
}


// address: 0x80123BD8
// line start: 304
// line end:   316
int check_complete_frame(struct strheader *h) {
	// register: 7
	register int ok;
	// register: 5
	register int i;
}


// address: 0x80123C58
// line start: 339
// line end:   342
void reset_cdstream() {
}


// address: 0x80123C80
// line start: 347
// line end:   359
void kill_stream_handlers() {
}


// address: 0x80123CF0
// line start: 369
// line end:   492
void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec) {
	{
		{
			// register: 2
			register unsigned long *ptr;
		}
	}
}


// address: 0x80123ED0
// line start: 496
// line end:   517
void CD_stream_handler(struct TASK *T) {
}


// address: 0x80123FC4
// line start: 523
// line end:   532
void install_stream_handlers() {
}


// address: 0x80124034
// line start: 543
// line end:   565
void cdstream_service() {
	// register: 4
	register int timeout_occured;
}


// address: 0x801240CC
// line start: 599
// line end:   634
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
	{
		{
			// register: 4
			register unsigned char *ptr;
		}
	}
}


// address: 0x801241EC
// line start: 646
// line end:   647
int cdstream_is_last_chunk() {
}


// address: 0x80124204
// line start: 659
// line end:   689
void cdstream_discard_chunk() {
}


// address: 0x80124304
// line start: 699
// line end:   716
void close_cdstream() {
}


// address: 0x80124398
// line start: 729
// line end:   740
void wait_cdstream() {
	// address: 0xFFFFFFF0
	auto int start_wait;
}


// address: 0x80124450
// line start: 757
// line end:   823
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
}


// address: 0x801245BC
// line start: 842
// line end:   853
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x801245F0
// line start: 867
// line end:   903
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
	// register: 5
	register int sz;
}


// address: 0x80124774
// line start: 911
// line end:   919
void DCT_out_handler() {
}


// address: 0x80124810
// line start: 929
// line end:   941
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x80124874
// line start: 953
// line end:   956
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x80124890
// line start: 970
// line end:   1038
int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct) {
	// register: 30
	register int xx;
	// register: 20
	register int x;
	// register: 23
	register int y;
	// register: 22
	register int xs;
	// register: 15
	register int ys;
	// register: 19
	register int w;
	// register: 21
	register int h;
	// address: 0xFFFFFF98
	auto int n;
	// register: 9
	register int ox;
	// register: 13
	register int oy;
}


// address: 0x80124C14
// line start: 1047
// line end:   1061
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x80124DE8
// line start: 1072
// line end:   1073
void clear_mdec_frame() {
}


// address: 0x80124DF4
// line start: 1082
// line end:   1127
void draw_mdec_polys() {
	// register: 10
	register int i;
	// register: 16
	register unsigned char cdbuf;
}


// address: 0x80125144
// line start: 1134
// line end:   1135
void invalidate_mdec_frame() {
}


// address: 0x80125158
// line start: 1144
// line end:   1145
int is_frame_decoded() {
}


// address: 0x80125164
// line start: 1158
// line end:   1212
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	// address: 0xFFFFFF50
	// size: 0x8
	auto struct RECT r;
	// address: 0xFFFFFF58
	// size: 0x5C
	auto struct DRAWENV de;
	// register: 9
	register int i;
}


// address: 0x801255B4
// line start: 1217
// line end:   1226
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x8012561C
// line start: 1238
// line end:   1243
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x8012566C
// line start: 1249
// line end:   1279
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
}


// address: 0x80125724
// line start: 1285
// line end:   1287
void kill_mdec_audio() {
}


// address: 0x80125754
// line start: 1292
// line end:   1293
void stop_mdec_audio() {
}


// address: 0x80125778
// line start: 1300
// line end:   1410
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


// address: 0x80125A14
// line start: 1417
// line end:   1430
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x80125AE0
// line start: 1436
// line end:   1438
void resync_audio() {
}


// address: 0x80125B10
// line start: 1447
// line end:   1454
void stop_mdec_stream() {
}


// address: 0x80125B5C
// line start: 1460
// line end:   1479
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80125C48
// line start: 1486
// line end:   1529
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80125DF8
// line start: 1548
// line end:   1606
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x80125FE4
// line start: 1626
// line end:   1645
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80126098
// line start: 1652
// line end:   1655
void clear_mdec_queue() {
}


// address: 0x801260C4
// line start: 1666
// line end:   1672
void StrClearVRAM() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x80126128
// line start: 1682
// line end:   1860
short PlayFMVOverLay(char *filename, int w, int h) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT r;
}


