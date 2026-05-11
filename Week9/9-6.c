#include<stdio.h>
#include<limits.h>
#pragma warning(disable:4996)

int main()
{
	int i = 0;
	int number, MIN = INT_MAX;
	printf("정수를 입력하시오(종료는Ctrl+z)\n");

	while (scanf("%d", &number)!=EOF)
	{
		if(number < MIN)
			MIN = number;
	}
	printf("입력된 정수 중 가장 작은 수는 %d입니다.\n", MIN);
	return 0;
}