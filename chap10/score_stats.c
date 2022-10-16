// 학생들의 시험 점수 통계 처리하기
// 한 학급은 최대 10명, 각 학생들은 3번의 시험을 치른다.
// 학생들의 성적은 난수를 생성해서 얻는다.
// 각 시험의 최대점수, 최저점수를 출력
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InsertArr(int arr[][3]);
void FindMaxMin(int arr[][3]);

int main()
{
    int score[10][3]; // 학생이 최대 10명, 시험은 3번

    srand(time(NULL));
    InsertArr(score);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", score[i][j]);
        printf("\n");
    }
    FindMaxMin(score);

    return 0;
}

void InsertArr(int arr[][3])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
            arr[i][j] = rand() % 101;
    }
}
// 최대점수 찾기
void FindMaxMin(int arr[][3])
{
    int max, min;
    for (int col = 0; col < 3; col++)
    {
        max = arr[0][col]; // 행은 0부터, 열이 바뀜 (시험1, 시험2, 시험3)
        min = arr[0][col];
        for (int row = 0; row < 10; row++)
        {
            if (max < arr[row][col]) // 최댓값 찾기
                max = arr[row][col];
            if (min > arr[row][col]) // 최솟값 찾기
                min = arr[row][col];
        }
        printf("시험 %d의 최대점수 = %d\n", col, max);
        printf("시험 %d의 최저점수 = %d\n", col, min);
    }
}