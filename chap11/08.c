// �̹� �� ȸ�翡�� ������ ������ �Ѿ��� ����ϰ��� �Ѵ�.
// ������ �迭 ��ҵ��� ���� ���Ͽ� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�
#include <stdio.h>

void PrintArr(int *arr, int size);
int ArraySum(int *arr, int size); // ������� �޿� �� ��ȯ�� �Լ�

int main()
{
    int salary[10] = {1, 2, 3}; // ��� 10���� �޿� �迭
    PrintArr(salary, 10);
    printf("������ ��: %d\n", ArraySum(salary, 10));
    return 0;
}

void PrintArr(int *arr, int size)
{
    for (int i = 0;i < size;i++)
        printf("%d\t", arr[i]);
    printf("\n");
}

int ArraySum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0;i < size;i++)
        sum += arr[i];
    return sum;
}