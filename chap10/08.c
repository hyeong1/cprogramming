// 사용자가 입력하는 10개의 실수 자료의 평균과 표준 편차를 계산하는 프로그램 작성
#include <stdio.h>
#include <math.h>

void InsertArr(int *arr, int size);
double ArrayAvg(int *arr, int size); // 배열의 평균을 계산하는 함수
double ArrayStdDev(int *arr, int size, double avg); // 배열의 표준 편차를 계산하는 함수

int main()
{
    int num[10], size; // 크기가 10인 1차원 배열, 배열의 크기
    double avg, stdDev; // 배열 평균, 배열 표준 편차

    size = sizeof(num) / 4;
    InsertArr(num, size);

    avg = ArrayAvg(num, size);
    stdDev = ArrayStdDev(num, size, avg);
    printf("평균: %lf\n표준 편차: %lf\n", avg, stdDev);

    return 0;
}

void InsertArr(int *arr, int size)
{
    for (int i = 0;i < size;i++)
    {
        printf("데이터 입력: ");
        scanf("%d", &arr[i]);
    }
}

double ArrayAvg(int *arr, int size)
{
    int sum = 0;
    for (int i = 0;i < size;i++) // 배열 요소를 sum 변수에 모두 더해서 sum을 size로 나눈 값 리턴
        sum += arr[i];
    return (sum / size); // sum을 size로 나눈 값 리턴
}

double ArrayStdDev(int *arr, int size, double avg)
{
    double sumDev = 0; // 분삼 값 저장하는 변수 - 표준 편차는 분산*1/2
    for (int i = 0;i < size;i++)
        sumDev += (arr[i] - avg) * (arr[i] - avg); // 분산 계산
    return sqrt(sumDev / size); // 총 분산 값의 제곱근 리턴
}