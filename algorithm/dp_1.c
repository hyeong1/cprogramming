// 다이나믹 프로그래밍 알고리즘 문제
// 설탕 배달
// 3kg, 5kg 봉지로 배달 -> 봉지 수가 최소가 되도록 배달
// 18kg면 5kg 3개, 3kg 1개 배달 -> 총 4개
#include <stdio.h>

int main()
{
    int delivery;
    int kg5 = 5, kg3 = 3;
    int result = 0;
    scanf("%d", &delivery);

    if (!((delivery % kg5) % kg3))                            // 5로 나눈 나머지가 3으로 나눠지면 예:18 (3kg*6 또는 5kg*3 + 3kg*1)
        result = (delivery / kg5) + ((delivery % kg5) / kg3); // 5로 나눈 몫 + 5로 나눈 나머지를 3으로 나눈 몫이 전체 봉지 개수
    else                                                      // 예: 21
        result = delivery / kg3;

    printf("%d\n", result);
    return 0;
}