// GBombaNapalm.h: interface for the GBombaNapalm class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBOMBANAPALM_H__5C420690_6727_486A_BC5F_66293E1E363D__INCLUDED_)
#define AFX_GBOMBANAPALM_H__5C420690_6727_486A_BC5F_66293E1E363D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBomba.h"

class GBombaNapalm : public GBomba  
{
public:
	virtual void Move();
	GBombaNapalm();
	virtual ~GBombaNapalm();

};

#endif // !defined(AFX_GBOMBANAPALM_H__5C420690_6727_486A_BC5F_66293E1E363D__INCLUDED_)
