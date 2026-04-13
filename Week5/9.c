#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int t, result;
	int h, m, s;
	printf("초를 입력하시오 : ");
	scanf("%d", &t);
	h = t / 3600;
	m = (t % 3600) / 60;
	s = (t % 3600 % 60);
	printf("% hours, %d minutes, and %d seconds", h,m,s);
}