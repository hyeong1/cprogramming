// ���������� �������� 3
// scores��� 2���� �迭�� �л����� ���� ����
// ���� �� �л��� ���� ���� ���� ���� ������ ��Ÿ��
// ���� �� ���迡 ���� ���� �л����� ����
// �л����� ������ ����� ���Ͻÿ�
#include <stdio.h>

double get_average(int *list, int n);

int main()
{
    int scores[3][5] = {{100, 100, 100, 100, 100},
                        {50, 50, 50, 50, 50},
                        {75, 75, 75, 75, 75}};
    for (int i = 0;i < 3;i++)
        printf("%d���� ��հ�=%lf\n", i, get_average(scores[i], 5));
    return 0;
}

double get_average(int *list, int n)
{
    int sum = 0;
    for (int i = 0;i < n;i++)
        sum += list[i];
    return (sum/n);
}