#include<stdio.h>
#pragma warning(disable:4996)

int main()
{	
	char grade;
	printf("점수를 입력하시오: ");
	scanf("%d", &grade);

	switch (grade)
	{
		case 'A':
			printf("Excellent!\n");
			break;
		case 'B':
		case 'C':
			printf("Good\n");
			break;
		case 'D':
			printf("Poor\n");
			break;
		case 'F':
			printf("Fail\n");
			break;
		default:
			printf("잘못된 입력입니다.\n");
	}
	return 0;
}