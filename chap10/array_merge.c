// A배열과 B배열을 합쳐서 C배열에 저장 - 저장될 때 오름차순으로 정렬됨
#include <stdio.h>

void MergeArray(int A[], int B[], int C[], int size)
{
    int a, b, c; // A, B, C 배열의 인덱스 변수
    for (a=0, b=0, c=0;a<size && b<size;) // 인덱스 0부터 한 쪽 배열이 끝나기 전까지
    {
        if (A[a] < B[b])
        {
            C[c] = A[a];
            a++;
            c++;
        }
        else // B[b]가 더 작으면
        {
            C[c] = B[b];
            b++;
            c++;
        }
    }
    for (int i = a;i < size;i++) // B 배열이 먼저 끝났으면 a는 size-1이하 -> 최소 1번 이상 수행 가능
        C[c] = A[a];
    for (int i = b;i < size;i++) // A 배열이 먼저 끝났으면 B에 남은 요소를 C에 순서대로 넣는다.
        C[c] = B[b];
}

int main()
{
    int A[] = {2, 4, 6, 8};
    int B[] = {1, 3, 5, 7};
    int C[8];
    
    MergeArray(A, B, C, 4);
    for (int i = 0;i < 8;i ++)
        printf("%d ", C[i]);

    return 0;
}