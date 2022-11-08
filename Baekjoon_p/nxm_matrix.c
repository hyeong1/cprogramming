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
    // 첫 번째 2차원 배열 입력
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
            scanf("%d", &matrixA[i][j]);
    }
    // 두 번째 2차원 배열 입력
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
            scanf("%d", &matrixB[i][j]);
    }
    // 두 행렬 합 출력하기
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
            printf("%d ", matrixA[i][j] + matrixB[i][j]);
        printf("\n");
    }
    return 0;
}