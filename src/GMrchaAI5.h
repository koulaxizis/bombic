// GMrchaAI5.h: interface for the GMrchaAI5 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GMRCHAAI5_H__719D1A38_1E7F_49DB_87FA_6C42684E9045__INCLUDED_)
#define AFX_GMRCHAAI5_H__719D1A38_1E7F_49DB_87FA_6C42684E9045__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GMrchaAI3.h"

class GMrchaAI5 : public GMrchaAI3  
{
public:
	virtual void AIMove();
	GMrchaAI5(GGame *game, GMap *map, GMrcha *mrcha);
	virtual ~GMrchaAI5();

};

#endif // !defined(AFX_GMRCHAAI5_H__719D1A38_1E7F_49DB_87FA_6C42684E9045__INCLUDED_)
