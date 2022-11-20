// 정수 배열을 받아서 요소들을 난수로 채우는 함수를 작성하고 테스트하라
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayFill(int *A, int size);

int main()
{
    int array[5] = {0};
    int size = 5;

    srand(time(NULL));
    ArrayFill(array, size);

    for (int i = 0;i < size;i++)
        printf("%d ", array[i]);

    return 0;
}

void ArrayFill(int *A, int size)
{
    for (int i = 0;i < size;i++)
        A[i] = rand();
}