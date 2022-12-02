// 구조체 연습문제 5
// 2차원 평면-하나의 점을 point라는 구조체로 정의
// 두 점 비교해서 좌표가 일치하면 1반환, 그렇지 않으면 0반환하는 함수 작성 및 테스트
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
    if (p1.x == p2.x && p1.y == p2.y) // 좌표 같으면 
        return 1; // 1 반환
    else // 그렇지 않으면
        return 0; // 0 반환
}