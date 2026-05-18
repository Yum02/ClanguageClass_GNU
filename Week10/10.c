#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	char ch;
	for (;;)
	{
		printf("어떤 키나 누르세요, q는 종료 : ");
		scanf("%c", &ch);
		getchar();
		if (ch == 'q')
			break;
	}


	return 0;
}