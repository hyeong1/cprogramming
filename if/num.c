// 두 개의 정수를 입력받은 후에 작은 수가 큰 수의 약수인지 확인하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
    int num1, num2;
    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    // num1이 큰 수 일 때
    if (num1 > num2) {
        if (num1 % num2 == 0)
            printf("%d는 %d의 약수입니다.\n", num2, num1);
    }
    // num2가 큰 수 일 때
    else {
        if (num2 % num1 == 0)
            printf("%d는 %d의 약수입니다.\n", num1, num2);
    }

    return 0;
}