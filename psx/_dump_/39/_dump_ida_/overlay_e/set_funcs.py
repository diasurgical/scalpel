del_items(0x80155F6C)
SetType(0x80155F6C, "void _cd_seek(int sec)")
del_items(0x80155FA4)
SetType(0x80155FA4, "void init_cdstream(int chunksize, unsigned char *buf, int bufsize)")
del_items(0x80155FCC)
SetType(0x80155FCC, "void flush_cdstream()")
del_items(0x80156020)
SetType(0x80156020, "void reset_cdstream()")
del_items(0x80156050)
SetType(0x80156050, "void kill_stream_handlers()")
del_items(0x80156080)
SetType(0x80156080, "void stream_cdready_handler(unsigned char status, unsigned char *result, int idx, int i, int sec, struct CdlLOC subcode[3], unsigned long OldGp)")
del_items(0x801562D4)
SetType(0x801562D4, "void install_stream_handlers()")
del_items(0x80156310)
SetType(0x80156310, "void cdstream_service()")
del_items(0x80156400)
SetType(0x80156400, "int cdstream_get_chunk(unsigned char **data, struct strheader **h)")
del_items(0x80156518)
SetType(0x80156518, "int cdstream_is_last_chunk()")
del_items(0x80156530)
SetType(0x80156530, "void cdstream_discard_chunk()")
del_items(0x80156650)
SetType(0x80156650, "void close_cdstream()")
del_items(0x80156690)
SetType(0x80156690, "void wait_cdstream()")
del_items(0x80156748)
SetType(0x80156748, "int open_cdstream(char *fname, int secoffs, int seclen)")
del_items(0x80156870)
SetType(0x80156870, "int set_mdec_img_buffer(unsigned char *p)")
del_items(0x801568A4)
SetType(0x801568A4, "void start_mdec_decode(unsigned char *data, int x, int y, int w, int h)")
del_items(0x80156A00)
SetType(0x80156A00, "void DCT_out_handler()")
del_items(0x80156AB0)
SetType(0x80156AB0, "void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table)")
del_items(0x80156B20)
SetType(0x80156B20, "void init_mdec_buffer(char *buf, int size)")
del_items(0x80156B3C)
SetType(0x80156B3C, "int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct)")
del_items(0x80156F2C)
SetType(0x80156F2C, "void rebuild_mdec_polys(int x, int y)")
del_items(0x80157100)
SetType(0x80157100, "void clear_mdec_frame()")
del_items(0x8015710C)
SetType(0x8015710C, "void draw_mdec_polys(int bright)")
del_items(0x80157484)
SetType(0x80157484, "void invalidate_mdec_frame()")
del_items(0x80157498)
SetType(0x80157498, "int is_frame_decoded()")
del_items(0x801574A4)
SetType(0x801574A4, "void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct)")
del_items(0x80157834)
SetType(0x80157834, "void set_mdec_poly_bright(int br)")
del_items(0x8015789C)
SetType(0x8015789C, "int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer)")
del_items(0x801578EC)
SetType(0x801578EC, "void init_mdec_audio(int rate)")
del_items(0x80157A04)
SetType(0x80157A04, "void kill_mdec_audio()")
del_items(0x80157A34)
SetType(0x80157A34, "void stop_mdec_audio()")
del_items(0x80157A58)
SetType(0x80157A58, "void play_mdec_audio(unsigned char *data, struct asec *h)")
del_items(0x80157D8C)
SetType(0x80157D8C, "void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr)")
del_items(0x80157E58)
SetType(0x80157E58, "void resync_audio()")
del_items(0x80157E68)
SetType(0x80157E68, "void stop_mdec_stream()")
del_items(0x80157EAC)
SetType(0x80157EAC, "void dequeue_stream()")
del_items(0x80157F98)
SetType(0x80157F98, "void dequeue_animation()")
del_items(0x80158148)
SetType(0x80158148, "void decode_mdec_stream(int frames_elapsed)")
del_items(0x80158328)
SetType(0x80158328, "void play_mdec_stream(char *filename, int speed, int start, int end)")
del_items(0x801583C4)
SetType(0x801583C4, "void clear_mdec_queue()")
del_items(0x801583F0)
SetType(0x801583F0, "void StrClearVRAM()")
del_items(0x801584B0)
SetType(0x801584B0, "short PlayFMVOverLay(char *filename, int w, int h)")
del_items(0x80158538)
SetType(0x80158538, "void LoPlayFMVOverLay()")
del_items(0x80158998)
SetType(0x80158998, "unsigned short GetDown__C4CPad(struct CPad *this)")