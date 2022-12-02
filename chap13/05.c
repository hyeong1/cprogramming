// ����ü �������� 5
// 2���� ���-�ϳ��� ���� point��� ����ü�� ����
// �� �� ���ؼ� ��ǥ�� ��ġ�ϸ� 1��ȯ, �׷��� ������ 0��ȯ�ϴ� �Լ� �ۼ� �� �׽�Ʈ
#include <stdio.h>

typedef struct point
{
    int x, y;
}POINT;

int Equal(POINT p1, POINT p2);

int main()
{
    POINT p1 = {1, 2};
    POINT p2 = {1, 2};
    POINT p3 = {2, 4};

    printf("p1 == p2: %d\n", Equal(p1, p2));
    printf("p2 == p3: %d\n", Equal(p2, p3));
    return 0;
}

int Equal(POINT p1, POINT p2)
{
    if (p1.x == p2.x && p1.y == p2.y) // ��ǥ ������ 
        return 1; // 1 ��ȯ
    else // �׷��� ������
        return 0; // 0 ��ȯ
}