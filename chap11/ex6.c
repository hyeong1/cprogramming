// �������� �⺻���� A[]�� ����Ǿ��ִ�. B[]���� �������� ���ʽ��� ����Ǿ� �ִ�.
// �⺻�ް� ���ʽ��� ���Ͽ� �̹��޿� ������ ������ �Ѿ��� ����ϰ��� �Ѵ�. 
// A[]�� B[]�� ���� C[]�� �����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�.(��, ��� i�� ���Ͽ� C[i] = A[i] + B[i])
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