// GBonus_fire.h: interface for the GBonus_fire class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBONUS_FIRE_H__C1A97694_D41E_464E_8813_01483C9A132B__INCLUDED_)
#define AFX_GBONUS_FIRE_H__C1A97694_D41E_464E_8813_01483C9A132B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBonus.h"

class GBonus_fire : public GBonus  
{
public:
	virtual void OneTime();
	GBonus_fire();
	virtual ~GBonus_fire();

};

#endif // !defined(AFX_GBONUS_FIRE_H__C1A97694_D41E_464E_8813_01483C9A132B__INCLUDED_)
