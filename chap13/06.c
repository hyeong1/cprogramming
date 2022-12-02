// 구조체 연습문제 6
// 5번에서 작성한 Equal함수를 구조체의 포인터를 받도록 변경
#include <stdio.h>

typedef struct point
{
    int x, y;
} POINT;

int Equal(POINT *p1, POINT *p2);

int main()
{
    POINT p1 = {1, 2};
    POINT *pp1; // 구조체 p1에 대한 구조체 포인터
    POINT p2 = {1, 2};
    POINT *pp2; // 구조체 p2에 대한 구조체 포인터

    pp1 = &p1;
    pp2 = &p2;

    printf("p1 == p2: %d\n", Equal(pp1, pp2));
    return 0;
}

int Equal(POINT *p1, POINT *p2)
{
    if (p1->x == p2->x && p1->y == p2->y) // 좌표 같으면
        return 1;                         // 1 반환
    else                                  // 그렇지 않으면
        return 0;                         // 0 반환
}