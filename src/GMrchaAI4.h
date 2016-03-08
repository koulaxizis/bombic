// GMrchaAI4.h: interface for the GMrchaAI4 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GMRCHAAI4_H__1C87FBAA_F86B_4DDA_BE84_5499FDE199CB__INCLUDED_)
#define AFX_GMRCHAAI4_H__1C87FBAA_F86B_4DDA_BE84_5499FDE199CB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GMrchaAI0.h"

class GMrchaAI4 : public GMrchaAI0  
{
public:
	virtual void AIMove();
	GMrchaAI4(GGame *game, GMap *map, GMrcha *mrcha);
	virtual ~GMrchaAI4();

};

#endif // !defined(AFX_GMRCHAAI4_H__1C87FBAA_F86B_4DDA_BE84_5499FDE199CB__INCLUDED_)
