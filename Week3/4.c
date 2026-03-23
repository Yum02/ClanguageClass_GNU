//½Ç½À 1

#include <stdio.h>

int main(void) {
    int a = 100, b = 200;
    int sum, sub, mul, div;
    sum = a + b, sub = a - b, mul = a * b, div = a / b;

    printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n", a, b, a + b, a, b, a - b, a, b, a * b, a, b, a / b);
    printf("%d, %d, %d, %d", sum, sub, mul, div);
    return 0;
}