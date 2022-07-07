#include <stdio.h>

double square(double a) {
    return a*a;
}

int main() {
    double num;
    printf("정수를 입력하세요: ");
    scanf("%lf", &num);

    printf("주어진 정수 %lf의 제곱은 %lf입니다.", num, square(num));

    return 0;
}