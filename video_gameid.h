#ifndef VIDEO_GAMEID_H
#define VIDEO_GAMEID_H

typedef enum : uint8_t {
	GAMEID_SYS_ID_RESET = 0x00,
	GAMEID_SYS_ID_PS1 = 0x01,
	GAMEID_SYS_ID_PS2 = 0x02,
	GAMEID_SYS_ID_M64 = 0x03,
	GAMEID_SYS_ID_XBOX = 0x04,
	GAMEID_SYS_ID_WII = 0x05,
	GAMEID_SYS_ID_GC = 0x06,
	GAMEID_SYS_ID_DC = 0x07,
	GAMEID_SYS_ID_SNES = 0x08,
	GAMEID_SYS_ID_GENESIS = 0x09,
	GAMEID_SYS_ID_SATURN = 0x0A,
	GAMEID_SYS_ID_3DO = 0x0B,
	GAMEID_SYS_ID_WIIU = 0x0C,
} gameid_sys_id_t;

void video_handle_gameid(gameid_sys_id_t sys_id, const char* gameid);

#endif // VIDEO_GAMEID_H
