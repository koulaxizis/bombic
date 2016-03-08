// GMrchaAI_BOSS_DUDLIK.h: interface for the GMrchaAI_BOSS_DUDLIK class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GMRCHAAI_BOSS_DUDLIK_H__705F4307_B12C_401A_9E95_E16157FA8925__INCLUDED_)
#define AFX_GMRCHAAI_BOSS_DUDLIK_H__705F4307_B12C_401A_9E95_E16157FA8925__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GMrchaAI3.h"

class GMrchaAI_BOSS_DUDLIK : public GMrchaAI3  
{
public:
	void AIMove();
	GMrchaAI_BOSS_DUDLIK(GGame *game, GMap *map, GMrcha *mrcha);
	virtual ~GMrchaAI_BOSS_DUDLIK();

	int m_addmrnous;
	int m_addblesk;
};

#endif // !defined(AFX_GMRCHAAI_BOSS_DUDLIK_H__705F4307_B12C_401A_9E95_E16157FA8925__INCLUDED_)
