// 2개의 정수의 합과 차를 동시에 반환하는 함수를 작성하고 테스트하라
#include <stdio.h>

void GetSumDiff(int x, int y, int *pSum, int *pDiff);

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    GetSumDiff(num1, num2, &num1, &num2);

    printf("원소들의 합: %d\n원소들의 차: %d\n", num1, num2);
    return 0;
}

void GetSumDiff(int x, int y, int *pSum, int *pDiff)
{
    *pSum = x + y;
    *pDiff = x - y;
}
