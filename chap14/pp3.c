// 이중포인터 연습문제 3
// scores라는 2차원 배열에 학생들의 성적 저장
// 행은 한 학생에 대한 여러 번의 시험 성적을 나타냄
// 열은 한 시험에 대한 여러 학생들의 성적
// 학생별로 성적의 평균을 구하시오
#include <stdio.h>

double get_average(int *list, int n);

int main()
{
    int scores[3][5] = {{100, 100, 100, 100, 100},
                        {50, 50, 50, 50, 50},
                        {75, 75, 75, 75, 75}};
    for (int i = 0;i < 3;i++)
        printf("%d행의 평균값=%lf\n", i, get_average(scores[i], 5));
    return 0;
}

double get_average(int *list, int n)
{
    int sum = 0;
    for (int i = 0;i < n;i++)
        sum += list[i];
    return (sum/n);
}