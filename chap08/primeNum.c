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

int IsPrime(int n)
{
    if (n == 1)   // 1�� �Ҽ��� �ƴϹǷ� n�� 1�̸�
        return 0; // 0 ����
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) // 2���� �ڱ��ڽ�-1 ���̿� �ϳ��� ����� �����
            return 0;
    }
    return 1;
}

int main()
{
    int num;
    scanf("%d", &num); // ����ڿ��� ���� �Է¹ޱ�
    // FindPrimeNum(num);
    if (!IsPrime(num)) // return 0�̸�
        printf("�Ҽ�x\n");
    else
        printf("�Ҽ�o\n");
    return 0;
}