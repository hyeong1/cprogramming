#include <stdio.h>

void findPrimeNumber(int a) {
    int i, a_data;
    a_data = 0;

    for (i = 1;i <= a;i++) {
            if (a % i == 0) {
                a_data += 1;
            }
    }
    printf("����� ����: %d\n", a_data);

    if (a_data == 2) {
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