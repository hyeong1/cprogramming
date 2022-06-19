#include <stdio.h>

int main() {
    int x, digit;
    printf("정수를 입력하시오: ");
    scanf("%d", &x);

    do {
        digit = x % 10;
        printf("%d", digit);
        x = x / 10;
    } while (x > 0);

    printf("\n");

    return 0;
}