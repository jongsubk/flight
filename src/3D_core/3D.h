#ifndef __3D_H__
#define __3D_H__

#ifdef WIN32
	#include <windows.h>
	extern HWND hWnd;
	extern HDC hdc;
#endif

#include "TypeDefine.h"
#include "CVertex.h"
#include "CLine.h"

#include "Render_World.h"
#include "../Geographic/Ground.h"



/**

*/
struct CANVAS_s
{
    CVertex		p1;
    CVertex		p2;

    UINT16		width;
    UINT16		height;
};






#endif