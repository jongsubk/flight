#include "3D.h"
#include "CVertex.h"
#include "CLine.h"


void Set_Line(CLine *line, CVertex *p1, CVertex *p2)
{
	line->m_p1 = p1;
	line->m_p2 = p2;
}


void DrawLine(HPEN* hpen, CVertex *v1, CVertex *v2)
{
	BOOL pen_initialized = FALSE;

	if( v1 == NULL || v2 == NULL )
		return;

	if( hpen == NULL )
	{
		*hpen = CreatePen(PS_SOLID, 1, RGB(0, 0, 0));	// Use default Pen (BLACK)
		pen_initialized = TRUE;
	}
     
	MoveToEx(hdc, v1->m_x, v1->m_y, (LPPOINT) NULL); 
    LineTo(hdc, v2->m_x, v2->m_y);
    
	//! clean up.
	if( pen_initialized )
		DeleteObject(hpen);
 
}