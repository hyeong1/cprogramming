#include <stdio.h>

int main()
{
    int score[3][5] = {{12, 25, 32, 16, 98},
                       {99, 56, 34, 41, 3},
                       {65, 3, 87, 78, 21}};
    int sum;
    for (int i = 0;i < 3;i++)
    {
        sum = 0;
        for (int j = 0;j < 5;j++)
            sum += score[i][j];
        printf("%d행의 합: %d\n", i, sum);
    }
    for (int i = 0;i < 5;i++)
    {
        sum = 0;
        for (int j = 0;j < 3;j++)
            sum += score[j][i];
        printf("%d열의 합: %d\n", i, sum);
    }
    return 0;
}