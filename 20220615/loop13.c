#include <stdio.h>

// 순열 계산 하는 프로그램
int main() {
    int n, r, result;
    result = 1;

    printf("n의 값: ");
    scanf("%d", &n);
    printf("r의 값: ");
    scanf("%d", &r);

    for (int i = n;i >= (n - r + 1);i--) {
        result = result * i;
    }
    printf("순열의 값은 %d입니다.", result);

    return 0;
}