#include <stdio.h>

int main(void)
{
    int x, y, sum, sub, mul, div;

    x = 20;
    y = 10;

    //연산결과를 변수에 저장
    sum = x + y;
    sub = x - y;
    mul = x * y;
    div = x / y;

    printf("두수의 합: %d\n", sum);
    printf("두수릐 차: %d\n", sub);
    printf("두수의 곱: %d\n", mul);
    printf("두수의 몫: %d", div);

    return 0;
}