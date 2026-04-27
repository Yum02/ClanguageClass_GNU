#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int x, y;
	printf("첫번째 정수 입력: ");
	scanf("%d", &x);
	printf("두번째 정수 입력: ");
	scanf("%d", &y);

	if (x > y)
	{
		printf("큰수는 %d.\n", x);
	}
	else
	{
		printf("큰수는 %d\n", y);
	}

	return 0;
}