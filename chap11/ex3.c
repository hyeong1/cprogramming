// ���� �迭�� ��ҵ��� ȭ�鿡 ����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ
// ��� ������ A[] = { 1, 2, 3, 4, 5 }�� ���� ����
#include <stdio.h>

void PrintArr(int *a, int size);

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    PrintArr(arr, 10);
    return 0;
}

void PrintArr(int *a, int size)
{
    printf("A[] = { ");
    for (int i = 0;i < size;i++)
        printf("%d ", *(a+i));
    printf("}\n");
}