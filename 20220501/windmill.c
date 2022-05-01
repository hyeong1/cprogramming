#include <stdio.h>

int main() {
    int i, j, length;

    printf("길이 입력: ");
    scanf("%d", &length);

    for (i = 0;i < length;i++) {
        for (j = 0;j <= i;j++) {
            printf("*");
        }
        for (j = length;j >= i;j--) {
            printf(" ");
        }
        for (j = length - 1;j > i;j--) {
            printf("*");
        }
        printf("*\n");
    }
    for (i = 0;i < length;i++) {
        for (j = length;j >= i;j--) {
            printf(" ");
        }
        for (j = 0;j <= i;j++) {
            printf("*");
        }
        for (j = 0;j <= i;j++) {
            printf(" ");
        }
        for (j = length - 1;j > i;j--) {
            printf("*");
        }
        printf("*\n");
    }

    return 0;
}
