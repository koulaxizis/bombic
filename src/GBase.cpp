// GBase.cpp: implementation of the GBase class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "D3DXApp.h"
#include "GBase.h"
#include "MainFrm.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

GBase::GBase()
{
	
}

GBase::~GBase()
{

}

void GBase::Destroy()
{

}

void GBase::Init(CMainFrame *parent) 
{
	m_pParent = parent;
	m_font    = parent->m_font;
	m_fontL   = parent->m_fontL;
};
