// 직원들의 기본급이 A[]에 저장되어있다. B[]에는 직원들의 보너스가 저장되어 있다.
// 기본급과 보너스를 합하여 이번달에 지급할 월급의 총액을 계산하고자 한다. 
// A[]와 B[]를 합해 C[]에 저장하는 함수를 작성하고 테스트하라.(즉, 모든 i에 대하여 C[i] = A[i] + B[i])
#include <stdio.h>

void PrintArr(int *arr, int size); 
void ArrayAdd(int *A, int *B, int *C, int size);

int main()
{
    int A[5] = {100, 100, 200, 200, 300};
    int B[5] = {50, 50, 50, 50, 50};
    int C[5] = {0};

    ArrayAdd(A, B, C, 5);
    PrintArr(C, 5);
    
    return 0;
}

void PrintArr(int *arr, int size)
{
    for (int i = 0; i < 5; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}

void ArrayAdd(int *A, int *B, int *C, int size)
{
    for (int i = 0;i < size;i++)
        *(C+i) = *(A+i) + *(B+i);
}