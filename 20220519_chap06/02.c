#include <stdio.h>

// 2개의 정수를 받아서 첫 번째 정수가 두 번째 정수로 나누어 떨어지는지 검사(약수인지 검사)
int main() {
    int num1, num2;
    printf("정수를 입력하세요: ");
    scanf("%d", &num1);
    printf("정수를 입력하세요: ");
    scanf("%d", &num2);

    if (num1 % num2 == 0) {
        printf("약수입니다.");
    }
    /*
    if (!(num1 % num2)) {
        printf("약수입니다.");
    }
    */

    return 0;
}