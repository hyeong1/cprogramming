// 훈제오리구이 시작 시각, 조리 시간이 분 단위로 주어졌을 때, 오븐 구이가 끝나는 시각 계산
// 현재 시각, 조리 시간 입력, 종료 시각 출력
#include <stdio.h>

int main()
{
    int startHour, startMin, cookTime;
    printf("현재 시각: ");
    scanf("%d %d", &startHour, &startMin);
    printf("조리 시간: ");
    scanf("%d", &cookTime);

    startMin += cookTime;

    if (startMin >= 60) // 종료 분이 60분이 넘을 때
    {
        startHour++;
        startMin -= 60;
        if (startHour == 24)
            startHour = 0;
        printf("%d %d", startHour, startMin);
    }
    else // 종료 분이 60분이 넘지 않으면 바로 출력
        printf("%d %d", startHour, startMin);

    return 0;
}