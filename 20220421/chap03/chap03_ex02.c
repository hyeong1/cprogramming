#include <stdio.h>

int main()
{
    double mile, meter;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%lf", &mile);

    meter = mile * 1609.0;
    printf("%.1lf������ %lf�����Դϴ�.\n", mile, meter);

    return 0;
}