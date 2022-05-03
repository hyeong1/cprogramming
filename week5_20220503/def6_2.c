#include <stdio.h>

void findPrimeNumber(int a) {
    int i, count;
    count = 0;

    for (i = 1;i <= a;i++) {
        if (a % i == 0) {
            count += 1;
        }
    }

    if (count == 0) {
        printf("정수 %d: 소수", a);
    }
    else {
        printf("정수 %d: 소수 아님", a);
    }
}

int main() {
    int i, n, n_data;
    n_data = 0;

    printf("숫자 입력: ");
    scanf("%d", &n);

    findPrimeNumber(n);

    return 0;
}