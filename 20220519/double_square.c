#include <stdio.h>

// 실수 받아서 제곱으로 반환
double square(double n) {
    double square = n * n;
    printf("주어진 정수 %lf의 제곱은 %lf입니다.", n, square);
}

int main() {
    double num;
    printf("정수를 입력하시오: ");
    scanf("%lf", &num);

    square(num);

    return 0;
}