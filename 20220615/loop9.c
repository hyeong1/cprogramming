#include <stdio.h>

// (1+2+3+...+n) -> 10000�� ���� �����鼭 ���� ū ���� �� ���� n�� �� ���
int main() {
    int sum = 0;

    for (int i = 1;;i++) {
        sum += i;
        if (sum > 10000) {
            sum -= i;
            --i;
            printf("1���� %d������ ���� %d�Դϴ�.", i, sum);
            break;
        }
    }

    return 0;
}