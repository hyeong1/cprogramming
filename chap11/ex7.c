// 직원들의 월급이 배열 A[]에 저장되어 있다고 하자.
// 이번달에 회사에서 지급할 월급의 총액을 계산하고자 한다.
// 정수형 배열 요소들의 합을 구하여 반환하는 함수를 작성하고 테스트하라.
#include <stdio.h>

void PrintArr(int *arr, int size); 
int ArraySum(int *a, int size);

int main()
{
    int money[5] = {100, 200, 300, 400, 500};

    printf("A[] = ");
    PrintArr(money, 5);
    printf("월급의 합 = %d\n", ArraySum(money, 5));
    return 0;
}

void PrintArr(int *arr, int size)
{
    for (int i = 0; i < 5; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}

int ArraySum(int *a, int size)
{
    int sum = 0;
    for (int i = 0;i < size;i++)
        sum += *(a+i);
    return sum;
}