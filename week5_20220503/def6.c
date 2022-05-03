#include <stdio.h>

void findPrimeNumber(int a) {
    int i, a_data;
    a_data = 0;

    for (i = 1;i <= a;i++) {
            if (a % i == 0) {
                a_data += 1;
            }
    }
    printf("약수의 개수: %d\n", a_data);

    if (a_data == 2) {
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