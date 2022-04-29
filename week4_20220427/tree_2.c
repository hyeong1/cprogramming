#include <stdio.h>

int main() {
    int i, j;

    for (i = 0;i < 5;i++) {
        for (j = 4;j > i;j--) {
            printf(" ");
        }
        for (j = 0;j < i;j++) {
            printf("*");
        }
        for (j = 0;j < i;j++) {
            printf("*");
        }
        printf("*\n");
    }
    for (i = 0;i < 4;i++) {
        // i == 0, 1, 2, 3 --> 세로로 4번
        for (j = 0;j <= i;j++) { // --> 여기는 왜 <=인지
            printf(" ");
        }
        for (j = 3;j > i;j--) {
            printf("*");
        }
        for (j = 3;j > i;j--) {
            printf("*");
        }
        printf("*\n");
    }

    return 0;
}