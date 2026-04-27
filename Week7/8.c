#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	char rgb;
	printf("R, G, B 중 하나를 입력하시오: ");
re: scanf("%c", &rgb);

	if (rgb == 'R' || rgb == 'r')
		printf("정지!");
	else if (rgb == 'G' || rgb == 'g')
		printf("출발!");
	else if (rgb == 'B' || rgb == 'b')
		printf("주의!");
	else
	{		printf("잘못된 입력입니다.");
	goto re;
	}
	return 0;
}