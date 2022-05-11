#include <stdio.h>

int main() {
    double num1, num2;
    printf("실수를 입력하시오: ");
    scanf("%lf %lf", &num1, &num2);

    printf("%lf %lf %lf %lf", num1 + num2, num1 - num2, num1 * num2, num1 / num2);

    return 0;
}