// ����ü�� �� ���� ��ǥ�� �޾Ƽ� �� ��ǥ�� ��ġ�ϸ� 1, ��ġ���� ������ 0�� ��ȯ�ϴ� �Լ� �ۼ�
// ����ü �����͸� �޵��� ����
#include <stdio.h>

typedef struct point
{
    int x, y;
}POINT;

int equal(POINT *p1, POINT *p2); // ��ǥ ��ġ �˻� �Լ�

int main()
{
    POINT p1 = {1, 2};
    POINT p2 = {3, 5};

    if (equal(&p1, &p2))
        printf("(%d, %d) == (%d, %d)\n", p1.x, p1.y, p2.x, p2.y);
    else
        printf("(%d, %d) != (%d, %d)\n", p1.x, p1.y, p2.x, p2.y);

    return 0;
}

int equal(POINT *p1, POINT *p2)
{
    if (p1->x == p2->x && p1->y == p2->y)
        return 1;
    else
        return 0;
}