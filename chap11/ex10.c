// 2���� ���ĵ� ���� �迭 A[], B[]�� �ִ�. �� �� ���� �迭�� �ϳ��� ���ĵ� �迭 C[]�� ��ġ�ÿ�
#include <stdio.h>

void Merge(int *A, int *B, int *C, int size);

int main()
{   
    int A[4] = {1, 3, 5, 7};
    int B[4] = {2, 4, 6, 8};
    int C[8] = {0};

    Merge(A, B, C, 4);
    
    // ���ĵ� ��� Ȯ���ϱ�
    printf("C[] = ");
    for (int i = 0;i < 8;i++)
        printf("%d ", C[i]);
    printf("\n");

    return 0;
}

void Merge(int *A, int *B, int *C, int size) // size�� �迭 A, B�� ũ��
{
    // for������ �����
    int a, b, c, i; // a, b, c�� �迭 A, B, C�� �ε��� ����, i�� ���� ������ ������ �迭�� ���� ��� �� ����
    for (a=0, b=0, c=0;a<size && b<size;)
    {
        if (A[a] < B[b])
            C[c++] = A[a++];
        else
            C[c++] = B[b++];
    }
    for (i=a;i<size;i++) // B�� ���� ���ĵǸ� a�� ���� size���� �����Ƿ� ���� A��ҵ��� ��� C�� �����
        C[c++] = A[i];
    for (i=b;i<size;i++)
        C[c++] = B[i];
}