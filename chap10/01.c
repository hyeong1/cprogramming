// �� ���� ������ ���� �迭�� ����
// 8, 9, 10, 11, 12���� ������ �ϼ� ���
#include <stdio.h>

int main()
{
    int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 7;i < 12;i++)
        printf("%d���� %d�ϱ��� �ֽ��ϴ�.\n", i+1, days[i]);

    return 0;
}