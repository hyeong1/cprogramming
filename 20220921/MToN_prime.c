// m, n 사이의 소수 출력하기
#include <stdio.h>

int main()
{
    int m, n, i, j;
    scanf("%d %d", &m, &n);

    for (i = m;i <= n;i++)
    {
        for (j = 2;j < i;j++)
        {
            if (i % j == 0) 
                break; // 2부터 자기자신 전까지 나눴을 때 나머지가 0이면 중첩for문 나감
        }
        if (j == i) // --> 중첩 반복문 전부 다 돌면 나머지가 0인게 없음 -> 소수 -> 중첩for문에서 j<i, j++ 수행하고 중첩for문 나감
            printf("%d ", j);
    }

    return 0;
}