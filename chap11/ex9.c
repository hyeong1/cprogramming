// 2개의 정수를 입력받아서 최대공약수와 최소공배수를 반환하는 함수 
#include <stdio.h>

void GetLcmGcd(int x, int y, int *pLcm, int *pGcd);

int main()
{
    int num1=24, num2=36;
    int lcm, gcd;
    GetLcmGcd(num1, num2, &lcm, &gcd);
    printf("최소공배수 : %d\n", lcm);
    printf("최대공약수 : %d\n", gcd);
    return 0;
}

void GetLcmGcd(int x, int y, int *pLcm, int *pGcd)
{
    for (int i = 1;i <= x && i <= y;i++)
        if (x % i == 0 && y % i ==0)
            *(pGcd) = i;
    *(pLcm) = (x * y) / *(pGcd);
}