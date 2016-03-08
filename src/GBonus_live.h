// GBonus_live.h: interface for the GBonus_live class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBONUS_LIVE_H__A7811740_EBFC_482F_9410_147B423DDD70__INCLUDED_)
#define AFX_GBONUS_LIVE_H__A7811740_EBFC_482F_9410_147B423DDD70__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBonus.h"

class GBonus_live : public GBonus  
{
public:
	virtual void OneTime();
	GBonus_live();
	virtual ~GBonus_live();

};

#endif // !defined(AFX_GBONUS_LIVE_H__A7811740_EBFC_482F_9410_147B423DDD70__INCLUDED_)
