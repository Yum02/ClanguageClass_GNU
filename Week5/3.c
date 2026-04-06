#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int x, y, r, d;
	printf("2개의 정수를 입력하시오 : ");
	scanf("%d, %d", &x, &y);

	d = x / y;
	r = x % y;
	printf("몫 : %d", d);
	printf("나머지 : %d", r);

	return 0;
}