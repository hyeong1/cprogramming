#include <stdio.h>

void selectStar(int num, int line) {
    int i;
    while (i = 1) {
        // 1번 왼쪽 직삼각형
        if (num == 0) {
            break;
        } 
        else if (num == 1) {
           for (int i = 0;i < line;i++) {
               for (int j = line - 1;j > i;j--) {
                   printf("*");
                   }
                printf("*\n");
            }
            break;
        }
        // 2번 오른쪽 직삼각형
        else if (num == 2) {
            for (int i = 0;i < line;i++) {
                for (int j = 0;j < i;j++) {
                    printf(" ");
                }
                for (int j = line - 1;j > i;j--) {
                    printf("*");
                }
                printf("*\n");
            }
            break;
        }
        // 3번 가운데 삼각형
        else if (num == 3) {
            for (int i = 0;i < line;i++) {
                for (int j = line - 1;j > i;j--) {
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
        // 4번 모래시계
        else if (num == 4) {
            for (int i = 0;i < line;i++) {
                for (int j = 0;j < i;j++) {
                    printf(" ");
                }
                for (int j = line - 1;j > i;j--) {
                    printf("*");
                }
                for (int j = line - 1;j > i;j--) {
                    printf("*");
                }
                printf("*\n");
            }
            for (int i = 0;i < line - 1;i++) {
                for (int j = line - 2;j > i;j--) {
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
        // 5번 바람개비
        else {
            for (int i = 0;i < line;i++) {
                for (int j = 0;j <= i;j++) {
                    printf("*");
                }
                for (int j = line - 1;j >= i;j--) {
                    printf(" ");
                }
                for (int j = line - 1;j > i;j--) {
                    printf("*");
                }
                printf("*\n");
            }
            for (int i = 0;i < line;i++) {
                for (int j = line - 1;j >= i;j--) {
                    printf(" ");
                }
                for (int j = 0;j <= i;j++) {
                    printf("*");
                }
                for (int j = 0;j <= i;j++) {
                    printf(" ");
                }
                for (int j = line - 1;j > i;j--) {
                    printf("*");
                }
                printf("*\n");
            }
            break;
        }
    }
}

int main() {
    int inputNum, line;
    printf("숫자 입력(0~5): ");
    scanf("%d", &inputNum);

    printf("행의 개수: ");
    scanf("%d", &line);

    selectStar(inputNum, line);

    return 0;
}