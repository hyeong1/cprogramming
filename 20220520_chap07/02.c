#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1;i <= 100;i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }

    printf("1���� 100������ ��� 3�� ����� ���� %d�Դϴ�.\n", sum);

    return 0;
}