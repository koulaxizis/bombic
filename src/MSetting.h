// MSetting.h: interface for the MSetting class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MSETTING_H__DC27A437_86E5_4482_87FD_5A9F01824D81__INCLUDED_)
#define AFX_MSETTING_H__DC27A437_86E5_4482_87FD_5A9F01824D81__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBase.h"

#define MAX_SETTING_SEL 7

class MSetting : public GBase  
{
public:
	MSetting();
	virtual ~MSetting();

	virtual int OnKey(int nChar);
	void Init(CMainFrame *parent);
	virtual void Draw();
	virtual void Destroy();

	int      m_bPozadi;
	int      m_sel;
};

#endif // !defined(AFX_MSETTING_H__DC27A437_86E5_4482_87FD_5A9F01824D81__INCLUDED_)
