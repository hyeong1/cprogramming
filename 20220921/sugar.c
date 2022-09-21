// 상근이 설탕봉지 문제 다시 풀기
// 5kg, 3kg짜리 봉지 -최대한 적은 봉지수
// 5kg와 3kg로 만들 수 없으면 -1 반환
#include <stdio.h>

int main()
{
    int N, result;
    scanf("%d", &N);

    result = 0;
    // 5kg, 3kg로 N을 만들 수 없는 경우
    if ((N / 5) == 0 && (N / 3) == 0)
    {
        result = -1;
    }
    // 만들 수 있는 경우
    else
    {
        if ((N % 5) % 3 == 0)
            result = (N / 5) + ((N % 5) / 3);
        else
            result = (N / 3);
    }

    printf("%d\n", result);

    return 0;
}