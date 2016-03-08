// MHelp.h: interface for the MHelp class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MHELP_H__496132A9_EA40_426F_902A_D2F874664B3C__INCLUDED_)
#define AFX_MHELP_H__496132A9_EA40_426F_902A_D2F874664B3C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBase.h"

class MHelp : public GBase  
{
public:
	MHelp();
	virtual ~MHelp();

	virtual int OnKey(int nChar);
	void Init(CMainFrame *parent);
	virtual void Draw();
	virtual void Destroy();

	int      m_bPozadi;
};

#endif // !defined(AFX_MHELP_H__496132A9_EA40_426F_902A_D2F874664B3C__INCLUDED_)
