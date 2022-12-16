// 구조체로 두 점의 좌표를 받아서 두 좌표가 일치하면 1, 일치하지 않으면 0을 반환하는 함수 작성
// 구조체 포인터를 받도록 변경
#include <stdio.h>

typedef struct point
{
    int x, y;
}POINT;

int equal(POINT *p1, POINT *p2); // 좌표 일치 검사 함수

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