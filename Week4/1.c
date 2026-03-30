#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int x;
	int y;
	int z;
	int sum;
	int avg;

	printf("첫번째 정수를 입력하시오 : ");
	scanf("%d", &x);
	printf("두번째 정수를 입력하시오 : ");
	scanf("%d", &y);
	printf("세번째 정수를 입력하시오 : ");
	scanf("%d", &z);

	sum = x + y + z;
	avg = sum / 3;
	printf("세 수의 합은 %d이며, 평균값은 %d이다.", sum, avg);
	return 0;
}