#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int num;
	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	switch (num)
	{
	case 1:
		printf("하나");
		break;
	case 2:
		printf("둘");
		break;
	case 3:
		printf("셋");
		break;
	default:
		printf("많다");
		break;
	}
	return 0;
}