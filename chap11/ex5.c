// ���� �迭 A[]�� �ٸ� ���� �迭 B[]�� �����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�
#include <stdio.h>

void PrintArr(int *arr, int size);
void ArrayCopy(int *A, int *B, int size);

int main()
{
    int a[5] = {2, 2, 2, 2, 2};
    int b[5] = {0};
    PrintArr(a, 5);
    ArrayCopy(a, b, 5);

    printf("A[] = ");
    PrintArr(a, 5); // --> ��?
    printf("B[] = ");
    PrintArr(b, 5);
    return 0;
}

void PrintArr(int *arr, int size)
{
    for (int i = 0; i < 5; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}

void ArrayCopy(int *A, int *B, int size)
{
    for (int i = 0; i < size; i++)
        *(B + i) = *(A + i);
}
