#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	float a, b;
	int sum;
	printf("2개의 실수를 입력하시오 : ");
	scanf("%f %f",&a, &b);
	
	sum = (int)a + (int)b;

	printf("합의 정수부 : %d", sum);
	return 0;
}