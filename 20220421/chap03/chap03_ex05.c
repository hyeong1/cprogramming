#include <stdio.h>

int main()
{
    double x, y;
    printf("�Ǽ��� �Է��ϼ���: ");
    scanf("%lf", &x);

    y = 3 * x * x + 7 * x + 11;
    printf("���׽��� ����: %lf", y);

    return 0;
}