// GBonus_n_kicker.cpp: implementation of the GBonus_n_kicker class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "D3DXApp.h"
#include "GBonus_n_kicker.h"
#include "GMap.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

GBonus_n_kicker::GBonus_n_kicker()
{
	m_illness = true;
	m_shx = 2;
	m_shy = 0;
	m_onetime = false;
	m_bView = 3;
	m_timer_MAX = TIME_BONUS_ILL;
}

GBonus_n_kicker::~GBonus_n_kicker()
{

}

GBonus* GBonus_n_kicker::GetCopy()
{
	GBonus_n_kicker *n;
	n = new GBonus_n_kicker;

	*n = *this;

	return (GBonus*) n;
}

void GBonus_n_kicker::AfterPut(int bombID)
{
	if (bombID == -1) return;
	m_bomber->m_map->m_bomba[bombID]->m_dir = rand()%5;
}
