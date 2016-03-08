// MMain.h: interface for the MMain class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MMAIN_H__CDCCE3FD_A844_4008_A19F_26BE97B684D8__INCLUDED_)
#define AFX_MMAIN_H__CDCCE3FD_A844_4008_A19F_26BE97B684D8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBase.h"

#define MAX_MAIN_SEL 7

class MMain : public GBase  
{
public:
	virtual int OnKey(int nChar);
	void Destroy();
	void Draw();
	virtual void Init(CMainFrame *parent);
	MMain();
	virtual ~MMain();

	int m_sel;
	int m_bMainBMP;
};

#endif // !defined(AFX_MMAIN_H__CDCCE3FD_A844_4008_A19F_26BE97B684D8__INCLUDED_)
