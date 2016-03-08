// GBase.h: interface for the GBase class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBASE_H__00D9BEF3_D412_464E_84F1_9135CBC9F081__INCLUDED_)
#define AFX_GBASE_H__00D9BEF3_D412_464E_84F1_9135CBC9F081__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "HFont.h"


#define MENU_DEFAULT          0  // zadna zmena
#define MENU_MAIN             1  // hlavni menu
#define MENU_DEADMATCH        2  // dead match menu
#define MENU_DEADMATCHING     3  // probihajici souboj
#define MENU_SINGLE           4  
#define MENU_SINGLEPLAYING    5
#define MENU_END              6  // koec hry
#define MENU_MRCHOVNIK        7  // seznam mrch
#define MENU_SETTING          8 
#define MENU_HELP             9 
#define MENU_CREDITS          10 

class CMainFrame;
class CD3DFont;

extern float gspeed; // koeficinet rychlosti hry

#include "HTranslate.h"     // jazyk pro preklad

class GBase  
{
public:
	virtual void Destroy();
	GBase();
	virtual ~GBase();

	virtual void Init(CMainFrame *parent);

	virtual int  OnKey(int nChar) {	return MENU_DEFAULT; };
	virtual void Draw() {};
	virtual void Move() {};

protected:
	CMainFrame *m_pParent;
	HFont   *m_font;
	HFont   *m_fontL;
};

#endif // !defined(AFX_GBASE_H__00D9BEF3_D412_464E_84F1_9135CBC9F081__INCLUDED_)
