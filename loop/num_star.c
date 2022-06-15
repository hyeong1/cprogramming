#include <stdio.h>

int main() {
    // 1, 12, 123 출력
    for (int i = 1;i <= 3;i++) {
        for (int j = 1;j <= i;j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    // 1, 23, 456 출력
    int num = 1;
    for (int i = 1;i <= 3;i++) {
        for (int j = 1;j <= i;j++) {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}