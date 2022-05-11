#include <stdio.h>

int main() {
    int num1, num2, num3, result;
    printf("3개의 정수를 입력하시오: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    result = (num1 > num2 && num1 > num3) ? num1 : (num2 > num1 && num2 > num3) ? num2 : num3;
    printf("최대값: %d", result);

    return 0;
}