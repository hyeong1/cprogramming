// ���� ������ ���ϴ� ������ �Լ��� �ۼ�
#include <stdio.h>
#define PI 3.141592
/*
double cal_area(double radius);

int main()
{
    double radius, area;
    printf("���� �������� �Է��Ͻÿ�: ");
    scanf("%lf", &radius);

    area = cal_area(radius);
    printf("���� ������ %lf�Դϴ�.\n", area);

    return 0;
}

double cal_area(double radius)
{
    double area = PI * radius * radius;
    return area;
}*/

double CalArea(double radius)
{
    return PI * radius * radius;
}
int main()
{
    double radius;
    scanf("%lf", &radius);
    printf("���� ������ %lf�Դϴ�.\n", CalArea(radius));
    return 0;
}