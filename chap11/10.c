// 2개의 정수를 입력받아서 최대 공약수와 최소 공배수를 반환하는 함수를 작성하고 테스트
#include <stdio.h>

void GetLcmGcd(int x, int y, int *pLcm, int *pGcd);

int main()
{
    int num1, num2, lcm, gcd;
    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &num1, &num2);

    GetLcmGcd(num1, num2, &lcm, &gcd);
    printf("최소공배수는 %d입니다.\n", lcm);
    printf("최대공약수는 %d입니다.\n", gcd);

    return 0;
}

void GetLcmGcd(int x, int y, int *pLcm, int *pGcd)
{
    int num1 = x, num2 = y; // 최대공약수를 찾기위해 num1, num2변수를 따로 선언 후 각각 x, y로 초기화
    // 최대공약수 찾기 - 유클리드 방법 사용
    while (num2 != 0)
    {
        *pGcd = num1 % num2;
        num1 = num2;
        num2 = *pGcd;
    }
    *pGcd = num1;

    *pLcm = (x * y) / *pGcd;
}