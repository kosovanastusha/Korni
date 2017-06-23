#include <stdio.h>
#include <stdlib.h>
#include "Korni.h"

int main()
{
	float a,b,c,D;
	printf("a b c \n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	D = b*b-4*a*c;
	korni(a,b,c,D);
	system("PAUSE");
}
