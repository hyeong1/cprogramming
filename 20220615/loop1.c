#include <stdio.h>

int main() {
    int count;
    printf("카운터의 초기값을 입력하시오: ");
    scanf("%d", &count);

    for (int i = count;i > 0;i--) {
        printf("%d ", i);
    }

    return 0;
}