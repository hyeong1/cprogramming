// 2개의 정수의 합과 차를 동시에 반환하는 함수를 작성하고 테스트하라
// 포인터 매개변수를 사용한다.
#include <stdio.h>

void GetSumDiff(int num1, int num2, int *pSum, int *pDiff);

int main()
{
    int num1 = 500, num2 = 200, sum, diff;
    GetSumDiff(num1, num2, &sum, &diff);
    printf("원소들의 합=%d\n", sum);
    printf("원소들의 차=%d\n", diff);

    return 0;
}

void GetSumDiff(int num1, int num2, int *pSum, int *pDiff)
{
    *pSum = num1 + num2;  // pSum이 가리키는 값에 원소들의 합 저장
    *pDiff = num1 - num2; // pDiff가 가리키는 값에 원소들의 차 저장
}