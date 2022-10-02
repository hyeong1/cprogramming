// 학생들의 시험 점수를 통계 처리하는 프로그램 작성-각 시험의 최대최소 점수 출력
// {학번, 시험1, 시험2, 시험3}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int FindMax(int (*score)[4], int column); // 최대점수 리턴 함수
int FindMin(int (*score)[4], int column); // 최소점수 리턴 함수
int RandArr(int (*rand)[4]); // 학생들의 성적을 난수로 얻을 경우

int main()
{
    int score[10][4] = {{1, 30 ,10 ,11},
                       {2, 40, 50, 32}, 
                       {3, 70, 65, 56},
                       {4, 70, 43, 32},
                       {5, 80, 10, 89}};
    int randScore[10][4];

    srand(time(NULL));
    RandArr(randScore);
    printf("점수-난수 생성\n");
    printf("시험%d의 최대점수=%d\n", 1, FindMax(randScore, 1));
    printf("시험%d의 최소점수=%d\n", 1, FindMin(randScore, 1));
    printf("시험%d의 최대점수=%d\n", 2, FindMax(randScore, 2));
    printf("시험%d의 최소점수=%d\n", 2, FindMin(randScore, 2));
    printf("시험%d의 최대점수=%d\n", 3, FindMax(randScore, 3));
    printf("시험%d의 최소점수=%d\n", 3, FindMin(randScore, 3));

    printf("점수-표로 초기화\n");
    printf("시험%d의 최대점수=%d\n", 1, FindMax(score, 1));
    printf("시험%d의 최소점수=%d\n", 1, FindMin(score, 1));
    printf("시험%d의 최대점수=%d\n", 2, FindMax(score, 2));
    printf("시험%d의 최소점수=%d\n", 2, FindMin(score, 2));
    printf("시험%d의 최대점수=%d\n", 3, FindMax(score, 3));
    printf("시험%d의 최소점수=%d\n", 3, FindMin(score, 3));
    return 0;
}

int FindMax(int (*score)[4], int column)
{
    int max = score[0][column];
    for (int i = 0;i < 10;i++)
    {
        if (max < score[i][column])
            max = score[i][column];
    }
    return max;
}

int FindMin(int (*score)[4], int column)
{
    int min = score[0][column];
    for (int i = 0;i < 10;i++)
    {
        if (min > score[i][column])
        {
            if (score[i][column] == 0)
                continue;
            min = score[i][column];
        }
    }
    return min;
}

int RandArr(int (*randArr)[4])
{
    for (int i = 0;i < 10;i++)
    {
        for (int j = 0;j < 4;j++)
            randArr[i][j] = rand() % 101;
    }
}