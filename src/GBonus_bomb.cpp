// GBonus_bomb.cpp: implementation of the GBonus_bomb class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "D3DXApp.h"
#include "GBonus_bomb.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

GBonus_bomb::GBonus_bomb()
{
	m_shx = 1;
	m_shy = 0;
	m_onetime = true;
	m_illness = false;
}

GBonus_bomb::~GBonus_bomb()
{

}

void GBonus_bomb::OneTime()
{
	if (m_bomber->m_bomb < 9) m_bomber->m_bomb++;
}
