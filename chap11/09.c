// ������� ������ ����� �迭���� ������ n������ ����� ã�� �ش� ����� �ε����� ��ȯ�϶�
#include <stdio.h>

int Search(int *A, int size, int searchValue);

int main()
{
    int A[5] = {150, 175, 200, 250, 300};

    printf("������ %d������ ����� �ε��� = %d\n", 200, Search(A, 5, 200));
    return 0;
}

int Search(int *A, int size, int searchValue)
{
    for (int i = 0;i < size;i++)
        if (A[i] == searchValue)
            return i;
}