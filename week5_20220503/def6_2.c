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
        printf("���� %d: �Ҽ�", a);
    }
    else {
        printf("���� %d: �Ҽ� �ƴ�", a);
    }
}

int main() {
    int i, n, n_data;
    n_data = 0;

    printf("���� �Է�: ");
    scanf("%d", &n);

    findPrimeNumber(n);

    return 0;
}