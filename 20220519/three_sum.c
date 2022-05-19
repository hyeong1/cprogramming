#include <stdio.h>

// 1-100 사이의 3의 배수의 합 구하기
int main() {
    int sum = 0;

    for (int i = 1;i <= 100;i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}