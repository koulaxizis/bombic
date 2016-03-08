// GBonus.h: interface for the GBonus class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBONUS_H__7063AF93_7567_4DC7_8FC2_276B6470FC92__INCLUDED_)
#define AFX_GBONUS_H__7063AF93_7567_4DC7_8FC2_276B6470FC92__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBomber.h"
#include "GMap.h"

#define TIME_BONUS_ILL    500
#define TIME_BONUS_EXTRA 1000

class GBonus  
{
public:
	virtual void AfterPut(int bombID);
	virtual bool HitProtect();
	virtual void End();
	virtual GBonus* GetCopy();
	virtual void BeforeInput(bool *left, bool *right, bool *up, bool *down, bool *action);
	virtual void OneTime();
	virtual void Picked(GBomber *bomber, GBonus **self);
	virtual void Move();
	virtual void DrawOnPlayer(int x, int y);
	virtual void DrawOnGround(int x, int y);
	virtual void BeforeMove(float *speed);
	virtual void Init(int mx, int my, GBonus **m_self, int bBonusy);
	GBonus();
	virtual ~GBonus();

	GBonus **m_self;
	int m_my;
	int m_mx;
	int m_type;
	int m_timer_MAX; // puvodni nastaveni kolik casu
	int m_timer;  // odpocitava se
	bool m_onetime;
	bool m_illness;
	int m_shx;
	int m_shy;
	int m_bBmp;
	int m_bView;
	GBomber *m_bomber;
	GMap    *m_map;
};

#endif // !defined(AFX_GBONUS_H__7063AF93_7567_4DC7_8FC2_276B6470FC92__INCLUDED_)
