#include "circle.h"

float xmin(Circle c1, Circle c2){
	return min(c1.center.x - c1.radius, c2.center.x - c2.radius);
}


float ymin(Circle c1, Circle c2){
	return min(c1.center.y - c1.radius, c2.center.y - c2.radius);
}

float xmax(Circle c1, Circle c2){
	return min(c1.center.x + c1.radius, c2.center.x + c2.radius);
}

float ymax(Circle c1, Circle c2){
	return min(c1.center.y + c1.radius, c2.center.y + c2.radius);
}

bool is_in(Point pt, Circle circ){
	return (distance(pt,circ.center) <= circ.radius);
}
