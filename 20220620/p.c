#include <stdio.h>

// 모래시계
int main() {
    int n;
    printf("길이를 입력하세요: ");
    scanf("%d", &n);

    for (int i = 1;i <= n;i++) {
        for (int j = 1;j < i;j++)
            printf(" ");
        for (int j = 2*n;j > 2*i -1;j--)
            printf("*");
        printf("\n");
    }
    for (int i = 2;i <= n;i++) {
        for (int j = n;j > i;j--)
            printf(" ");
        for (int j = 1;j <= 2*i -1;j++)
            printf("*");
        printf("\n");
    }

    return 0;
}