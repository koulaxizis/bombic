// GObject.cpp: implementation of the GObject class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "D3DXApp.h"
#include "GObject.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

GObject::GObject()
{
	m_anim = 0;
	m_bBmp = 0;
	m_valid = false;
}

GObject::~GObject()
{

}

void GObject::Draw(int x, int y, bool walk, int bx, int by)
{

}

bool GObject::WalkIn()
{
	return true; 
}

// vraci true, kdyz vybuch prochazi
bool GObject::Hit()
{
	return true;
}
