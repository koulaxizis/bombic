// GMrchaAI0.h: interface for the GMrchaAI0 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GMRCHAAI0_H__398C68AD_9306_47F9_AF0A_FA1C3B97333A__INCLUDED_)
#define AFX_GMRCHAAI0_H__398C68AD_9306_47F9_AF0A_FA1C3B97333A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class GMrcha;
class GGame;
class GMap;

class GMrchaAI0  
{
public:
	void CenterMove();
	void FakeMove();
	GMrchaAI0(GGame *game, GMap *map, GMrcha *mrcha);
	virtual ~GMrchaAI0();

	virtual void AIMove();

protected:
	bool NeedChange();
	bool ChangeDir();

	GMrcha *m_mrcha;
	GGame  *m_game;
	GMap   *m_map;

	int m_x; // kopie od mrchy
	int m_y; 
	int m_mx; // kopie od mrchy
	int m_my; 

	int m_fx;
	int m_fy;

	int m_tochange; 
};

#endif // !defined(AFX_GMRCHAAI0_H__398C68AD_9306_47F9_AF0A_FA1C3B97333A__INCLUDED_)
