#include <stdio.h>

void selectStar(int num) {
    int i;
    while (i = 1) {
        // 1�� ���� ���ﰢ��
        if (num == 1) {
           for (int i = 0;i < 5;i++) {
               for (int j = 4;j > i;j--) {
                   printf("*");
                   }
                printf("*\n");
            }
            break;
        }
        // 2�� ������ ���ﰢ��
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
        // 3�� ��� �ﰢ��
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
        // 4�� ������
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
        // 5�� �𷡽ð�
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
        // 6�� �ٶ�����
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
    printf("���� �Է�(1~6): ");
    scanf("%d", &input);

    selectStar(input);

    return 0;
}