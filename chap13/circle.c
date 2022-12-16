// ���� �߽��� ��Ÿ���� point ����ü, ���� ��Ÿ���� circle ����ü ����
// 1. ���� ������ ����ϴ� �Լ�
// 2. ���� �ѷ��� ����ϴ� �Լ�
#include <stdio.h>

typedef struct point
{
    int x, y;
} POINT;

typedef struct circle
{
    POINT center;  // ���� �߽�
    double radius; // ���� ������
} CIRCLE;

double area(CIRCLE c);
double perimeter(CIRCLE c);

int main()
{
    POINT p1 = {0, 0};
    CIRCLE c1 = {p1, 10};

    printf("���� ����=%lf, ���� �ѷ�=%lf\n", area(c1), perimeter(c1));
    return 0;
}

double area(CIRCLE c)
{
    return (c.radius * c.radius * 3.14);
}

double perimeter(CIRCLE c)
{
    return (2 * c.radius * 3.14);
}