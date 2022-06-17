#include <stdio.h>

// (1+2+3+...+n) -> 10000을 넘지 않으면서 가장 큰 값과 그 떄의 n의 값 출력
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