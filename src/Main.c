#include <stdio.h>
#include <stdlib.h>
#include "Korni.h"

int main()
{
	int i;
	float a,b,c,D;
	printf("a b c \n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	D = b*b-4*a*c;
	korni(a,b,c,D);
if ( (a == 0) && (b == 0)) {
		printf("Has no roots");
		return 0;
	}
	if (a == 0) {
		x = c * -1 / b;
		printf ("%.2f",x);
		return 0;
	}
	D = Dec(a,b,c);
	i = Proveryaem(D);
	switch (i) {
		case 0:
			x = Znach (D, a, b, c, 1);
			printf ("%.2f",x);
			break;
		case 1:
			printf("Net korney");
			break;
		case 2:
			x = Znach (D, a, b, c, 1);
			printf ("%.2f\n",x);
			x = Znach (D, a, b, c, -1);
			printf ("%.2f",x);
			break;
	}
	return 0;
}
	system("PAUSE");
return 0;
}
