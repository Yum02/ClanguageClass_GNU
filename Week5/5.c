#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	double F, C;
	printf("È­¾¾¿Âµµ ÀÔ·Â : ");
	scanf("%lf", &F);
	C = 5.0 / 9.0 * (F - 32.0);
	printf("¼·¾¾ ¿Âµµ´Â %lf", C);
	return 0;
}