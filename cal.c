#include <stdio.h>

int main(void)
{
    int x, y, sum, sub, mul, div;

    x = 20;
    y = 10;

    //�������� ������ ����
    sum = x + y;
    sub = x - y;
    mul = x * y;
    div = x / y;

    printf("�μ��� ��: %d\n", sum);
    printf("�μ��l ��: %d\n", sub);
    printf("�μ��� ��: %d\n", mul);
    printf("�μ��� ��: %d", div);

    return 0;
}