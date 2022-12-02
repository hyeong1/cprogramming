// 구조체 연습문제 8
// 원의 중심을 나타내는데 point 구조체 사용
// 원을 나타내는 circle 구조체 정의
// circle 구조체를 받아서 원의 면적, 원의 둘레를 구하는 함수 작성
#include <stdio.h>

typedef struct point
{
    int x, y;
}POINT;

typedef struct circle
{
    POINT center; // 원의 중심 좌표
    double radius; // 원의 반지름
}CIRCLE;

double Area(CIRCLE c); // 원의 면적 반환
double Perimeter(CIRCLE c); // 원의 둘레 반환

int main()
{
    POINT cCenter; // 원의 중심 좌표
    CIRCLE circle1;
    printf("원의 중심점: ");
    scanf("%d %d", &cCenter.x, &cCenter.y); // 원의 중심 입력받아서 저장
    circle1.center = cCenter; // 원 구조체에 입력받은 좌표 구조체 저장하기

    printf("반지름: ");
    scanf("%lf", &circle1.radius); // 반지름 입력받기
    // 결과 출력
    printf("원의 면적: %lf", Area(circle1));
    printf("원의 둘레: %lf", Perimeter(circle1));
    
    return 0;
}

double Area(CIRCLE c)
{
    double pie = 3.141592;
    return (c.radius*c.radius*pie);
}

double Perimeter(CIRCLE c)
{
    double pie = 3.141592;
    return (c.radius*2*pie);
}