#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	char vowel;
	printf("영문자 하나를 입력하시오:(a~z만 입력) \n");
	scanf("%c", &vowel);

	switch (vowel)
	{
	case 'A': case 'a':
	case 'E': case 'e':
	case 'I': case 'i':
	case 'O': case 'o':
	case 'U': case 'u':
		printf("%c는 모음입니다.\n", vowel);
		break;
	default:
		printf("%c는 자음입니다.\n", vowel);
	}
	return 0;
}