// �Ҽ� ã�� - �Լ��� ����
// ����� 1�� �ڱ��ڽŸ� ������ �Ҽ�
#include <stdio.h>

void FindPrimeNum(int num)
{
    int check = 0;
    for (int i = 1; i < num; i++) // num�� 1���� num-1���� ������ ����
    {
        if (num % i == 0)
            check++;
        if (check > 1) // check�� 1 �̻��̸� (--> 1�̿ܿ� �������� ���� �ִٴ� ���̹Ƿ�)
        {
            printf("�Ҽ� �ƴ�\n");
            break; // '�Ҽ� �ƴ�' ����ϰ� �ݺ��� ������
        }
    }
    if (!check) // check�� 0�̸� �ݺ����� ���� �ʾҴٴ� �� -> �Է°��� 1�̶�� ��
        printf("�Ҽ� �ƴ�\n");
    else if (check == 1) // 1���� �������ϱ� check�� ������ 1 �̻�
        printf("�Ҽ� ����\n");
}

int main()
{
    int num;
    scanf("%d", &num); // ����ڿ��� ���� �Է¹ޱ�
    FindPrimeNum(num);
    return 0;
}