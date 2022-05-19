#include <stdio.h>

int even(int n) {
    if (n % 2 == 0) {
        printf("짝수");
    }
    else {
        printf("홀수");
    }
}

int absolute(int n) {
    if (n < 0) {
        printf("%d", -n);
    }
    else {
        printf("%d", n);
    }
}

int sign(int n) {
    if (n < 0) {
        printf("음수");
    }
    else if (n > 0) {
        printf("양수");
    }
    else {
        printf("0");
    }
}

int main() {
    int num;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    printf("even()의 결과: ");
    even(num);

    printf("\nabsolute()의 결과: ");
    absolute(num);

    printf("\nsign()의 결과: ");
    sign(num);

    return 0;
}