// ���� �迭�� ��ҵ��� ȭ�鿡 ����ϴ� �Լ��� �޼��ϰ� �׽�Ʈ
// ��� ������ A[] = { 1, 2, 3, 4, 5 } �� ���� ������ �ǵ��� �϶�
#include <stdio.h>

void ArrayPrint(int *A, int size);

int main()
{
    int a[10] = {1, 2, 3, 4};
    ArrayPrint(a, 10);
    return 0;
}

void ArrayPrint(int *A, int size)
{
    printf("A[] = { ");
    for (int i = 0;i < size;i++)
        printf("%d ", A[i]);
    printf("}\n");
}