// GBomber.h: interface for the GBomber class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBOMBER_H__2CCB56F6_658C_4A27_A576_61340B3162BE__INCLUDED_)
#define AFX_GBOMBER_H__2CCB56F6_658C_4A27_A576_61340B3162BE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GObject.h"

#define MAX_BOMB 10

class GMap;
class GBonus;

class GBomber : public GObject  
{
public:
	void KickBomb();
	bool PutBomb();
	void GetBonus();
	int  Hit();
	void Input(bool left, bool right, bool up, bool down, bool action);
	void Move();
	void Draw(int x, int y, bool dead, int bx, int by);
	virtual void Init(GGame *game, int x, int y, int bBmp, int bBmp_s, int ID);
	GBomber();
	virtual ~GBomber();

	bool m_action;
	bool m_dead;

	bool m_casovac;  // od bonusu
	bool m_undertimer;

	bool m_kopani; 
	bool m_posilani;

	bool m_hitting;


	int m_lives;

	int m_smer; // m_dir -1

	float m_basespeed;

	GBonus *m_bonus; // bonus (nemoc)

	int m_bomb;        // pocet bomb
	int m_bombused;    // pocet pouzitych bomb
	int m_megabombs;   // pocet megabomb   :-) 
	int m_napalmbombs; // pocet napalmbomb :-) 

	int m_bombdosah; // dosah vybuchu bomby

	int m_score;

	int m_dir; // 0 - stat, 1 - doleva, 2 - doprava, 3 - nahoru, 4 - dolu
	GMap *m_map;

	int m_ID;
};

#endif // !defined(AFX_GBOMBER_H__2CCB56F6_658C_4A27_A576_61340B3162BE__INCLUDED_)
