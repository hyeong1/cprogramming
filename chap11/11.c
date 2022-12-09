// 2개의 정렬된 정수 배열 A[]와 B[]가 있다고 가정하자.
// 이 2개의 배열을 합쳐서 하나의 정렬된 배열 C[]로 만드는 함수를 작성하고 테스트
#include <stdio.h>

void Merge(int *A, int *B, int *C, int size); // size는 배열 C의 크기를 말함(자동적으로 배열 A, B의 크기는 size/2)

int main()
{
    int A[4] = {2, 7, 9, 11};
    int B[4] = {1, 3, 4, 6};
    int C[8] = {0};

    Merge(A, B, C, 8);
    // Merge 함수 수행 후 정렬된 배열 C 출력하기
    printf("정렬된 배열 C: ");
    for (int i = 0;i < 8;i++)
        printf("%d ", C[i]);

    return 0;
}

void Merge(int *A, int *B, int *C, int size)
{
    int a = 0, b = 0, c = 0; // a, b, c는 각각 배열 A, B, C의 인덱스를 말함
    while (c != size) // c가 배열 C의 마지막 인덱스를 나타낼 때 까지 반복
    {
        if (A[a] < B[b]) // A 배열의 원소가 더 작을 경우
            C[c++] = A[a++]; // 해당 원소를 C 배열에 넣고, A와 C의 인덱스는 증가시킨다
        else if (A[a] > B[b]) // B 배열의 원소가 더 작을 경우
            C[c++] = B[b++]; // 해당 원소를 C 배열에 넣는다, 배열 인덱스를 각각 증가시킨다

        // 먼저 끝나는 배열이 있는 경우의 처리 부분
        if (a == size/2) // A 배열이 먼저 끝났다면 (3번 인덱스까지 C에 넣고 a++을 수행하므로 a는 size/2가 됨)
        {
            while (b != size/2) // B 배열이 끝나기 전까지
                C[c++] = B[b++]; // B 배열에 남은 요소들을 C 배열에 넣고, 배열 인덱스를 각각 증가시킨다
        }
        else if (b == size/2) // B 배열이 먼저 끝났다면
        {
            while (a != size/2) // A 배열이 끝나기 전까지
                C[c++] = A[a++]; // A 배열에 남은 요소들을 C 배열에 넣고, 배열 인덱스를 각각 증가시킨다
        }
    }
}