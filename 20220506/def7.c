#include <stdio.h>

void selectStar(int num, int line) {
    int i;
    while (i = 1) {
        // 1�� ���� ���ﰢ��
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
        // 2�� ������ ���ﰢ��
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
        // 3�� ��� �ﰢ��
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
        // 4�� �𷡽ð�
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
        // 5�� �ٶ�����
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
    printf("���� �Է�(0~5): ");
    scanf("%d", &inputNum);

    printf("���� ����: ");
    scanf("%d", &line);

    selectStar(inputNum, line);

    return 0;
}