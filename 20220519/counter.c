#include <stdio.h>

// 카운터 초기값 입력 받고 1씩 감소시키기-0이 될 때까지 반복
int main() {
    int counter;
    printf("카운터의 초기값을 입력하시오: ");
    scanf("%d", &counter);

    for (int i = counter;i > 0;i--) {
        printf("%d ", i);
    }

    return 0;
}