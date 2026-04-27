#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int day, year, month, day_d;
	printf("일짜 입력>>");
	scanf("%d", &day);
	printf("입력한 날짜 : %d\n", day);

	year = day / 365;
	month = (day % 365) / 30;
	day_d = (day % 365) % 30;
	printf("%d년 %d월 %d일", year, month, day_d);

	return 0;
}