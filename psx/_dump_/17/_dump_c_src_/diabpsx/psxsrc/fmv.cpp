// C:\diabpsx\PSXSRC\FMV.CPP

#include "types.h"

// address: 0x80147920
// line start: 259
// line end:   260
void EA_cd_seek(int secnum) {
}


// address: 0x80147948
// line start: 265
// line end:   269
void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8014797C
// line start: 282
// line end:   288
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x8014798C
// line start: 293
// line end:   300
void flush_cdstream() {
}


// address: 0x801479B0
// line start: 309
// line end:   321
int check_complete_frame(struct strheader *h) {
	// register: 7
	register int ok;
	// register: 5
	register int i;
}


// address: 0x80147A30
// line start: 344
// line end:   347
void reset_cdstream() {
}


// address: 0x80147A58
// line start: 352
// line end:   364
void kill_stream_handlers() {
}


// address: 0x80147AC8
// line start: 374
// line end:   497
void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec) {
	{
		{
			// register: 2
			register unsigned long *ptr;
		}
	}
}


// address: 0x80147CA8
// line start: 501
// line end:   522
void CD_stream_handler(struct TASK *T) {
}


// address: 0x80147D9C
// line start: 528
// line end:   537
void install_stream_handlers() {
}


// address: 0x80147E0C
// line start: 548
// line end:   570
void cdstream_service() {
	// register: 4
	register int timeout_occured;
}


// address: 0x80147EA4
// line start: 604
// line end:   639
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
	{
		{
			// register: 4
			register unsigned char *ptr;
		}
	}
}


// address: 0x80147FC4
// line start: 651
// line end:   652
int cdstream_is_last_chunk() {
}


// address: 0x80147FDC
// line start: 664
// line end:   694
void cdstream_discard_chunk() {
}


// address: 0x801480DC
// line start: 704
// line end:   721
void close_cdstream() {
}


// address: 0x80148170
// line start: 734
// line end:   745
void wait_cdstream() {
	// address: 0xFFFFFFF0
	auto int start_wait;
}


// address: 0x80148228
// line start: 762
// line end:   828
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
}


// address: 0x80148394
// line start: 847
// line end:   858
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x801483C8
// line start: 872
// line end:   908
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
	// register: 5
	register int sz;
}


// address: 0x8014854C
// line start: 916
// line end:   924
void DCT_out_handler() {
}


// address: 0x801485E8
// line start: 934
// line end:   946
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x8014864C
// line start: 958
// line end:   961
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x80148668
// line start: 975
// line end:   1043
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


// address: 0x801489EC
// line start: 1052
// line end:   1066
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x80148BC0
// line start: 1077
// line end:   1078
void clear_mdec_frame() {
}


// address: 0x80148BCC
// line start: 1087
// line end:   1132
void draw_mdec_polys() {
	// register: 10
	register int i;
	// register: 16
	register unsigned char cdbuf;
}


// address: 0x80148F1C
// line start: 1139
// line end:   1140
void invalidate_mdec_frame() {
}


// address: 0x80148F30
// line start: 1149
// line end:   1150
int is_frame_decoded() {
}


// address: 0x80148F3C
// line start: 1163
// line end:   1217
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


// address: 0x8014938C
// line start: 1222
// line end:   1231
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x801493F4
// line start: 1243
// line end:   1248
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x80149444
// line start: 1254
// line end:   1284
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
}


// address: 0x801494FC
// line start: 1290
// line end:   1292
void kill_mdec_audio() {
}


// address: 0x8014952C
// line start: 1297
// line end:   1298
void stop_mdec_audio() {
}


// address: 0x80149550
// line start: 1305
// line end:   1409
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


// address: 0x801497EC
// line start: 1416
// line end:   1429
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x801498B8
// line start: 1435
// line end:   1437
void resync_audio() {
}


// address: 0x801498E8
// line start: 1446
// line end:   1453
void stop_mdec_stream() {
}


// address: 0x80149934
// line start: 1459
// line end:   1478
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80149A20
// line start: 1485
// line end:   1528
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80149BD0
// line start: 1547
// line end:   1605
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x80149DBC
// line start: 1625
// line end:   1644
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80149E70
// line start: 1651
// line end:   1654
void clear_mdec_queue() {
}


// address: 0x80149E9C
// line start: 1665
// line end:   1671
void StrClearVRAM() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x80149F00
// line start: 1681
// line end:   1859
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
	// register: 23
	register int user_quit;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT r;
}


