// 2���� ���� �迭�� ��, ���� �� ���ϴ� ����
// int num[3][4] -> �� ���� 1~20 ������ ������ �ʱ�ȭ
// �� ���� ����, ���� �հ�, ���� �հ� ��� ���
// �迭 �ʱ�ȭ �Լ�, ��� ����Լ� ����
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void inputArray(int (*p)[4], int row);
void outputArray(int (*p)[4], int row);

int main() {
    int num[3][4];
    int row = sizeof(num) / sizeof(num[0]);

    srand(time(NULL));
    inputArray(num, row);

    outputArray(num, row);

    return 0;
}

void inputArray(int (*p)[4], int row) {
    for (int i = 0;i < row;i++) {
        for (int j = 0;j < 4;j++) {
            p[i][j] = rand() % 20 + 1;
        }
    }
}

void outputArray(int (*p)[4], int row) {
    for (int i = 0;i < row;i++) {
        int rowSum = 0; // �� ���� ���� �����ϴ� ���� ����

        printf("    %d��: ", i);
        for (int j = 0;j < 4;j++) {
            printf("%d ", p[i][j]);
            rowSum += p[i][j];
        }
        printf("  %d���� ��: %d", i, rowSum);
        printf("\n");
    }
    printf("���� ��: ");
    for (int j = 0;j < 4;j++) {
        int colSum = 0; // �� ���� �� ������ ���� ���
        for (int i = 0;i < row;i++) {
            colSum += p[i][j];
        }
        printf("%d ", colSum);
    }
}
