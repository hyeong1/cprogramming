#include <stdio.h>

int main() {
    double r, result = 1;
    int n;

    printf("실수의 값을 입력하시오: ");
    scanf("%lf", &r);
    printf("거듭제곱횟수를 입력하시오: ");
    scanf("%d", &n);

    for (int i = 1;i <= r;i++) {
        result = r * r;
    }    

    printf("%d", result);

    return 0;
}