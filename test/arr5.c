// 첫째 줄에 테스트 케이스 개수 C입력
// 둘째 줄부터 각 테스트 케이스 마다 학생의 수N, 이어서 N명의 수 입력
// 각 케이스 마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력
#include <stdio.h>
#include <stdlib.h>

void InputScore(double *arr, int n); // 입력한 점수를 배열에 넣는 함수
double Avg(double *arr, int n); // 평균 구하는 함수
int StudentCount(double *arr, int n, double avg); // 평균 넘는 학생 수 체크하는 함수
double AvgRate(int n, int count); // 평균 넘는 학생들의 비율을 구하는 함수

int main()
{
    int c, n, count; // 테스트 케이스 개수, 학생 수, 평균 넘는 학생 체크 변수
    double *score; // 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수
    double avg; // 평균 변수, 평균을 넘는 학생들의 비율 변수
    scanf("%d\n", &c); // 테스트 케이스 개수 입력

    for (int i = 0;i < c;i++) // 각 케이스를 c번 반복
    {
        scanf("%d", &n); // 학생 수 입력
        score = (double*)malloc(sizeof(double) * n);

        InputScore(score, n); // 점수 입력

        // 케이스 마다 평균을 넘는 학생 수 비율 출력
        avg = Avg(score, n); // 평균 구하기

        // 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력
        count = StudentCount(score, n, avg); // 평균 넘는 학생 수 구하기

        // 비율 구하기
        printf("%.3lf%%\n", AvgRate(n, count)); // 비율 반올림하여 소수점 셋째 자리까지 출력
    }   
     
    return 0;
}

void InputScore(double *arr, int n)
{
    for (int i = 0;i < n;i++)
        scanf("%lf", &arr[i]);   
}

double Avg(double *arr, int n)
{
    double avg = 0;
    for (int i = 0;i < n;i++)
            avg += arr[i];
    return (avg / n);
}

int StudentCount(double *arr, int n , double avg) // 전체 학생 수와 평균을 받아서 count 계산
{
    int count = 0;
    for (int i = 0;i < n;i++) // 점수들을 평균과 비교하면서 
    {
        if (arr[i] > avg) // 평균보다 크면 count++
            count++;
    }
    return count;
}

double AvgRate(int n, int count) // 매개변수로 전체 학생수와 평균 넘는 학생수를 받음
{
    double avgRate = 0;
    avgRate = ((double)count / n) * 100;
    return avgRate;
}