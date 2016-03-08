// GBonus_bomb.h: interface for the GBonus_bomb class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBONUS_BOMB_H__08E52BD6_1673_4164_BB67_E78CDB874CED__INCLUDED_)
#define AFX_GBONUS_BOMB_H__08E52BD6_1673_4164_BB67_E78CDB874CED__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBonus.h"

class GBonus_bomb : public GBonus  
{
public:
	virtual void OneTime();
	GBonus_bomb();
	virtual ~GBonus_bomb();

};

#endif // !defined(AFX_GBONUS_BOMB_H__08E52BD6_1673_4164_BB67_E78CDB874CED__INCLUDED_)
