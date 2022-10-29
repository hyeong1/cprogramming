// n*m 크기의 두 행렬을 더하는 프로그램
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    // 행렬 A, B 크기 동적할당
    int **matrixA = (int**)malloc(sizeof(int*) * row);
    int **matrixB = (int**)malloc(sizeof(int*) * row);
    for (int i = 0;i < row;i++)
    {
        matrixA[i] = (int*)malloc(sizeof(int) * col);
        matrixB[i] = (int*)malloc(sizeof(int) * col);
    }

    // 행렬 A 요소 입력받기
    for (int i = 0;i < row;i++)
        for (int j = 0;j < col;j++)
            scanf("%d", &matrixA[i][j]);
    // 행렬 A 요소 입력받기
    for (int i = 0;i < row;i++)
        for (int j = 0;j < col;j++)
            scanf("%d", &matrixB[i][j]);

    // 행렬 요소 합 출력
    for (int i = 0;i < row;i++)
    {
        for (int j = 0;j < col;j++)
            printf("%d ", matrixA[i][j] + matrixB[i][j]);
        printf("\n");
    }
    return 0;
}