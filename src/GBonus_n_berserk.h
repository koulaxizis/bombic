// GBonus_n_berserk.h: interface for the GBonus_n_berserk class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBONUS_N_BERSERK_H__AF6129F6_E813_4461_AF78_4E51E248D374__INCLUDED_)
#define AFX_GBONUS_N_BERSERK_H__AF6129F6_E813_4461_AF78_4E51E248D374__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBonus.h"

class GBonus_n_berserk : public GBonus  
{
public:
	virtual GBonus* GetCopy();
	virtual void BeforeMove(float *speed);
	GBonus_n_berserk();
	virtual ~GBonus_n_berserk();

};

#endif // !defined(AFX_GBONUS_N_BERSERK_H__AF6129F6_E813_4461_AF78_4E51E248D374__INCLUDED_)
