#include <stdio.h>

int main() {
    int num, times, result;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);
    printf("2를 곱하고 싶은 횟수: ");
    scanf("%d", &times);

    printf("%d", num << times);

    return 0;
}