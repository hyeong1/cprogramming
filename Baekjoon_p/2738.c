// n*m ũ���� �� ����� ���ϴ� ���α׷�
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    // ��� A, B ũ�� �����Ҵ�
    int **matrixA = (int**)malloc(sizeof(int*) * row);
    int **matrixB = (int**)malloc(sizeof(int*) * row);
    for (int i = 0;i < row;i++)
    {
        matrixA[i] = (int*)malloc(sizeof(int) * col);
        matrixB[i] = (int*)malloc(sizeof(int) * col);
    }

    // ��� A ��� �Է¹ޱ�
    for (int i = 0;i < row;i++)
        for (int j = 0;j < col;j++)
            scanf("%d", &matrixA[i][j]);
    // ��� A ��� �Է¹ޱ�
    for (int i = 0;i < row;i++)
        for (int j = 0;j < col;j++)
            scanf("%d", &matrixB[i][j]);

    // ��� ��� �� ���
    for (int i = 0;i < row;i++)
    {
        for (int j = 0;j < col;j++)
            printf("%d ", matrixA[i][j] + matrixB[i][j]);
        printf("\n");
    }
    return 0;
}