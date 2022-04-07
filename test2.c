#include <stdio.h>

int main(void)
{
    double circle, area;

    scanf("반지름을 입력하세요: %lf\n", &circle);

    area = circle * circle * 3.14;
    printf("원의 면적: %lf", area);

    return 0;
}