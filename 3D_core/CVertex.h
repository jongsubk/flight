#ifndef __CVERTEX_H__
#define __CVERTEX_H__


typedef struct CVERTEX
{
	double m_x;
	double m_y;
	double m_z;
} CVertex;



void Set_Vertex(CVertex *vertex, double x, double y, double z);
void Move_Vertex(CVertex *vertex, double x, double y, double z);


#endif	//endof	__CVERTEX_H__