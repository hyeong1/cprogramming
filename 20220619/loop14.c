#include <stdio.h>

int main() {
    int x, digit;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &x);

    do {
        digit = x % 10;
        printf("%d", digit);
        x = x / 10;
    } while (x > 0);

    printf("\n");

    return 0;
}