// GBonus_n_slow.h: interface for the GBonus_n_slow class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBONUS_N_SLOW_H__0CF3BD85_D83E_4F2F_A573_339B46CE89A3__INCLUDED_)
#define AFX_GBONUS_N_SLOW_H__0CF3BD85_D83E_4F2F_A573_339B46CE89A3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBonus.h"

class GBonus_n_slow : public GBonus  
{
public:
	virtual GBonus* GetCopy();
	virtual void BeforeMove(float *speed);
	GBonus_n_slow();
	virtual ~GBonus_n_slow();

};

#endif // !defined(AFX_GBONUS_N_SLOW_H__0CF3BD85_D83E_4F2F_A573_339B46CE89A3__INCLUDED_)
