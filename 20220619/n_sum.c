#include <stdio.h>

// 1���� n������ �� �� 1000�� ���� �ʴ� ���� ū �հ� �� ���� n�� ���
int main() {
    int i, sum;
    i = 0;
    sum = 0;

    while (1) {
        i++;
        sum += i;
        // printf("i: %d sum: %d\n", i, sum);
        if (sum > 1000) {
            sum -= i;
            i--;
            printf("1���� %d������ ���� %d�Դϴ�.\n", i, sum);
            break;
        }
    }

    return 0;
}