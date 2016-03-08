// GView.h: interface for the GView class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GVIEW_H__D9B1E6CC_8209_4F2F_B37A_9E191E2D1243__INCLUDED_)
#define AFX_GVIEW_H__D9B1E6CC_8209_4F2F_B37A_9E191E2D1243__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class GGame;
class CMainFrame;
class GObject;

#include "data.h"
#include "GBase.h"

#define MAX_OBMAP 10

class GView : public GBase
{
public:
	virtual void Destroy();
	void StartTres(int doba);
	void UpdateView();
	void Draw();

	void LoadMap(st_map *map);
	GGame *m_game;
	void Init(CMainFrame *parent, GGame *game);
	GView();
	virtual ~GView();

	struct st_obmap {
		GObject *objects[MAX_OBMAP]; // vsechny
		int      max;         // pocet na aktualnim policku
	} m_obmap[MAX_X][MAX_Y]; // mapa objektu - mrch i bombicu dohromady


	int m_sy;
	int m_sx;

	int m_bx;
	int m_by;

	int m_y;
	int m_x;

	int m_tres;

	int m_bBombic; // velka bitmpapa bombice
	int m_bBonus;  // bonusy
};

#endif // !defined(AFX_GVIEW_H__D9B1E6CC_8209_4F2F_B37A_9E191E2D1243__INCLUDED_)
