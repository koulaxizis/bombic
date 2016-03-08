// GBombaMega.h: interface for the GBombaMega class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GBOMBAMEGA_H__12DD9AE8_3A91_428E_A2CA_C66483758D28__INCLUDED_)
#define AFX_GBOMBAMEGA_H__12DD9AE8_3A91_428E_A2CA_C66483758D28__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GBomba.h"

class GBombaMega : public GBomba  
{
public:
	void SetDanger();
	virtual void Move();
	GBombaMega();
	virtual ~GBombaMega();

};

#endif // !defined(AFX_GBOMBAMEGA_H__12DD9AE8_3A91_428E_A2CA_C66483758D28__INCLUDED_)
