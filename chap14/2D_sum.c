// 2���� �迭�� �� ���ϱ�
// 1���� �迭�� ���� ���ϴ� �Լ� ���
// �Լ� ȣ���ؼ� �� ���� ���� ���ϰ�, �̰͵��� ��� ���� ��ü 2���� �迭 �� ���ϱ�
#include <stdio.h>

int get_sum(int *arr, int size); // 1���� �迭�� ���� ���ϴ� �Լ�
int main()
{
    int num[3][6] = {{10, 10, 10, 10, 10, 10},
                     {10, 10, 10, 10, 10, 10},
                     {10, 10, 10, 10, 10, 10}};
    int total = 0;
    for (int i = 0;i < 3;i++)
    {
        total += get_sum(num[i], 6); // ���� �μ��� ������, size�� �� ũ�� 
        printf("%d\n", get_sum(num[i], 6));
    }
    printf("%d\n", total);    

    return 0;
}

int get_sum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0;i < size;i++)
        sum += *(arr+i);
    return sum;
}