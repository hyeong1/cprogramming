// 이항계수를 계산하는 순환 함수 작성
#include <stdio.h>

int Combination(int n, int k);
int Factorial(int n);

int main()
{
    printf("%d\n", Combination(4, 2));
    return 0;
}

// 조합 계산하는 거 먼저 해보기
int Combination(int n, int k)
{
    //return Factorial(n) / (Factorial(n-k) * Factorial(k));
    if (k == 0 || k == n)
        return 1;

    return Combination(n-1, k-1) + Combination(n-1, k);
}

int Factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return (n * Factorial(n-1));
}

