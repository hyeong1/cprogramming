// 직원들의 기본급이 배열 A[]에 저장되어 있다.
// 배열 B[]에는 직원들의 보너스가 저장되어 있다.
// 기본급과 보너스를 합하여 이번달에 지급할 월급의 총액을 계산하고자 한다. 
// A[]와 B[]를 더하여 배열 C[]에 저장하는 함수를 작성하고 테스트하라
#include <stdio.h>

void PrintArr(int *arr, int size);
void ArrayAdd(int *A, int *B, int *C, int size);

int main()
{
    int A[10] = {100, 100, 100, 100, 150, 150, 200, 200, 250, 300};
    int B[10] = {50, 50, 50, 50, 60, 60, 70, 70, 80, 100};
    int C[10] = {0}; 

    ArrayAdd(A, B, C, 10);
    PrintArr(A, 10);
    PrintArr(B, 10);
    PrintArr(C, 10);

    return 0;
}

// 배열 요소 출력하는 함수
void PrintArr(int *arr, int size)
{
    for (int i = 0;i < size;i++)
        printf("%d\t", arr[i]);
    printf("\n");
}
// A배열과 B배열 요소 더해서 C배열에 저장하는 함수
void ArrayAdd(int *A, int *B, int *C, int size)
{
    for (int i = 0;i < size;i++)
        C[i] = A[i] + B[i];
}