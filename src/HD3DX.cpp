/*  Hippo Games - 2001 (C) - http://www.prog.cz/hippo/
 *    __________________________________________________
 *   /\     __  __    _____   ______   ______   ______  \
 *   \ \   /\ \|\ \  /\_  _\ /\  __ \ /\  __ \ /\  __ \  \
 *    \ \  \ \ \_\ \ \//\ \/ \ \ \_\ \\ \ \_\ \\ \ \ \ \  \
 *     \ \  \ \  __ \  \ \ \  \ \  __/ \ \  __/ \ \ \ \ \  \
 *      \ \  \ \ \/\ \  \_\ \_ \ \ \/   \ \ \/   \ \ \_\ \  \
 *       \ \  \ \_\ \_\ /\____\ \ \_\    \ \_\    \ \_____\  \
 *        \ \  \/_/\/_/ \/____/  \/_/     \/_/     \/_____/   \
 *         \ \_________________________________________________\
 *          \/_________________________________________________/
 *                           
 * 
 *  Souboru : HD3DX.cpp
 *  
 *  Projekt : HD3DX
 *  
 *  Autor   : Bernard Lidicky [berny@prog.cz]
 *
 *  Datum   : 15.8.2001
 *
 */                 

#include "config.h"
#include "searchfile.h"
#include <iostream>
#include "stdafx.h"
#include "HD3DX.h"

#include <SDL_ttf.h>

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

using namespace std;


//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

HD3DX::HD3DX()
{
	for (int i = 0; i < MAX_HD3DX_TEXTURES; i++) {
		m_text[i].surf = NULL;
		m_text[i].usage = 0;
		m_text[i].name = "";
		m_text[i].type = TEXTURE_NONE;
	}
	
	m_valid = false;
}

///////////////////////////////////////////////////////////////////////////////////////

HD3DX::~HD3DX()
{

}


///////////////////////////////////////////////////////////////////////////////////////

bool HD3DX::Create(int w, int h, int bpp, bool windowed)
{

	// SDL video inicializaton
	if(SDL_WasInit(SDL_INIT_VIDEO)==0)
		if ( SDL_InitSubSystem(SDL_INIT_VIDEO) < 0 ) {
        	cerr << "SDL video inicizlization failed: " 
			<<  SDL_GetError() << endl;
		return false;
		}                      
   
	Uint32 flags = SDL_ANYFORMAT;
	if (!windowed) flags = SDL_FULLSCREEN;

	if ( (m_screen = SDL_SetVideoMode(w, h, bpp, flags)) == NULL ) {
		cerr << "Video mode creation failed: " << SDL_GetError() << endl;
		return false;
	}

//#ifdef DEBUG
//	if (0 == m_screen->flags & SDL_HWSURFACE) { printf("Can't get hardware surface\n"); }
//	if (0 == m_screen->flags & SDL_DOUBLEBUF) { printf("Can't get double buffer surface\n"); }
//#endif
	m_bpp = bpp;
	m_windowed = windowed;
	m_w = w;
	m_h = h;

	m_valid = true;

	return true;
}

///////////////////////////////////////////////////////////////////////////////////////

void HD3DX::Destroy()
{
	DestroyTextures();

	// m_screen if freed by SDL_Quit();
}

///////////////////////////////////////////////////////////////////////////////////////

int HD3DX::CreateTextureFromFile(string file, int ID)
{
	if (ID == -1) ID = FindFreeText();

	if (ID == 0) return 0;

	// load from file
	m_text[ID].surf = IMG_Load_Search(file.c_str());

	if (m_text[ID].surf == NULL) return 0;

/*
	// creating a HW_SURF bitmap:
	SDL_Surface *tmp = m_text[ID].surf;
	m_text[ID].surf = SDL_CreateRGBSurface(SDL_HWSURFACE|SDL_SRCCOLORKEY,
		tmp->w, tmp->h,
		m_screen->format->BitsPerPixel, m_screen->format->Rmask, 
		m_screen->format->Gmask, m_screen->format->Bmask, 
		0);
		
	if (m_text[ID].surf == NULL) m_text[ID].surf = tmp;
	else {
		SDL_BlitSurface(tmp, NULL, m_text[ID].surf, NULL);
		SDL_FreeSurface(tmp);
	}


	if (0 == m_text[ID].surf->flags & SDL_HWSURFACE) { 
		cout << "Can't get hardware surface: " << file << endl;
	} else {
		cout << "Have hardware surface: " << file << endl;
	}
*/
	// transparent color - pink
	if ( SDL_SetColorKey(m_text[ID].surf,  SDL_SRCCOLORKEY, 
		 SDL_MapRGB(m_text[ID].surf->format, 255, 0, 255)) < 0 ) {
		return 0;
	}

	m_text[ID].name = file;

	m_text[ID].virtID = 0;
	m_text[ID].type = TEXTURE_REAL;
	m_text[ID].rect.x = 0;
	m_text[ID].rect.y = 0;
	m_text[ID].rect.w = m_text[ID].surf->w;
	m_text[ID].rect.h = m_text[ID].surf->h;

	return ID;
}

///////////////////////////////////////////////////////////////////////////////////////
/*
int HD3DX::CreateTexture(int w, int h, int ID)
{
	if (ID == -1) ID = FindFreeText();
	if (ID == 0) return 0;

	 m_text[ID].surf = 
	if (!SUCCEEDED(D3DXCreateTexture(m_dev, w, h, 0, D3DUSAGE_RENDERTARGET, D3DFMT_UNKNOWN,
		  D3DPOOL_DEFAULT, &m_text[ID].d3dt)))
		return 0;

	m_text[ID].info.Width = w;
	m_text[ID].info.Height = h;

	m_text[ID].name = "";
	m_text[ID].type = TEXTURE_REAL;
	m_text[ID].virtID = 0;

	m_text[ID].rect.x = 0;
	m_text[ID].rect.y = 0;
	m_text[ID].rect.w = w;
	m_text[ID].rect.h = h;

	return ID;
}
*/
///////////////////////////////////////////////////////////////////////////////////////

void HD3DX::DestroyTexture(int ID)
{
	if (ID <= 0) return;
	if (m_text[ID].surf != NULL) {
		SDL_FreeSurface(m_text[ID].surf);
		m_text[ID].surf = NULL;
	}
	m_text[ID].name = "";
	m_text[ID].type = TEXTURE_NONE;
}

///////////////////////////////////////////////////////////////////////////////////////

int HD3DX::FindFreeText()
{
	int i;
	for (i = 1; i < MAX_HD3DX_TEXTURES; i++) 
		if (m_text[i].type == TEXTURE_NONE) break;
	if (i == MAX_HD3DX_TEXTURES) return 0;
	return i;
}

///////////////////////////////////////////////////////////////////////////////////////

void HD3DX::BeginScene(bool clear)
{
	if (m_screen == NULL) return;

	// all to black - THIS TAKES ABOUT 10ms for one frame!!
	if (clear) 
		SDL_FillRect(m_screen, NULL,  SDL_MapRGB(m_screen->format, 0, 0, 0));
}

///////////////////////////////////////////////////////////////////////////////////////

void HD3DX::EndScene()
{
	if (m_screen == NULL) return;

	// update screen
//	SDL_UpdateRect(m_screen, 0, 0, 0, 0);
	SDL_Flip(m_screen);
}

void HD3DX::Draw(int sprite, float x, float y, float angle, float sx, float sy, int alpha, int shx, int shy)
{
	Draw(sprite, (int)x, (int)y, angle, sx, sy, alpha, shx, shy);
}

///////////////////////////////////////////////////////////////////////////////////////
/*
  sprite  -  bitmapa
  x       -  kam se ma nakreslit - x
  x       -  kam se ma nakreslit - y
  angle   -  otoceni (v radianech)
  sx      -  zvetseni po x  
  sy      -  zvetseni po y
  alpha   -  polopruhlednost
  shx     -  pri virualnich texturach - kdyz je vice animacnich okenek zasebou, tak ktere po x
  shy     -  animacni okenko po y
*/
void HD3DX::Draw(int sprite, int x, int y, float angle, float sx, float sy, int alpha, int shx, int shy)
{
	if (m_text[sprite].type == TEXTURE_NONE) {
		return;
	}

	SDL_Rect rect_dst, rect_src;
	int   fsprite = sprite;

	if (m_text[sprite].type == TEXTURE_VIRTUAL)
		fsprite = m_text[sprite].virtID;

	if (m_text[fsprite].surf == NULL) return;


	// DST
	rect_dst.w  = m_text[sprite].rect.w;
	rect_dst.h  = m_text[sprite].rect.h;
	rect_dst.x  = x - rect_dst.w/2;
	rect_dst.y  = y - rect_dst.h/2;

	rect_src.x = m_text[sprite].rect.x + (m_text[sprite].rect.w+1) * shx;
	rect_src.y = m_text[sprite].rect.y + (m_text[sprite].rect.h+1) * shy;
	rect_src.h = m_text[sprite].rect.h;
	rect_src.w  = m_text[sprite].rect.w;

	SDL_SetAlpha(m_text[fsprite].surf, SDL_SRCALPHA, alpha);
	SDL_BlitSurface(m_text[fsprite].surf, &rect_src, m_screen, &rect_dst);


/*
	scaling.x = sx; scaling.y = sy;

	RotCenter.x = (float)(rect.Width()*sx) / 2;
	RotCenter.y = (float)(rect.Height()*sy) / 2;

	transl.x = (float)x - RotCenter.x; 
	transl.y = (float)y - RotCenter.y;
	m_sprite->Draw(m_text[fsprite].d3dt, &rect, &scaling, &RotCenter, angle, &transl, D3DCOLOR_ARGB(alpha,255,255,255));
*/
	
}

///////////////////////////////////////////////////////////////////////////////////////

void HD3DX::Resize(int sx, int sy, bool windowed)
{
/*	if (!m_valid) return;

	if (m_w == sx && m_h == sy && windowed == m_windowed) return;

	int i;
	for (i = 1; i < MAX_HD3DX_TEXTURES; i++) 
		if (m_text[i].d3dt != NULL) {
			m_text[i].d3dt->Release();
			m_text[i].d3dt = NULL;
		}

	if (m_dev != NULL) {
		m_dev->Release();
		m_dev = NULL;
	}
	if (m_pD3D != NULL) {
		m_pD3D->Release();
		m_pD3D = NULL;
	}

	Create(sx, sy, m_bpp, windowed); 

	for (i = 1; i < MAX_HD3DX_TEXTURES; i++)
		ReloadTexture(i);
*/
}


///////////////////////////////////////////////////////////////////////////////////////

int HD3DX::CreateVirualTexture(int FromID, int left, int top, int w, int h)
{
	int ID = FindFreeText();
	if (ID == 0) return 0;

	m_text[ID].surf = NULL;

	m_text[ID].name = "";
	m_text[ID].usage = 0;
	m_text[ID].type = TEXTURE_VIRTUAL;
	m_text[ID].virtID = FromID;

	m_text[ID].rect.x = left;
	m_text[ID].rect.y = top;
	m_text[ID].rect.w = w;
	m_text[ID].rect.h = h;

	return ID;
}

bool HD3DX::NeedRestore()
{
	return false;
}

void HD3DX::DestroyTextures()
{
	for (int i = 1; i < MAX_HD3DX_TEXTURES; i++) 
		DestroyTexture(i);
}
