// 2차원 표를 배열로 생성하고, 각 행의 합계, 각 열의 합계를 구하여 출력
#include <stdio.h>

int main()
{
    int num[3][5] = {{12, 56, 32, 16, 98},
                     {99, 56, 34, 41, 3},
                     {65, 3, 87, 78, 21}};
    // 각 행의 합계
    for (int i = 0;i < 3;i++)
    {
        int rowSum = 0;
        for (int j = 0;j < 5;j++)
            rowSum += num[i][j];
        printf("%d행의 합계: %d\n", i, rowSum);
    }
    // 각 열의 합계
    for (int j = 0;j < 5;j++)
    {
        int columnSum = 0;
        for (int i = 0;i < 3;i++)
            columnSum += num[i][j];
        printf("%d열의 합계: %d\n", j, columnSum);
    }

    return 0;
}