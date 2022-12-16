// ���������� �������� 2
// 2���� �迭�� ������ ����
// 1���� �迭�� ����� ������ ���� ���ϴ� int get_sum(int array[], int size)
// 2���� �迭�� �� �࿡ ���Ͽ� get_sum()�� ȣ���ؼ� �� ���� �� ���ϰ�, �̰͵��� ���� ��ü �� ���ϱ�
#include <stdio.h>

int get_sum(int *array, int size); // 1���� �迭�� ���� ���ϴ� �Լ�

int main()
{
    int num[5][3] = {{10, 10, 10},
                     {10, 20, 30},
                     {5, 5, 5},
                     {1, 1, 1},
                     {2, 2, 2}};
    int total = 0; // �� ���� ���� ��ĥ ����
    // �� ���� �� ��ġ��
    for (int i = 0; i < 5; i++)
        total += get_sum(num[i], 3);

    // ��� ���
    printf("�� ��: %d\n", total);

    return 0;
}

int get_sum(int *array, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += array[i];
    return sum;
}