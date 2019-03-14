#include "point.h"

float min(float x, float y) { return (x < y ? x : y); }
float max(float x, float y) { return (x < y ? y : x); }

float distance(Point pt1, Point pt2) {
  float dx = pt1.x - pt2.x;
  float dy = pt1.y - pt2.y;
  return sqrt(dx * dx + dy * dy);
}

void print_point(Point p) { printf("{\t%.2f\t%.2f\t}\n", p.x, p.y); }
