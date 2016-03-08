// GBomba.h: interface for the GBomba class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBOMBA_H__714B5AAE_B01E_4C1E_B13B_9C91A6F6C96D__INCLUDED_)
#define AFX_GBOMBA_H__714B5AAE_B01E_4C1E_B13B_9C91A6F6C96D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GObject.h"

class GBomba : public GObject  
{
public:
	void GetDest(int *x, int *y); // vrati misto, kde bomba pravdepodobne vybuchne
	virtual void SetDanger();
	void MoveXY();
	virtual void Move();
	void Init(GGame *game, int x, int y, int bBmp, int bBmp_s, int bomberID, int dosah);
	void Draw(int x, int y, int bx, int by);
	GBomba();
	virtual ~GBomba();

	int m_bombtime; // za jak dlouho bouchne
	int m_bomberID; // komu bomba patri
	int m_dosah;    // jak daleko bomba dostreli
	int m_shy;      // posunuti v bitmape o y

	int m_speed;    // rychlost sunuti bomby
	int m_dir;      // smer sunuti

	bool m_moveing; // zda se zrovna pohybuje

	float m_size;
	float m_dsize;
};

#endif // !defined(AFX_GBOMBA_H__714B5AAE_B01E_4C1E_B13B_9C91A6F6C96D__INCLUDED_)
