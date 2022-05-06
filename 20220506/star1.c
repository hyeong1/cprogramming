#include <stdio.h>

int main() {
    /* 모래시계 모양
    for (int i = 0;i < 5;i++) {
        for (int j = 0;j < i;j++) {
            printf(" ");
        }
        for (int j = 4;j > i;j--) {
            printf("*");
        }
        for (int j = 4;j > i;j--) {
            printf("*");
        }
        printf("*\n");
    }
    for (int i = 0;i < 4;i++) {
        for (int j = 3;j > i;j--) {
            printf(" ");
        }
        for (int j = 0;j <= i;j++) {
            printf("*");
        }
        for (int j = 0;j <= i;j++) {
            printf("*");
        }
        printf("*\n");
    }*/

    // 바람개비 모양
    for (int i = 0;i < 5;i++) {
        for (int j = 0;j <= i;j++) {
            printf("*");
        }
        for (int j = 4;j >= i;j--) {
            printf(" ");
        }
        for (int j = 4;j > i;j--) {
            printf("*");
        }
        printf("*\n");
    }
    for (int i = 0;i < 5;i++) {
        for (int j = 4;j >= i;j--) {
            printf(" ");
        }
        for (int j = 0;j <= i;j++) {
            printf("*");
        }
        for (int j = 0;j <= i;j++) {
            printf(" ");
        }
        for (int j = 4;j > i;j--) {
            printf("*");
        }
        printf("*\n");
    }

    return 0;
}