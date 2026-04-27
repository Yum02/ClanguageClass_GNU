#include<stdio.h>
#pragma warning(disable:4996)
#include<math.h>

int main()
{
	const float PI = 3.14;
	float r, V, S;
	r = 8.32;
	V = (4.0 / 3.0) * PI * pow(r, 3);
	S = 4 * PI * pow(r, 2);
	printf("구의 체적은 %.3f입니다\n", V);
	printf("구의 표면적은 %.3f입니다\n", S);
	return 0;
}