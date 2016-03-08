// MDeadMatching.h: interface for the MDeadMatching class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MDEADMATCHING_H__F35E941B_A161_4AA5_BAFF_710A0E9D6038__INCLUDED_)
#define AFX_MDEADMATCHING_H__F35E941B_A161_4AA5_BAFF_710A0E9D6038__INCLUDED_


#include <string>
#include "GBase.h"

class MDeadMatching : public GBase  
{
public:
	int OnKey(int nChar);
	virtual void Destroy();
	void ProcessGame();
	virtual void Draw();
	void RunGame();
	void Init(CMainFrame *parent);
	void StartGame(std::string file, int players, bool monsters, int bonuslevel, int vicotries);
	MDeadMatching();
	virtual ~MDeadMatching();

	int      m_players;
	bool     m_monsters;
	int      m_victories;
	int      m_bonuslevel;
	std::string  m_file;

	int      m_bPozadi;

	int      m_bDeadBMP;
	int      m_bDead;

	bool     m_gamerunned;
	bool     m_gameend;

	int      m_score[4];
};

#endif // !defined(AFX_MDEADMATCHING_H__F35E941B_A161_4AA5_BAFF_710A0E9D6038__INCLUDED_)
