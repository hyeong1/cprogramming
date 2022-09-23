// 1부터 n까지의 합을 계산하는 문제-순환기법을 이용하여 작성
#include <stdio.h>

int sum(int n);

int main()
{
    int n;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    printf("%d\n", sum(n));

    return 0;
}

int sum(int n)
{
    if (n <= 1) 
        return 1;
    else 
        return (n + sum(n-1));
}