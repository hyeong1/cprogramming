// 원의 면적을 구하는 문제를 함수로 작성
#include <stdio.h>
#define PI 3.141592
/*
double cal_area(double radius);

int main()
{
    double radius, area;
    printf("원의 반지름을 입력하시오: ");
    scanf("%lf", &radius);

    area = cal_area(radius);
    printf("원의 면적은 %lf입니다.\n", area);

    return 0;
}

double cal_area(double radius)
{
    double area = PI * radius * radius;
    return area;
}*/

double CalArea(double radius)
{
    return PI * radius * radius;
}
int main()
{
    double radius;
    scanf("%lf", &radius);
    printf("원의 면적은 %lf입니다.\n", CalArea(radius));
    return 0;
}