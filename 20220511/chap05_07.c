#include <stdio.h>

int main() {
    int data, num;
    printf("정수를 입력하시오: ");
    scanf("%d", &data);

    printf("2를 곱하고 싶은 횟수: ");
    scanf("%d", &num);

    printf("%d<<%d의 값: %d", data, num, data << num);

    return 0;
}