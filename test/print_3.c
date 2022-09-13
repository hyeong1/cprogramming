// 472 * 385 -> 1의 자리 연산, 10의 자리 연산, 100의 자리 연산, 결과 출력
#include <stdio.h>

int main()
{
    int num1, num2;
    num1 = 472;
    num2 = 385;

    printf("%d\n", num1 * ((num2 % 100) % 10));
    printf("%d\n", num1 * ((num2 % 100) / 10));
    printf("%d\n", num1 * (num2 / 100));
    printf("%d\n", num1 * num2);

    return 0;
}