// 정수 입력받아서 제곱하여 변환하는 함수 프로그램
#include <stdio.h>

double square(double num);

int main()
{
    double num;
    printf("정수를 입력하시오: ");
    scanf("%lf", &num);

    double squareNum = square(num);
    printf("주어진 정수 %lf의 제곱은 %lf입니다.\n", num, squareNum);

    return 0;
}

double square(double num)
{
    double result = num * num;

    return result;
}