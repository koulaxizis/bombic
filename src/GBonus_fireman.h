// GBonus_fireman.h: interface for the GBonus_fireman class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBONUS_FIREMAN_H__77C9F90F_EDF2_47A6_BFAF_E2799FF6E5CD__INCLUDED_)
#define AFX_GBONUS_FIREMAN_H__77C9F90F_EDF2_47A6_BFAF_E2799FF6E5CD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBonus.h"

class GBonus_fireman : public GBonus  
{
public:
	virtual void BeforeInput(bool *left, bool *right, bool *up, bool *down, bool *action);
	bool HitProtect();
	GBonus_fireman();
	virtual ~GBonus_fireman();

};

#endif // !defined(AFX_GBONUS_FIREMAN_H__77C9F90F_EDF2_47A6_BFAF_E2799FF6E5CD__INCLUDED_)
