// 2���� ǥ�� �迭�� �����ϰ�, �� ���� �հ�, �� ���� �հ踦 ���Ͽ� ���
#include <stdio.h>

int main()
{
    int num[3][5] = {{12, 56, 32, 16, 98},
                     {99, 56, 34, 41, 3},
                     {65, 3, 87, 78, 21}};
    // �� ���� �հ�
    for (int i = 0;i < 3;i++)
    {
        int rowSum = 0;
        for (int j = 0;j < 5;j++)
            rowSum += num[i][j];
        printf("%d���� �հ�: %d\n", i, rowSum);
    }
    // �� ���� �հ�
    for (int j = 0;j < 5;j++)
    {
        int columnSum = 0;
        for (int i = 0;i < 3;i++)
            columnSum += num[i][j];
        printf("%d���� �հ�: %d\n", j, columnSum);
    }

    return 0;
}