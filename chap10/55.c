#include <stdio.h>

int main()
{
    int score[5], avg, max, min;
    for (int i = 0;i < 5;i++)
    {
        scanf("%d", &score[i]);
        if (score[i] > 100 || score[i] < 0) // 입력된 점수가 100보다 크거나 0보다 작을 경우
            scanf("%d", &score[i]);   
    }
    // 점수는 0~100 사이만 입력받는다

    for (int i = 0;i < 5;i++)
        printf("%d ", score[i]);
    avg = 0;
    for (int i = 0;i < 5;i++)
        avg += score[i];
    printf("평균 점수: %d\n", avg/5);
    max = score[0];
    min = score[0];
    for (int i = 1;i < 5;i++)
    {
        if (max < score[i])
            max = score[i];
        if (min > score[i])
            min = score[i];
    }
    printf("최고점수: %d\n최저점수: %d\n", max, min);

    return 0;
}