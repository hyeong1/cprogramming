// 2���� ������ �Է¹޾Ƽ� �ִ� ������� �ּ� ������� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ
#include <stdio.h>

void GetLcmGcd(int x, int y, int *pLcm, int *pGcd);

int main()
{
    int num1, num2, lcm, gcd;
    printf("�� ���� ������ �Է��Ͻÿ�: ");
    scanf("%d %d", &num1, &num2);

    GetLcmGcd(num1, num2, &lcm, &gcd);
    printf("�ּҰ������ %d�Դϴ�.\n", lcm);
    printf("�ִ������� %d�Դϴ�.\n", gcd);

    return 0;
}

void GetLcmGcd(int x, int y, int *pLcm, int *pGcd)
{
    int num1 = x, num2 = y; // �ִ������� ã������ num1, num2������ ���� ���� �� ���� x, y�� �ʱ�ȭ
    // �ִ����� ã�� - ��Ŭ���� ��� ���
    while (num2 != 0)
    {
        *pGcd = num1 % num2;
        num1 = num2;
        num2 = *pGcd;
    }
    *pGcd = num1;

    *pLcm = (x * y) / *pGcd;
}