// �־��� ���� �迭 A[]���� Ž���Ͽ� �迭 ����� �ε����� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�
#include <stdio.h>

int Search(int *arr, int size, int serch);

int main()
{
    int A[10] = {100, 100, 100, 200, 1, 1, 1, 1, 1, 1};
    printf("������ 200������ ����� �ε���: %d\n", Search(A, 10, 200));
    return 0;
}

int Search(int *arr, int size, int searchNum)
{
    for (int i = 0;i < size;i++)
        if (*(arr+i) == searchNum)
            return i;
}