#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int num;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	if (num >= 0)
	{
		if(num > 0)
			printf("양수입니다\n");
		else
			printf("0입니다.\n");
	}
	else
		printf("음수입니다.\n");
		

	return 0;
}

