#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int num;
	int sum = 0;

	do
	{
		printf("정수를 입력하시오(0을 입력시 종료): ");
		scanf("%d", &num);
		sum += num;
	} while (num!=0);
	printf("입력된 정수의 합은 %d입니다.\n", sum);
	return 0;
}