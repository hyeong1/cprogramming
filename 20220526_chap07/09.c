#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1;;i++) {
        sum += i;
        if (sum > 10000) {
            sum -= i;
            --i;
            printf("1부터 %d까지의 합이 %d입니다.", i, sum);
            break;
        }
    }

    return 0;
}