#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int num1, num2, max, min;
	printf("임의의 정수 입력1 : ");
	scanf("%d", &num1);
	printf("임의의 정수 입력2 : ");
	scanf("%d", &num2);

	max = (num1 > num2) ? num1 : num2;
	min = (num1 < num2) ? num1 : num2;

	printf("몫은 %d이고 나머지는 %d입니다.", max / min, max % min);

	return 0;
}