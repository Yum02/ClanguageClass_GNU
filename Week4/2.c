#include<stdio.h>
#pragma warning(disable:4996)
#define PI 3.14 //기호 상수(#define)를 사용하여 "PI"라는 상수 선언

int main()
{
	float r, v, l;  // r: 반지름, v : 부피(면적), l : 둘레
	printf("원의 반지름을 입력하시오 : ");
	scanf("%f", &r);

	v = PI * r * r;
	l = 2* PI * r;
	printf("원의 면적 : %f\n", v);
	printf("원의 둘레 : %f", l);

	return 0;
}