#ifndef __GROUND_H__
#define __GROUND_H__


#define GROUND_X_COUNT 20
#define GROUND_Y_COUNT 20

extern CVertex GeoGround[GROUND_X_COUNT*GROUND_Y_COUNT];


#define SIZE_OF_GROUND	( sizeof(GeoGround)/sizeof(GeoGround[0]) )



#endif