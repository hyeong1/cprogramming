// int형 배열과  int형 포인터를 받아서 포인터가 배열의 가장 큰 값을 가리키게 하는 함수 구현
#include <stdio.h>

void set_max_ptr(int **p, int *arr, int size);

int main()
{
    int num[5] = {1, 3, 5, 7, 9};
    int *pMax; // 배열 num의 원소 중에서 가장 큰 값을 가리킬 포인터 변수

    set_max_ptr(&pMax, num, 5);
    printf("가장 큰 값은 %d\n", *pMax);
    return 0;
}

void set_max_ptr(int **p, int *arr, int size) // p는 배열의 가장 큰 값을 가리킬 포인터 변수
{
    *p = arr; // 이중포인터가 가리키고있는 곳의 값을 배열 첫 요소로 초기화

    // 배열에서 최댓값 찾기
    for (int i = 0; i < size; i++)
        if (**p <= *(arr + i))
            **p = *(arr + i);
}