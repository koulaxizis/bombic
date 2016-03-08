// GMap.h: interface for the GMap class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GMAP_H__D877EB28_3561_48CD_91B5_7E5E77B601DB__INCLUDED_)
#define AFX_GMAP_H__D877EB28_3561_48CD_91B5_7E5E77B601DB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define MAX_BOMBS 40
#define MAX_EXPLODEANIM 2

#include "GZed.h"
#include "GBomba.h"
#include "data.h"

class GGame;
class GBonus;

typedef struct {
	GBomba  *bomba;  // ukazatel na bombu na danem policku
	int  cas;    // kolik framu jeste bude vybuch
	int  vybuch; // anim vybuchu
	int  barva;  // barva vybochu
	bool danger; // policko je v ohrozeni plamenem (bude na nem plamen)
} st_bombpole;

#define MAX_BONUS_LEVEL_DEADMATCH 18
#define MAX_BONUS_LEVEL           14
#define EXPLOTIME     30
#define NAPALM_TIME 1030
#define NAPALM_STOP  500

class GMap  
{
public:
	bool IsFlyFreeNoBombs(int x, int y);
	bool IsFlyFree(int x, int y);
	void BombNapalmExpolode(GBomba *bomb);
	int AddNapalmBomb(int bomberID, int x, int y, int dosah);
	void AddNemoc(int mx, int my);
	void SetBombDanger(int x, int y, int d);
	int AddMegaBomb(int bomberID, int x, int y, int dosah);
	void BombMegaExpolode(GBomba *bomb);
	bool FireMap(int x, int y, int bmp, int b, int explotime = EXPLOTIME);
	void AddBonus(int mx, int my);
	void Destroy();
	void BombExpolode(GBomba *bomb, int time = EXPLOTIME);
	int AddBomb(int bomberID, int x, int y, int dosah); // vraci true kdyz se podarilo
	void Move();
	bool IsFree(int x, int y);
	void LoadMap(st_map *map);
	void Init(GGame *game);
	void Draw(int x, int y, bool walk, int bx, int by);
	GMap();
	virtual ~GMap();

	GZed         m_map[MAX_X][MAX_Y];  // mapa zdi
	st_bombpole  m_bmap[MAX_X][MAX_Y]; // mapa vybuchu a bomb
	int          m_mmap[MAX_X][MAX_Y]; // mapa mrch - udava 
	GBonus      *m_bonusmap[MAX_X][MAX_Y]; // mapa bonusu

	GBomba      *m_bomba[MAX_BOMBS];

	int m_bonuslevel;  // jak siroka sada bonusu se ma pouzivat

	int m_bMapBMP;
	int m_bMap;
	int m_bExplodeBMP;
	int m_bExplode;
	int m_bBonusBMP;
	int m_bBonus;

	int m_x;
	int m_y;

	int m_explodeanim;

	GGame *m_game;
};

#endif // !defined(AFX_GMAP_H__D877EB28_3561_48CD_91B5_7E5E77B601DB__INCLUDED_)
