#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int i=1, j;
	while (i <= 9) {
		printf("----------%d´Ü----------\n", i);
		j = 1;
		while (j <= 9) {
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
		}
		i++;
	}
	return 0;
}