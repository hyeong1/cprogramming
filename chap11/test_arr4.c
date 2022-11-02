// 시험 점수 바꾸기
// 점수 중에서 최댓값M을 기준으로 전체 점수를 점수/M*100으로 바꾸기
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int exam, maxScore; // 시험 개수, 최대 시험점수 변수
    double *score, total;      // 점수 배열 -> 점수 바꿀 때 몫 연산을 수행하기 때문에 실수형으로 선언
    scanf("%d", &exam); // 시험 개수 입력

    score = (double *)calloc(sizeof(double), exam); // 시험 개수만큼 점수 배열 동적할당
    for (int i = 0; i < exam; i++)                  // 시험 점수를 입력 받기위한 반복문
        scanf("%lf", (score + i));                  //*(score+i)

    for (int i = 0; i < exam; i++)
        printf("%lf ", *(score + i));
    printf("\n");

    maxScore = *score;             // 최대 시험점수를 score배열의 첫 번째 값으로 가정
    for (int i = 1; i < exam; i++) // 최대 시험 점수를 찾기위한 반복문
    {
        if (maxScore < *(score + i))
            maxScore = *(score + i);
    }

    // 최대 점수 기준으로 전체 점수 바꾸기
    for (int i = 0; i < exam; i++)
        *(score + i) = (*(score + i) / maxScore) * 100;

    for (int i = 0; i < exam; i++) // 바뀐 배열 출력
        printf("%lf\n", *(score + i));

    for (int i = 0;i < exam;i++) // 평균 구하기 위해서 점수 총합 구하기
        total += *(score+i);
    printf("%lf\n", total/exam);

    return 0;
}