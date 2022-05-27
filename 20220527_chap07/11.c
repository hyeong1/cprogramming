#include <stdio.h>

// 1^2 + 2^2 + ... + n^2 값 구하기
int main() {
    int n, result = 0;

    printf("n의 값을 입력하시오: ");
    scanf("%d", &n);

    for (int i = 1;i <= n;i++) {
        result += i * i;
    }
    printf("계산값은 %d입니다.", result);

    return 0;
}