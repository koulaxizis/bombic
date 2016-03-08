// GMrchaAI3.h: interface for the GMrchaAI3 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GMRCHAAI3_H__6EF86363_0D6E_4BD0_9D84_BAD8215434F3__INCLUDED_)
#define AFX_GMRCHAAI3_H__6EF86363_0D6E_4BD0_9D84_BAD8215434F3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GMrchaAI2.h"

class GMrchaAI3 : public GMrchaAI2  
{
public:
	virtual void AIMove();
	GMrchaAI3(GGame *game, GMap *map, GMrcha *mrcha);
	virtual ~GMrchaAI3();

};

#endif // !defined(AFX_GMRCHAAI3_H__6EF86363_0D6E_4BD0_9D84_BAD8215434F3__INCLUDED_)
