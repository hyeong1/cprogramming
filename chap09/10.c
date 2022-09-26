// 1/1 + 1/2 + 1/3 + ... + 1/n 
// 위 수식의 값을 계산하는 순환적인 프로그램 작성
#include <stdio.h>

double Sequence(int n);

int main()
{
    int n;
    scanf("%d", &n);

    printf("%lf\n", Sequence(n));
    return 0;
}

double Sequence(int n)
{
    if (n == 1)
        return 1;
    else 
        return ((1.0 / n) + Sequence(n-1));
}