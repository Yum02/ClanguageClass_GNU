#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int year, month, day;
	int won;
	float card;
	printf("오늘의 날짜를 입력하시오(YYYY.DD.YY 형식으로) :");
	scanf("%d.%d.%d", &year, &month, &day);

	printf("요즘 영화 한편 보려면 얼마나 하나요? ");
	scanf("%d", &won);

	printf("멤버십 카드가 있으면 몇 퍼센트나 할인되나요? ");
	scanf("%f", &card);

	printf("%d년 %d월 %d일 저녁에\n", year, month, day);
	printf("%d원으로 영화 한편 보면 어때요?\n", won);
	printf("%.2f%%나 할인 받을 수 있는데요!", card);

	return 0;
}