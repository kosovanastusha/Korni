#include <stdio.h>
#include <stdlib.h>
#include "Korni.h"
#include <math.h>

int Proveryaem(float D)
{
	if (D == 0) {
		return 0;
	}
	if (D < 0) {
		return 1;
	}
	if (D > 0) {
		return 2;
	}
	return 0;
}

float Dec(float a,float b, float c)
{
	float D = b*b - 4 * a * c;
	return D;
}

float Znach (float D, float a, float b, float c, int i)
{
	float x;
	x = ((-1)* b + sqrt(D) * i) / (2 * a);
	return x;
}
