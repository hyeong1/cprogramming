#include <stdio.h>

// 1부터 n까지의 합 중 1000을 넘지 않는 가장 큰 합과 그 때의 n값 출력
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
            printf("1부터 %d까지의 합이 %d입니다.\n", i, sum);
            break;
        }
    }

    return 0;
}