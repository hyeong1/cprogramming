// 2개의 정렬된 정수 배열 A[], B[]가 있다. 이 두 개의 배열을 하나의 정렬된 배열 C[]로 합치시오
#include <stdio.h>

void Merge(int *A, int *B, int *C, int size);

int main()
{   
    int A[4] = {1, 3, 5, 7};
    int B[4] = {2, 4, 6, 8};
    int C[8] = {0};

    Merge(A, B, C, 4);
    
    // 정렬된 결과 확인하기
    printf("C[] = ");
    for (int i = 0;i < 8;i++)
        printf("%d ", C[i]);
    printf("\n");

    return 0;
}

void Merge(int *A, int *B, int *C, int size) // size는 배열 A, B의 크기
{
    // for문으로 만들기
    int a, b, c, i; // a, b, c는 배열 A, B, C의 인덱스 변수, i는 먼저 정렬이 끝나는 배열이 있을 경우 쓸 변수
    for (a=0, b=0, c=0;a<size && b<size;)
    {
        if (A[a] < B[b])
            C[c++] = A[a++];
        else
            C[c++] = B[b++];
    }
    for (i=a;i<size;i++) // B가 먼저 정렬되면 a의 값은 size보다 작으므로 남은 A요소들이 모두 C에 복사됨
        C[c++] = A[i];
    for (i=b;i<size;i++)
        C[c++] = B[i];
}