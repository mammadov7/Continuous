#ifndef __CIRCLE_H // indispensable pour éviter les déclarations multiples
#define __CIRCLE_H 

#include <stdbool.h>
#include "point.h"

struct str_circle 
{
  Point center;
  float radius;
  };
  
typedef struct str_circle Circle;

float xmin(Circle c1, Circle c2);
float ymin(Circle c1, Circle c2);
float xmax(Circle c1, Circle c2);
float ymax(Circle c1, Circle c2);
bool is_in(Point pt, Circle cerc);

#endif
