#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	char a;
	printf("문자를 입력하시오 :");
	scanf("%c", &a);
	printf("ASCII 코드 : %d", a);

	return 0;
}