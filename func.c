#include <stdlib.h>

#include "func.h"

int f_x2(int x)
{
	return x*2;
}

float min(float x, float y)
{
	return (x<y)?x:y;
}

float root(float x)
{
	return sqrtf(x);
}

char* fake_hello()
{
	return NULL;
}

char* hello()
{
	char* h = malloc(6);
	char* p = h;
	*p++ = 'h';
	*p++ = 'e';
	*p++ = 'l';
	*p++ = 'l';
	*p++ = 'o';
	*p++ = 0;
	return h;
}
