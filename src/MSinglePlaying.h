// MSinglePlaying.h: interface for the MSinglePlaying class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MSINGLEPLAYING_H__F3AD8428_DB93_4C26_9D14_E1F5A540EEF5__INCLUDED_)
#define AFX_MSINGLEPLAYING_H__F3AD8428_DB93_4C26_9D14_E1F5A540EEF5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <string>
#include "GBase.h"

#define MAX_SINGLE_LEVELS 40

class MSinglePlaying : public GBase  
{
public:
	int  LoadLevel();
	void ProcessGame();
	void RunGame();
	void StartGame(std::string code, int players);
	virtual int OnKey(int nChar);
	virtual void Init(CMainFrame *parent);
	virtual void Draw();
	virtual void Destroy();

	struct st_singleplay {
		int  picturepre;
		int  picturepost;
		int  picturedead;
		char code[7];
		char file[20];
		int  bonuslevel;
		int  mrchovnik;
		int  text[4]; // stejne jako m_menustate - popisky
		int  needwon; // zda je potreba level dohrat
	};

	st_singleplay  m_data[MAX_SINGLE_LEVELS];
	int            m_levels;
	int            m_level;

	MSinglePlaying();
	virtual ~MSinglePlaying();


	int      m_players;
	int      m_menustate; // 0 - uvod, 1 - hra, 2 - vyhra, 3 - prohra

	int      m_bScreens[4]; // obrazovky pozadi

};

#endif // !defined(AFX_MSINGLEPLAYING_H__F3AD8428_DB93_4C26_9D14_E1F5A540EEF5__INCLUDED_)

