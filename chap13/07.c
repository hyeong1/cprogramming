// 구조체 연습문제 7
// 2차원 공간에 있는 점의 좌표를 받아서 이점이 속하는 사분면의 번호 반환하는 함수 작성
#include <stdio.h>

typedef struct point
{
    int x, y;
} POINT;

int Quadrant(POINT p); // 몇사분면에 p가 있는지 사분면의 번호를 반환하는 함수

int main()
{
    POINT p1 = {1, -1}; // (1, -1)이면 4사분면에 위치
    printf("p1의 위치: %d사분면\n", Quadrant(p1));

    return 0;
}

int Quadrant(POINT p)
{
    if (p.x > 0) // x좌표가 양수
    {
        if (p.y > 0) // y좌표도 양수면
            return 1;
        else // y좌표가 음수
            return 4;
    }
    else // x좌표 음수
    {
        if (p.y > 0) // y좌표 양수
            return 3;
        else // y좌표 음수
            return 2;
    }
}