// 입력받은 정수의 자리수 합계를 계산하는 프로그램을 순환을 이용하여 작성
// 123의 경우 6 출력
#include <stdio.h>

int DigitSum(int n);

int main()
{
    int n;
    printf("정수 입력: ");
    scanf("%d", &n);

    printf("자리수의 합: %d\n", DigitSum(n));

    return 0;
}

int DigitSum(int n)
{
    if (n < 10)
        return n;
    else 
        return ((n % 10) + DigitSum(n / 10));
}