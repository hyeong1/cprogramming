// 2���� ������ �Է¹޾Ƽ� �ִ������� �ּҰ������ ��ȯ�ϴ� �Լ� 
#include <stdio.h>

void GetLcmGcd(int x, int y, int *pLcm, int *pGcd);

int main()
{
    int num1=24, num2=36;
    int lcm, gcd;
    GetLcmGcd(num1, num2, &lcm, &gcd);
    printf("�ּҰ���� : %d\n", lcm);
    printf("�ִ����� : %d\n", gcd);
    return 0;
}

void GetLcmGcd(int x, int y, int *pLcm, int *pGcd)
{
    for (int i = 1;i <= x && i <= y;i++)
        if (x % i == 0 && y % i ==0)
            *(pGcd) = i;
    *(pLcm) = (x * y) / *(pGcd);
}