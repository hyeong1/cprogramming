#include <stdio.h>

// 실수의 거듭 제곱값 계산하는 프로그램
int main() {
    double r, result;
    int n;
    printf("실수의 값을 입력하시오: ");
    scanf("%lf", &r);

    printf("거듭제곱횟수를 입력하시오: ");
    scanf("%d", &n);

    result = 1;

    for (int i = 1;i <= n;i++) {
        result *= r;
    }

    printf("결과값은 %lf", result);

    return 0;
}