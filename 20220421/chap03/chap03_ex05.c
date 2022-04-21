#include <stdio.h>

int main()
{
    double x, y;
    printf("실수를 입력하세요: ");
    scanf("%lf", &x);

    y = 3 * x * x + 7 * x + 11;
    printf("다항식의 값은: %lf", y);

    return 0;
}