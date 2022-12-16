// 원의 중심을 나타내는 point 구조체, 원을 나타내는 circle 구조체 정의
// 1. 원의 면적을 계산하는 함수
// 2. 원의 둘레를 계산하는 함수
#include <stdio.h>

typedef struct point
{
    int x, y;
} POINT;

typedef struct circle
{
    POINT center;  // 원의 중심
    double radius; // 원의 반지름
} CIRCLE;

double area(CIRCLE c);
double perimeter(CIRCLE c);

int main()
{
    POINT p1 = {0, 0};
    CIRCLE c1 = {p1, 10};

    printf("원의 면적=%lf, 원의 둘레=%lf\n", area(c1), perimeter(c1));
    return 0;
}

double area(CIRCLE c)
{
    return (c.radius * c.radius * 3.14);
}

double perimeter(CIRCLE c)
{
    return (2 * c.radius * 3.14);
}