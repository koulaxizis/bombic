// GBonus_n_stop.h: interface for the GBonus_n_stop class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBONUS_N_STOP_H__1AFFC9BE_F652_4F77_8B5E_FAC1877AF964__INCLUDED_)
#define AFX_GBONUS_N_STOP_H__1AFFC9BE_F652_4F77_8B5E_FAC1877AF964__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBonus.h"

class GBonus_n_stop : public GBonus  
{
public:
	virtual void BeforeMove(float *speed);
	virtual GBonus* GetCopy();
	GBonus_n_stop();
	virtual ~GBonus_n_stop();

};

#endif // !defined(AFX_GBONUS_N_STOP_H__1AFFC9BE_F652_4F77_8B5E_FAC1877AF964__INCLUDED_)
