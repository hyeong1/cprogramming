// 2�����迭-�� ���ڿ��� ù ���ڿ� ������ ���� ����ϱ�
#include <stdio.h>
#include <string.h>

void inputArray(char (*p)[80], int row);
void printArray(char (*p)[80], int row);

int main() {
    char str[5][80];
    int row; // �� ������ �����ϴ� ����
    row = sizeof(str)/sizeof(str[0]);

    inputArray(str, row);
    printArray(str, row);

    return 0;
}

// ���ڿ� �Է� �Լ�
void inputArray(char (*p)[80], int row) {
    for (int i = 0;i < row;i++) {
            printf("���� �Է�: ");
            scanf("%s", &p[i]);
    }
}

// ���ڿ��� ù ���ڿ� ������ ���� ��� �Լ�
void printArray(char (*p)[80], int row) {
    for (int i = 0;i < row;i++) {
        int n = strlen(p[i]);
        printf("str[%d] = %s ", i, p[i]);      // ���ڿ��� %s
        printf("%c %c\n", p[i][0], p[i][n-1]); // ���ڴ� %c
    }
}