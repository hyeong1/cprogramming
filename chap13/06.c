// ����ü �������� 6
// 5������ �ۼ��� Equal�Լ��� ����ü�� �����͸� �޵��� ����
#include <stdio.h>

typedef struct point
{
    int x, y;
} POINT;

int Equal(POINT *p1, POINT *p2);

int main()
{
    POINT p1 = {1, 2};
    POINT *pp1; // ����ü p1�� ���� ����ü ������
    POINT p2 = {1, 2};
    POINT *pp2; // ����ü p2�� ���� ����ü ������

    pp1 = &p1;
    pp2 = &p2;

    printf("p1 == p2: %d\n", Equal(pp1, pp2));
    return 0;
}

int Equal(POINT *p1, POINT *p2)
{
    if (p1->x == p2->x && p1->y == p2->y) // ��ǥ ������
        return 1;                         // 1 ��ȯ
    else                                  // �׷��� ������
        return 0;                         // 0 ��ȯ
}