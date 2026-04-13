#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, total;
	printf("정수 입력 : ");
	scanf("%d", &a);
	total = (a % 2 == 1) ? 1 : 2;

	printf("%d", total);
	return 0;
}