// �Է¹��� ������ �ڸ��� �հ踦 ����ϴ� ���α׷��� ��ȯ�� �̿��Ͽ� �ۼ�
// 123�� ��� 6 ���
#include <stdio.h>

int DigitSum(int n);

int main()
{
    int n;
    printf("���� �Է�: ");
    scanf("%d", &n);

    printf("�ڸ����� ��: %d\n", DigitSum(n));

    return 0;
}

int DigitSum(int n)
{
    if (n < 10)
        return n;
    else 
        return ((n % 10) + DigitSum(n / 10));
}