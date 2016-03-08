// GBonus_shield.h: interface for the GBonus_shield class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBONUS_SHIELD_H__1CFA3A73_DE62_47D7_B24C_747C97D5FB6F__INCLUDED_)
#define AFX_GBONUS_SHIELD_H__1CFA3A73_DE62_47D7_B24C_747C97D5FB6F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBonus.h"

class GBonus_shield : public GBonus  
{
public:
	void OneTime();
	virtual bool HitProtect();
	GBonus_shield();
	virtual ~GBonus_shield();

};

#endif // !defined(AFX_GBONUS_SHIELD_H__1CFA3A73_DE62_47D7_B24C_747C97D5FB6F__INCLUDED_)
