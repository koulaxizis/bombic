// GMrchaAI2.h: interface for the GMrchaAI2 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GMRCHAAI2_H__EB1599D8_2364_46BD_B136_70A2D3EEF0B6__INCLUDED_)
#define AFX_GMRCHAAI2_H__EB1599D8_2364_46BD_B136_70A2D3EEF0B6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GMrchaAI1.h"

class GMrchaAI2 : public GMrchaAI1  
{
public:
	virtual void AIMove();
	GMrchaAI2(GGame *game, GMap *map, GMrcha *mrcha);
	virtual ~GMrchaAI2();

};

#endif // !defined(AFX_GMRCHAAI2_H__EB1599D8_2364_46BD_B136_70A2D3EEF0B6__INCLUDED_)
