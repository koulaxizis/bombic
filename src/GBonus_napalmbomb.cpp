// GBonus_napalmbomb.cpp: implementation of the GBonus_napalmbomb class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "D3DXApp.h"
#include "GBonus_napalmbomb.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

GBonus_napalmbomb::GBonus_napalmbomb()
{
	m_shx = 1;
	m_shy = 2;
	m_onetime = true;
	m_illness = false;
}

GBonus_napalmbomb::~GBonus_napalmbomb()
{

}

void GBonus_napalmbomb::OneTime()
{
	m_bomber->m_napalmbombs += 2;
}
