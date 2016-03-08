// MCredits.h: interface for the MCredits class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MCREDITS_H__3315D417_829C_48AE_A2CB_1C8BB686841C__INCLUDED_)
#define AFX_MCREDITS_H__3315D417_829C_48AE_A2CB_1C8BB686841C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBase.h"

class MCredits : public GBase  
{
public:
	MCredits();
	virtual ~MCredits();

	virtual int OnKey(int nChar);
	void Init(CMainFrame *parent);
	virtual void Draw();
	virtual void Destroy();

	int      m_bPozadi;
};

#endif // !defined(AFX_MCREDITS_H__3315D417_829C_48AE_A2CB_1C8BB686841C__INCLUDED_)
