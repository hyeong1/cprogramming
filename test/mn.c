#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int m, n, index, minSum, min, square[100] = {0}; // ���������� ������ �迭(1���� 10000���̿� ���������� 100���̹Ƿ� �迭 ũ��� 100)
    scanf("%d %d", &m, &n);
    index = 0;
    minSum = 0;

    for (int i = m;i <= n;i++)
    {
        if (sqrt(i) == (int)sqrt(i)) // �������̶� �������� �������̶� ������
        {
            square[index] = i; // ���������� ������ �迭�� �ش� �� ����
            index++; 
        }
    }
    // ���������� ������ -1 ���
    if (square[0] == 0)
        printf("-1");
    else
    {
        // ���������� ��� ���ؼ� ���� �� ���
        for (int i = 0;i < 100;i++)
            minSum += square[i];
        printf("%d\n", minSum);

        // ���������� �� �ּҰ� ã��
        min = square[0];
        for (int i = 1;i < 100;i++)
        {
            if (square[i] != 0 && min > square[i])
                min = square[i];
        }
        printf("%d", min);
    }
    return 0;
}