#include <stdio.h>

int main() {
    int time;
    printf("카운터의 초기값을 입력하시오: ");
    scanf("%d", &time);

    for (int i = time;i > 0;i--) {
        printf("%d ", i);
    }

    return 0;
}