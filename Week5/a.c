#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c;
	int max;
	printf("3개의 숫자 입력 : ");
	scanf("%d %d %d", &a, &b, &c);

	max = (a > b)  ? a : b;
	max = (max > c) ? max : c;
	printf("max = %d", max);
}