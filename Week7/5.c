#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int grade;
	re : printf("학점을 입력하시오: ");
	scanf("%d", &grade);
	if (grade  >= 0 && grade <= 100)
	{
		if (grade >= 90)
			printf("A학점입니다.\n");
		else if (grade >= 80)
			printf("B학점입니다.\n");
		else if (grade >= 70)
			printf("C학점입니다.\n");
		else if (grade >= 60)
			printf("D학점입니다.\n");
		else
			printf("F학점입니다.\n");
	}
	else
		printf("잘못입력하였음");
	goto re;
	return 0;
}

//#include <stdio.h>
//#pragma warning(disable:4996)
//
//int main()
//{
//	int grade;
//	printf("학점을 입력하시오: ");
//	scanf("%d", &grade);
//
//	if (grade >= 60)
//		if(grade >= 90)
//			printf("A학점입니다.\n");
//		else if (grade >= 80)
//			printf("B학점입니다.\n");
//		else if (grade >= 70)
//			printf("C학점입니다.\n");
//		else
//			printf("D학점입니다.\n");
//	else
//		printf("F학점입니다.\n");
//	return 0;
//}