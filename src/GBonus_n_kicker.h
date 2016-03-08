// GBonus_n_kicker.h: interface for the GBonus_n_kicker class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBONUS_N_KICKER_H__6A0350DB_AE22_40B7_A6CC_E7F04A9DB02B__INCLUDED_)
#define AFX_GBONUS_N_KICKER_H__6A0350DB_AE22_40B7_A6CC_E7F04A9DB02B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBonus.h"

class GBonus_n_kicker : public GBonus  
{
public:
	virtual void AfterPut(int bombID);
	virtual GBonus* GetCopy();
	GBonus_n_kicker();
	virtual ~GBonus_n_kicker();

};

#endif // !defined(AFX_GBONUS_N_KICKER_H__6A0350DB_AE22_40B7_A6CC_E7F04A9DB02B__INCLUDED_)
