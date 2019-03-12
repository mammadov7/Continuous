#include "rectangle.h"

Rectangle bounding_rectangle(Circle c1, Circle c2){
	Rectangle r = {{xmin(c1,c2), ymin(c1,c2)}, {xmax(c1,c2), ymax(c1,c2)}};
	return r;
}


float surface_rectangle(Rectangle rect){
	return (rect.xmax_ymax.x  - rect.xmin_ymin.x) * (rect.xmax_ymax.y  - rect.xmin_ymin.y);
}


float randf(float min, float max){
	return (float) rand() * (max-min) / (float) RAND_MAX + min;
}


Point random_point(Rectangle rect){
	Point p = {randf(rect.xmin_ymin.x,rect.xmax_ymax.x) , randf(rect.xmin_ymin.y,rect.xmax_ymax.y)};
	return p;
}
