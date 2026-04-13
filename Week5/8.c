#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int a, b, max;
	printf("숫자입력 : ");
	scanf("%d %d", &a, &b);
	max = (a > b) ? a : b;
	printf("%d", max);
	return 0;
}