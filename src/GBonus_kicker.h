// GBonus_kicker.h: interface for the GBonus_kicker class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBONUS_KICKER_H__C366260C_6569_4978_8693_C4E44F98E076__INCLUDED_)
#define AFX_GBONUS_KICKER_H__C366260C_6569_4978_8693_C4E44F98E076__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBonus.h"

class GBonus_kicker : public GBonus  
{
public:
	virtual void OneTime();
	GBonus_kicker();
	virtual ~GBonus_kicker();

};

#endif // !defined(AFX_GBONUS_KICKER_H__C366260C_6569_4978_8693_C4E44F98E076__INCLUDED_)
