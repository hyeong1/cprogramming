// ���� ������ ���ϴ� ������ �Լ��� �ۼ�
#include <stdio.h>
#define PIE 3.141592

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
    double area = PIE * radius * radius;
    return area;
}