// GMrchaAI_Blesk.h: interface for the GMrchaAI_Blesk class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GMRCHAAI_BLESK_H__6A9F1308_00B6_4881_8CD8_7F2025D436AB__INCLUDED_)
#define AFX_GMRCHAAI_BLESK_H__6A9F1308_00B6_4881_8CD8_7F2025D436AB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GMrchaAI0.h"

class GMrchaAI_Blesk : public GMrchaAI0  
{
public:
	void AIMove();
	GMrchaAI_Blesk(GGame *game, GMap *map, GMrcha *mrcha);
	virtual ~GMrchaAI_Blesk();

};

#endif // !defined(AFX_GMRCHAAI_BLESK_H__6A9F1308_00B6_4881_8CD8_7F2025D436AB__INCLUDED_)
