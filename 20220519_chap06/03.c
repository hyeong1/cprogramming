#include <stdio.h>

// 3개의 정수를 받아서 가장 작은 값 결정-if,else문 이용
int main() {
    int num1, num2, num3;
    printf("3개의 정수를 입력하시오: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2) {
        // num1이 num2보다 작음
        if (num1 < num3) {
            printf("제일 작은 정수는 %d입니다.\n", num1);
        }
        else {
            printf("제일 작은 정수는 %d입니다.\n", num3);
        }
    }
    else {
        // num1이 num2보다 큼-작은 수는 num2
        if (num2 < num3) {
            printf("제일 작은 정수는 %d입니다.\n", num2);
        }
        else {
            printf("제일 작은 정수는 %d입니다.\n", num3);
        }
    }

    return 0;
}