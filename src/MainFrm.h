// MainFrm.h : interface of the CMainFrame class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAINFRM_H__20FF487E_BC0C_4B01_A038_0FBF3E204308__INCLUDED_)
#define AFX_MAINFRM_H__20FF487E_BC0C_4B01_A038_0FBF3E204308__INCLUDED_

#include "GBase.h"
#include "GGame.h"
#include "MMenu.h"
#include "MIntro.h"
#include "HFont.h"
#include "SDL_ttf.h"

class CMainFrame
{
	
public:
	CMainFrame();
protected: 

// Attributes
public:

	GGame     m_game;
	MMenu     m_menu;

	GBase    *m_actual;
	
	HFont    *m_font;
	HFont    *m_fontL;
// Operations
public:

// Overrides

// Implementation
public:
	bool StartIntro();
	bool StartMenu();
	bool StartGame(std::string file, int players, bool deadmatch, bool monsters, int bonuslevel);
	void Draw();
	void Move();
	virtual ~CMainFrame();


	HDSoundBuffer m_sb;


// Generated message map functions
	void OnTimer();
	bool OnKeyDown(int nChar);
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINFRM_H__20FF487E_BC0C_4B01_A038_0FBF3E204308__INCLUDED_)

