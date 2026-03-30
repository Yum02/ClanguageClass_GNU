#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	char name, grade;
	printf("영어 이름 첫 글자는 무엇인가요? : ");
	scanf(" %c", &name);

	printf("프로그래밍 과목 학점을 물어봐도 될까요?(A to F)");
	scanf(" %c", &grade);

	printf("%c군의 프로그래밍 과목 성적은 %c입니다.", name, grade);

	return 0;
}