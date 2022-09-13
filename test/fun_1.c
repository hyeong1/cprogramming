// 정수 두 개 입력받고 두 수를 더하여 리턴하는 add 함수
#include <stdio.h>

int add(int a, int b);

int main()
{
    int num1, num2;
    printf("정수 두 개 입력: ");
    scanf("%d %d", &num1, &num2);

    printf("%d\n", add(num1, num2));

    return 0;
}

int add(int a, int b)
{
    return a + b;
}