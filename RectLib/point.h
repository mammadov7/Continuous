#ifndef __POINT_H // indispensable pour éviter les déclarations multiples
#define __POINT_H
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float min(float x, float y);
float max(float x, float y);

struct str_point {
  float x;
  float y;
};
typedef struct str_point Point;

void print_point(Point p);
float distance(Point pt1, Point pt2);

#endif
