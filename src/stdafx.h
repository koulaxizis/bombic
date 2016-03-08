#ifndef _STDAFX_H_
#define _STDAFX_H_


#include <SDL.h>
#include "HD3DX.h"
#include "HDSound.h"
#include "HDInput.h"

#define SND_MENU_CHNG         0 
#define SND_MENU_SEL          1
#define SND_GAME_EXPLODE      2
#define SND_GAME_MEGA_EXPLODE 3
#define SND_GAME_BOMBPUT      4
#define SND_GAME_BONUS        5
#define SND_GAME_TIME_BONUS   6
#define SND_GAME_DEAD_BOMBER  7
#define SND_GAME_DEAD_MRCHA   8


#define gfx_modules gfx_module

extern HDSoundBuffer g_sb[25];


#define SAFE_DELETE(x) { if (x != NULL) {delete x; x = NULL; } }


#endif
