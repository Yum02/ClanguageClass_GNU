#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int x;
	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	if (x % 2 == 0)
	{
		printf("%d는 짝수입니다.\n", x);
	}
	else
	{
		printf("%d는 홀수입니다.\n", x);
	}

	return 0;
}