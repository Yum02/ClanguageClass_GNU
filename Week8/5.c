#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	char RGB;
	printf("신호등의 색 입력");
	a : scanf("%c", &RGB);

	switch (RGB)
	{
		case 'R': case 'r':
			printf("정지!");
			break;
		case 'G': case 'g':
			printf("출발!");
			break;
		case 'B': case 'b':
			printf("주의!");
			break;
		default:
			printf("잘못된 입력입니다.");
			goto a;
	}
	return 0;
}