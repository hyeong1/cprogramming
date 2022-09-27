// 이항계수를 계산하는 순환 함수 작성
#include <stdio.h>

int Combination(int n, int k);
//int Factorial(int n);

int main()
{
    int n, k;
    printf("n: ");
    scanf("%d", &n);
    printf("k: ");
    scanf("%d", &k);

    printf("%d\n", Combination(n, k));
    return 0;
}

int Combination(int n, int k)
{
    //return Factorial(n) / (Factorial(n-k) * Factorial(k));
    if (k == 0 || k == n)
        return 1;

    return Combination(n-1, k-1) + Combination(n-1, k);
}

/*
int Factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return (n * Factorial(n-1));
}*/

