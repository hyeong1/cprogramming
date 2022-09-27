// 순환호출로 피보나치 수열 계산하기
#include <stdio.h>

int Fib(int n);

int main()
{
    for (int i = 0;i < 10;i++)
        printf("fib(%d) = %d\n", i, Fib(i));
    return 0;
}

int Fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    return Fib(n-2) + Fib(n-1);    
}