#include "3D.h"
#include "CVertex.h"


void Set_Vertex(CVertex *vertex, double x, double y, double z)
{
	vertex->m_x = x;
	vertex->m_y = y;
	vertex->m_z = z;
}

void Move_Vertex(CVertex *vertex, double x, double y, double z)
{
	vertex->m_x += x;
	vertex->m_y += y;
	vertex->m_z += z;
}

