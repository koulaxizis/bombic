// GGame.cpp: implementation of the GGame class.
//
//////////////////////////////////////////////////////////////////////

#include <string>
#include <stdio.h>
#include "stdafx.h"
#include "D3DXApp.h"
#include "GGame.h"
#include "MainFrm.h"
#include "GFile.h"


using namespace std;

/*
// ovladani bombicu
const int controls[MAX_BOMBERS][5] = {
	{DIK_LEFT, DIK_RIGHT, DIK_UP, DIK_DOWN, DIK_RCONTROL},
	{DIK_A, DIK_D, DIK_W, DIK_S, DIK_LCONTROL},
	{DIK_J, DIK_L, DIK_I, DIK_K, DIK_SPACE},
	{DIK_NUMPAD4, DIK_NUMPAD6, DIK_NUMPAD8, DIK_NUMPAD5, DIK_NUMPAD0},
};
*/
// ovladani bombicu
const int controls[MAX_BOMBERS][5] = {
	{SDLK_LEFT, SDLK_RIGHT, SDLK_UP, SDLK_DOWN, SDLK_RCTRL},
	{SDLK_a, SDLK_d, SDLK_w, SDLK_s, SDLK_LCTRL},
	{SDLK_j, SDLK_l, SDLK_i, SDLK_k, SDLK_SPACE},
	{SDLK_KP4, SDLK_KP6, SDLK_KP8, SDLK_KP5, SDLK_KP0},
};

// startovni policka na dead match
const int stratpoints[MAX_BOMBERS][2] = {
	{1,2}, {14, 10}, {1, 10}, {14, 2},
};
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

GGame::GGame()
{

}

GGame::~GGame()
{

}

#define MAX_BUFF 50
void GGame::Init(CMainFrame *parent)
{
	GBase::Init(parent);

	int i;
	char buff[MAX_BUFF];


	// Grafika
	for (i = 0; i < MAX_BOMBERS; i++) {
		snprintf(buff, MAX_BUFF, "bomber%d.bmp", i);
		m_bBomberBMP[i] = d3dx.CreateTextureFromFile(buff);
		m_bBomber[i] = d3dx.CreateVirualTexture(m_bBomberBMP[i], 1, 1, P_bomber.b_x, P_bomber.b_y);
	}
	m_bBomberBMP_s = d3dx.CreateTextureFromFile("bomber_s.bmp");
	m_bBomber_s = d3dx.CreateVirualTexture(m_bBomberBMP_s, 1, 1, P_bomber.b_x, P_bomber.b_y);

	m_bBombaBMP = d3dx.CreateTextureFromFile("vybuch.bmp");
	m_bBomba = d3dx.CreateVirualTexture(m_bBombaBMP, 1, 154, 50, 50);

	m_bBombaBMP_s = d3dx.CreateTextureFromFile("vybuch_s.bmp");
	m_bBomba_s = d3dx.CreateVirualTexture(m_bBombaBMP, 1, 154, 50, 50);


	for (i = 0; i < MAX_MRCH; i++) {
		snprintf(buff, MAX_BUFF, "mrcha%d.bmp", i);
		m_bMrchaBMP[i] = d3dx.CreateTextureFromFile(buff);
		m_bMrcha[i] = d3dx.CreateVirualTexture(m_bMrchaBMP[i], 1, 1, P_mrcha[i].b_x, P_mrcha[i].b_y);
		
		snprintf(buff, MAX_BUFF, "mrcha%d_s.bmp", i);
		m_bMrchaBMP_s[i] = d3dx.CreateTextureFromFile(buff);
		m_bMrcha_s[i] = d3dx.CreateVirualTexture(m_bMrchaBMP_s[i], 1, 1, P_mrcha[i].b_x, P_mrcha[i].b_y);
	}

	m_map.Init(this);
	m_view.Init(m_pParent, this);
	m_show_mrtvol = false;
	m_show_game_speed = 0;
}

void GGame::Draw()
{
	m_view.UpdateView();
	m_view.Draw();

	if (m_paused)
		m_font->DrawText( 400, 300,  _LNG_PAUSED_, 255, 255, 255,  HFONT_CENTER);	

	// kresleni score (pocet mrtvol)
	if (m_show_mrtvol) {
		char s[50];
		snprintf(s, 50, "%s %d", lng.Translate(41).c_str(), m_mrtvol);
		m_font->DrawText(400, 580, s, 255, 255, 255, HFONT_CENTER);
	}

       if (dinput.m_key[SDLK_PLUS] || dinput.m_key[SDLK_EQUALS] ||
           dinput.m_key[SDLK_UNDERSCORE] || dinput.m_key[SDLK_MINUS]) { 
		m_show_game_speed = 50;
	}
	if ( --m_show_game_speed > 0) {
		char s[50];
		snprintf(s, 50, "%s %.1f", lng.Translate(77).c_str(), gspeed);
		m_font->DrawText(400, 50, s, 255, 255, 255, HFONT_CENTER);
	}
}

#define B(x) (x != 0)
extern bool gdeadmatch_bombkill; // zda se po urcite dobe ukoncuje dedmatch nasilne


void GGame::Move()
{
	if (m_paused) return;

	int i;
	dinput.Update();

	// Zmeny ve hre - posuny
	for (i = 0; i < m_bombers; i++) {
		m_bomber[i].Input( B(dinput.m_key[controls[i][0]]), B(dinput.m_key[controls[i][1]]),
			B(dinput.m_key[controls[i][2]]), B(dinput.m_key[controls[i][3]]), B(dinput.m_key[controls[i][4]]));
		char s[50];
		m_bomber[i].Move();
	}

	for (i = 0; i < m_mrch; i++) {
		m_mrcha[i].Automove();
		m_mrcha[i].Move();
	}

	m_map.Move();

#define DEADMATCH_MAX_TIME 2000

	// ukoncovani deadmatch
	if (++m_game_time > DEADMATCH_MAX_TIME && m_deadmatch && gdeadmatch_bombkill) 
		if (DEADMATCH_MAX_TIME*25 <=  m_game_time || rand()%(26-m_game_time/DEADMATCH_MAX_TIME) == 0) m_map.AddBomb(-1, rand()%m_map.m_x, rand()%m_map.m_y, 9);

	// Zasahy
	for (i = 0; i < m_mrch; i++) {
		m_mrcha[i].Hit();
	}

	for (i = 0; i < m_bombers; i++) {
		m_bomber[i].Hit();
	}

	if (EndGame()) 
		if (--m_gameendig <= 0) {
			m_gameended = true;
			m_pParent->StartMenu();
		}

	// dame hraci moznost upravovat rychlost hry pri hre
	if (dinput.m_key[SDLK_PLUS] || dinput.m_key[SDLK_EQUALS]) if ((gspeed += 0.05f) > 4) gspeed = 4;
	if (dinput.m_key[SDLK_UNDERSCORE] || dinput.m_key[SDLK_MINUS]) if ((gspeed -= 0.05f) < 1) gspeed = 1;
}

void GGame::Destroy()
{
	// Grafika
	int i;

	for (i = 0; i < MAX_BOMBERS; i++) {
		d3dx.DestroyTexture(m_bBomberBMP[i]);
		d3dx.DestroyTexture(m_bBomber[i]);
	}
	d3dx.DestroyTexture(m_bBomberBMP_s);
	d3dx.DestroyTexture(m_bBomber_s);

	d3dx.DestroyTexture(m_bBombaBMP);
	d3dx.DestroyTexture(m_bBomba);
	d3dx.DestroyTexture(m_bBombaBMP_s);
	d3dx.DestroyTexture(m_bBomba_s);

	for (i = 0; i < MAX_MRCH; i++) {
		d3dx.DestroyTexture(m_bMrchaBMP[i]);
		d3dx.DestroyTexture(m_bMrcha[i]);
		d3dx.DestroyTexture(m_bMrchaBMP_s[i]);
		d3dx.DestroyTexture(m_bMrcha_s[i]);
	}

	m_map.Destroy();
	m_view.Destroy();
}

int GGame::OnKey(int nChar)
{
	switch (nChar) {
	case SDLK_ESCAPE : 
	case ' ':
		m_pParent->StartMenu();
		break;
//	case VK_PAUSE:
	case SDLK_p:
		m_paused = !m_paused;
		break;
	case SDLK_m:
		m_show_mrtvol = !m_show_mrtvol;
		break;
	}
	return MENU_DEFAULT;
}

void GGame::LoadMap(const string file, int players, bool deadmatch, bool monsters, int bonuslevel)
{
	st_map map;
	int i, j;

	m_deadmatch = deadmatch;

	GFile::LoadMap(&map, file);

	m_map.LoadMap(&map);
	m_view.LoadMap(&map);

	for (i = 0; i < players; i++) {
		if (deadmatch == false) m_bomber[i].Init(this, 1, 2, m_bBomber[i], m_bBomber_s, i);
		else m_bomber[i].Init(this, stratpoints[i][0], stratpoints[i][1], m_bBomber[i], m_bBomber_s, i);
	}
	m_bombers = players;

	m_mrch = 0;

	if (monsters) {
		for (i = 0; i < MAX_X; i++) 
			for (j = 0; j < MAX_Y; j++) 
				if (map.mapmrch[i][j] > -1) {
					AddMrcha(i, j, map.mapmrch[i][j]);
				}
	}

	m_map.m_bonuslevel = bonuslevel;
	m_gameendig = 100;
	m_gameended = false;
	m_game_time = 0;
	m_paused = false;
	m_mrtvol = 0;
}

bool GGame::EndGame()
{
	int b = 0, m = 0; // pocitame pocet zivych mrch a bombicu

	for (int i = 0; i < m_bombers; i++)
		if (m_bomber[i].m_dead == false) b++;

	for (int i = 0; i < m_mrch; i++)
		if (m_mrcha[i].m_dead == false) m++;

	if (m_deadmatch && b < 2) return true;
	if (!m_deadmatch && (b == 0 || m == 0)) return true;

	return false;
}

int GGame::AddMrcha(int x, int y, int mrchaID)
{
	int i;
	for (i = 0; i < m_mrch; i++)
		if (m_mrcha[i].m_dead) break;

	if (i >= MAX_GMRCH-1) return -1;
	m_mrcha[i].Init(this, x, y, m_bMrcha[mrchaID], m_bMrcha_s[mrchaID], mrchaID);
	if (i == m_mrch) m_mrch++;
	return i;
}
