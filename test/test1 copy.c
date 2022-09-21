// 분수문제 배열 안쓰고 풀이
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    i = 1;
    while (n > i)
    {
        n -= i;
        i++;
    }
    if (!(i % 2)) // 짝수번 대각선
        printf("%d/%d\n", n, i+1-n);
    else // 홀수번 대각선
        printf("%d/%d\n", i+1-n, n);

    return 0;
}

