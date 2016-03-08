// GBonus_nemoc_ostatni.cpp: implementation of the GBonus_nemoc_ostatni class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "D3DXApp.h"
#include "GBonus_nemoc_ostatni.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

GBonus_nemoc_ostatni::GBonus_nemoc_ostatni(GGame *game)
{
	m_illness = false;
	m_shx = 4;
	m_shy = 1;
	m_onetime = true;
	m_game = game;
}

GBonus_nemoc_ostatni::~GBonus_nemoc_ostatni()
{

}

void GBonus_nemoc_ostatni::OneTime()
{
	for (int i = 0; i < m_game->m_bombers; i++)
		if (&m_game->m_bomber[i] != m_bomber && m_game->m_bomber[i].m_dead == false)
			m_game->m_map.AddNemoc(m_game->m_bomber[i].m_mx, m_game->m_bomber[i].m_my);
}
