// A�迭�� B�迭�� ���ļ� C�迭�� ���� - ����� �� ������������ ���ĵ�
#include <stdio.h>

void MergeArray(int A[], int B[], int C[], int size)
{
    int a, b, c; // A, B, C �迭�� �ε��� ����
    for (a=0, b=0, c=0;a<size && b<size;) // �ε��� 0���� �� �� �迭�� ������ ������
    {
        if (A[a] < B[b])
        {
            C[c] = A[a];
            a++;
            c++;
        }
        else // B[b]�� �� ������
        {
            C[c] = B[b];
            b++;
            c++;
        }
    }
    for (int i = a;i < size;i++) // B �迭�� ���� �������� a�� size-1���� -> �ּ� 1�� �̻� ���� ����
        C[c] = A[a];
    for (int i = b;i < size;i++) // A �迭�� ���� �������� B�� ���� ��Ҹ� C�� ������� �ִ´�.
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