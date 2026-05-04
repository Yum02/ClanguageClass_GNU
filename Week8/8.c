#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	float score;
	int a;
	printf("점수를 입력하시오: \n");
	scanf("%f", &score);
	
	if (score <= 4.5 && score >= 4.3)
		a = 1;
	else if (score <= 4.29 && score >= 4.0)
		a = 2;
	else if (score <= 3.9 && score >= 2.0)
		a = 3;
	else
		printf("오류");

	switch (a)
	{
		case 1:
			printf("장학금과 해외연수 기회가 주어집니다.\n");
			break;
		case 2:
			printf("장학금이 주어집니다.\n");
			break;
		case 3:
			printf("해외연수 기회가 주어집니다.\n");
			break;
	}

}