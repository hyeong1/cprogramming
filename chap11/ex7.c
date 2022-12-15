// �������� ������ �迭 A[]�� ����Ǿ� �ִٰ� ����.
// �̹��޿� ȸ�翡�� ������ ������ �Ѿ��� ����ϰ��� �Ѵ�.
// ������ �迭 ��ҵ��� ���� ���Ͽ� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�.
#include <stdio.h>

void PrintArr(int *arr, int size); 
int ArraySum(int *a, int size);

int main()
{
    int money[5] = {100, 200, 300, 400, 500};

    printf("A[] = ");
    PrintArr(money, 5);
    printf("������ �� = %d\n", ArraySum(money, 5));
    return 0;
}

void PrintArr(int *arr, int size)
{
    for (int i = 0; i < 5; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}

int ArraySum(int *a, int size)
{
    int sum = 0;
    for (int i = 0;i < size;i++)
        sum += *(a+i);
    return sum;
}