#include <stdio.h>

int main() {
    int input, sum;
    printf("숫자를 입력하세요: ");
    scanf("%d", &input);

    sum = 0;
    for (int i = 1;i <= input;i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    printf("짝수의 합은 %d입니다.", sum);

    return 0;
}