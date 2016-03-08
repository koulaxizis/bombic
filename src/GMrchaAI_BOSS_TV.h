// GMrchaAI_BOSS_TV.h: interface for the GMrchaAI_BOSS_TV class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GMRCHAAI_BOSS_TV_H__C67617E8_DB05_4DCF_BDC8_58319143BA6A__INCLUDED_)
#define AFX_GMRCHAAI_BOSS_TV_H__C67617E8_DB05_4DCF_BDC8_58319143BA6A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GMrchaAI3.h"

class GMrchaAI_BOSS_TV : public GMrchaAI3  
{
public:
	void AIMove();
	GMrchaAI_BOSS_TV(GGame *game, GMap *map, GMrcha *mrcha);
	virtual ~GMrchaAI_BOSS_TV();

	int m_addmrnous;
};

#endif // !defined(AFX_GMRCHAAI_BOSS_TV_H__C67617E8_DB05_4DCF_BDC8_58319143BA6A__INCLUDED_)
