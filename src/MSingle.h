// MSingle.h: interface for the MSingle class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MSINGLE_H__7D3A08D2_D85D_4B51_BD59_300ACD8D3E92__INCLUDED_)
#define AFX_MSINGLE_H__7D3A08D2_D85D_4B51_BD59_300ACD8D3E92__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <string>
#include "GBase.h"

#define MAX_SINGLE_SEL 4

class MSingle : public GBase  
{
public:
	int OnKey(int nChar);
	void Draw();
	virtual void Destroy();
	virtual void Init(CMainFrame *parent);
	MSingle();
	virtual ~MSingle();

	int      m_bPozadi;
	int      m_players;
	int      m_bDeadBMP;
	int      m_bDead;
	int      m_sel;
	std::string  m_code;
};

#endif // !defined(AFX_MSINGLE_H__7D3A08D2_D85D_4B51_BD59_300ACD8D3E92__INCLUDED_)
