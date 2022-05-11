#include <stdio.h>

int main() {
    int data;
    printf("정수를 입력하시오: ");
    scanf("%d", &data);

    printf("십의 자리: %d\n", data / 10);
    printf("일의 자리: %d\n", data % 10);

    return 0;
}