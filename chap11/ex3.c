// 정수 배열의 요소들을 화면에 출력하는 함수를 작성하고 테스트
// 출력 형식은 A[] = { 1, 2, 3, 4, 5 }와 같은 형식
#include <stdio.h>

void PrintArr(int *a, int size);

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    PrintArr(arr, 10);
    return 0;
}

void PrintArr(int *a, int size)
{
    printf("A[] = { ");
    for (int i = 0;i < size;i++)
        printf("%d ", *(a+i));
    printf("}\n");
}