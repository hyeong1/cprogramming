//1부터 100사이의 모든 3의 배수의 합을 계산하여 출력
#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1;i <= 100;i++) {
        if (i % 3 == 0)
            sum += i;
    }

    printf("%d\n", sum);

    return 0;
}