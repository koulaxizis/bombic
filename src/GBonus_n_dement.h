// GBonus_n_dement.h: interface for the GBonus_n_dement class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBONUS_N_DEMENT_H__F9AD9D03_3B01_46B8_B472_EB0C8E6D9E2C__INCLUDED_)
#define AFX_GBONUS_N_DEMENT_H__F9AD9D03_3B01_46B8_B472_EB0C8E6D9E2C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBonus.h"

class GBonus_n_dement : public GBonus  
{
public:
	virtual GBonus* GetCopy();
	virtual void BeforeMove(float *speed);
	GBonus_n_dement();
	virtual ~GBonus_n_dement();

};

#endif // !defined(AFX_GBONUS_N_DEMENT_H__F9AD9D03_3B01_46B8_B472_EB0C8E6D9E2C__INCLUDED_)
