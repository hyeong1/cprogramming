#include <stdio.h>

void findPrimeNumber(int a) {
    int count = 1;

    for (int i = 2;i < a;i++) {
        if (a % i == 0) {
            count += 1;
            break;
        }
    }
    if (count == 1) {
        printf("���� %d: �Ҽ�", a);
    }
    else {
        printf("���� %d: �Ҽ� �ƴ�", a);
    }
}

int main() {
    int n;

    printf("���� �Է�: ");
    scanf("%d", &n);

    findPrimeNumber(n);

    return 0;
}