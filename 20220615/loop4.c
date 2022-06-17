#include <stdio.h>

// 별찍기1
int main() {
    int len;
    printf("길이를 입력하시오: ");
    scanf("%d", &len);

    for (int i = 1;i <= len;i++) {
        for (int j = len;j > i;j--) {
            printf(" ");
        }
        for (int j = 1;j <= i;j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}