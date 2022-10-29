// 9*9 행렬 입력받고 최댓값 찾기
// 최댓값과 최댓값의 위치(몇 행 몇 열) 출력하기
#include <stdio.h>

int main()
{
    int matrix[9][9], maxRow, maxCol;
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            scanf("%d", &matrix[i][j]); // 행렬 값 입력받기

    // 최댓값 찾기 - 0행 0열부터 시작
    maxRow = 0;
    maxCol = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (matrix[maxRow][maxCol] < matrix[i][j])
            {
                maxRow = i;
                maxCol = j;
            }
        }
    }
    // 최댓값과 최댓값 위치 출력(위치는 +1해서 출력)
    printf("%d\n%d %d", matrix[maxRow][maxCol], maxRow + 1, maxCol + 1);
    return 0;
}