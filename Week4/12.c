#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	double x, y, z;
	double v;
	printf("상자의 가로 세로 높이를 한번에 입력하시오 :\n ");
	scanf("%lf %lf %lf", &x, &y, &z);
	v = x * y * z;
	printf("상자의 부피는 %.6lf 입니다.", v);
}