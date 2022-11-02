// 1. 함수에 변수를 값에 의한 호출 형식으로 넘기고 main에서 해당 변수를 출력
// 2. 함수에 매개변수를 주소에 의한 호출로 형식으로 넘기고 main에서 해당 변수 출력
#include <stdio.h>

void printA(int a);
void printArr(int *arr);

int main()
{
    int num = 10;
    printA(num);    // 1. 값에 의한 호출
    printf("%d\n", num);
    printArr(&num); // 2. 주소에 의한 호출
    printf("%d\n", num);

    return 0;
}

void printA(int a)
{
    a = 20;
}

void printArr(int *arr)
{
    *arr = 20;
}