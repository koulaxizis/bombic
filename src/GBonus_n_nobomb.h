// GBonus_n_nobomb.h: interface for the GBonus_n_nobomb class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBONUS_N_NOBOMB_H__573DD1A5_10C2_4687_B810_2C50A33E3A74__INCLUDED_)
#define AFX_GBONUS_N_NOBOMB_H__573DD1A5_10C2_4687_B810_2C50A33E3A74__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBonus.h"

class GBonus_n_nobomb : public GBonus  
{
public:
	virtual GBonus* GetCopy();
	virtual void BeforeMove(float *speed);
	GBonus_n_nobomb();
	virtual ~GBonus_n_nobomb();

};

#endif // !defined(AFX_GBONUS_N_NOBOMB_H__573DD1A5_10C2_4687_B810_2C50A33E3A74__INCLUDED_)
