#include <stdio.h>

void selectStar(int num) {
    int i;
    while (i = 1) {
        // 1번 왼쪽 직삼각형
        if (num == 1) {
           for (int i = 0;i < 5;i++) {
               for (int j = 4;j > i;j--) {
                   printf("*");
                   }
                printf("*\n");
            }
            break;
        }
        // 2번 오른쪽 직삼각형
        else if (num == 2) {
            for (int i = 0;i < 5;i++) {
                for (int j = 0;j < i;j++) {
                    printf(" ");
                }
                for (int j = 4;j > i;j--) {
                    printf("*");
                }
                printf("*\n");
            }
            break;
        }
        // 3번 가운데 삼각형
        else if (num == 3) {
            for (int i = 0;i < 5;i++) {
                for (int j = 4;j > i;j--) {
                   printf(" ");
                }
                for (int j = 0;j < i;j++) {
                    printf("*");
                }
                for (int j = 0;j < i;j++) {
                    printf("*");
                }
                printf("*\n");
            }
            break;
        }
        // 4번 마름모
        else if (num == 4) {
            for (int i = 0;i < 5;i++) {
                for (int j = 4;j > i;j--) {
                    printf(" ");
                }
                for (int j = 0;j < i;j++) {
                    printf("*");
                }
                for (int j = 0;j < i;j++) {
                    printf("*");
                }
                printf("*\n");
            }
            for (int i = 0;i < 4;i++) {
                for (int j = 0;j <= i;j++) {
                    printf(" ");
                }
                for (int j = 3;j > i;j--) {
                    printf("*");
                }
                for (int j = 3;j > i;j--) {
                    printf("*");
                }
                printf("*\n");
            }
            break;
        }
        // 5번 모래시계
        else if (num == 5) {
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
            }
            break;
        }
        // 6번 바람개비
        else {
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
            break;
        }
    }
}

int main() {
    int input;
    printf("숫자 입력(1~6): ");
    scanf("%d", &input);

    selectStar(input);

    return 0;
}