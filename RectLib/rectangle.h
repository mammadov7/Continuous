#ifndef __RECTANGLE_H 
#define __RECTANGLE_H 

#include "point.h" 
#include "circle.h"
#include <time.h>

struct str_rectangle 
{
  Point xmax_ymax;
  Point xmin_ymin;
  };
  
typedef struct str_rectangle Rectangle;

Rectangle bounding_rectangle(Circle c1, Circle c2);
float surface_rectangle(Rectangle rect);

float randf(float min, float max);
Point random_point(Rectangle rect);

#endif
