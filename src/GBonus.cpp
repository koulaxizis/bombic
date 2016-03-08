// GBonus.cpp: implementation of the GBonus class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "D3DXApp.h"
#include "GBonus.h"
#include "GBomber.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
extern float gspeed;

GBonus::GBonus()
{
	m_timer = -1;
	m_shx = 0;
	m_shy = 0;
	m_bView = -1;
	m_timer_MAX = 0;
}

GBonus::~GBonus()
{

}

void GBonus::Init(int mx, int my, GBonus **self, int bBonusy)
{
	m_mx = mx;
	m_my = my;
	m_self = self;
	m_bBmp = bBonusy;
}

void GBonus::BeforeMove(float *speed)
{

}

void GBonus::DrawOnGround(int x, int y)
{
	d3dx.Draw(m_bBmp, x, y, 0, 1, 1, 255, m_shx, m_shy);
}

void GBonus::DrawOnPlayer(int x, int y)
{

}

void GBonus::Move()
{
	if (m_timer > 0)
		if (--m_timer == 0) {
			End();
			*m_self = NULL;
			delete this;
		}
}

void GBonus::Picked(GBomber *bomber, GBonus **self)
{
	m_bomber = bomber;
	m_self   = self;
	m_map    = bomber->m_map;

	m_timer = m_timer_MAX;

	OneTime();
	if (m_onetime) {
		*m_self = NULL;
		delete this;
	}

	m_timer = (int)(((float)m_timer)/gspeed);
	m_timer_MAX = (int)(((float)m_timer_MAX)/gspeed);

}

void GBonus::OneTime()
{

}

void GBonus::BeforeInput(bool *left, bool *right, bool *up, bool *down, bool *action)
{

}

GBonus* GBonus::GetCopy()
{
	return NULL;
}

void GBonus::End()
{

}

bool GBonus::HitProtect()
{
	return false;
}

void GBonus::AfterPut(int bombID)
{

}
