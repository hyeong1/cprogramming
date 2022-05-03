#include <stdio.h>

int get_max(int x, int y) {
    int result;

    if (x > y) {
        result = x;
    }
    else {
        result = y;
    }

    return result;
}

int main() {
    int num1, num2;
    printf("두 정수 입력: ");
    scanf("%d %d", &num1, &num2);

    printf("%d", get_max(num1, num2));

    return 0;
}