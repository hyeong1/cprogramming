#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int **matrixA, **matrixB;
    scanf("%d %d", &n, &m);
    matrixA = (int**)malloc(sizeof(int*) * n);
    matrixB = (int**)malloc(sizeof(int*) * n);
    for (int i = 0;i < n;i++)
    {
        matrixA[i] = (int*)malloc(sizeof(int) * m);
        matrixB[i] = (int*)malloc(sizeof(int) * m);
    }
    // ù ��° 2���� �迭 �Է�
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
            scanf("%d", &matrixA[i][j]);
    }
    // �� ��° 2���� �迭 �Է�
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
            scanf("%d", &matrixB[i][j]);
    }
    // �� ��� �� ����ϱ�
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
            printf("%d ", matrixA[i][j] + matrixB[i][j]);
        printf("\n");
    }
    return 0;
}