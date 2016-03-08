// GBombaNapalm.cpp: implementation of the GBombaNapalm class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "D3DXApp.h"
#include "GBombaNapalm.h"
#include "GGame.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

GBombaNapalm::GBombaNapalm()
{
	m_shy = 2;
}

GBombaNapalm::~GBombaNapalm()
{

}

void GBombaNapalm::Move()
{
	if (!m_valid) return;

	MoveXY();

	if (--m_bombtime < 1) {
		m_game->m_map.BombNapalmExpolode(this);
		g_sb[8].Play(false);
		delete this;
		return;
	}

	if (((m_size += m_dsize) > 1.3) || m_size < 1) m_dsize = -m_dsize;
}
