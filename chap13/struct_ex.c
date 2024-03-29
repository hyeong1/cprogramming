// 2차원 공간 상의 점을 POINT타입으로 정의하기
// 원래의 점의 좌표와 이동된 거리를 전달하여 점의 평행이동 계산
#include <stdio.h>

typedef struct point
{
    int x;
    int y;
} POINT;

POINT translate(POINT p, POINT delta);

int main()
{
    POINT p = {2, 3};
    POINT delta = {10, 10};
    POINT result;

    result = translate(p, delta);
    printf("새로운 점의 좌표는 (%d, %d)입니다.\n", result.x, result.y);

    return 0;
}

POINT translate(POINT p, POINT delta)
{
    POINT new_p;
    new_p.x = p.x + delta.x;
    new_p.y = p.y + delta.y;
    
    return new_p;
}