#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	double m, v, E;
	printf("질량 : ");
	scanf("%lf", &m);
	printf("속도 : ");
	scanf("%lf", &v);
	E = 0.5 * m * v * v;
	printf("운동에너지 : %lf", E);

	return 0;
}