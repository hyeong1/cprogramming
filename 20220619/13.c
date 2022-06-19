#include <stdio.h>

int main() {
    int a, b;
    printf("두 개의 정수 입력: ");
    scanf("%d %d", &a, &b);

    printf("%d의 배수이지만 %d의 배수는 아닌 수\n", a, b);

    for (int i = 1;i <= 100;i++) {
        if (i % 5 == 0 && i % 3 != 0)
            printf("%d ", i);
    }

    return 0;
}