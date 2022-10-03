// 2차원 행렬의 연산
#include <stdio.h>

void ScalarMult(int a[][3], int scalar); // 행렬에 숫자 곱하기 함수
void Transpose(int a[][3], int b[][3]); // 행렬 요소 위치 변경 - T대칭

int main()
{
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6}, 
                        {7, 8, 9}};
    int matrixT[3][3];
    Transpose(matrix, matrixT);
    ScalarMult(matrix, 2);
    
    return 0;
}

void ScalarMult(int a[][3], int scalar)
{
    // 행렬 연산
    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 3;j++)
            a[i][j] *= scalar;
    }
    // 행렬 출력
    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 3;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

void Transpose(int a[][3], int b[][3])
{
    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 3;j++)
            b[i][j] = a[j][i];
    }
    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 3;j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
}