#include <stdio.h>

int main()
{
    double base, height, area;
    printf("�ﰢ���� �غ�: ");
    scanf("%lf", &base);
    printf("�ﰢ���� ����: ");
    scanf("%lf", &height);

    area = 0.5 * height * base;
    printf("�ﰢ���� ����: %lf", area);

    return 0;
}