#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	float grade;

	printf("Your Grade : ");
	scanf("%f", &grade);
	printf("Grade : %.2f", grade);

	return 0;
}