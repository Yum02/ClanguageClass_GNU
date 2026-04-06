#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	//정수 파트
	int x, y, result;
	printf("숫자를 입력하시오 : ");
	scanf("%d %d", &x, &y);
	result = x+y;
	printf("%d + %d = %d\n",x, y, result);
	result = x - y;
	printf("%d - %d = %d\n", x, y, result);
	result = x * y;
	printf("%d * %d = %d\n", x, y, result);
	result = x / y;
	printf("%d / %d = %d\n", x, y, result);
	result = x % y;
	printf("%d %% %d = %d", x, y, result);

	return 0;
}