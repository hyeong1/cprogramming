// 2차원 배열
// 각 행의 합계, 각 열의 합계를 구하여 출력
#include <stdio.h>

int main()
{
    int num[3][5] = {{12, 25, 32, 16, 98},
                     {99, 56, 34, 41, 3},
                     {65, 3, 87, 78, 21}}; // 2차원 배열 초기화
    int sumRow, sumColumn;                 // 각 행의 합, 각 열의 합 저장할 변수

    // 각 행의 합계 출력하기
    for (int i = 0; i < 3; i++)
    {
        sumRow = 0;
        for (int j = 0; j < 5; j++)
            sumRow += num[i][j];
        printf("%d행의 합계: %d\n", i, sumRow);
    }
    // 각 열의 합계 출력하기
    for (int i = 0; i < 5; i++)
    {
        sumColumn = 0;
        for (int j = 0; j < 3; j++)
            sumColumn += num[j][i];
        printf("%d열의 합계: %d\n", i, sumColumn);
    }
    return 0;
}