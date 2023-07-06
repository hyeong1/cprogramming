#include <stdio.h>

int main()
{
    int paper[100][100] = {0};
    int test_case, total = 0;
    scanf("%d", &test_case);

    for (int i = 0; i < test_case; i++)
    {
        int row, col;
        scanf("%d %d", &row, &col);
        for (int j = 0; j < 10; j++)
            for (int k = 0; k < 10; k++)
                paper[row + j][col + k] = 1;
    }

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
            if (paper[i][j] == 1)
                total++;
    }

    printf("%d", total);
    return 0;
}
