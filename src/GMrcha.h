// GMrcha.h: interface for the GMrcha class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GMRCHA_H__D5C236BD_F313_4151_92A8_C0AA7880322D__INCLUDED_)
#define AFX_GMRCHA_H__D5C236BD_F313_4151_92A8_C0AA7880322D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GObject.h"
#include "data.h"


class GMap;
class GMrchaAI0;



class GMrcha : public GObject  
{
public:
	bool IsFree(int x, int y);
	void Kill();
	void Automove();
	int Hit(); // zraci, ktereho bomba ji zasahla; -1 bez zasahu
	virtual void Move();
	virtual void Init(GGame *game, int x, int y, int bBmp, int bBmp_s, int mrchaID);
	virtual void Draw(int x, int y, bool dead, int bx, int by);
	GMrcha();
	virtual ~GMrcha();

	GMrchaAI0 *m_AI;

	GMap *m_map;
	int m_dir; // 0 - stats, 1 - doleva, 2 - doprava, 3 - nahoru, 4 - dolu
	int m_smer;

	int m_typ; // mrchaID z Init

	int  m_lives;

	bool m_dead; // zda je mrska mrtva
	bool m_hitting;

	float m_speed; // aktualni rychlost upravena pomoci gspeed

	float m_size;
	float m_dsize;

	st_mrcha m_params;
};

#endif // !defined(AFX_GMRCHA_H__D5C236BD_F313_4151_92A8_C0AA7880322D__INCLUDED_)
