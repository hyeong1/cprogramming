#include <stdio.h>

int main()
{
    double base, height, area;
    printf("»ï°¢ÇüÀÇ ¹Øº¯: ");
    scanf("%lf", &base);
    printf("»ï°¢ÇüÀÇ ³ôÀÌ: ");
    scanf("%lf", &height);

    area = 0.5 * height * base;
    printf("»ï°¢ÇüÀÇ ³ĞÀÌ: %lf", area);

    return 0;
}