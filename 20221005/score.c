// 크기가 5인 정수형 배열에 사용자에게 5과목 시험점수를 입력받은 후 가장 큰 점수 출력
#include <stdio.h>

int main()
{
    int score[5];
    int goodScore;
    for (int i = 0;i < 5;i++)
        scanf("%d", &score[i]);
    // 가장 큰 점수 출력하기
    for (int i = i;i < 5;i++)
    {
        goodScore = score[0];
        if (goodScore < score[i])
            goodScore = score[i];
    }
    printf("가장 높은 점수: %d\n", goodScore);
    return 0;
}