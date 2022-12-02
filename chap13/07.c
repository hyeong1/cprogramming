// ����ü �������� 7
// 2���� ������ �ִ� ���� ��ǥ�� �޾Ƽ� ������ ���ϴ� ��и��� ��ȣ ��ȯ�ϴ� �Լ� �ۼ�
#include <stdio.h>

typedef struct point
{
    int x, y;
} POINT;

int Quadrant(POINT p); // ���и鿡 p�� �ִ��� ��и��� ��ȣ�� ��ȯ�ϴ� �Լ�

int main()
{
    POINT p1 = {1, -1}; // (1, -1)�̸� 4��и鿡 ��ġ
    printf("p1�� ��ġ: %d��и�\n", Quadrant(p1));

    return 0;
}

int Quadrant(POINT p)
{
    if (p.x > 0) // x��ǥ�� ���
    {
        if (p.y > 0) // y��ǥ�� �����
            return 1;
        else // y��ǥ�� ����
            return 4;
    }
    else // x��ǥ ����
    {
        if (p.y > 0) // y��ǥ ���
            return 3;
        else // y��ǥ ����
            return 2;
    }
}