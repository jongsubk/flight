#ifndef __CSET_H__
#define __CSET_H__

#include "3D.h"

#define PI	3.14159265


extern double rxx, rxy, rxz;
extern double ryx, ryy, ryz;
extern double rzx, rzy, rzz;
extern double rxo, ryo, rzo;


void Set_rxrot(double theta);
void Set_ryrot(double theta);
void Set_rzrot(double theta);

#endif	//endof	__CLINE_H__