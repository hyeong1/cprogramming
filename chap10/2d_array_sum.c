// 2���� �迭
// �� ���� �հ�, �� ���� �հ踦 ���Ͽ� ���
#include <stdio.h>

int main()
{
    int num[3][5] = {{12, 25, 32, 16, 98},
                     {99, 56, 34, 41, 3},
                     {65, 3, 87, 78, 21}}; // 2���� �迭 �ʱ�ȭ
    int sumRow, sumColumn;                 // �� ���� ��, �� ���� �� ������ ����

    // �� ���� �հ� ����ϱ�
    for (int i = 0; i < 3; i++)
    {
        sumRow = 0;
        for (int j = 0; j < 5; j++)
            sumRow += num[i][j];
        printf("%d���� �հ�: %d\n", i, sumRow);
    }
    // �� ���� �հ� ����ϱ�
    for (int i = 0; i < 5; i++)
    {
        sumColumn = 0;
        for (int j = 0; j < 3; j++)
            sumColumn += num[j][i];
        printf("%d���� �հ�: %d\n", i, sumColumn);
    }
    return 0;
}