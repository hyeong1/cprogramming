// 두 자연수 입력받아 더하기, 빼기, 곱하기, 나누기, 나머지 연산 출력
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("두 자연수 입력: ");
    scanf("%d %d", &num1, &num2);

    printf("%d\n", num1 + num2);
    printf("%d\n", num1 - num2);
    printf("%d\n", num1 * num2);
    printf("%d\n", num1 / num2);
    printf("%d\n", num1 % num2);

    return 0;
}