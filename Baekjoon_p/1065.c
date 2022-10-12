// 1보다 크거나 같고, n보다 작거나 같은 한수의 개수 출력
#include <stdio.h>
#include <math.h>

int main()
{
    int n, check = 99; // 1~99는 한수 -> 굳이 검사안함
    scanf("%d", &n);
    
    // 한수인지 검사 -한수면 check++
    if (n >= 100) // n이 100보다 크거나 같을 경우 한수 검사 수행
    {
        // n은 1000보다 작거나 같으므로 비교할 수는 모두 3자릿수
        for (int i = 100;i <= n;i++)
        {
            if (((i/100) - ((i%100)/10)) == (((i%100)/10) - (i%10)))
                check++;
        }
        printf("%d", check);
    }
    else // n이 100보다 작으면
        printf("%d", n); // n 그대로 출력
    
    return 0;
}