#ifndef __LOOKUP_H__
#define __LOOKUP_H__

#include "fixed.h"

#define	TABLE_LENGTH		31
#define K			1.646760258121
#define INV_K			0.607252935008
#define PRI_K			0.828159360960
#define INV_PRI_K		1.207497067763

#define PI			3.141592653589
#define HALF_PI			1.570796326794

struct rotation_info {
	int index;
	double tangent;
	double angle;
	double radian;
};

struct lookup_info_fixed {
	int index;
	FIXED tangent;
	FIXED angle;
	FIXED radian;
};
#endif
