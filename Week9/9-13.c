#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	char enter;
	do {
		printf("신호등 색상을 입력하세여(r, g, b): ");
		scanf("%c", &enter);
		getchar(); // 버퍼 비우기
	} while (enter != 'r' && enter != 'g' && enter != 'b');
	switch(enter){
		case 'r':
			printf("정지\n");
			break;
		case 'g':
			printf("출발\n");
			break;
		case 'b':
			printf("주의\n");
			break;
	}
	return 0;
}

