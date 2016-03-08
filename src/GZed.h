// GZed.h: interface for the GZed class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GZED_H__ACE6A926_04C0_4284_990F_8F91408889D1__INCLUDED_)
#define AFX_GZED_H__ACE6A926_04C0_4284_990F_8F91408889D1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GObject.h"
#include "data.h"

class GZed : public GObject  
{
public:
	bool FireIn();
	virtual void Move();
	virtual bool Hit();
	void Draw(int bx, int by);
	void Init(GGame *game, int x, int y, int bBmp, int type);
	bool WalkIn();
	GZed();
	virtual ~GZed();

	bool m_destroiig;

	st_zed m_params;
};

#endif // !defined(AFX_GZED_H__ACE6A926_04C0_4284_990F_8F91408889D1__INCLUDED_)
