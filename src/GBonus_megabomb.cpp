// GBonus_megabomb.cpp: implementation of the GBonus_megabomb class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "D3DXApp.h"
#include "GBonus_megabomb.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

GBonus_megabomb::GBonus_megabomb()
{
	m_shx = 0;
	m_shy = 1;
	m_onetime = true;
	m_illness = false;
}

GBonus_megabomb::~GBonus_megabomb()
{

}

void GBonus_megabomb::OneTime()
{
	m_bomber->m_megabombs += 2;
}
