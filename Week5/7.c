#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)

int main()
{
	double v, r;
	const double PI = 3.141592;

	printf("반지름 : ");
	scanf("%lf", &r);

	v = (4.0 / 3.0) * PI * pow(r, 3);
	printf("부피는 %lf", v);
	return 0;
}