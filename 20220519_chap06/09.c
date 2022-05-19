#include <stdio.h>

// 함수값 계산하기-x값 입력받아서 결과 출력
int main() {
    double x, function;
    printf("x의 값을 입력하시오: ");
    scanf("%lf", &x);

    if (x <= 0) {
        function = x*x -9*x + 2;
        printf("f(x)의 값은 %lf", function);
    }
    else {
        function = 7*x + 2;
        printf("f(x)의 값은 %lf", function);
    }

    return 0;
}