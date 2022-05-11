#include <stdio.h>

int main() {
    int data;
    printf("정수를 입력하시오: ");
    scanf("%d", &data);

    printf("2의 보수: %d", ~data + 1);

    return 0;
}