// ���� �迭 A[]�� �ٸ� ���� �迭 B[]�� �����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ
#include <stdio.h>

void ArrayCopy(int *A, int *B, int size);

int main()
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int B[10] = {0};
    ArrayCopy(A, B, 10);

    for (int i = 0;i < 10;i++)
        printf("%d ", B[i]);

    return 0;
}

void ArrayCopy(int *A, int *B, int size)
{
    for (int i = 0;i < size;i++)
        B[i] = A[i];
}