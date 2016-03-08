// MHelp.cpp: implementation of the MHelp class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MHelp.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

MHelp::MHelp()
{

}

MHelp::~MHelp()
{

}

void MHelp::Destroy()
{
	if (m_bPozadi != -1) d3dx.DestroyTexture(m_bPozadi);
	m_bPozadi = -1;
}

void MHelp::Draw()
{
	d3dx.Draw(m_bPozadi, 400, 300, 0, 1.5625);

	m_font->MenuText( 400, 125,  lng.Translate(70), 0, 1, 0);
	m_font->MenuText( 220, 185,  lng.Translate(71), 0, 1, 0);
	m_font->MenuText( 220, 250,  lng.Translate(72), 0, 1, 0);
	m_font->MenuText( 220, 317,  lng.Translate(73), 0, 1, 0);
	m_font->MenuText( 220, 385,  lng.Translate(74), 0, 1, 0);
	m_fontL->MenuText( 470, 180,  lng.Translate(75), 0, 1, 0);
	m_fontL->MenuText( 470, 240,  lng.Translate(76), 0, 1, 0);
//	m_fontL->DrawTextScaled( 450, 380,  0.9f, 1, 1, 0xffffffff, lng.Translate(79), D3DFONT_FILTERED);
/*	CSize sz;
	m_font->GetTextExtent(lng.Translate(77), &sz);
	m_font->DrawTextScaled( 410-sz.cx, 423,  0.9f, 1, 1, 0xffffffff, lng.Translate(77), D3DFONT_FILTERED);
	m_font->GetTextExtent(lng.Translate(78), &sz);
	m_font->DrawTextScaled( 410-sz.cx, 457,  0.9f, 1, 1, 0xffffffff, lng.Translate(78), D3DFONT_FILTERED);
	*/

}

void MHelp::Init(CMainFrame *parent)
{
	GBase::Init(parent);

	m_bPozadi = d3dx.CreateTextureFromFile("mhelp.jpg");
}

int MHelp::OnKey(int nChar)
{
	return MENU_MAIN; 
}
