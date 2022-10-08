// 점수 중에서 최댓값 M을 고르고 모든 점수를 (점수 / M * 100) 고침
// 점수를 위 방법으로 새로 계산했을 때, 새로운 평균을 구하시오
// 첫째 줄에 시험 본 과목의 개수 N, 다음 줄에 점수 입력
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    double sum = 0; // 모든 과목 점수 합 변수
    scanf("%d", &N);
    double* score = (double*)malloc(sizeof(double) * N);
    
    for (int i = 0;i < N;i++) // 점수 입력
        scanf("%lf", &score[i]);

    M = score[0];
    for (int i = 1;i < N;i++) // 최대 점수 찾기
    {
        if (M < score[i])
            M = score[i];
    }

    for (int i = 0;i < N;i++) // 점수 새로 계산하기
        score[i] = score[i] / M * 100;

    for (int i = 0;i < N;i++) // 새로운 점수에 대한 점수 합 계산
        sum += score[i];
    printf("%lf", sum / N); // 새로운 점수 평균 출력

    return 0;
}