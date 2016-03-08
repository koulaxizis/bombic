// GBonus_timer.h: interface for the GBonus_timer class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBONUS_TIMER_H__E057A81F_C2DD_4645_B679_6F4F373E6A20__INCLUDED_)
#define AFX_GBONUS_TIMER_H__E057A81F_C2DD_4645_B679_6F4F373E6A20__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBonus.h"

class GBonus_timer : public GBonus  
{
public:
	virtual void End();
	virtual void OneTime();
	GBonus_timer();
	virtual ~GBonus_timer();

};

#endif // !defined(AFX_GBONUS_TIMER_H__E057A81F_C2DD_4645_B679_6F4F373E6A20__INCLUDED_)
