#include <stdio.h>

void findPrimeNumber(int a) {
    int count;

    for (int i = 2;i < a;i++) {
        if (a % i == 0) {
            count = 1;
            printf("정수 %d: 소수 아님", a);
            break;
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
    int n;

    printf("숫자 입력: ");
    scanf("%d", &n);

    findPrimeNumber(n);

    return 0;
}