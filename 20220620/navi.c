#include <stdio.h>

// 나비모양 별찍기
int main() {
    int n;
    printf("숫자 입력: ");
    scanf("%d", &n);

    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= i;j++)
            printf("*");
        for (int j = n;j > i;j--)
            printf(" ");
        for (int j = n;j > i;j--)
            printf(" ");
        for (int j = 1;j <= i;j++)
            printf("*");
        printf("\n");
    }
    for (int i = 1;i <= n-1;i++) {
        for (int j = n-1;j >= i;j--)
            printf("*");
        for (int j = 1;j <= i;j++)
            printf(" ");
        for (int j = 1;j <= i;j++)
            printf(" ");
        for (int j = n-1;j >= i;j--)
            printf("*");
        printf("\n");
    }

    return 0;
}