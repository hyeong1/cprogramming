#include <stdio.h>

int main() {
    int num = 1;
    for (int i = 1;i <= 4;i++) {
        for (int j = 1;j <= i;j++) { 
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    printf("\n");
    // 정삼각형
    for (int i = 1;i <= 5;i++) {
        for (int j = 5;j >= i;j--)
            printf(" ");
        for (int j = 1;j <= 2*i-1;j++) 
            printf("*");
        printf("\n");
    }

    printf("\n");
    // 역삼각형
    for (int i = 1;i <= 5;i++) {
        for (int j = 1;j <= i;j++)
            printf(" ");
        for (int j = 10;j > 2*i-1;j--) 
            printf("*");
        printf("\n");
    }

    printf("\n");
    // 모래시계
    for (int i = 1;i <= 5;i++) {
        for (int j = 1;j <= i;j++)
            printf(" ");
        for (int j = 10;j > 2*i-1;j--) 
            printf("*");
        printf("\n");
    }
    for (int i = 1;i <= 5;i++) {
        for (int j = 5;j >= i;j--)
            printf(" ");
        for (int j = 1;j <= 2*i-1;j++) 
            printf("*");
        printf("\n");
    }

    return 0;
}