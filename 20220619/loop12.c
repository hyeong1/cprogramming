#include <stdio.h>

// 피보나치 수열
int main() {
    int num, a, b, c;
    printf("몇 번째 항까지 구할까요? ");
    scanf("%d", &num);

    a = 0;
    b = 1;
    printf("%d ", a);

    for (int i = 1;i <= num;i++) {
        printf("%d ", b);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}