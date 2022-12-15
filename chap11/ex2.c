// 정수 배열을 받아서 요소들을 난수로 채우는 함수를 작성하고 테스트하라
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayFill(int *a, int size);  // 배열 요소들을 난수로 채울 함수
void PrintArray(int *a, int size); // 배열 요소들을 출력할 함수

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    // ArrayFill 함수 사용 전의 배열 요소 출력
    printf("ArrayFill 함수 사용 전\n");
    PrintArray(array, 5);

    srand(time(NULL));
    ArrayFill(array, 5);

    // ArrayFill 함수 사용 후의 배열 요소 출력
    printf("ArrayFill 함수 사용 후\n");
    PrintArray(array, 5);

    return 0;
}

void ArrayFill(int *a, int size)
{
    for (int i = 0; i < size; i++)
        *(a + i) = rand() % 100; // 난수 범위는 0~99로 지정함
}

void PrintArray(int *a, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", *(a + i));
    printf("\n");
}