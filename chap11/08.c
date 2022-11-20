// 이번 달 회사에서 지급할 월급의 총액을 계산하고자 한다.
// 정수형 배열 요소들의 합을 구하여 반환하는 함수를 작성하고 테스트하라
#include <stdio.h>

void PrintArr(int *arr, int size);
int ArraySum(int *arr, int size); // 사원들의 급여 합 반환할 함수

int main()
{
    int salary[10] = {1, 2, 3}; // 사원 10명의 급여 배열
    PrintArr(salary, 10);
    printf("월급의 합: %d\n", ArraySum(salary, 10));
    return 0;
}

void PrintArr(int *arr, int size)
{
    for (int i = 0;i < size;i++)
        printf("%d\t", arr[i]);
    printf("\n");
}

int ArraySum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0;i < size;i++)
        sum += arr[i];
    return sum;
}