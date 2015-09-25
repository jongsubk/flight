#include "3D.h"
#include "CVertex.h"
#include "CSet.h"

void Render_Ground(CVertex point[])
{
	UINT16 i;
	CVertex a[SIZE_OF_GROUND] = { 0, };

	/**
	 brush sample
	*/
    HPEN hpen, hpenOld;
    HBRUSH hbrush, hbrushOld;

	if( point == NULL )
		return;

    // Create a green pen.
    hpen = CreatePen(PS_SOLID, 1, RGB(0xFF, 0xFF, 0xFF));
    // Create a red brush.
    hbrush = CreateSolidBrush(RGB(0, 0, 0));

    // Select the new pen and brush, and then draw.
    hpenOld = SelectObject(hdc, hpen);
    hbrushOld = SelectObject(hdc, hbrush);

    Rectangle(hdc, 0,0, 500,500);


	for( i=0; i<SIZE_OF_GROUND; i+=2 )
	{
		a[i].m_x = point[i].m_x * rxx + point[i].m_y * ryx + point[i].m_y * rzx + rxo;
		a[i].m_y = point[i].m_x * rxy + point[i].m_y * ryy + point[i].m_y * rzy + ryo;
		a[i].m_z = point[i].m_x * rxz + point[i].m_y * ryz + point[i].m_y * rzz + rzo;

		a[i+1].m_x = point[i+1].m_x * rxx + point[i+1].m_y * ryx + point[i+1].m_y * rzx + rxo;
		a[i+1].m_y = point[i+1].m_x * rxy + point[i+1].m_y * ryy + point[i+1].m_y * rzy + ryo;
		a[i+1].m_z = point[i+1].m_x * rxz + point[i+1].m_y * ryz + point[i+1].m_y * rzz + rzo;

		DrawLine( &hpen, &a[i], &a[i+1] );
 	}
    
	// clean up.
    SelectObject(hdc, hpenOld);
    DeleteObject(hpen);
    SelectObject(hdc, hbrushOld);
    DeleteObject(hbrush);

}



void Move_Ground(CVertex point[], SINT16 x, SINT16 y, SINT16 z)
{
	UINT16 i;

	for( i=0; i<SIZE_OF_GROUND; i++ )
	{
		Move_Vertex( &point[i], x, y, z  );
 	}

}

