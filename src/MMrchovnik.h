// MMrchovnik.h: interface for the MMrchovnik class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MMRCHOVNIK_H__BDB7640C_7EB8_4A9F_84F4_28B1AC35E519__INCLUDED_)
#define AFX_MMRCHOVNIK_H__BDB7640C_7EB8_4A9F_84F4_28B1AC35E519__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBase.h"

class MMrchovnik : public GBase  
{
public:
	void LoadMrcha();
	virtual int OnKey(int nChar);
	void Init(CMainFrame *parent);
	virtual void Draw();
	virtual void Destroy();
	MMrchovnik();
	virtual ~MMrchovnik();

	int      m_bMrcha;
	int      m_sel;
	int      m_max_sel;

};

#endif // !defined(AFX_MMRCHOVNIK_H__BDB7640C_7EB8_4A9F_84F4_28B1AC35E519__INCLUDED_)
