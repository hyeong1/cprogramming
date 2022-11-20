// �������� �⺻���� �迭 A[]�� ����Ǿ� �ִ�.
// �迭 B[]���� �������� ���ʽ��� ����Ǿ� �ִ�.
// �⺻�ް� ���ʽ��� ���Ͽ� �̹��޿� ������ ������ �Ѿ��� ����ϰ��� �Ѵ�. 
// A[]�� B[]�� ���Ͽ� �迭 C[]�� �����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�
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

// �迭 ��� ����ϴ� �Լ�
void PrintArr(int *arr, int size)
{
    for (int i = 0;i < size;i++)
        printf("%d\t", arr[i]);
    printf("\n");
}
// A�迭�� B�迭 ��� ���ؼ� C�迭�� �����ϴ� �Լ�
void ArrayAdd(int *A, int *B, int *C, int size)
{
    for (int i = 0;i < size;i++)
        C[i] = A[i] + B[i];
}