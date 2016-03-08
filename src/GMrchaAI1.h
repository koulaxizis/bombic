// GMrchaAI1.h: interface for the GMrchaAI1 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GMRCHAAI1_H__EFF1DE2F_643E_4B12_963B_E820E238936D__INCLUDED_)
#define AFX_GMRCHAAI1_H__EFF1DE2F_643E_4B12_963B_E820E238936D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GMrchaAI0.h"

class GMrchaAI1 : public GMrchaAI0  
{
public:
	virtual void AIMove();
	GMrchaAI1(GGame *game, GMap *map, GMrcha *mrcha);
	virtual ~GMrchaAI1();

};

#endif // !defined(AFX_GMRCHAAI1_H__EFF1DE2F_643E_4B12_963B_E820E238936D__INCLUDED_)
