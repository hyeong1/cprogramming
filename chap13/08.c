// ����ü �������� 8
// ���� �߽��� ��Ÿ���µ� point ����ü ���
// ���� ��Ÿ���� circle ����ü ����
// circle ����ü�� �޾Ƽ� ���� ����, ���� �ѷ��� ���ϴ� �Լ� �ۼ�
#include <stdio.h>

typedef struct point
{
    int x, y;
}POINT;

typedef struct circle
{
    POINT center; // ���� �߽� ��ǥ
    double radius; // ���� ������
}CIRCLE;

double Area(CIRCLE c); // ���� ���� ��ȯ
double Perimeter(CIRCLE c); // ���� �ѷ� ��ȯ

int main()
{
    POINT cCenter; // ���� �߽� ��ǥ
    CIRCLE circle1;
    printf("���� �߽���: ");
    scanf("%d %d", &cCenter.x, &cCenter.y); // ���� �߽� �Է¹޾Ƽ� ����
    circle1.center = cCenter; // �� ����ü�� �Է¹��� ��ǥ ����ü �����ϱ�

    printf("������: ");
    scanf("%lf", &circle1.radius); // ������ �Է¹ޱ�
    // ��� ���
    printf("���� ����: %lf", Area(circle1));
    printf("���� �ѷ�: %lf", Perimeter(circle1));
    
    return 0;
}

double Area(CIRCLE c)
{
    double pie = 3.141592;
    return (c.radius*c.radius*pie);
}

double Perimeter(CIRCLE c)
{
    double pie = 3.141592;
    return (c.radius*2*pie);
}