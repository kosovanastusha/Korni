#include <stdio.h>
#include <stdlib.h>
#include "Korni.h"
#include <math.h>

void korni(float a, float b, float c, float D)
{
	float x,x1,x2;
	if (D==0)
	{
		x = -b/(2*a);
		printf("D = %9.4f \n", D);
		printf("x = %9.4f \n", x);
	}
	if (D<0)
	{
		printf("D = %9.4f \n", D);
		printf("No roots");
	}
	if (D>0)
	{
		x1 = (-b+sqrt(D))/(2*a);
		x2 = (-b-sqrt(D))/(2*a);
		printf("D = %9.4f \n", D);
		printf("x1 = %9.4f \n", x1);
		printf("x2 = %9.4f \n", x2);
	}
}
