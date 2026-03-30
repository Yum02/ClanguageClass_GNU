#include<stdio.h>
#pragma warning(disable:4996)
#define py 3.3

int main()
{
	int a;
	float house;
	printf("평을 입력하시오. : ");
	scanf("%d", &a);
	house = a * py;
	printf("%f평방미터입니다.", house);
	
	return 0;
}