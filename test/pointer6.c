// 정렬된 두 배열 하나의 정렬된 배열로 합치기
#include <stdio.h>

void merge(int *A, int *B, int *C, int size);

int main()
{
    int A[] = {2, 5, 7, 8};
    int B[] = {1, 3, 4, 6};
    int C[8];

    merge(A, B, C, 4);
    for (int i = 0;i < 8;i++)
        printf("%d ", C[i]);
    printf("\n");
        
    return 0;
}

void merge(int *A, int *B, int *C, int size)
{
    int a, b, c;
    for (a=0,b=0,c=0;a < size && b < size;)
    {
        if (A[a] < B[b])
            C[c++] = A[a++];
        else if (B[b] < A[a])
            C[c++] = B[b++];
    }
    for (int i = a;i < size;i++)
        C[c++] = A[i];
    for (int i = b;i < size;i++)
        C[c++] = B[i];
}