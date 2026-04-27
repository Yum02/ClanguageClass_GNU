#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c, max;
	printf("세개의 정수 입력 >> ");
	scanf("%d %d %d", &a, &b, &c);
	max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	printf("가장 큰 수 : %d", max);

	return 0;
}