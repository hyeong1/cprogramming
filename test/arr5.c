// 첫째 줄에 테스트 케이스 개수 C입력
// 둘째 줄부터 각 테스트 케이스 마다 학생의 수N, 이어서 N명의 수 입력
// 각 케이스 마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력
#include <stdio.h>
#include <stdlib.h>

void InputScore(double *arr, int n);


int main()
{
    int c, n, count; // 테스트 케이스 개수, 학생 수, 평균 넘는 학생 체크 변수
    double *score; // 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수
    double avg, avgRate; // 평균 변수, 평균을 넘는 학생들의 비율 변수
    scanf("%d\n", &c); // 테스트 케이스 개수 입력
    avg = 0;
    count = 0;
    avgRate = 0;

    for (int i = 0;i < c;i++)
    {
        scanf("%d", &n); // 학생 수 입력
        score = (double*)malloc(sizeof(double) * n);

        InputScore(score, n); // 점수 입력
        for (int i = 0;i < n;i++)
            printf("%lf ", score[i]);
        printf("\n");
        // 케이스 마다 평균을 넘는 비율 출력
        // 평균 구하기
        for (int i = 0;i < n;i++)
            avg += score[i];
        avg = avg / n;
        printf("평균: %lf\n", avg);

        // 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력
        // 평균 넘는 학생 수 구하기
        for (int i = 0;i < n;i++) // 점수들을 평균과 비교하면서 
        {
            if (score[i] > avg) // 평균보다 크면 count++
                count++;
        }
        // 비율 구하기
        avgRate = ((double)count / n) * 100; // 비율은 (평균 넘는 학생 수 / 전체 학생수) * 100
        // 비율 반올림하여 소수점 셋째 자리까지 출력
        printf("%.3lf\n", avgRate);
        // 다음 케이스 출력을 위해 평균 변수, 비율 변수, 평균 넘는 학생 수 변수 0으로 초기화히기
        avg = 0;
        avgRate = 0;
        count = 0;
    }   
     
    return 0;
}

void InputScore(double *arr, int n)
{
    for (int i = 0;i < n;i++)
        scanf("%lf", &arr[i]);   
}