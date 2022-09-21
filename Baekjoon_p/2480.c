// 같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다. 
// 같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다. 
// 모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.
// 3, 3, 6 -> 1,000 + 3*100 => 상금 1,300
#include <stdio.h>

// 최대값 찾는 함수
int max(int a, int b, int c);

int main()
{
    int d1, d2, d3, prize;
    scanf("%d %d %d", &d1, &d2, &d3);

    prize = 0;

    // 모두 같은 눈
    if (d1 == d2 && d1 == d3 && d2 == d3)
        prize = 10000 + (d1 * 1000);
    // 같은 눈 2개
    else if (d1 == d2 || d1 == d3 || d2 == d3)
    {
        if (d1 == d2)
            prize = 1000 + d1 * 100;
        else if (d1 == d3)
            prize = 1000 + d1 * 100; 
        else
            prize = 1000 + d2 * 100;
    }
    // 모두 다른 눈
    else
        prize = max(d1, d2, d3) * 100;
    
    printf("%d\n", prize);

    return 0;
}

int max(int a, int b, int c)
{
    if (a > b && a > c) 
        return a;
    else if (b > a && b > c) 
        return b;
    else 
        return c;
}