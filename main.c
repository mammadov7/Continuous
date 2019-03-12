#include "point.h" // techniquement facultatif, mais obligatoire par clarté
#include "circle.h" // techniquement facultatif, mais obligatoire par clarté
#include "rectangle.h"
#include <stdio.h>

int main () {
	Point p1 = {2.,2.};
	Point p2 = {2.,3.};
	Circle c1 = {p1, 1.};
	Circle c2 = {p2, 1.};
	
	Rectangle r = bounding_rectangle(c1,c2);
	
	srand(time(NULL));
	int i;
	Point p;
	int n = 100000;
	int cpt = 0;
	for (i = 0; i<n; ++i){
		p = random_point(r);
		if (is_in(p,c1) && is_in(p,c2))
			cpt++;
	}
	printf ("surface d'intersection : %.5f\n",(float) cpt / n * surface_rectangle(r));
	return 0;

}

