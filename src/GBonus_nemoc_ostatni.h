// GBonus_nemoc_ostatni.h: interface for the GBonus_nemoc_ostatni class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBONUS_NEMOC_OSTATNI_H__C714D4E9_C39B_4325_917B_B4423DA792CB__INCLUDED_)
#define AFX_GBONUS_NEMOC_OSTATNI_H__C714D4E9_C39B_4325_917B_B4423DA792CB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBonus.h"
#include "GGame.h"

class GBonus_nemoc_ostatni : public GBonus  
{
public:
	virtual void OneTime();
	GBonus_nemoc_ostatni(GGame *game);
	virtual ~GBonus_nemoc_ostatni();

	GGame *m_game;
	
};

#endif // !defined(AFX_GBONUS_NEMOC_OSTATNI_H__C714D4E9_C39B_4325_917B_B4423DA792CB__INCLUDED_)
