// 손익분기점 구하는 문제
#include <stdio.h>

int main()
{
    int fix, variable, price;
    scanf("%d %d %d", &fix, &variable, &price);
    if (variable >= price)
    {
        printf("%d", -1);
        return 0;
    }
    printf("%d", (fix) / (price - variable) + 1);

    return 0;
}