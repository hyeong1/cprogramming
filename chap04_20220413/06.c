#include <stdio.h>

int main()
{
    //3.32 * 10^-3 + 9.76 * 10^-8 계산하여 출력
    //지수표기법을 사용하여 변수 초기화
    //3.3.2e-3

    double num1, num2;
    num1 = 3.32e-3;
    num2 = 9.76e-8;

    printf("%lf\n", num1);
    printf("%lf\n", num2);
    printf("%lf", num1 + num2);

    return 0;
}