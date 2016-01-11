#include <stdio.h>
#include <stdlib.h>

#define PI 3.1416

main()
{
	float r, a;
	printf("Radius of circle: ");
	scanf("%f", &r);
	
	a = PI*r*r;
	
	printf("Area of the circle is %f", a);
	return 0;
}
