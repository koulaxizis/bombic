// MIntro.h: interface for the MIntro class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MINTRO_H__F3280D8F_8856_49EA_A58B_E8D760A7E666__INCLUDED_)
#define AFX_MINTRO_H__F3280D8F_8856_49EA_A58B_E8D760A7E666__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBase.h"

#define MAX_INTRO     2
#define SCREEN_TIME  80
#define SHOW_TIME    20

class MIntro : public GBase  
{
public:
	virtual void Move();
	virtual void Destroy();
	virtual int OnKey(int nChar);
	virtual void Init(CMainFrame *parent);
	virtual void Draw();
	MIntro();
	virtual ~MIntro();

	int  m_timer;
	int  m_screen;

	int  m_bIntro[MAX_INTRO];
};

#endif // !defined(AFX_MINTRO_H__F3280D8F_8856_49EA_A58B_E8D760A7E666__INCLUDED_)
