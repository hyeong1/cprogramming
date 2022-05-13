#include <stdio.h>

int main() {
    int i;
    int sum = 0;
    for (i = 0;i < 200;i++) {
        if((i % 3 == 0) && (i % 4 == 0)) {
            sum += i;
            if (sum > 1000) {
                break;
            }
        }
    }
    printf("빠져나온 수: %d\n", i);
    printf("더한 수: %d\n", sum);

    return 0;
}