#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	float height, weight;
	printf("키를 입력하시오 : ");
	scanf("%f", &height);
	printf("몸무게를 입력하시오 : ");
	scanf("%f", &weight);
	weight <= (height - 100.0) * 0.9 ?printf("정상"):printf("비정상");
	return 0;
}