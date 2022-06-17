#include <stdio.h>

// 피보나치 수열 생성하여 출력하는 프로그램
int main() {
    int n, a, b, c;
    printf("항의 개수를 입력하시오: ");
    scanf("%d", &n);

    a = 0;
    b = 1;

    printf("%d, %d, ", a, b);
    for (int i = 1;i < n;i++) {
        c = a + b;
        a = b;
        b = c;
        printf("%d, ", c);
    }

    return 0;
}