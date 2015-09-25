#ifndef __CLINE_H__
#define __CLINE_H__

#include "3D.h"

typedef struct CLINE
{
	CVertex *m_p1;
	CVertex *m_p2;

} CLine;



void Set_Line(CLine *line, CVertex *p1, CVertex *p2);
void DrawLine(HPEN* hpen, CVertex *line1, CVertex *line2);


#endif	//endof	__CLINE_H__