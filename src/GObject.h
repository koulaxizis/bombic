// GObject.h: interface for the GObject class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GOBJECT_H__118530AD_C663_496C_B3E0_873A89FD1641__INCLUDED_)
#define AFX_GOBJECT_H__118530AD_C663_496C_B3E0_873A89FD1641__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class GGame;

class GObject  
{
public:
	bool Hit();
	virtual bool WalkIn();
	virtual void Draw(int x, int y, bool walk, int bx, int by);
	GObject();
	virtual ~GObject();
	virtual void Move() {};
	virtual void Init(GGame *game, int x, int y, int bBmp, int bBmp_s) { m_mx = x; m_my = y; m_game = game; m_bBmp = bBmp; m_valid = true; m_bBmp_s = bBmp_s; };

	float m_x; // x - ova souradnice
	float m_y; // y - ova souradnice

	int m_mx; // x-ova na mape
	int m_my; // y-ova na mape
	int m_anim; // animacni kenko

	int m_bBmp;
	int m_bBmp_s;

	bool m_valid; // zda objekt plati

	GGame *m_game;
};

#endif // !defined(AFX_GOBJECT_H__118530AD_C663_496C_B3E0_873A89FD1641__INCLUDED_)
